class SpecialQueue:
	
	def __init__(self, maxQueueSize):
		# implement using list
		self.items = []
		self.maxQueueSize = maxQueueSize
		self.itemCount = 0
		self.itemsIndexWithPermanentFlag = []
		self.sampleList = []
		self.importantIndex = 0
		self.updatedSampleListIndexInOriginalList = []

	def put(self, item, permanent = False):
		
		self.itemCount += 1
		if permanent == False:
			if len(self.items) == self.maxQueueSize:
				# Check if the last element in the queue has permanent flag
				# If yes, check the one before it until the beginning of queue
				while self.itemCount > 2:
					if self.itemsIndexWithPermanentFlag.count(self.itemCount - 2) == 0:
						self.items.pop(self.itemCount - 2)
						self.importantIndex = self.itemCount - 2 # 3
						# After popping, index for the permanent items need be updated
						# It will only help second request from question 2 sample(n)
						for x in range(0,len(self.itemsIndexWithPermanentFlag)):
							if self.itemsIndexWithPermanentFlag[x] > self.importantIndex:
								self.itemsIndexWithPermanentFlag[x] -= 1
						break
					self.itemCount -= 1
			self.items.append(item)
		else:
			if len(self.items) == self.maxQueueSize:
				while self.itemCount > 2:
					if self.itemsIndexWithPermanentFlag.count(self.itemCount - 2) == 0:
						self.items.pop(self.itemCount - 2)
						self.importantIndex = self.itemCount - 2
						# After popping, index for the permanent items need be updated
						# It will only help second request from question 2 sample(n)
						# TODO
						break
					self.itemCount -= 1
			self.items.append(item)

			# Store the index for data with permanent flag true
			self.itemsIndexWithPermanentFlag.append(self.itemCount - 1) # 0 index
			# insert() takes O(n)
			#self.items.append(item) # append takes amortized O(1)

	def sample(self, n, startindex):
		# Assume we select continuous section of items, because if we want
		# choosing items in scatter, we could easily choose none permanent items.
		# I believe user needs to provide start index for sampling
		self.sampleList = self.items.copy() # shallow copy
		for element in range(0,startindex):
			self.sampleList.pop(0)
		for element in range(n, len(self.sampleList)):
			self.sampleList.pop(n)
		
		for x in range(startindex,startindex + n):
			self.updatedSampleListIndexInOriginalList.append(x)

		# Remove non permanent items from original queue
		for x in range(0,len(self.updatedSampleListIndexInOriginalList)):
			if self.itemsIndexWithPermanentFlag.count(self.updatedSampleListIndexInOriginalList[x]) == 0:
				self.items.pop(self.updatedSampleListIndexInOriginalList[x])
		return self.sampleList

	def full(self):
		if len(self.items) == self.maxQueueSize:
			print("The queue is full...")

	def printSpecialQueue(self):
		#for items in self.items:
			#print (items)
		pass
		#return self.items

q = SpecialQueue(7)
q.put(1, False)
q.put(2, False)
q.put(3, True)
q.put(4, False)
q.put(5, True)
q.put(6, False)
q.full()
q.put(7, True)
#q.full()
q.put(8, False)

q.sample(4, 2)
q.full()
q.printSpecialQueue()