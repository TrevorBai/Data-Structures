#include "stdafx.h"
#include "CppUnitTest.h"
#include "../HelloWorld/checkBracketsMatch.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace checkBracketsMatch;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[]");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod2)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("()");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod3)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{}");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod4)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{}[]");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod5)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{}()");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod6)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[]()");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod7)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[][]");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod8)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[()]");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod9)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("(())");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod10)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{{}}");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod11)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{}[]{}");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod12)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{[]}()");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod13)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[{{}}]");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod14)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{");
			Assert::AreEqual("1", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod15)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("}");
			Assert::AreEqual("1", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod16)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[");
			Assert::AreEqual("1", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod17)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("]");
			Assert::AreEqual("1", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod18)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("(");
			Assert::AreEqual("1", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod19)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults(")");
			Assert::AreEqual("1", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod20)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("}()");
			Assert::AreEqual("1", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod21)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{[}");
			Assert::AreEqual("3", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod22)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[(]");
			Assert::AreEqual("3", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod23)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("(){[}");
			Assert::AreEqual("5", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod24)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{}{}]");
			Assert::AreEqual("5", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod25)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[]({)");
			Assert::AreEqual("5", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod26)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[](()");
			Assert::AreEqual("3", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod27)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("(({})");
			Assert::AreEqual("1", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod28)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("({})}");
			Assert::AreEqual("5", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod29)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[{}]{");
			Assert::AreEqual("5", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod30)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("()[{}])");
			Assert::AreEqual("7", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod31)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[[]}]{}");
			Assert::AreEqual("4", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod32)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("({()(})");
			Assert::AreEqual("6", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod33)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[]](");
			Assert::AreEqual("3", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod34)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{[}]");
			Assert::AreEqual("3", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod35)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[}]]");
			Assert::AreEqual("2", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod36)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("][]]");
			Assert::AreEqual("1", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod37)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{[])");
			Assert::AreEqual("4", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod38)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("(}{}");
			Assert::AreEqual("2", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod39)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("({(}");
			Assert::AreEqual("4", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod40)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[({])}");
			Assert::AreEqual("4", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod41)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("ablabla)ihihi(ohoho");
			Assert::AreEqual("8", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod42)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[very(strong]test)");
			Assert::AreEqual("13", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod43)
		{
			Balanced balanced;
			// indentation doesn't matter if using "" to split long string
			std::string outputResultsInString = balanced.outputResults("({})[()](){}[]{}{[{}]}{}(())([]){[]}()"
				                 "(())[]{}{}[][]{}[][{}]{}(){}[](({})){}()[{[{}]}]([])[](){}()[()]{}[]()()[][]"
			                     "{}[()]()[]()(){}[]{}[][]{}()()[](){}{}()[]{}()()()[]{}()()(){}[]()(())([])()"
				                 "[][]()([])[]{}{[]}[]()()({})[{}](())(){()}{()}{[]}{}()[()][]()()[]({})[]{}{}"
				                 "(){}()()[]()[]{{}}{}[][][]()[{}][]{}[]()[][]()[()]([{}])[[()]]{()}{}({{}})()"
				                 "(()){}(){}(){}([])(){()}{}[][]([()])[]{}{[]}[][](()){}([[]])({})(){}[](){[]}"
				                 "[](){}{()}[]{}{[]}[]{[()]}[{}][{}]{({})}()(())()[([])]({}){}{()}{([])}({()})"
			                     "{{{[]}}}[{}](){}{}(){}()[]([])(){}()[](){}()[][][](())[][(())]([]){[]}([()])"
			                     "{}[](){}(){()}{}[][](){}()({})({})(){{[]}}[{}]{}[{}][]({})[[()]]{}{[]}{}[]{["
                                 "]}{{}}()(){()}{}[][[]][][{[{}]}]{[]}()()([{}]){}[]([{}])[][]([]){}[{}][]()()"
			                     "{}{()}()([])[()]{}[][{{[]}}]{()}(){}()({})[]{[(())]}[]{}[({[]})][[]]{}(){()}"
				                 "()(()){}[]{[]}[][]{}{}[](){}{}[]()[][]{}{}(){[]}(){}()[[]]{}(){([])}{[{}]}()"
				                 "[()][][]({}){}[][]{[]}(){[]}{{}}{}{}{}[{}]{}([]){}{}()()[()][{}][]({[]})[]()"
				                 "[]()()()[][]({[]})([])([])[](())()[{{}}]{}()[[]]()()[]{}[]{}{}[][][](()){}{}"
			                     "{}[]{}{}({}){{}}(([]))[]()(){}{()}[([])](){}{()}[]()()[]()[](){}{[]}[]{}{}[]"
				                 "()()[]()[]{}(){}()()[](({}))[]()[]()()([{}])()(([]))()[[]][]{}[](){}[{}]{}[("
				                 "[])]{}([])(){()}(){}(){{}}{}{}[][][{}](){()}()([[]]){()}[][[]][[{}]]{{}}[{}]"
			                     "{}{}(){()}()(){[]}()[[]]{[()]}[]{}()[]({})[](){}[]()()[[]][[]]()()()()()()[]"
			                     "{}[]({})[](){{}}{}[]()[]{}{{}}[]{}({}){}({()})[]{{}}{()}{}{}[{}](){}([])()()"
				                 "[]{}[]{}[]{}[]({{}})([]){}[()]()[][](){}()[]()()()([]){()}()([]){}()[()]{}()"
				                 "[][]()(())[]{{}}{}[][]()[]()()[]{}[][[]]()[][[]][][][[]][][]{}[]{(())}()[]()"
			                     "{[]}()[{}]{}{}()[]{}()()()[][][][][][]({})[][]()[]{()}{}[][](){}[]{}{}[{(())"
		                         "}]{}{[{[]}]}[{()}](){[[]]}[[]]{{}}{([])}[{[]}]()({()})[]()({[]})()[[[]]]{{}}"
				                 "[(())][[({[]})]]{{[]}}{[[[]]]}{()}{{}}[()]{}{()}[]{}{}(){}()[[]]{{}}[{}][]{("
				                 "[])}[()](){}[[]]{}{[[]]}(({}))[][([])]{}[][]{{}}[[{}]]{{{}}}{{[]}}(())[]{()}"
				                 "()[][()]({}){}[{}]()[](())[](){}[{}]{}(){{()}}{}()[][()][[()]]{}(){}[{}]()(("
			                     "))()[{()}]{}([{}])()[]({})()(())[](){()}{}[]()([])[{}]{}[{}]()");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}
		
		TEST_METHOD(TestMethod44)
		{
			Balanced balanced;
			// indentation DOES matter if using \ to split long string
			std::string outputResultsInString = balanced.outputResults("{{[[{{(({{{()}}}))}}]]}}[{[{{}}]}]([([\
{{[{[{[{(({{({({{{[[[{[[[{[[{[[{{[[{([({[([({[{[((([[{[[{({(([(({({[{[[{[({{[([[(({{[[{[([({([([[(\
[{[[[{{{{[({([({{{[([({{[[(({(([({[[([{(([[{([[{({{{[[([{{[{{({{(([{[([[{[[([[([[([[{({{[{({((([([\
{{[{{({{[[([[((((({((([{[{[({([{[{([{([{([[[[(({{{[[[([({[({{[[({[({{[((((({{([[{[((((({[{{{([([{[\
[(([({[[[[({{([([{[{{{({{{({{{({({[{(([{(([(([[[(({({([(([{({{{((([((([[{{(([({([{((((([[[(({([[({\
({[(({{[({[[{({{[(({[([[{([{({([[[([[[[((({([[[([{(([({[[{([{{[{[{([({{(([(({[[({[{([{[{[({[[({{{{\
[{((({})))}]}}}})]]})]}]}])}]})]]}))]))}})])}]}]}}])}]]})]))}])]]])})))]]]])]]])})}])}]])]}))]}})}\
]]})]}}))]})})]])}))]]])))))}])})]))}}]])))])))}}})}]))])})}))]]]))]))}]))}]})})}}})}}})}}}]}])])}\
})]]]]})]))]]}])])}}}]})))))]}]])}})))))]}})]})]]}})]})])]]]}}}))]]]])}])}])}]}])})]}]}])))})))))]\
])]]}})}}]}}])])))})}]}})}]])]])]])]]}]])]}]))}})}}]}}])]]}}})}]])}]]))}])]]})]))}))]]}})])]}}})])\
})]}}}}]]]}])]])])})])]}]]}}))]])]}})]}]]}]})}))]))})}]]}]])))]}]})])]})])}]]}}]]}]]}]]]}]]]}}})})\
}}))}]}]}]}}])])[[[]]](){{{[((([({(([{[{{[[{[{{[([({{{[{([[{[{(((({{{({({[[[[{{{({{{[[{({{[[{[[[[(\
{([([[(({{[[({[{[([{[[{[{{[{{[([{{([[[[(({[[{({(([([[{[(([({})]))]}]])]))})}]]}))]]]])}}])]}}]}}]}\
]]}])]}]})]]}}))]])])})]]]]}]]}})}]]}}})}}}]]]]})})}}}))))}]}]])}]}}})])]}}]}]]}}]}]))})])))]}}}{(\
{{[({})]}})}{[{[[{({{[[()]]}})}]]}]}{()}([{[]}]){}{}(){{}}{{}}[][][][()][]{}[]()[]{}(([((([({[({({\
})})]})])))]))[]{([{(({{{{[[[{{([[]])}}]]]}}}}))}])}[[[]]]{}[{{{(())}}}][]()[][([[{[([[{({[([[{([{\
[{[([{{([([{(([{{[[[[[(((((({[{{([{{{{({{{[[((({[([[[{([[{[{{(({[[[({[(({[[{(([[{{[{}]}}]]))}]]}))\
]})]]]}))}}]}]])}]]])]})))]]}}})}}}}])}}]}))))))]]]]]}}]))}])])}}])]}]}])}]])]})}]])]}]])][({[[([[\
[{{{([[[{[([([[{(((([(([[[()]]]))]))))}]])])]}]]])}}}]]])]]})]{}([[([{{[{{{()}}}]}}])]])[{}]([[]])\
{}{}{((((([{{}}])))))}[[]][{[()]}][{([([{{{[{}]}}}])])}]([[[()]]]){}()[()][]{}{}[{}]()[{}][](())((\
[[[]]]))(){}((([]))){}([])(){}(){}(){}[{(())}]()()[]{{}}{[([{}])]}{}[](){}{(())}[[({})]]()[{}][]((\
))");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod45)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("(([({{((({([[({{((((({(({{[[({([{[({[{\
({{[[[[({{(([([({({({([([[[[{{{[{({[{({([{{{[([{{{{({[(([{{({[(({(([(({[[([{[[(([({[{([(([[{([[{{(\
[[{[({[([{[[({[[((([({[[[([({[{({([{{{(({[({{((({[{[[{[{{[{([{{[([{(({(({{{({{[([{{{{({{({[({[{({{\
{{({{[{[{(({[({[{({([([{[{({{[([{[(({{[{({((({([({{[[[({{[[[[[([[[([[[{[[{{[([[{[([{{{({{[{[{({[({\
[([{[{[{{[({({{([{([([[[[[{({{[({(([[[({[{[{[{({[{((([(({{[{([[({{({([(({{[{{(([{[{((((((((([{{([(\
{[([{({([{{({{[{{[{(([[{(({{([([{[[{([{[({[{({[({[[[(({([[(({{[[{[[(({(({{{[{[[[[[[{[{{{{[(([([{[[\
{{[[([[(([[[{{([(([{(({{{{[[(([[[{{[([[{(({(([({{[[[([({[{{[[[(([{([(({[((([[([(({{{[{(([[{{{[([((\
[[({[[[({[((([[({{({{{[(({(([[([([([[([([{[[[[[(([[(({{(((([[({{{({{({([([{{[[[({([{[[([{([({{[[[{\
{([{[{({({[{((([{{(([[[{[({{({([{[{({(({(((((([({{{{[{({[{[{[{{({{{[[(([[([{([[((({{({(((([{[{{[{{\
({[[({[[[[[{{{((({{([{([{(([{(({[[({[[[({{[([{{([([{({{[({{[[[{([([[({({[[[[[{{({{[{{[{[[[[{([(([(\
{(({{[({[[({([{([{(((({[(((([{([{{({{[({{[(({[(({[((([[[(([{{((([{([({{{((([({(())})])))}}})])}]))\
)}}]))]]])))]}))]}))]}})]}})}}])}]))))]}))))}])}])})]]})]}}))})]))])}]]]]}]}}]}})}}]]]]]})})]])])}\
]]]}})]}})}])])}}])]}})]]]})]]}))}]))}])}])}})))}}}]]]]]})]]})}}]}}]}]))))})}})))]])}])]]))]]}}})}\
}]}]}]})}]}}}})]))))))}))})}]}])})}})]}]]]))}}])))}]})})}]}])}}]]]}})])}])]]}])})]]]}}])])})}})}}}\
)]]))))}}))]]))]]]]]}])])]])])])]]))}))]}}})}})]])))]})]]]})]]))])]}}}]]))}]}}}))])]])))]}))])}]))\
]]]}}]})])]]]}})]))}))}]])]}}]]]))]]}}}}))}]))])}}]]]))]])]]}}]]}])]))]}}}}]}]]]]]]}]}}}))}))]]}]]\
}}))]])}))]]]})]})}]})]}])}]]}])])}}))}]]))}]}}]}})}}])})}])]})])}}])))))))))}]}]))}}]}}))])})}})]\
])}]}}))])))}]})}]}]}]})]]]))})]}})}]]]]])])}])}})})]}}]}]}])]})]})}]}]}})}}}])]}]])]}}]]}]]])]]])\
]]]]]}})]]]}})])})))})}]}}))]}])]}})}]}])])})}]})]}))}]}]}})}}}})}]})]})}})}}}}])]}})}}}))}))}])]}\
}])}]}}]}]]}]})))}})]}))}}}])})}]})])]]]})])))]]})]]}])]})]}]])}}]])}]]))])}]})]))]]}])]]}))]))}))\
]})}}]))]})}}}}])]}}}])})}]})}]}}}]]]])])})})})])]))}})]]]]}})}]})]}])})]]}}))})))))}})]])})))}})]\
))");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod46)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("X{89}{w}(gy)b?r(;)[CS[e]Ko]5{eMi}[n(;);\
J](o)ls{}a(5NW(RA)m)BA.[][N(V()ka)1x]()()BS{w.}r[?j(7F)Zw](v)G;[B[U]L][]{Y}d([ud])I[Z];(V)[7I(w(W)l\
F)Q]L{U(B)g}{b}o(M)B[P.]?{wm(OA20)}()(1)(;j{u}v)k[7nX.]En(pC{X})wK[x()E]Mh(Y)[f]()b[[];:][]A:({7})r\
[:]3wU[olDn]MB1{}ch[]{PZ([o])}4s{{ivH}}M4[[CM;]IZ][][]af[{}]y{8K}E[Giq[slK]Jwi]{}h{;1I}i(n)[F](fo)8\
O(cn())[ri]M(9[n]dAV2)[P.D[j]!][][]d{[]}Hk[{b6}hRwi]()BC{l}4()T()nU([!r]C?)GI{S}x()9G[eY4MH,U]G(k8[\
,T{kU}f]yV){7p{R}}l:(x4){}((F);y)?{j}{t}g{R}Ca{}p{(dN)8R}Sfa[?]e[0]()v{9}([,])Da(3)x{fw[15]},N[[{D[\
K]9}]b?]?Zf()()U{o{3[()]Nl}J}Wx()BB[{[S]z}]J(yZ0q)x[dq[([])]q]p[[]T]7TE(U[V])bSxd(!Q)I(e8:[H(3)KDo]\
p){f[u]k}UBe{}(9i(T[S0a])C:).F[:EM[:[SM]a?;]]qI[Q()u]y{}(.()I)L(4)dSB(r){7[]}[[];L][](SP(6d)f)g{.}W\
()b{3eU}[]6{9}7(J)()(A)mr[p](){()E},()VS(){!U}IA!?{}F7(Z){}[3]{L{m}e72}2u(R()){}4i[rDo],p[2][H6]t.(\
(D))[]uJ[{}t]RV(4{aNqn}q)[7X],q9(0){}F{i}{K}f(a()y){J{0.}WL}6[]Y{O}mHG{{3}86u}h(N{(I)}){}v(Fr)XyEct\
[;[oL]0]Dp{Xj3}L[][0dH7]g[B(Y;)BOm:]b{}Q{}{y}t(L)z{SG}{{8}}U{h}E[i[]r]{{}}n[D{sJ}:9H]g[]{r}v{bn}j?(\
[]wa){U}e[6]0()Rx[2]C{Ua}!(i)XM[]1;[C!]()q(c2{J{H}s}eQh)1is{sb[o{8}O]H}h{k}[(X)]e{h{V}5}(R)K[]U[H[(\
B8)x]?]ly{(1()F)}Tp[f([N]U:)][hN4]{D}b{},p(zG{L}e)h(b(9f))()zy{YQ}?M[kq]U2[z9]i(H)Z[]gQ{r}Ik{}fX[k]\
(Yo{O}xN)7k{e}(rS(Uq))([cx])([[]V]H)Rc{(1SZ).l}[[]4e]V{s,{z}}r((o)1f!)xUL()o[t[]]W{(v)jS}o[(1{})Y]g\
[y]{Qj{}3}7{HH}mK{n}{f}5(t)YB[](C){e}0[{4}]{?}vU{3{Y{U}xX}}LC[y()](y())3i(bPR[6]0)[5](y1Q)p[?][[J]E\
y]ZH{S}U(z)Z{qx{VS1{Lz}Yyvy}A}(h)[P]H(oC{})q{};Iq[7]k(7c[F{Bv}Z]?)tG{1G(x)}R(5{D}8)tG{!}P[1]J(hy)0d\
{r}Z({Wqs};X){}H{S}(L)U(r{K}o6){}D()4?[]H[](![19w]HZ)Z[m][A]2{bDE[J.]uk}[]A[v[]]aJ{}T1[]{3k.[h{?}G]\
}v{r(.())}(;[tF[JE]])[({}L)4Z]e[K]p{S}J{JMV9{e}x}2()5()h(8){MY[]R;}3[]{o}()b(Px){9}R(A)Ui[]v{J()}{P\
Ph}wC(Wm{Z[s(Y)Of]u}Yg)Q[]{8[j{ux}7];9}B[rup[(YWe)]i0f]CP(ex){}yS(CY)LJ{P[h]f}dD[(q[]z)]3()o[]1[4K(\
)]S{}()3(){{cVa{{j4G}T}aM}0b}[]J(Og)y{h}{5[{60m}]w}mK[p]{}K[usi9(k)B]Ds[]{Ra};{8Q}4{}9m,([])G{;}({S\
})[7B]L{G}mZ(i())M![]v[u]z(PE5IZ()hw)w()p[JwJ]{[]}((r))H([w[]])k{}T[6.k]{(A)C}XV");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod47)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("7[G(J0((Ke{{[{Q[J{O({5{(O{B[(;{ob[v,{IY[\
,x[(5{w{{jT{0(1[M7F{.(aT{[]u}Bm)ze}dI]l4):}p}}R}),]]S}f]W}4)l:];});}}O)}8]}S]I}}M2)LF)C)]:[jS[:{x[(a\
(x{[0(d([o[{,(gA(((AuE[8{sl[3{{:[u(Q[([Nx[0vqf(pj2{e!{a(WC{;Zb({G((y{j({v[7(o(I?{cth[6I[(6tk{[qu{[g[\
X{XR{1[(9Hl(g(E(q{z[({({5({QE{o(((n[V{J([,OYY{:m{z(Z{e(yGk(Yh[{{WMb(D(k{s[?{Gr[{.([pt{?E(D[i[{H{[d{4\
[{1e[{{{[(cC[{s[tc[oRQ{X26{o[[8[z(YQ[[oX9{1h[({(R[[:a7(Y((3T{(B[p;d(J,[({(3T[qU5[Dg[{U[?G(S{Q(v[W([D\
8({wM[8([X(D(e[A[dt{3K{[qP{A[{(h[:(!g(5J(N:x![MS5(H(({[V{I(!{y.,{w{[U{,JR[aWqu[([(A(3{{Zk:{(X7{g{U{(\
{v(2{(b{cy(3W[v{2(a?7R(a{eJ{jsS(i(R[ZU(gk{{e[0{p([rK{DLB[(z{Kv{s{(Q[c{lI{w[a(e[o([w(bD7(m[L{Q[(a(o(d\
uV[{:{s[t{[bS[{z}B]z],q}KTh]};}]H!)y)FU)]}]s3)re)]R)])N]}!}j])r}}.}y)o]u}w]vIu)!}ouA]e}})c]))E8}E}))\
y}es]kF)m4})K,u}Q)})}b}}j)z77}T}}M)S)9]q4)b]]r}Y]j}}})}]UV})7)w3)]nH)H))]M)C}]S}]k}a}]z]))]q)]}AS)])\
])}K)N]}]S]a])}I);C])e2])G}3)IU)k)4]w]p)z9});]}Zh]Is])I]8W9]k,]}G}]qJE]p}k7])]}X.}}dU]:v}1]F!}s]}Q}V\
]9T]ncX)9,}GW,])raZ}]V};]x}9)PI)J}n}]y)U)W}2)K3W}Ox}X]t)i}i2]gD))z)M}}it!)}5)}O)]G}))4))]ILw}}]]a}]S\
})XG]5r]}V))kNBR]})4}))}l)}sp)8}ZE}iRL0)B]]:)fu])]}Vnl}M]V4}UqYA]d7)b)N)MS)}S]k]s)N)]bb}u)4n)J]}]w4]\
i[a]p[8t[{[{s([z(P[Y[D[C[(E[qw{()rp}])]8O]i]]W;G)F])5}rn]B}]]yLX(T4{G{{V3([?ClS[Ha[3(b[[(jr(n({[({;[\
V:(4[7{{{SU{B[S{Vj[{;[{Y8(e(h(,9{GM{L[[m(h(y{,G[cs[c((([RJ{Z(7K[(a[0(:PS![{M{8(S{(U[W9n{1([[t2({{Ck{\
77[({R{N{BU(2[z{gQ(i{z[[0CG((ogd[[a((Zx{{a0{{g([Ei{[or[(od[X[p{(2{0{[rh[gZ(J{{xJ{{(Z(a{4,{r([(f{FN0[\
{N3.(S{F{.{1C([t.{B{(O{((5[b((j{u([{{d(8[TY([E[[{9,f(M([nu[hD{[{{oW92j(fY([r{E{Q(W6{Ox[s8[(8{E{G{{c;\
i([HG{U{{[(j[Tr:{d8u{([{[[{E7{vmA}}4O]]}]zy)}g}6S])Zsi]}:}}])}}b}Opd}mal0W)r]I]}a)e}cS}fmDz]P))W}j}]\
W}9]E]T)r)}]FrVS]]W)])kx}}0].),}nk))]);)H9}qw)Jq}P}]RG)5}}}f)U}Z1W]r}U)V])8m}2Y})3)}?}}9})q]]Ly:}I}M\
)h}9]WQ30]7F)]M3]35e}L]v)Y}}}k})X)vf]]15xh)F)]]}7)k}]2)Ph3FR}k}}s)]}Mi}}G)]])mU}]7)nA})l}w}h]uJ)])]C\
k)p}ppvA])E5)s):]]})m)L]]X}M}r)4)g):}]?}2u]}]H}4A}X}}]L)]L}re)8]}xq)u))o]:q]YeE)x]]m])F};Z}7;}:)w([:\
6(2(wem([(X{u[vj[d2{[Y{g{c[]c7}}!N:]s}]WqV]}m)]IhT))V)R?:])M");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod48)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("c{v[[c({og(J3([[Mr[3[([(Jz(AT{[5{cNS[([\
(c({Az[{G{O9c[({D(6[s[r.[({(1(N[b8E{[{Y{;[PX2(jl{{s(p[{W6[w{[U[s67[(?V[sT[{9I[{[({{9((?[8rO[D4[Q[cW\
[{(({([mN{Q(h{F;[E{J{{{pd{qI[F[fX(k(({RO{j4{4{[3{d[J{9[f9(J{9W{ud[HF({Lz([Q{VN{z[G[!{{X[[!9[[N[({NH\
{b{[8F[tv((n[f[dBY[p{g[{(c{5jx7[XW{{v[{iT[R{(S{0{{GE[3K(.l(l{NN[l{[{{([{VI1(sGl(z[Vfu{Nba[(l[[k2[!(\
(W(u{D({IZ3((S6(:k{oz1(7{[[(I{[j[(l{Z{({n(wN{(anx(j(N5({M[;Nb{{cw6{1r{Ft[!(C[FF{.{7({{?[H6{sIS{r[o[\
(x(y[QaAO{[{A42({j(6s[Z{r[8q[[,NX([W(Qd{Q{Y[(S[ZXA{ft{HTj({.(H{c((fD2{[S{z88[Pl{O(WY({w(N(X(b[{(Bd(\
a(DH(X8c[o{12X{W[X[6T(5Y[F{g[u{((ts4{{{{a[[oY;(7v([(p{h0v5{{(U[9(k(w((A(z[[R[ukn({[((jL{i(b{6Hr[c6:\
(6(0[[k({f.{{7!([jD{Kd[i{(F[({{e([[{{4(?ryK[g;(iY({G6h{tp{hl.(38F(tzD(eVn(A(V{1Fq(KO7[1[4[c4([[{?(3\
:[.[DU{R[O(hV{[(1{9[{2A0{Q{Y{Gvq(.q(([(w[{k(,Gi[lGlw{0V4XI{([d[[Y{(E[Z(5C{[A[B[[p(w[Gl{{(t({([H[(rr\
{X(0Sj(i2[L(d:{YS(Pd[!(z{t(R{;(Y[[[[F[{aZ5{{F[{0[[4rKJ[IC[{{MV(t(T(j{JtM(sX(A((a[io(lv{([w[C[Wd[G{Y\
Q({[(g([v[y{G{J[t{[P([[[t{{(pj{{{S(Z(6{yg[{{(J{{{:eh(((x(qz[[{y{[7![N((([DquG(Y299[V((b{vdi({}WU)})\
M)Lp9])]?J2)iDe))5]]}XH}M]J]3l)e)))xh}}qCf}TT)}5}C]7}C))t}jUg},})x}}x]]bW]!Rs)]Fm}]}z}]]))]}0J)u}fQ\
:H]N]]q].)B})4z])y)zp)s)O}7)Y)u)P}5}p.]kX]h],]BdS}]l}}dFN}]]]s]]A)v}l)o}X?)]pv)}2)!]X)m)t})]M:]s)})\
1)}}D5])xD]ws]]y7]1x}u)q]G)e}o.]67]])}b}]:99)}I]55z)G]V))S6)g}}S}dju}w!B]X}o2)]}T)]q}4z]lD])};]m];)\
]]H])Q2}R.))k))Jx)L}jSkL}}y,)lE)])}}Acg]]A9)Cz}u})0]0)C}wW]jY}]Dqt)}}Ag}v)]]fb)d)L]p}x)F}c8))]8,})]\
]]bs))o1)5)M)]5)T};}}AI)W]h))]]o}}.vO}U}k))}V]7}]),]H]gx}}M]A8B)U)y))M}]0))AF)B})3Zb)Ty}:4R]}e]p}))\
Xv};).})?}}8])wz]}b})]tO)]]F]y}9])})K}LI]}]Z)8)]M]}}.N]}R9}:)}U};]bogf)!]f}V}k}}T]0})R)))})m!})}Q6}\
3v)g]f]1})1i]a0F4]:})Oo}v))SR)9Hi}74)}0)W)Yi)5]]A])]wL45}]D)3V)W}?])h8}}]O}]}))]N}7}ob}J)P}]}J]xl}s\
}qWf]!kX})}gO]U}]]Ww]5)B)]7]}}Mb}!)]]e2]]]m}}!],]Mg}l}TY]U)}cA)8GPn]p?}}0)6]9}]1}]1}}7}f})F))]g]}mP\
H}z9VL}WPrE}Ub}J]}D6y)}]F)}J8W)n;g)W}Vz]]cB0]]:!]9)MLs)yMh}W})S]:}]oH}]])m]J]3]}B3]}As]H)e}})]}ACwK\
}]}s]8f)wV)NZ}f)]]])}c)w,]o}G}]}2X)Hjcmpu)])k]}]Ch})l)!P])]]i]]w)Y)N:})]lc]l4}cM");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod49)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("[xZ9k(e)]4[]tx[.hBa]?4{w}3[][kX]ct{}P[h\
]({(uI)hk2}np)T[ay[]FO].l[ts]:d[T][]l(p){a}g{}Ct0{}{}79(G[YRjB[]]h)[]Vpf{}{}Z{}JmV[m]J{s}Z0oxk(D)HB\
(JlPs(ScV3)o6AL){}Z[(j6Y(o)S)][h]({,})sG[H[]]nx[9Vc{0}lk]3(w;s)![7lI](W{n});[s]Dc(A)Rz{[]}C(q)R[]z[\
][S[W]z]()[]{S()tY}[]j{}r[][Vf[]]g{Y}{GT}V{N[WC(.)c]eu}yu(N{C[9c]}2k)q((O)W)jn(I.)NN[r{9WL}jqd]f[HD\
]{2()}[k]os(!!)Q6{}()t[F]()!6[:]8[NZ{}U]JKM{}Om()ax[,]W{}{F[]G}M6[D:]T[]Wd[j][]R{yV().}(d)()j(M)[J]\
(7),(?()s2sE)y{[n{}F]a}B{}F[yY{6(7)}W]w()t(d)(u)[X[b]7][Eg](25I(x)h)fJM[l]Z[(Q2)X][Ks]{}R[e{Su}s]!(\
6)h{}aoih[8T][6][5]?{(?(Xo)):}g()G{B{.}8[f(ut()rv)J[n();]C{g5}{}r!l({BK})3[5(;f,P):p]F[Z](1(,g{});)\
RJ(U)F[Nw]{}vc[lJ]Ly[MVN][U]Wq({T{1}}){}{{Z}}()r{P(b1)s}[NET]{Nv[s3]C}[]W{F}3(7)v[][oI]1[k{3}u1hw]3\
i(){}J(QjF(1)F)[h{r}B]d{Ul}a(())9{inr}()D(;e)(R())q{A}{}ms[]j()u{}9[nR][!]Zt{PV}5J(b)7{(l:)}T(){BL}\
x()H{}(U)x{}Y![]Z[t]f[BDEo()9]W{n}T{}{BE[]}q[d2{[I]}jR]1v{PLE!}xlH(O)r{W}p(Zx[O{FF}Wk]q){D{Wp}}[Mp]\
v({}){}(j){S}u{ZzF}{i}.Q(g)y()A[G]iJ{}(F{]LIs})k8(y)Y0[,Oy[{}]49],t[yT[m]0][;](Ywa)(:1){K}{[ny[]z}[\
Tc{F}](0({}Gm)j)c{(du)s4}(x)L[K4]5K(;qo)[!]{s5:}qm{Xlu8}{ii{S}}Z[]w9[({})CF(D{}:)C[D{}],IQR{((L)u),\
}Q[{E.}]H4E(!{[3l]H})pT4[{(x2D)}AO]L[!jG]{{}nf}[]E{}uPj(ot()Z){,{:[]}.}(g(i)Q)()bG()[](4){}[F{gvDz}\
]J1{ol}P[0[Q]]R()fo{}O{0()}3z[P?]o(J4)G{0}.[l];{E}59X{}u(g4c)fT{g;}()C[!]U[{hOF}Vh]{MoV}Ht()[P{}DG]\
aa{d}YgWms(Q5)dk[{5g}]3[1XE]q(RG()8n)a[u;],ALC()Q[]p{u}[]Is[]F[3k][y]9{}{Ag}[(P)]{,{p}w}K(8I)b()HLo\
[]yv[R]bC{Iq{xfI}Ep}![kE]9([6N]W){d[rZ()zhn]W}osu4[{hg?}j]wQ(Le[]Y)?[x]N{}{w}I[]9[]0K(6)(,MY)O({}U)\
A({}){}o{fC}0[nm]e{I}(2du[])(rp7)z{G}CqA{}f1{}(6f){p[gw[j]C]v}D[i(m)xX]{(Gc)Ox:}{Q}[o]()9U{}7{P}Oi(\
be)[H]Bh(U)a[o[V[]]Vis]b3{gT}vg{K[0t8]JhW}o([A]1)s{K};[][t][E]V{nA}[{u}]i[H]u{J}({}0ZJ).Gc{}IH{}G{}\
r[V[h7]f]Z9Q(N8)M!{}{q6[].}(;(a5)E)[v:]{ir}(R)25{ud()R};N[(x)g]TS[t[X]E]Az{[],t}([.j]R1){(F)w}Un1[0\
](4{O})ql{0}[][]FU{nJ}[].{}{}U[[O]M!I]Hk()Bi{8}{r[]2K}()t()q2n{()G}Ytx{()}GH{T}{}!!R[]c{K}[q(yz)cK]\
{}[E]{A}J(L3h)8{}[L][6I3]T()x:([W])XHC{z}(6q)[6R][UlA:]({;6})(,[g]l)[??{5x}]HTeP");
			Assert::AreEqual("972", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod50)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{y9{q(([!j[(T{a[CZ[[M[({ZAA[\
6([g(B]{(3(9{J8y{[x(n(ur(H{J[{(g[e{LPFM(K[!9([iq[:[0L(XX{p{;[(s{O[{[{{({:N]b{[:{({w2(7({K{{{Y{(({{(U\
0XKr{jz[[q4W(v(((S{EE(([J[lUSi({[9atHv[Avt{.(7{4z[qc{({{(,[gEE({9{O(s[(([[!(n{SUr4[79(x{([(4{L,{y(Pv\
u{[[4z[(aP{![l[]L]}j)]Mk]]}?)}t}k9J)9]V)u})]}0)]3]EQ)u)H:]E).}}])33])m?F}c})u}]QC}1)}b]:}ZeH)M]]))y?\
g})C)R4)z)e]]n}D)q}?})EA)}}}}kg}))M})}v]d}}0)H}u}za],}k]}ik)]YT}9}G)]lu].I]6)z])}AA7]G)}Jv]2V}MNq))n\
v)]6pU3}t};4t))x}8F)Lq]y)]y8}kT)qG]c]bL]]j0}H)]]l))lc}E}{:[(n)E]x3}{{2[Ge?([]2)9T]}}chMq[!l[[1{[F[Bw\
([PV[j2z(k{Km{{sO{:[V({k[cU(;,W{({(((uV()c.s)))}q)}L)K.]})]F}B}w}iD})B]FC!f]K)]3v]jV}6]]qg{0{z([A{W}\
])Z}d}{u{{J1}O}M}l{hRr(W{f()}Q)Q4}{c[i{f([(uP[[{![E4d[I[x{a(.(NZ(T{Pul(uy;{}Vi)})4))}VV]d]V]}]Eh]4)y\
;]v1)}]}s[{N}][H[4T(w(({{[(Q((cjn[7{OtS()J}]))3i)]Z6}?g};u)))]][(j7((z(:(m[{Qd({F[({(C(d(xy{qml[.(?{\
[;(T{yq((9:(H[I4{{m[oc;(B[Q?[{[{9(GK(l[[(Os[Y(V{E{X(o(D[{[Y[q[vIF((p{[uUt{[kt{.(Re{EYX[{.G{([(((a[{,\
{In(ZL({9H{q[25{;[[s[[u{bY[(yV(([[{g{Y[zz[V{([eHw(H;{{39U[6q({C[{;(d[(WP(kgYx;{k{lq{LK[(Gm{,[:[!(qKh\
{(05[(U[r6[3[JZ{f9{c!([(b,{j{(C(3l8[1{wS{X{pW(k[Q{r{7{LQ[({U(k{{b[(k{uE2[Me(SL({pQ(h[!{zF{a[[Z[1M{P{\
l[s0{(7[(v[({3n([k8({{{(w[[{E(8d[h3(G{[!B[I{t(5n[s[{Tn(!(XmC{({Ig[E(6([[[(5[N[{N{{{P[b(EHn[c[y({M{9K\
{(K:({[({;(J[m(e4[X{(T(3K{z:{yS{f[7{V7[E{![5[y[{{[[(Q[O!b((W)x)cmt]u)]B]SxuH}p}VP]M]Q]n}]}r]}Z}:n}v)\
H)XZ}eR]0)6]g)}j)DE]Hb:mQOF}n))Rwy}P!S}7}X4i)V]]Uv)]S}t}J}}g}9HDX],])P]7p]ut])D)]2}o9)}5))}N]]?aA)r}\
]]u5}1)4o])F}96]]8)F}}o}i)v1]T)}Y)gM])Wi]4)c}E]}p}eAh]oS]5UeQ]tvX}32}4])}Q)aw)]?K}y):47i7]}})E})]Q!e\
}U:}:TC}d]Gn)6}}t}]y)RA)}z})s])LHR}}kb]e]])cM])t})aU]]}9)t1]xZd}p}A}W))I])zH}W]}KL)Bg]2}H}Y)P2]xX)9}\
W].H]97}?}Hbz]]))g7Z)dR]}];]]]ha}P]dw}YB}w))}s}]f)x))k]Y)}m}p]az})9}]y}]})aBe)pN]]O]XIA}])y2)}}v)]y)\
]])ca)}:]y}]3I]n)d]}}])GL))}2)Z]}zw)1]}3QL)B)):WP})b]}H)}xNe]P)33)gM)))4](sK(nZ))rb{3{8[[(0(y!{[l{f{\
2{(B{7(P[t[a[{{:{!B0k{7[:[g{{F[P[aje({(sp3(?{Njc({H{o(F1K[p{[,[([[p6[[T[S]]]W]]olK)aY]U]RJ}hbt]It)7}\
}:)5})IY)}V)a]]sr3}td}]]LH?}Qg}V}}cq0]n]HtI]U)r}t)p}c}}Y]}2)1)L].ER]Z}r}");
			Assert::AreEqual("35", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod51)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults(":[{u{X38{{AHI(([n[[YM({J{(F{\
Mf(([L[68(L{oH[.[{d[[{jT[aqOvR{({8Mf[AjC{([{qB{[b(X[[H{(u[[{{A(({{C(fE(la(wh(:.Q:{{G(qP{{:S(!9((KGQ(\
M[z3[{7[K{(Gm6{kh[Tf[{h((x[[tv[t[I(xT((U(.[({]iS((((q(x[[lJ((l(6[R{([xQ(DS{(jm{[(Rf[lT(z{w{P[j[Q{u[.\
{E{QX{{5(e{4{[[[{PV[{{(bSt[O{(?:{{(E{X(jy{[AI{;{j[{(fwJ(i.{RP[{{{Y[{[R{(yt{[K}([rKw[zA(zs{M(q[Z(((X{\
D([(F[W{bQF[[mbO[0r(JG{(C(2q{D[W(j(ev(S26{E{([fM(Mh?{I[H{l6G3?[((6bS{([b((gA[F(5g(t[1[zO[H[nS(q(([ai\
[7[{2(n{34S[{i[uv[K{e(Hi(BM[{h[S(T({vl{R[{Xo{y3Q[i{[{t(([S{[[Tx[k[tnm{W({L7N{jD((LH[x[o{k{21{{O{,{pV\
[b{1[0[xt((N{{(G3[ONe{[R7G{6S[NM(a{{U.7fo{({,[W[((,G[{?{YwJ:({[w[(Ql[2[s(w:[0(bjW{c(5(O({q,r[[(Q2p(Z\
AB[O(6j{.(1.U(4R(u[([(I![M9[R6[{?on[Q(Jj[4((qq{X{[:[E[[[(.Cu{[J[(c(((AL{3P[N[}[gmg{?.({{v[1w7d(([c{{\
(Q([(k[{d(;[(eo{t(8([:[b[t[6[{oN{(N{D(GO{(4y[Fw{6[{[v(w(5((F{{[xwQN8(Q[{((([j(9B{[{({d6(7{(TR2U[L{mC\
(p{{u[;I{((B[:[:[d[[[{{Ine[c(Fw((,1[[[{!piD0{{(Y(4I{{{{[([t[U{(0[[RJt{2{Q[[8SG({{QM[le[HA[a{yV.(K({f\
:B[{F4p(7{{[(([[wR{T(RD(R{I(o{9(w{PI[([(FVw{{{((RBw({m{[0L{(r[(GT{d(Z(l{DV}51,)J)9}qO)]X)A}]}v}O)Ufs\
)ej)}QS}O}D)7]s)g]R}gs)v}p):f}4)nA)}]Wf]Pa))5t6]}}fV2)C7}0]}sx))}]Z]]5}jf};)]]Y;}8IUB}4]]v.)}1]L]D)x\
]}}TU}})A)}z}8}]]])c)xJ)]Ih}g}g]9]]0]L]]))q}]k}A}rBX)1}]Y2)y}?)xzK}OK:)}sN]X64})h]ps8I)4)4!)k}y]I)u]\
w9}LE}So)PP)O)]q}x]}])I})}sj)SQ}7}4.]]F]]y]);r)8}4)i])y}9m]BS)u]))}V}B]))]a}}g)}]]!]k})p)q)m)I]l]XQ}\
)]b]N]8]h]!}.}d3m),)])qid]}]]]z)X])O7fO]))uHbY)N})DX]c))]Aa]4O}Lw)g)5A)n}VM)VZw])gMx!],])25]A]})A}X}\
Y]S)b)];]zD}2)}Q9}Lw}S);]}5P]H}we]1R)13j}1}E))y]Rd]j}.]H}B}J}j}x}mh}Y]]v)h)Qot}HV}b)}A]]:]]3?}5?]D)m\
)g}U]}dpp],}EUa}F]u}v}))6]h}U])HZ)y},!]]}]u})I}]T7]owy]))62)9]]]X]))]C)x8)4])q}N))]v}V]})]z7)Wv}}K0)\
n))Bl]N}J)6d)?}m)]f]?]}2]V)L0])Q,0}C)))qH]oJ)PO})]z.],U)P]U}m)v}Xv]T}]Y}j}}vpZV]c})IY)t7I}]}c}g]});}\
)gCafz}};8)}QY]eE)}f}u]ks}:M];Fx]d]B2}v})}}XY}4}]CSx}]V]K1}}:)])]V}k)zY})]O)uY}QO]1N)K09)Z)]]y4)))))\
ZfD}mq)H]S)J)))D]l]0]SR]g9tX)Y)d}u]]8}h)Qn3}]}4T]oz]FL))o))v?}r}w)}})r))2)W}}M)d)}djf}C]]d)}rV]]ug)]\
n}b:zP}]Af)}0]w}Y)}0]14}]r]}]]aly})]]X)y)})M}X}C)3]72]AP])e)v}}Q}K}?]LlN");
			Assert::AreEqual("174", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod52)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("{}{}[]{[]}{}[][]{}(){}{}()[]\
[[]]{}{}[]{}[]()[()][](){}{}[]{()}()[][[]]{}[](){{}}[({})][]({})(){}[](())(()){}[][[]]()[][()]{}{[]}\
{}{}(){}()[][]()()()[()]({}){}(){}[](){}[]()[]{}()[]()[](){}[]({}){}[{}][](){}(())()[[]][()][]()[][]\
()[][]{}[]()[][]((()))[][](())({})[][]{}()({[]})([])()()[][()][[]](){}{}(())[[]](())()[]()[]()()({})\
(){()}({})()(){}()()[](([]))()[()][]{}()[()]()([]){}(){{}}{}[()]([])()[]{}{}[](){}[{}](){}[]{[]}[][]\
()()()({}){}{{{}}}(())[{{}}][({})]{{}}{[]}{}{}({})[][{}]()([])(()){()}()[]{{}}{}((())){}[[{()}]]{}{}\
({{}}){[]}{}{}{{}}[[{}]][][[()]]()(){(())}([])()[](){}[]()[]{{}}[][][[]]()[][()](())[]()[[]]{}{}[{}]\
()(){}(){}{}{}[{}][]{()}{{}}{{}}[{}]{}()()(()){}[][{}]{()}{}{[]}{}[]{{}}{{}}{()}(){}()({}){}{}[]([])\
[]()[][]{()}()[{}][]()[{}]{}(){[]}{}(){[]}(){()}[][([])][{}][()](){()}{}[{}]()()()[]{[]}{{}}{{()}}[{\
}]{{}}[][]{}({})()[][]()()[[]](())[()]{}[()][][][[]][()][]{}()()[][][{}]()[{}]()[]([{}])[([])]()([])\
()(){{}}{}()[[]]()(){}([])[]({{}}){}{}[][][]{}[]{}()(){}(){{}}(){}(()){{}}{{}}()[]{}([{}])((()))[()]\
{}[]{}[]{}()[{}]()[][[{}]]{[]}({})()[{}]{}()[{}][][]([]){[]}{}(){[]}(){}[[]]()[[]]()()()[]()({{}})[]\
()((()))()([]){}[()][]{}()[](()){}[][[]][[]]{}()([])[]({})()[]{}({}){}()(){}()(()){}()(){}{}{}{[]}()\
[]()()[]{[]}(){}[[]]()[()][][][][[]][{}]({})({})(()){}{({})}{{}}{}[]{}[()]()(){}[]{[]}()[]()()()({{}\
})()(){}({()})[()](([()])){{{}}}(())[]{}(){}[[]][]{}[]{}[]{()}()[]{}()[]{}{}{}[]{}{{}}{()}[()]{{}}[]\
{{}}[]{}([]){}({}){}[]{}()()(){}()[]{{}}{}{}(([{}]))[{}]()[]{(())}[]()[]{}()()([])[()]()()()(){{}}()\
()()[[]]{}(){[]}[[]]({})[([[]])]{{{[]}}}[{([])}]({[{}]})[[]][]{{({})}}()[][{[]}]{}{({()})}{}[(())]{}\
[](){}()[]{}{}[]{}(()){}[[]]()()(){}{}(){{}}[]()(){}(){}[()](){}{}(){}()[()]()()[][][]{}[][[]]()[]{[\
]}[]{()}(){}()[]{}{}[()][]{{}}[[[]]][()]{}([{()}])[[[]]][]()(){}()()()()[[]][{}]{}{}[][[]][[]]{()}[(\
{})]{}{{}}[]{{}}[()]{{}}[]{}({}){{}}{[]}(){}{}{}[][()][]()(){({})}(()){}[][][]{}{()}()[]({[{}]})[]{[\
{}]}[]{{}}{}{}([])()()()({}){}[]()[][{}]{{}}{}[](){}()({}){{[]}}()[]{}{}{}{()}{}{}(){}()({})[{}]{}[{\
}]()(()){}[]{()}[[()]]{}(){()}{}(){}{}()[]{}[]()[](){[]}[][{}]{{}}[](({}))[][()][]{{}}()(()){}[]{{}}\
[][]{}{}{}(){}{}{}()()(){}()[]({})()[{}]{}{()}[]{{{}}}[]()(()){[]}[{}]{}{}()[][]()(){}[][][]({})[]{}\
(){}{{}}(()){}()[]{}[{()}](([])){}()({})[()]()[][[()]][]{}{}{}[]{}[]{}()[]{()}(){}[]{}(){}()(){}[]()\
(){}(()){}(())[]([])[]{}[][]()[()]({({})}){(({}))}[][]{{({})}}({{[]}}){[]}[]{}[](([()]))[]{}()()[{[[\
]]}](){([{()}])}{([[]])}()[]({}){}[]()[]{{}}{}{}{}()()()(){()}({}){}()[()]{[]}[]([])[[]][]{}(){}[[]]\
[][[]]{}{{}}(()){}(([])){{{{[[]]}}}}[[]](){[]}[][()]{[([])]}[]([{{}}]){{[]}}[][][](){}({}){}{}()({})\
({{}})([])(()){}[]{{}}[{[[()]]}]([]){[]}()()()[]({})[([])][([])]{}(){{}}([()])[[]]{([])}({{}}){()}()\
{}{[]}[][[([])]]()()[{[]}]{}{[]}[([])]{{({})}}(){}{([[]])}(()){[{}]}(){}()(){(())}{}[()]{{}}{{}}(){{\
()}}{()}()([])[{}]((()))()(())[{}]()()[]{[]}[]()([])[](){}[{}][]{}{}(())()()[]([])[]{}[][]()({})()[[\
]]{[]}([])(({})){}[](){}()(){}[]()[]{}[[]]({[]})[][]({}){{}}([]){}[]()[](())[]{}[[()]][]{[]}[]({})[]\
[](){()}[]()[{}]{}[]{}[](){}(){}[()][]()()[][()][[]]()()[][][]({}){}()()(){}(()){}(())[][]{()}[]{}[]\
[][][[]](){}()[][{[{[]}]}](){}[]{[]}(){}(){{}}[][][]{}[]{()}{}[][{}]()[]{}[](){[]}()[()]{}[]{}(){}{[\
]}[]{{{({})}}}{[]}(())({}){}[]{}[][]()()[][]()[][]{}[][]{()}{()}{}()()[][()](){}()(){}()[()]{[]}{}{{\
{()}}}{}([(())])[()]((([{}])))()([{[]}])[()][{{}}]{}[][]{}[][[]][]{}{}[][[]]{}[]{}()[]{}[]()[[]][]()\
{}([]){}[](){}([])([])[]{}[(())]{}([])()({})(){}[][]{}{}{}()[]()({{}})[{}]{}{}({}){}[](){}()()[[]][]\
{}({})()[][](({})){}[]{}()([])()[][][()]([])()[{()}]({[{{}}]}){[[{}]]}[]{[[]]}{}(){}[][]()()(){}()()\
{}[]{}{}{[]}{}[()](){[]}()[][{}]({})[][[]](){}[]()[]([])[]()()[][](){}{}{}{}[]{{}}{}([]){()}()()[][[\
]][]{{}}()[][][()][]{}(())[](){}{}{}[()]{{}}({}){()}()()()[]({}){}()[]{}[]{}{}()(({})){{}}{}{[]}(){}\
{}(())[][[]][]{}[]{}[]({})()[[]]{}{}{}{{{}}}{{}}[[]]{}()[[]]()[{}](()){}[]{}()[({})]()([]){[]}({}){}\
((())){}{()}([]){}{}([])[([])]{[{}]}({()})[][[]][][][]{}[]{[]}{}{{}}{}{}[]()[]([]){}[(())][]{}{}{()}\
[{}]{}[]({[]})(({})){}{}[][[]][{()}][{()}][]([{}])[]{()}{{}}({}){[]}({[]})[]()[](({}))[][[]]{}[]{}{}\
[]{}[]([])[]{[()]}([])()[]()(({}))([])[()]()(){}[{}]([{}])(())[]([]){({})}[]{(())}[()]{}[{}][{}]{}{}\
[][{}]{}[][]{}{()}[[]][](()){}{}()(){}[[{}]]{}[]{}{}[][]()[][](){{}}[([])]{}[]{}{}{()}()(){{[]}}{}()\
({})()[]{}[]([[]])()[[[]]]()[][][][()][()]{()}()[{}][](){}()([])()()[{}]{}(){}()()[][][](){}(){}[]([\
])[]{(())}[]()[]{()}[]{}()[()]({[]})[()]()[[]][][()]{{()}}(){[{}]}[{{}}]([])(()){()}[](){[]}[]()[()]\
[]{}({}){()}(()){}([])[[]][][](())[]{}[]([]){}(){[]}[][{}]({})[]([])(){}(()){}{}{}(){}[]{()}[][[]][{\
}]{}{}{}{}[](){{}}{}[]{}[]{}[]{}[](){}[][]()[()]()({})[{()}][]()[](){[]}[]({()})(())(())[[]]()[][]{{\
}}{([[]])}()[[]]{}[[[]]]{()}{()}{}[](){}()[]{}{{}}{}[[]]{}{}{}(){}{{}}[]()[][]{}()[][]()()(){[]}[{}]\
[]{}{{}}()([])[][]()()[][[]]([]){}{}[]{(())}[[({})]]{}[][{}](())([]){}[]({}){()}[][][[]]{}{}(){{[]}}\
{{}}{}(())()([[[]]])()[]()()()(){{}}[]{}(()){}{}{}()[]()(){}()(())[]{}{}(())()[{({})}][({([])})](){}\
(()){[{[]}]}({})[]{}[{}](({}))(){()}[]()[[]](){[()]}{}[]([]){}([[]]){(())}[()][](){}{}[]()(){}([])()\
[](){}{}([])[[()]]{}{}{}{}{}[()]{}{}()()([])[][()]()()[]()(())(){}{}[][]([])()(){({})}(){}(){}[][()]\
[][[]][]{}[]()[][]{}[][](){}[{}]({}){}([[]])()[{()}][()](({[]}))[{}][]()({})()(())()()()[[]](){}[]()\
([])(())()[{}]()[[]]()({})[]{}[]()(){}[]([])[]()[]()()[][]{}{()}{[]}[][][](){}{}()({}){}{}[]{}({}){[\
]}(())()(){{}}[][]{}([{}])(){[[{}]]}[](([{}]))[][({})][()]{(())}{}()[{{}}](())([])[][[[]]]{()}{}[]{{\
}}[]()[][]()[[{}]]{}()(){}()[[()]]{[]}[()][][][]{{}}(())()({}){{}}{}{()}[][][]()[({()})]{}(())(){{[]\
}}()[](())[[]][][]([]){}([()])[{}]{}[][{}]{{}}(())()[]([])[[]]{}()[()]{}[{}]()()({})[][][{}]{}((()))\
(){}{}[][](())()()[(([]))][[()]]{{}}[]()(()){{}}([])([[]])(()){()}{}[][]([[]]){{{}}}[][][]{{}}[]{}[]\
[][()]{}[()]{({})}{{}}{}[{[]}]{{}}{()}(){{}}{}{}[()][][][][{{}}]()[()]{[]}{[]}[][][][]{}{}[]()(){}[]\
{}({})[][][()]{}{}(){[]}[][]{}{}{[]}[][]{[]}[][][][]()(){([])}([]){}(){}{}[][][]([])()[()](){[]}[]([\
])()[([])][[]][[]][](())[{}][][]{{}}{()}[[{}]][](([]))()({}){[([[]])]}[]{}(())()()[]{[()]}()[()]{}()\
()[{[]}]()()([([])])([{{}}])[]{[]}[]{([])}(){{}}([])([])()[](){[]}{}[](){}{}(){}[][]{}[{}]()()[][][]\
()()()[]([])[][{()}]({})([()])[{[()]}]{[]}()[](){{}}{{[]}}{}[([])][[]]{}([])[()]()[]{}{}[[]]{}{{}}({\
})(())(){}{}{}[][()][]()[[]][]{}{}[[]][()]{}{}{{[]}}{{[]}}[]()()([]){{}}{}(){}{[{}]}{((()))}{{}}[][]\
{}[][][[()]]()[][(())]{()}()[()][](){}()({{}})()[[[]]](())[(({}))]{}({()}){}([{}])(){[]}[][]{({})}{}\
[]()({{(())}})[][(())][{}]()()()(){}(){}()(())(){()}{}()[][]()()[](()){({})}[[()]][][[{}]]{}{}{}(){[\
]}[[]]({}){}{()}(){}()(){[]}[]{([])}{}()(){}()[]()[][][][]{}[{{}}][{[]}][()][][](()){()}{[]}{}(){}()\
([]){}[]()(){}{}(){[]}{{}}[()]{}[]()[{}]()()[]{}(){}[]{}{}[]()({}){}[](){}[]{}[()]{}[[]]([{}])[[[[]]\
]]{[]}[()][](){()}()[()]()()[]{}[]()(){}[]{{}}[]{{}}{}[{}][][()]{}(){{}}[]{}{[]}{[]}(){}[]{}[]()[]({\
[]})[](){{}}(){{()}}[][][()]{}({([])}){[]}[{}][][][](){}[](){{}}{()}{}[](){()}()(())[][][][][()][()]\
([])[](){()}[][][]{{}}[{{}}]([()]){{}}()[]{}[()]{}{}{}[]()[]{{}}()[()](){}{}[{}][]{}()(){}()[[]]{()}\
()()()()[]{[()]}[][][][]()[]{}[()]{}[]([[]])[{{}}][][]()()[{}]({})({})({()})[][]()()[](){}{()}[](){}\
[]{}[][][]({})[()]()(())()[[]]{}{}()[][]()()(){}[]{}()(){}[()]{}{}({})[]{}{}[()]()([])([])[][]{[]}{}\
()[][](()){}{}()[()](){}{()}[]{}[]{}{}[{}]({})(([]))([[]])()[]()(){}[()][](){}[()]()(){}[()][][[]][]\
[]([])(()){}({})({}){}[]{(())}[](){()}{}([])[]{}[]()({})(())[[()]]{}{()}{()}(){}{}{{}}({[]}){}[{([])\
}](){}()[]{}[]{}()()()(){[]}[]{}{}{}{{}}[{}]{}(){({()})}[]{}[][](){}{}[]([])[()](){()}[[]]{{}}(){}()\
[]{{[]}}[][]()[[{}]][{}]{}([{[[]]}])[({})]{[[{}]]}{}(())[([[]])][](){[]}{[]}{[{([])}]}[[{}]]{{}}{}[]\
[({})]{}{}(({()})){}{}{}()[(())]{{}}(){}((()))[][]()[]({[]})(){{{}}}{}{}{{{}}}(())()[][{}]{{}}{()}[]\
(){[]}()()()[][[]][()]{}[][][()][]([])[][{[]}][][]{()}[][{}]{[]}()[]{}()[]{}[]{}[{}](){}({})[](([]))\
{}()[][][][][][()][]{}[{}]()()()(){}[[]][][]{()}[]{[]}{(())}()()[]()()(){}[][]()[]()(){()}()(()){}[{\
}]{}()[][][]{}[]{}{}()[][]{}[]({}){}([]){{}}()[]{()}()[(())][[()]]{(())}(([])){}[]{}[](){()}[[]]{}[]\
{[]}[]{}[]{{}}()()[]()(())()[][](()){}{}[]{()}(){[]}{}()[()]{{}}{[]}({})(())({})[]()[][[]]({[]})[][{\
()}]()[][{}](()){}(()){}{}{}(){}[][]{}[](){}{}(){()}[{}]({})()()([])([]){()}{[[]]}{}(())()[][()][(()\
)]{()}(){}()[][[]][]()[](){{}}{{}}()[]({()})(([(())]))[]{}{}(([{}]))({({()})})(){[()]}[()]()[][][[]]\
[()][]{}[][]{}()[]{()}(){[]}{{{}}}[]{}[{}][]{}[]{}{()}([])()(){}()[{}](){{()}}[]()(){}({{}}){{[()]}}\
()[({[]})]{}(){}()()()(){}[][{()}]{()}{}()[]{}{{}}{}[]{}()[][]{}({}){}{}[[]]()[()](())()[](())()[]()\
[]{}(())[]{}()[]{}({})[{}]{}[]{}{{}}[]{[[[]]]}{}[]{{}}{[{}]}[]{}([[]])[[]][[[]]]({})[](){}{[]}()[][]\
{[]}[()][[()]](())()[](){}()()[]{()}({})()[]()(){()}{}{{}}{}()[()]{({})}[[[()]]]{}[][](){()}{}()(())\
[()]{}[{[]}]()[[]](){{{}}}[](({}))[](())()[]()()[]()()()()()()[][]{}{}[][()]{{}}[]{}()()()(){}([])()\
(()){()}()[{}][]{[{}]}{}[]{}[][]()()({})[()][][[]][]()()[]{}{{{}}}{}()[]{}(){}{[]}()[][]([[]])[{}]{}\
(){}{}{[]}{}[][()]()[[[]]]{}{}{}[[]]([])({{}}){}{{}}(){}{}{}(){}[][{}](){}{}{}{}()({})()[[]]()[](())\
[]{[]}{}()([])[][]{[]}()()(){}()()[{}][]{()}[[]][](())()[]{}[][]()[][]{}()[{}][]([])()()([])()(){}[{\
}][](){}([])[[]]{{()}}{{}}(){[]}{}{}{()}[]{{}}[()]()()(())[][{}]{}[]([()])[]{[]}()([])[]{}()(()){}[]\
{}({})(){{}}[][{}][[]]((()))[][][]()[](())([]){[]}{()}{}{{}}({})[]()()()[]()[]{}{}{[]}{()}{}{{}}{}((\
))([[]]){}{}{[]}[][][]()(){}()()[]{}()()[][][][][[]][][{}]{([])}()({})()[]()(){[]}({})(){}[]{()}{}{}\
{{}}{}{}({})[{}]()[{}]()(){}({}){}()([])[]{}{{{}}}{}([([])])({{}})[(())]()[]{}{}()(){[]}{()}[]{}[][[\
]][()][]()[{}]{}{}()(()){()}[]({}){{}}{}[][][]([])({})()([(())])()(([]))()()[][][[]](([])){}()[][]([\
])({})[([])]{}[()][]{()}[[]](){}()[][]{}(){}[{}][](){}[]{}([])[][][()]()[][](())(()){}([])(){}{}{[]}\
()[]()[]{{}}()()[()]()(){}{}[]({})()()[]()[()][][]{}[{}]{}[][{}][]()(){[]}[]{}(){}[][]{}[()](){}[()]\
[[]]{}({}){{}}{}[][][[{}]]{}[][]{}[](())()(){}{}{{{}}}{}[()][]({})[[]]{}[][()]{}[]()[()][{[]}]()[[]]\
{[{}]}[]([]){{}}{}[{}]({})[]{}()()[[]][][]{}{{}}[]{}({()}){}{([])}[][()][]{}{()}(){[]}[](())[]([])([\
{{[()]}}]){}[()][()]()(([(((())))]))[()]((()))(){}{[[[[]]]]}([])()(){}([{([])}])()[](()){}({{}}){(([\
]))}{[]}[][{}]([])[]({}){}(){}([])(){{}}[({})][()]([])()(())(([])){}(())[]{()}{}([])[{}][]{}([]){}()\
[][][](){}[][]{}()[()]()[{}]{()}{}[][][]()(){}[()](){[]}{}()()(){()}()(())[][][()]{}{}[][[]][]{}()()\
{}(){}{{[]}}[]{}(){()}()()[](){([])}{{[]}}(){}()[][[]]{}[[()]]{}()([]){()}{}{}{{}}{[]}{}{}[]{{[()]}}\
{}()({{}})({[]})[{()}](())(){}([]){{}}([])[]{()}{{[()]}}{[{}]}{}[[]]({{}}){}({()}){(())}({{}}){}[][[\
{}]][]{}[{}]{}(){}[()]()[]{{}}{}({})[][[[]]][][]{{[]}}[][][]{{}}[](){}[[]][{}]{()}{}(){}()()(){}()[{\
()}]({[()]})({[]})()({()}){}()()({{}})[]{}(){()}({}){}(){}(){}{}()([])[{({})}]{}([{}])[](([]))()([])\
[]{}{}[{}][()]{()}[{}]()(()){}[]()()({}){()}{}{}[()]{}{}(()){}{}{}{}({})()[][]()[]()[]{}{[]}[]{}{}{}\
({})[]()[]{}[][]{}(){()}{}(){}[()][]([()])()(){}()[{}]{()}{}()([{}]){()}[](()){}(()){}()(())[][{}][]\
()([{{}}]){{[]}}(())[{}]({})[]{}{[]}[][]()[]{()}[][]()()[][]()({})({})[]()(()){}[{}]{}{}{}([])[[{}]]\
[]()[{}]{{}}{}[()]{[]}()({}){[{}]}{}{[]}{}{}[[]][]{[]}[[]]{{{}}}[][{}](([[]])){}(())[]{}{[]}{({})}{(\
)}([{}]){[()]}{({()})}[{}]()()({})(())[]([()])[]{([])}([{}])()()()(){}()([])[][]{}{{}}()[]{}{}[]{}()\
[](){{}}({}{}{}{}(){}{}[]{}{}[{}]{}()(())([]){}{}[][](){}([]){}[()][]{[]}{{}}[][[]]{[]}(){}[]{}({})[\
]([()])[]([])[]{}{()}(){}({}){}([])[{[]}]{{[]}}(())[(({}))]({})({()})[]{{}}[][()][()]{}[{}][[{}]]{}{\
[]}{([])}()()(){}[()][[]]{}(())[]{}{{}}{}[[]][{{}}]()({()}){()}[][]()(){}[][()][](){}{}(){}[()][]{}[\
]({}){}({})(){}(())[[]]{}[](){()}()[]{()}{{}}{{[]}}(()){}[][[]][](){}{}[][[()]]([]){[]}(){{}}([{}])[\
]()[]{}[][][](){{()}}[][]()()()[][][][][][]{}{()}([]){[]}[[]]{(())}[][][][](())[]()[](())()[]()[][{}\
]{}(()){()}()()[]{}[]()[](){[[]]}{[]}(())[]{[]}({{}})()[{[]}]{{}}[]{}{()}()[]()(){()}{}{[]}[]{[]}[]{\
[]}{}(){}[]{}{}[]{[]}[]()[]{}()[]()()[[]]{}[]{[]}{}[[]]{}{}({})(())(){}(){}([])(){}()(){()}()(){}[][\
]()()[][]{()}{{}}[]()[]()()[]({()})[{}]({}){}{}{{}}()(){}{}[]{}{}()[{}][(())]({}){}{}()[]{}{}{}[{}][\
]{[]}[]{}[](){}()[](()){{}}[]{}()[][{[]}][(())]({{[]}})()[]([])({})({()})[][](){[]}()[][]{}()[[]][][\
{}]{}(){{([])}}[][[]]{}[]()(){}()[[[]]][]{(())}()([(())])(){[]}[]{()}{[[[]]]}{{{}}}[()][][]{}[][]{}[\
{[]}]({()}){}{{}}{()}{}()()()(){}{}(()){()}[][]()[([])]{{[]}}()[]()()(){{}}()()()[]{}[][{}]([])([()]\
){}{}[]{{}}[{}]{}[()]({})(){}{{[]}}{}{}{{}}{{}}[]{}{}()(()){}[]{}[]([]){}{}{}[][]{}()[](){[]}{}()[{}\
][]({})(){[]}[][{}][]()[]{{}}{}({}){[]}(){}{}([])[]()[]()[][]{}()(({}))({[]}){}[]{[]}{}([[]]){}()([[\
]]){}[()]{}{}{}(){()}{}{}{}()(){}({()})()[{}]()[][]()(())[]()[]{}[]{}[{}]{[]}[[]][{}]{}{}[]([])()[[]\
](){}{}([]){}{{}}(){}()[{}]()({{}}){}(){}{[[]]}[[]]{}(()){}[]([])[()]{}([])[]{()}()()[][()][{}]{}(){\
()}()[]()[{}][][{{}}]()(())(){}[][](){[]}()[([])]{{}}{}{}(){{}}[(())]({[]})[](){([])}[]{{}}{}()({})[\
()](){}()()[[]]()([])({{}}){{}}[()]{}()[]{}[[]]{}(){}[]{}{([])}[(())]{}[][{[]}][[{}]][]{}[[]][](){}{\
}{}(){}()()()(())()(){}([[]])[{{}}](){}{}[[()]]([])[]{{[]}}(){[]}[](){}[{()}][]{}{}(()){}()[](){[()]\
}[{}]{}{}{[]}()[]{}(){[[]]}[{[[]]}]{}()()[][]()[]()[][][[]][[]]{}()()[]({}){[]}[[]][]({})[][{}]()[][\
]{}{}(){[]}()[{()}][[]]{}{}{}[][()][]()([])(){}()(){}[]()[]{}()(){}[()]{}()()[]([])[]({}){}[[]][]()(\
)(){}{}[]{}[][[]][{}](){[[]]}()[[]][{}](){}{}{()}{}[][][{}]{}([]){}[][()]({})(())()([]){}()()([()])(\
)()[](){[[]]}{}[]{}[]([])(){}{}[{}][][{}](()){}[][]({})()()({}){[]}(){}{}[()]{}[()]({})[]({}){}{}[](\
)()({})[{}][]{}{()}(){}({}){}{}{}[]{}{}[][{()}]{{[]}}()[[]][][()]{()}([()])(){}[][]{}[{(())}](){{{}}\
}(){()}(())[{[]}]([])()()[]()()[][](){}[][][]{[]}[[]][()]{}({{}})(){}([]){}[[]]()(){}{[]}{}[][]{()}(\
){{}}[][](){}{}{{}}[][()]()[([([])])][{}]()[]{{}}{[]}(){}(){}{[[{}]]}({[]}){[]}((()))()[([])][{}]()(\
{}){[]}(){}(())[{}](){}[][](){}()[{}]{}{}({}){{}}[][][[]](({}))[]{}()[][{}](){}(){}{}{}{}[][][](())[\
()][][()]{[]}{}(){()}{{{}}}(){()}()(){}[{}][][]{}{}({()}){}[]([])(){}()[()][][][][][]{}[]{()}{[[]]}{\
}{()}[][(())]{}{[]}([{}])(){}([])[]([])(())[[]][]{[]}(){}[()]({}){{}}()[]{[{}]}{}()()[]{()}{([])}({}\
){({})}{[]}{}()[]{}{[{}]}{{}}[][{}]{}{}[{}][][()]{}[[]][{}]{}{}([])(())()()[]()[][[{}]]{(())}(){{()}\
}[()]()[()]{{}}({}){{}}{}{}()[](){}({})()(){}([])[][]{}[[]]({}){{}}[]{}[][](){}(){}[]()[]{(())}[[]][\
]([])({{}})[[]]{}{}{}([])[]{}()()[][][]{}[][]{}()()(()){[]}()()[[]]{{[]}}{}((()))[(())](([])){}[({})\
][{{}}]{}{(())}(){}[([])](){}{[]}(){[]}[](){[]}{}[]()[][[{}]][([])][]()(){}{}[](())[]({[]})(())()[][\
[[]]]()[[]][][([])]([])[({[]})][{[]}][{}]{()}()()[]{{}}[{}](){()}{[]}{[]}()({})()[][]()({[]})[]{{}}(\
[{}])[]()(){()}{}[][][]({})(())(){()}{}[][]{}{()}()()([])([])()()()()()(){}[][]()[{}]{}{()}{}()[[{}]\
][]{{}}[][]{}()[([])][]{(([]))}{}{({{}})}{}(())[[]]{}{({})}[[()]][](){}[][][](){{}}()({})[]({{}}){[(\
)]}()()()([()])()()[][]{[]}[][[]]()()(){()}[](){}[{[]}]{[]}{([])}{[]}{}{}[()](){}[][{}][]{}()({})()(\
){}{}()[]{}{({})}{}([{}])[]{}()(){()}{{{}}}[]{}()(())({}){}[]([])(){{()}}{}{}{}{}[{{{}}}]{()}{[]}()(\
)(){}[()]()()[]()()()(){}[][[]](){}{}{}[]([])()[()][]{{}}[]({}){[]}{}{}{}()[()]{}[()]{()}[]{{}}[](){\
}[][[]]{}[([])](([]))()[][[]][][][]{}()()[{}][]{}[]{}([{}]){()}[](())(){}{{}}{}[]{}()[][]{()}()[]()(\
)(())[]{}()[][][][]{}()()[][[]]()(())[{}]{}()[]()[[]]{}[]([])[[]]()[]()[][()]{}[](())[][]()[][][]({}\
){}{()}()()[([])]{{()}}[]{}[()]()()[]()[[[]]]{}{{}}{[]}{}{}()()[][]{}(){}[{()}]([])()[]()[]{}[[]]{}{\
}(){}(){}[()]{}{{[]}}()([{}])[]{}({})({})()[][(())]{()}(()){{}}[()]{}[][][]()[]{{}}({[]}){}[][][](){\
}[[[]]][](()){}[()][{{[]}}][([])]{[]}{[[{}]]}{}[][{}]()[]([[]])()[{}][]{}{[[]]}{}[[]][][[]]{{}}([]){\
}()()[{}](()){}()[()]{}[][]{{}}[]{}{}()[[]](){[{}]}{}{[]}{}[{}]{}[({})](([]))(){}{(([]))}{[]}[]{([()\
])}(({()})){[]}()()[](){}{{}}(())[[{}]]({{{}}}){}([{}])([{{}}])([[]]){({})}{{[]}}()[]{}[]{}()({})({{\
[]}})(){}[[]]()[]([()])([]){[{()}]}({()})([[]])(){}((({})))([[()]]){}{[{()}]}{}()[]()[]{{}}{{{}}}{}[\
]([])[{}]{({{}})}[](({[()]}))[{}][[]]{}(({{}}))()[[{}]]{}[][]{()}[]{}[]{[{}]}[]{}[()]{}[][][][]{}[{}\
]{}{[]}[()]([]){}[]{}[{}](())({}){}(){}{()}[{[]}]()[()]{[]}[]()(())[]{({})}[][][]([]){}{}[]()[(())][\
]{[[]]}(())(([]))[]{}{[]}[()](){}()[{}]{}[]{}()[]()(){}{}[]{}([])()[]()[[]][]{{}}()[]({})[{}](){()}(\
())(){}([])(){}[](){}(){}[([])](){}{}{[{}]}{}(())([{}]){{}}{}()(()){({{}})}{{}}{}{}{()}(())[]{[]}([]\
)()()(){}{}[]()[]{}()[][]{}([])(){}[]{{}}()[][](){}{}()[()][]{}{[]}()(){}()()()()(())[]{}[](){}{{}}(\
){}[]()(){}{}[]([]){}[{}]([])(){}{}{{}}{}{}[]{}[]()(){[]}()[](){}(()){}[]{}[()]{()}[]{}[{()}]{[]}[{{\
}}][][[]]{}[]()(){}{[]}(){{}}[][]()[][()]()[{}]{}{}()(){}{}[]{}[]()()[][]()(())[[]]{}{}[]{}({}){}[]{\
}{}[{}]()()[]{}[]()()[[]]({})()[()]{}(){}[]{}(){()}{}[]()(){}{}[][][{}]{}{}[[]]{}{}(())[][()][({})]{\
[{()}]}[]()[][]{}[]()[]([])[]([])[]{}({({})}){}([])[()][[]][][({})][()][]{}[()](){}[[]]{{()}}(){}{}{\
{}}(){}{}[[]]{}()()[]()[[]]()[]()()()[[]]{{}}{}()[[]][]{}({})({})(){{}}{}[[]][]()[{}](){}[][]{}(){}[\
{()}][][{{()}}]()[([{}])]{}({})[]{}()[](){}[]{}(()){}{}[]()[]{}()[{()}]{{()}}[]{}[{}]{(())}[{}][()]{\
[]}{[]}{{}}(())[()][][()][][]{()}{}[](){}[][]{[]}[[]][{}]()()({})[]{{}}[{}]{[]}{()}(([])){{[{}]}}{}[\
[]]{[]}([]){}[]{()}[][()][][({})]{[[]]}[][][]{}[]()()(({})){}{}[(())](){()}(){{[]}}[]()(){[]}[()]{}(\
){}[][]{{}}{}()[][][][]()(){}{}()[]()[][]({})[{}]()[[]](()){{}}[]{}()(){}[]{}{{}}()()({})()[][]{}[]{\
}([])[]{}[][]()({}){}[()]{[]}[]{}[]{[]}({})[]()()[][][{}][](){}{}[[{}]][{}][]{({})}{()}{}{(())}(){}[\
](())()(){}{}()()(()){()}{{}}()[[()]](()){}{()}[]{}[]{}{}[][]([])[][]()()([])[][()]()[][][](){}[[]][\
{{}}][][][()][]()[{}]{}(){}[][](){()}[][]{{}}{()}[]{}{}{}()[{}]{}[{}][{}]{}{}{[{}]}()[{()}][](){}{[]\
}([]){({})}{{}}({}){{}}([]){}[]({})[][][()]([]){}(){}{}(){}()[][][[]]{}{}{[]}[]()()[[]]{}[][][](())(\
){}[]({})(){}[][()]{}(()){}[]({})()({})[]{}[()](){{}}()(){()}{([])}[[]]()()(()){[{}]}({})(){}[]([])[\
]([])(){}(){[]}[[]]{}{}({})[]{}{}(){}[]{{}}[]{}[](())[]{}{}[]{}{}()[]()[][]{}{}{}[[]]()([])((())){}(\
){}(([]))()()[][]{}{()}([]){}()[][][()]()()()()(){()}{{}}()({}){}([()])[{}](){()}()[[()]]{({})}()()[\
]{()}[]{()}()({})[][]{}()(()){{()}}{[{}]}[]([{}]){(({}))}{{{}}}{{}}{{}}[]()[][]()()[()][]{}[]({{}})(\
)[[]]{}{}{}({[]})(([[]])){{[()]}}([]){}{}[](())[]((()))[[]]{}()([[]])()[({[]})]({}){([])}{}(){}(({})\
)[()]{}[][]()()(){{}}[]()()[()]{}{}[]{()}{}()[{}][][{[]}]{()}{}()()[[{}]]{}()[]{}([])[][{}](){[]}[]{\
}{(())}[]{}{}[][](){}[]{{}}[[]]{[()]}{()}{}{}()[{{}}]()()[[{[]}]]()[{}]([()])()([{}])[([])]()[[[[]]]\
]{[]}[(())]{}{([])}({}){}[]{}()([])()[][][]{}{}{}[]()()[]{}{[]}[]([])[][]()(())[()][()][]{}(){}()[]{\
}[{}][]{[]}{{}}[]{[]}()[()][]()[][](())[](){}{}[]{}[()]{[()]}[()]{()}{}()()[][()]{}[[()]][[]]{}[]()[\
]{}{}[{}]{{}}(())(){()}[]{}()()[]{}{()}[{}]{}()[](){}(){}{}[([])][{}](){[]}{}[()]{}(){}{}[](){}()(){\
()}[][]()(){}{}([])[](){()}[]({{}})()[]{{}}[{()}]{}()[[]][]{}[][][][{}]{}(()){{()}}(){}{}{}[]{()}{}(\
){}[](()){}()[()][]([[]])[][][[]][](())()[[]](({}))(){}[]([])[][]()({()})(()){}{}[]{()}{}{}([])[[]][\
][][][{}]{()}{[]}(){}{}{}[][]{}(())(())(){()}{}[][]()([])[()]{}{}()[[]][][]([[]]){}{}()[]{}{}{}{}[]{\
}{[]}[]()()[{{}}]{}[{}]{}[[]]()[]()[][{}]()[{}][()]{}[()]()[{}][][()]{}{}[[]]{}(){}[][]()[[]][]{[]}(\
){}[]{()}[()]{()}{}{()}[()][[]](){}()(){}()[]{}()[][]{()}{}{}[](){}{{}}[{}][]({})(){}[][]{}([])(())[\
]{{}}([])()()[[]]({}){}[]()[][{}]{}()[][({})][{}]()()({}){}{}[][](){}[]{}(){}([])([{[]}])[{}]{{()}}[\
]{}({[]})[][()]{[]}{{}}[]{()}[]({})[](){}[[{}]]({}){}[{}]{}[]{}({{}})[[[]]]{}({()})[{}][{}]([])([])[\
]{}{}()({}){}[{{}}]{}[([])]([{}]){}()()[]({})[]{[]}{{}}(()){}()()(){}[]{}{}()[][]{}{{}}{}{}{[]}()()[\
]()(){}()()()[](){}[{}][[]]({{}})()()([{}])[()]{()}[]()()[](){}{[]}[[]]([])()()[](())()[]()[]{}{}(({\
}))(){[]}(){()}{}(){}[](){}[()]()()[{()}]{({})}{{{()}}}[]([[{}]])[{}][[]]({})[[]][()]{}([]){}{}{}({}\
)({([])}){[]}{()}[]{}(()){}{}{}[](){}[]()[][][](){}[{}][]()()(){}([]){[]}(){}([])[][](){}{}()[][[]][\
]({})()()(){}()([])[()]{(())}()[]{()}[]{[]}{}[](())[[]]()[{[]}]{}[][{}]{}{}[](){[]}[{()}]{[]}{}(){}{\
{()}}{}{()}((())){}(){{[]}}[({})][]{({})}{}{({{}})}()({()}){}{}[[()]][{}][{}]()()()[](){()}()()[[()]\
][]{{}}[]([])[[]]()()(([])){{()}}{}(){}{}[]{{}}[][[]][]()[[{}]]([])()[{}][()][[]]{()}{()}[[[]]][]{}(\
){}(){}[]{}{}{}()[][]{{}}{}({})([]){[({})]}{}{}[()]{}()[]{{}}()[]([])()()[]([]){{}}{[]}{()}{[]}()(){\
}()[][]()[]()([])[{}](){}{[]}[()]([])[[]][][](){[]}{}(())[][][[{}]]{[]}()([]){}{}(())[]{{}}({{()}})(\
(()))[{}]{[([])]}[][[({})]]()()[]{}()({})[{[]}]{}[]()(){}{}{}()[]()[]{}()({})[]{}[({})](){[]}{}[]{([\
])}{}[()][](()){()}{}{}{[[()]]}()([]){}{()}(){(())}{}{}{}{{()}}{{}}{({[]})}{}([[]]){{}}{}{}(()){{}}(\
)[][][]{[]}[{}]()[](()){}{}[][]{{}}()[()][]{()}()[()][]{}[]{()}[][{}][][][][]{}{}{}[](){()}([])[]{}{\
}[]{{}}{}[]()({})[]{[]}(){}[]{}{}{}[]{}{}()[()]()([])()({})[][]{[{}]}[]{}()()[]()[]{}()[]()[](){}[][\
]()[](()){()}{}{}(){({})}[{{}}]{}()()[][](){}{}(()){}(){}[{}][{}][()]{}[()][]{}{}()()(){}{}[][][]{}(\
)()()(){{}}[()]()[[]]{}{([])}()[][][]([]){()}[]{}{}[][]()[{}](){()}[]()()(()){}(())[[]][]()[]{}{}()[\
]()[()]{}{{}}(){}[]()[][]{}[]{}{}{}[][{([])}]()(())(({})){[]}{[{}]}[()](())(){}{()}[[]][][]{}(){}[](\
)([[]])[](){}{[]}((([])))[][][]({[]})()([]){{}}()[]()({}){}[()](())[][()]{}()[]()()[]{}[][](){[]}(){\
}(())[]{}[]()[[]]{{[]}}{{}}({[]})()[](({})){}{}{}{}[][][{}](())([]){[]}{}[]{}({})[{}]{}{[()]}()(())[\
]()(({})){}([()])[()]{}[][]()(){}()[][][][{}][][(())]{({})}()[()]{}{}()(){[]}(){}()(){}()()[][]()[]{\
{}}[](())(){}[{}]{()}(){}([])[][[{}]]{()}{}[][]()[][[]][][]()[{}][][[]][]{}()()(){{}}{{}}{[[]]}(){[]\
}(){}{[()]}{()}(){}[]()(){}{}{}(){}[{}][]()[[]]{}[]({})()[]()[{}]{}[[]]{}{()}[][{}](){}()[()][]()()(\
[])([{}]){{[]}}[]({{}})[{{}}][][{()}][{}][]({})()[{}][](()){{}}[[]]{}({}){}[]{}()[[]]{}[]({}){}{[]}[\
][[]]{}()[[]][{}][]{}{[]}(){}[][(())]{}()[](())[][[]]()()[[]]{}(({})){}{}(){()}[]{}[()]({()})[]{}[]{\
}()[()]{[]}{}[][]{}{[]}()(){}()[]{{}}[][()]([()]){{[]}}[]()([])[]{}{}({})[][()]{}[(())][]()(()){{[]}\
}[](){{}}()([{}])(()){{}}({})[()](){}(){}()()[][]{}({})[()][()]{}[{{}}][]{}{}{[]}[]()[[]]{}[][{}]{}(\
)[[]]([]){}{{}}()([]){{}}{}[[[]]]{}{}{[]}[({{}})]{}{}[{[]}][]([[{}]])[{}](({()}))[][][{}][][{}]()([]\
)()[()]{}(){}(({}))[]({()})()[]()[]{}(){}{}[[]]{}{}{}{}()(){{()}}([()])[{}][]{}{[]}(()){}[](({()})){\
(({}))}()[([])][[]][{[]}][[]](){[]}[]{}[[]]([])[]{}()[][{}]{}{}[]()(){}([()])()[[[]]][]([])()(([()])\
)[[]]({{}})((()))[][][]{(())}()()({})([()])[{{{}}}][()][][[]]{}{}{}[]{}(){}[()][](){}{}{()}(){()}{[]\
}(){{}}(){()}()[]{}[]{}{}{}{}{}[[]](){}{{}}{}{}{}()()[](())()([]){}[]{()}[[{}]]()[]{}{}{}(()){}[{}]{\
}()()[]()[][]({})[{}]()[()]()[][][()](){}()()[{}]{}[]{}()(){}[]{}{}{[]}[]()(){()}[](())(){}({}){}([]\
){}()[()]{}[{{}}]{}{{}}[]{}[]([])()[()]{()}{[]}[]([[]])(())[[[]]](){}{}({})[({()})](){}(([]))()[]{[]\
}()(())[]()[]({})[][]{()}()(()){[()]}{{}}()[[]][][]{}{}()(){}()(){}{()}[{}][]{}()[{}]()()(){}[][{}][\
()][{}][[]][][]([]){}()([])()(){}{[[]]}{[]}[{}]()([]){{()}}[{}][](){}{}(){[]}(())[][]{}({}){}(){}{{{\
()}}}{()}[]({{[]}})[](){[{()}]}(){{{}}}[[]]({}){[]}{(({{}}))}([])(({()})){[]}[](){}{}[][]{}[]([])(){\
}()[]()[][]{}[]{()}{}[{}]{}[]()[[]](){{}}({})()[]{{}}{}[][]()()[](){}{}([])[]()[](){}[]{}[(())][]([]\
)[]{[]}[[]]()[{}]()(){}()[][]([])[{}]()(){}(){}[]()()()[]{}[]{}()[][]{}()[][()]{([])}(())([]){}[][][\
]{}{}{}{}[[]]()[()]({}){}()()(())[]()[]{[]}(){()}(){}([[]])[](({}))(){[]}[]()()[]([])[{}]{()}[{[]}][\
]{}[][]{}{}{}{}([])[][]()(){{}}[]{()}(){}[]()([{}]){}({})[][]{()}{}({}){}([])()[]{()}{}[{()}]({[[]]}\
)[()][][][][][][]{{}}{()}{[]}{}([[]]){}({[()]})()([])([]){()}()(){[(())]}{[[]]}{}{}[[()]]()[{[]}][]{\
}{[]}{()}{}(())()()(){}[[()]]({})(){}[][]{}{}()()[{}]{}{}{{}}((())){}([]){}{({})}{[{}]}[]{()}{[]}{{(\
)}}{}{}{{}}(({}))[()][{}]()[]()(()){{}}(){}()[]{}{}({}){}{}[]{}()[]()([])()[]()({})([])[][]{}({})[](\
[])[][]{}{}[](){()}()()[]()[[]][][]{}[][]{[]}{}[[()]]([])(){()}()[](){}[][][][{}][][](){[{}]}{}{[]}[\
{}]({[]})[]{}[]{}[][][]{()}[][]()()[(())]({{}})()()(({}))[{[]}]{}([])([[()]])()()([])[][[]][()]{{}}{\
}(){()}[](()){}[[]]()[]{}{}[[]]{}(){{}}[()]({})[]{}{(())}[{}][]()[[{}]]()[](){[]}[]{}{}()([])([()])[\
][][][()]()(){[{}]}{}[{({})}]{({[]})}[][()]{}(){{}}({()}){{[]}}[]()[[]]{}(()){([])}()(){}{}()[]({})[\
{}]{}{{}}{}()[][]()()()(()){[]}[{}]{}()[](){{}}()(()){()}[()]{[]}{}{}()[][][][[]][]{{}}()()[]{}[]{{}\
}[[[]]][][]{()}[][]()[[]][]{{}}()()()()()[]{{}}{{}}[[]]{{}}(){}(){}({})[][]([()])[[]][](){{[[]]}}{{{\
}}}[](){}{}{}[]{}()([]){}[]{()}{}()[[]]{}[]()[{}]()()(){}[][]()(){[]}{}({[()]})()([{}])(){}[{}]{}{}(\
[])[][][{}]()()(){(())}[]{}({})(()){}[][{}]()(())[(())][[]][(())]{}[[[]]](){}[](([[]]))(){{}}[][]{[]\
}{()}[()]{}(({[]}))(((())))[{}]()(){}[][][]()[][][]()[[]]{}(){}{}[{}]{{[]}}{}{}{}{()}([])[[]]{{}}[][\
[{()}]]()([()])()[(())]{}{(())}[]({[]})[([()])]{}(){}[{[]}][](){[]}[](){}{}{}[]{()}{}[{()}](()){}(){\
}{()}[][][{[]}][][]{}{[]}[{()}][]{{}}{}{}(){}()()(){()}{}[[]](){}()[][[]](){}[][][]{{}}()(){[()]}[][\
[]]()(){()}{}(([]))[[]]{}{()}[]()({})[]{{}}{}[]{}[[]]()(){}()[][]()({})()[]{}({}){}{()}[()]{[]}[]{}[\
[]]{()}{}()(){}(()){}([])[]({})[{}]()[{[]}]{}{}[]{}[[]]()()()[]{}{}{{}}[[]][()][][[]]()()[]{{}}[]{}[\
][]{}({})({}){}{{}}[]({[]})[]()([]){}[{}]{}[]{}()[{}][]{}{}[][]()(){}()(){}()[][]({}){}()()(())[]{[]\
}(){}{}[]{}{}{}(())()[][](())[][]{}()(){}()[][{}]{}(){}{}{}[]()(){}(){}{}()(){}[](){[]}()[][][{}](([\
]))(){{{}}}[][[]][](())[](){}[]({{}})[]()[][[]][][{}][[]](())()[][]((())){}(()){({})}[](){}{}{()}{[]\
}[]()[()]([])(()){[{}]}{}({}){}()([])()[][][]()[[()]][]()()[]({[]})[]()()(){[]}[{}](){[[]]}[]({()}){\
[()]}[{}]{{}}(){}{}()()()()[][][]()(()){}()(){}[()]{}{}[]({})[[()]]{}{}{}[]()[]()([])[[]][][{}][]{}{\
{}}{}()[]{}[](())([])[]{()}[]{()}()[](){}([()])[]()[[]](()){}{{}}{}{}()[][][]{}(())(){{}}[]{}{()}[{}\
]{}[][][]()()()[{}]{}{}{}(){}[][][][]{}{}[]()[{}][][[]]{()}({()})[][{}]()[]({{}})[{{}}]{}{}{[{}]}[]{\
[]}()[{}](()){}()()()([()])()[{[]}]{}[][{}][]{}[()](){}()[]()[][][][][]{}({})()[][]{}[]()[]{}{[]}[][\
()]{()}[]{{{}}}[]{{()}}(){{{}}}()()()(){}{}[()][][][(())]{}{{}}({})[]{}{}([])[{{}}][[]]{}[][()]{{}}{\
()}()[]{}[[]]{}()(){}[([[]])][([])][](){}()(){}[]{}[][()]{}[][](){}[][][](()){}[]{}[]{}()[][][[]][](\
()){()}{}{[]}{{}}[{}]{{}}(){()}{{}}{}(){[]}({})()(){}({}){}[](){}[]()(){[({})]}([{[{}]}]){}[]{}{}[{{\
{}}}][[]][]({}){()}[][][[{([])}]]({})[{}][[()]]()[[]]()({}){{}}{}()()[]{()}(())()[][]()(()){{{}}}[{}\
]()[]{}{}(){}[]{}{()}[]()()[][()][([])]()[({})]{}(()){}{}{[{}]}()({})({})()[]{{()}}{}{[]}{[]}[[]]{}{\
}([])[][]{}()(){}{}(())[]{}[]{}{}{}(()){()}()[[]]{}{}[](){()}(){}({}){}{}(){}()(()){{}}[](())[()]{}(\
)[][]{{}}({})[()]({})()()[{}]({})[][{}][]{()}[]([])()()[]{()}{}(){}[{}](){()}{}{}[]{}()()([])()[][][\
]([])({}){}{}()[]([]){}[][]{}[]()[]{}()()[][[]](){{([])}}(([]))({{}})[{}][{}]{}[{[[]]}][]{({()})}(((\
)))(()){}([])(){()}{}{}{{[]}}()()[]{}{}[[]]{({})}{}[](()){()}[()][][](){}[][]{}[]()[][[]]{}{()}[](){\
}()()[]{{}}[([])]({[]})()(())({}){}()[[]]{}{[]}[[]](())()[][](){}[{}]([])[]({})[](){}{}{{}}{({})}[](\
[])()[]{[()]}{}[]([])(){()}[]{}{()}[[]]({}){{[]}}{}(){}[{}]()[]{()}()()[][{}][[]]{}{}[]{[]}()[](){}[\
]{()}[]{}{{[]}}{[]}{}[()][]([])()(())[][][](())()()(){}()(){{[]}}()(){()}[]{{}}()[]{}[]{{}}()()[({})\
](()){{{}}}[]{[]}[]{}[][][[]]{}[]()(){()}()((()))[][][()](()){}[[{}]]()()()(){}{{}}{}{{}}{}[{}]{[()]\
}(){}{}{[]}[]{}{}[()]([])[](())({{}})[]{}()[][()]{{}}{([])}[()]{}()()([]){()}{}{{}}{[]}{}[{{}}][([[]\
])]{()}[{}]{}[()][(({}))]{}{}[[{}]]{[]}[][[]]()[]{([()])}()[]({})[[]]({})[[]][{{}}]{{}}{}[[]]()()[]{\
}[][]{[]}{([])}[{{}}][]{{{()}}}[]({})[[]]{[]}[][]{}(){}[][]{{}}[](()){}{}[]{}()[]([])()({})[]{()}[][\
()]{[]}(([])){()}({})([])[]()[]{}[]()(())[]([]){}[][][][()]()[][](){}()({})([]){{()}}[][{}]{[()]}{}{\
[]}[]{}[]{}[]{}{}{()}[](){}([])()()[]{}[]{[]}(){({})}(){}[()]{}{}(())[{}](){}(){}{[]}{}[][]()[]()[](\
()){}{}()[()][][]{}()[{}]{([])}{}()[[[]]][[]][]{()}[]{}{}{}{[]}{}[]{{}}[][]{}()[](){{}}()(([]))[{}][\
]{}{}[]([])(){}{{}}[]{}[[]][([])](){}(){}{{}}{{}}()[]({})(){}[[]]{{}}{}()()[]()()[]{}[]{}({}){}()[][\
]()[()]{}{[]}{}(){}[]()()[][{}]({})[][]{([])}[]({}){{}}{()}[{{}}]([])[()]{}[]({})[[]][]{}{()}[[()]]{\
{}}()(([]))(){()}[([()])][]()()[()]({})[][][]({}){}[([])][{}]{}()[{[]}]{}({})[[]][][][]{}{}()(){}[][\
]{}()([]){{}}[][]{(())}{}[[{}]]({})()[({})][(([]))]{()}()[][]{}{}{}{}{{}}{}{}({})()[](()){}{()}[{}](\
[(())])[()]((({})))()[{[]}]{}([[]])()[()]{[]}{}[][](){}{}[]{}[{}]{}{()}()[]()[[]][]([])[]{}([])[()](\
)(){}({})[][][{}][[]][]{}()[()]{}{{}}{}()(){{}}[]()([()])[][[{}]]{}{}{}()(){}{}()()(){}[[]]{[[()]]}[\
{[]}][{()}][]()[]()[()][]()()(){}(())()()[]{[{}]}()[]{}()[]{}[[]]({})[]{{}}{[]}[](())()()[{}](){{}}[\
][][[]][[]][([])]{{}}{()}()[]([]){}()[()]{[]}{}(){}{}{}[][]{}()([])({})()([])[()]()[]{}({})[()][][][\
]{}{{}}[]({})()(()){[{}]}{}()[][][]()[](()){[]}{{[]}}{()}{[]}[](){[[]]}{}(){[[[]]]}{}(())[{(())}][{}\
][](())([])()()(()){[]}[][()][](){}{}()(){}{}{}()(())()[][][]{}{}[]{}()()[]{{}}{()}{}{([])}{}[]{}()[\
]{}{()}{[]}([])({})({}){[]}()[]{}[()]{[]}{()}[[]]{}()()[]{[[]]}[][]({[]})({[[]]}){}()(){[[]]}{([{}])\
}()()(([])){[]}{({})}{}[]{}{}[]{{{{}}}}(){{}}()[][]({})(({})){{}}{{[]}}()()[]()()[]{}()()[](())[]{}[\
()]({})([])(())(){}({})()[]{()}({})([]){({})}[]{}{}{}{}{[{()}]}()[{{()}}][[{()}]]{}()[[{}]]{}{}[]{{{\
()}}}{[]}[[{(())}]][[]][{}][()]{}{[[]]}(){[]}[]()[]{()}{}(({()}))[()]{}[[]]{{}}()[]()[]()[]({})[[]]{\
{()}}[{()}]{[()]}{}(){}({[]})[]{}[]()()()[][]{}()()()(){}(){}(){}[]{}{}[[]]{{}}({})(){}()[][]{}()[](\
)([()])[()][{}][{}][][](){}[]{({})}{}[{}]()[]{}{}[]{}[{}]{[{}]}{{}}{()}[][([])]{}[{()}]({}){[]}[]{([\
])}{}{}{}(({})){{([])}}()({}){()}[()]{()}{([])}[][()]()(){}{}(){()}{[]}{({})}{}{}({})[]()()[][](){[(\
)]}[][()](){}{}()[](())([{}]){{}}({[]})()(){}[]{}{}{[]}{[]}(){{}}[]{}()[[{}]][()][][()]{}[][{}]{}()(\
())[]{{{}}}()[][]()[]()()[][]()[{}]{{}}[][][()]()()(){[]}[](){}[{}]{[]}[][][{}][]([])(){[]}{}(){}[][\
()][[]]{}{}[][{}][]{}()[][{}][]{}{}()()(){{}}[][][([])]{{{[]}}}[]{}[]{{}}([[[]]])[][[]][]{[]}([])[{[\
]}](){{[{}]}}{{}}([]){}{}[()]{}[{}]()[()](()){()}{({()})}{}{}[][][({})][]{}[{}]()[[]]{({})}(({})){}(\
(()))[{{}}][][{}][[[]]][](())()()()[]{}{[[]]}{}()[]{[]}[]{}{{}}(){}[{}](())[()](){([])}{{}}{{{}}}[{}\
]{()}()()[({})]{}{}{[{}]}[]{[]}(())[{}]{{}}({}){}()[]{}[](){}{}[]()[]([{[[]]}]){}(){[{}]}[](){}[[({}\
)]][][{{}}]()({}){}[][][]{}[][]({})({{[[]]}})(({{}})){()}[]{}{}[][[]][][]{}[]{()}{}({})()[](){}[](()\
){}(())[](){}{[]}{{}}[][](){}{}[[]][][]()[[()]]{{}}{}{}[][]{}[[]][[]]{}()()()[][()][](([()]))(()){}{\
}(){[{}]}{{}}([])()[]{}()[](){()}(){{}}[[]]()()(()){{}}{}()[()]({{}})([])[()]{}{(())}{}[[]]{}[]{}()(\
[]){}([]){}{}[][][[{}]]{}{}{}(([]))()[{({})}]()(){}(([]))()[]{{}}[([])][({{}})]{}{{}}()[]({()}){}([]\
)()[{[()]}]()()()[]{[[{}]]}[{([[[]]])}][()]({{}}){{}}[[[{[]}]]]{(())}()[]()[]{}{}{}{{}}[]{}[](){}[]{\
}({})[({})]{}[]{{}}[()][]{}([])({}){}[][{}]({})[{()}][]{{()}}{}{}{}{}{{}}()[[()]]()()()[]{}([])[{}]{\
}[(())]{}[](({})){{{}}}{{}}{[]}[{()}][(({}))](){((()))}{[{}]}[({})][{({})}](){()}()[[()]][](({}))([]\
)()[[[]]][]{({})}{}[]{}()[][[]][]([]){[(())]}[](({})){}([])(){[()]}{}({}){}[()]()[]()[]{[]}[[]][]{{}\
}()(){}(())[()]{}[][][]()[{}][{{}}]()()[()][][]()()[{}]({})[[]]{}(){}(){{}}{}[](){}{()}(){[[]]}(){{}\
}()(())[()](){}{}[][{}]()()(){}()[](){}{}[]{}(){}[]()[]{}()()[]()()()(){}(){}()(){}(){}[](())[][]([]\
)[()]{}{{}}()[]()()[][]()[]{}{}{}([[]]){[]}[{}][[]]{}()()()[][][][]()[]{}[](()){}[][]{}{}[](())[]{}[\
](){}[]{}{}{}{}[][{}][]()[]{}{}(){{}}()()()(){}()(){}()[]()[{}]()[{}]{}(())(){()}[()][]()[[]](){}[]{\
}()[]{}()()[][]{({})}{}[[]][]([])((())){([])}()([])[]()[{[]}]{}([])([])(){}[[[]]]()([])[]{[]}()()()[\
{[]}]{}[](){}{}[]{[]}{{}}[({})]()[]{}[]{}{}{}[]{}()({()}){}()[]([])(){}(){[]}(){}{}(())[](())([])(((\
[])))()[([])](){}{()}[]()([])[(())]({}){}()()[()]{{}}[]([])()[][{()}]([]){}{}{()}[]{}[][[]]{}{}[]{}[\
[]](){}[]{}{}{}[[]]{}[][{}]()()()[[]]{}[][](){}[]{}(){}()[][[]]{}{}()()[][()][]{{[]}}{[]}[](())(){}(\
[])[[]][][]{}()[()]()[{}]({{}})()[()]()[()]()([[]]){({})}(()){()}(){}{}[][]()()[()]([]){}[[]](){}[{[\
]}][][]()[]{}()[]([{()}])[[{()}]]{{()}}{{[()]}}[][]{[{}]}{()}[][][({})]{}{}{}{()}{}({})[][]()[][{}](\
()){}(()){()}[]{}{}{}(){}()(){}()[]{}{}{}{}[][{}]{{}}()[(())](){({[]})}{[{}]}[]{{}}{}[](())()({}){()\
}[]{}[](){[]}[]([]){}{[]}()[]{[{}]}[{}]({})([])()[][]()({[]}){()}(){()}{}[][][[]]{}(){}()()()[]{}{}(\
()){}({})[]{}[()]()([])([])[](){{[]}}(){}{{}}[](){}()[[]][][{}][{}](){}({}){{}}[()]{}{}()[{}][](){}{\
{}}[[]][]()[]()(){()}{}[{[]}]{[()]}([[]]){}()()[][][][[]][()](){}{()}[][]()[{}]{}()[]{}()()[]{[]}{[]\
}(){[]}{[]}()[]()[]([])[](){}()[](){}[][][[]]{}{}[](())[{}]()([])(){}{[([])]}[]{}{[{}]}{}()[{}]{}{}[\
{}][[]][][]{{}}()(())()[[]][]{}[][]{()}[](){[]}[()][{()}][{{}}]{{}}({})[]({}){}[][[]]{}()({})[{}]{{}\
}(){}(())[]((({})))[][]{(())}{}{}[{}]([])[()]{()}({})()(){[[]]}[]({}){{}}()[]([]){}[]()[()][][()]{}{\
{[]}}{}[]{[]}{}[](()){}[{}][]{}{()}{}(){}({[]})[([])]({})[]{[]}[]([]){}{}[][][](){{}}({})()[](){}()[\
]{}[]{()}{}{}[{}](){}[]{}[][]{}{}[{}](){}{}[]{}{}([])[](())[()]{}()[{{}}][(([]))](([]))[]()[](){}{}(\
(()))[]{[]}{{}}{}()[()][()]{}[{}]{()}()({}){}{}[]{}(({}))(){}[[]][()](){}()()()[]{}{}[](){}{}()[][[]\
][([])][([()])][]{[]}{{()}}{[]}[](){}()()(()){[]}(({}))[[]]{{}}[[]](())[]{}()()(())[()]{}{}[]()[]({}\
)[]({})()()[]([])[][][()]{}{}[()]{}{([])}[]{[]}{}()(){}(){}(){{}}[]({})[[]](){}{}{()}{}[[]]()()[{}][\
]()[{}]()[]{()}((()))(){()}()[]()(){}(){[]}{()}({})()[][()][[]][[]][()]{}{}(){}()[]({})[](){}(){{}}(\
)[()]{{{}}}(())[]()[][{}](){}([])()(())[][()][]{}[]{}[][]()()[]()()[]{}[[]][{[]}]{}({})[]()({[]}){()\
}{}()[][{}](){}()([]){}[]{}{}{}[]([])([()]){{}}(){[]}[][]()[](())(){}(){}()()[]()[]{[]}()[][[[]]][]{\
}(())()([])(){}[](){()}(){{{}}}{}{}()[]()()({}){}[](()){}[](){[]}{}{}[]{()}[{}](){()}[]()[][()]{}()[\
()]()()[]{}[][]()({}){}()[()]()({}){}{}(){}{}(){}{}[](){[]}{}(){()}[[]]{}[{}][][](){}(){}[][[]][]{}[\
]{}{}[[]]{}{}[][]()[]()[]{}[[]]{}[]([])({})[(())]([])((()))()[{()}]{{}}{}(){}[]{}{}[][]({}){}{}{}{}(\
)([])[({})][{}]()()([])[]{}([])[]()({}){}()({()}){}[][][]{}{()}[](([[]]))[]({{}}){}([])(){()}{[]}{}[\
]([])[]()({})[()](){}{}()[]{}{}()()()()(){({})}{}[{}]{{}}(([]))[]{}({}){}[]()([])()()([])[](){}()()(\
){}{[]}[](){}{}{}[[{}]]()[][{[]}]([]){}((())){}()[()]([])[[]][({})]{}([])(())[[()]]()[{[]}][{}][][](\
())[]([])[][([])](())[]()([])(){}{[]}{()}{(())}{}[()]{}[]([]){}()[{}][]()[](){[]}[[]]([{}]){{()}}([{\
()}])[{[[]]}][{{}}][][(())][{}]{}(){[]}([{}]){}[][]()[]{[[]]}[()]{}{{}}()[]()([])(){()}[][]()()[][][\
][[]]()[]{}(){}(())()[]({})()()()[][{}]{}({()}){}([]){}{[]}({})[](([]))({})()[][[()]][[]]{{}}[]()()[\
]{{}}[{[]}]({})[[]]{}()()[][]{()}[[]][](){}()[]([])[]{}([])[][{}]([])()[](()){}{}[({})]{}[]([[{}]])(\
){{}}(){}{}[()](){}{}([])[]{()}[][{}]{[]}{}(())[](){}[[]]{[]}[{}]{()}()[[]]([]){{}}{{}}[]()()[]()[]{\
}[][]()(){}[()]{}()[]()(()){}{}[][()]{}(){}{}[()]{}{}[{}](){}{()}[]{}(){}()[][][][]{}{}{()}{}{}([]){\
()}[]{}[](())[][][](){([])}[](())({})[]([()]){}(){()}({})()[][[{}]][][][{}]{{}}[{({})}]({}){{{(())}}\
}{[]}{}[[]][{{[]}}]{}({()})[]()()((()))[](){[]}{}()[][]({}){}([]){({})}([])(){}(())[]{{}}[][]{{}}()(\
){{[]}}(){()}[]{}{}(){}[][][](){}[{}]{}{}(()){[]}[[]](){}()[{}]({{}})[]([])[][](){}[]{}({})(){()}[][\
][[]]{}{}()[][{}][]{}[]{}[[]][]([]){{}}{}()()[][][](){}[()]()(){}()(){}(){}[][]([])[{}]()[](){}{}[[]\
]({}){{}}(){}[{}][]{{}}()[][[]](){[]}()[()]{}(({}))[][](){}[()]{{}}[{}][[]](())[][()][][](())(())([]\
)[[]][{}]{}(())[](){}[]{}{[()]}{}[{}]{}{}({()}){[]}{}[][]()[][][{}]{}()[(())]{()}([])({}){}[][]{}()(\
())[](())[]{}{}[[({})]]{}[]{{}}{[[]]}(({{}}))[{}][]{{}}()[]{}[[]]()(){[]}[][[]]{}()(())[]()()[{}]()[\
]()[[]]()()[](()){[]}(){}()[][]{()}[{}]()({[]})[({})]()()()[{{}}](())([])([])()(){{}}[()]()[]{}()[](\
{})(())()({})({()})[{}]{}[]{}([])[]{{}}{[[]]}[]{}[][][[]]{}[{{}}][[]]()[]{}{[]}()(){}[[]](){}{}({})(\
)({{[]}}){{[{}]}}(([]))([])[][({{}})](){}()[([])][[]]{[]}{}({[]})[][][][]{}[({})][](([]))[([])][]()[\
][][{()}]()[]{}[](){{}}[](){}()[]{[{}]}{}()()[]{()}[{}]{}{{}}[[]][{}]()()[{}]{}(())[]()()()(){}[[]](\
){}[]{[]}([])()[{}]{[]}[]{{{}}}(){}({})[]{}{}{}()[()]{}{}{}{}{}{()}([])[]{[]}{}{}()((()))[()](){}{}[\
][[]]{}{}{()}[()][]({()})[]([]){}{[]}{[()]}{()}[()](){}[{}][()][][]()([]){}[{}][][]()()(())([]){[]}{\
()}(){[]}(){}({})[[]][](())[]{[]}[][]()([])(){{}}{}{}()()[]{}[]{}{}{}{}()()[]{[]}{{}}()[]{()}{}()()[\
]()({()}){}{}(){}()()[]()({})()[][[]]{}{()}[][]{}{()}[]{}(){([])}[[{()}]][(({[]}))]()[](){[[]]}{}{{{\
()}}}()()()()({})({})(){}[](){{}}[(())]([{}]){[([])]}[[[[()]]]]{}{([])}([])[]([{()}]){}{}(([]))({({}\
)})[]{{{}}}(()){}()([])([]){}()(){}()[[]][]({})((()))()()[]()[][]()()({})()[]{()}[][()][][]{}{}[]{}[\
]{}{}({}){()}{}(){}{}[][][]{()}{[]}[]{()}{[]}{}{{}}[()][]{[[{}]]}[{}][{[]}][([()])](){[{}]}[]{{()}}(\
())({}){[()]}(){[]}{}(){{}}{[]}(())(({}))()(){}{}(){}[]({}){}()([()])(){}()(())[]{[{[]}]}[]({})[((([\
])))]{}[({[]})]{[{[]}]}(){}()[()][{}][()]([]){}{[]}()([]){[()]}()({}){}[][()][{}][]{}(()){[()]}(())(\
)(){}()[[]]()[]()([])[][{}][]{}[([])](){{}}{([[]])}{{{{}}}}{}[]{{}}[]{}([]){}{}{[]}{}[][][[{}]][]([]\
){}({}){[]}[]{}[{[]}]({})()[]()[]{()}[[[]]][]{}{()}{}{}[[(())]](){()}(){()}{[]}{}[](())()()[]([]){}[\
]()(){}{}{}[]{}[{}]()[()]()()[]({})[]{}{}([]){()}{[]}{[]}[]{}[{}]()()([])(()){()}()[][()][{}][]{}{[(\
)]}()[]{()}{}[]{}()[[]]()[]{}{}{}(([])){}{}()()[]{}[[]]{[]}()(){}{}[](){}(){}[][][]({})()[](){[]}{}[\
]()[[]][()]()[]{()}[][][()]()([]){}()[][(())][][]{[[]]}[[{{}}]]{{}}()[][]()[{}](){()}()[][]()()(())(\
)[[]][]{{()}}{{}}[](){}{}[][]{}[()]{}{[]}[][]{()}[]{}[]{}{}{}{}{}[[]]{}[[]]()(){}[{}][]()()([])()[{}\
](){}{()}{}{()}([])[][{}]{()}[][[]][](){}{}{}()[][][]({})[([])]{}()[{[]}][()](())[][]{}({})(()){{}}[\
]{{}}{}[][]({}){}{}[][{()}]({})[[[]]]({})[]{()}[[()]][[]]{()}()()[]{()}[]()(){}{{}}[][](){}[]{()}{}(\
)[][](){[]}(){}[()][](())[][]()()()()[][]{}()[[]][][]{{}}[][][][]()([([])])[][]{[()]}()()({})(){[]}{\
}()[](())[][]({})(){{}}[({})]()({})[]([])[][]{()}[]{}{}{}[]()[]()()[[]]()[]{}{}[][]()(){}{{}}()()([]\
)[](){}(){}{}[[]]([])[{}]({}){()}[](){{}}()[]({[]})(){}{}{}{}(){}()(){}(){()}()(){}{{}}[()]({})(){}[\
]()()([]){}[][][{}][]{}{}{[]}{}[](())[]()(){}()(){}()[]{}()()[][]{[]}()[{{}}]()[][][](){}[]{}[()]{}(\
)({{}}){}[](){{}}{}{[]}[]()[]()[{}][]{()}{}{[]}{[]}{()}()[[]][]{}{}[{}][[[]]][][[]][]{{}}{}[[]][][]{\
}[]{{}}({})[]{()}[]()[][]()[()]{}[[[]]]()[][[{}]]{[]}{}([{}]){}{}{}({}){}{{}}[][]()[](){}[][]{{[{}]}\
}{({})}{}[{([])}]{{[]}}[[({})]]{}{}{}[]{{}}([]){}[]{}[]{}([()])([])[[()]]{()}[(())]([])[{[]}]{}[](){\
()}()[{}](){()}[]{[]}{()}{}(){{{}}}[{[[]]}]{}{}(){()}()(){}[](){[]}{}()[[]][{}]([({})])[]{}[([[]])]{\
[([{}])]}(){}{((({()})))}({[[]]}){{{}}}{}[[]][][]()()(){}[][()](){}{}{}{}{}{}()[][[]]{}()()[]()[()]{\
}{[]}[]()[](){}{}[][](){}([])(()){}{}[[]]{({})}{[]}()(){[]}{}(())()(())()[]{}{}[](){}{{}}()()(){}{}{\
[]}{}{}[{}]{}{}{()}[][](){}[()][][]()(){}{()}{}(())[][][]{()}[][{}]()[[]]([[]])()()()()()()[[]]{}()[\
()]([])[][]()({[]}){}{()}{}[]{{}}[[]]()[[]]{([])}{}(){[]}[]{}(){{}}[][]{[()]}(){{}}{[]}(()){({})}{[[\
]]}([]){}[]{{[]}}[](){{}}[](())(){}[{}]{}[][][]()()(){()}(){}[]()[]{}(()){()}[{[]}](())[(([]))][]()(\
()){}([{}]){}{}{}{()}({})(){}{()}[]{}[]{}{}[]()[[]]{}{}[]({})(){}{}[][](){}(){}[{}][]{}{}()(()){}[([\
])]{{}}{}[{}](){}(){}()[()]{}{}()[]{}[][[]][]{}{}{}()()[{}](){}(()){}(){}(())[][][]()(){}(){}([]){}(\
[()])[[()]][{}][]{}([]){}{}[][({})][{}]{}{}({})[]{{}}{}[][]{}{}{}{}()()(())[](){{}}[](())[()][()]{{}\
}{[{}]}(())()(())[]{{}}(){}[][][]({})()()[]{}()()[]()[]()[]()[]{}{}({})[](){}{{}}(){}{{}}()(){}{[[]]\
}[]()({})[]()()(){}{}()(){[]}()[]{()}{}()[]([])()[()]{}[()](){}[{}]()[{()}]{()}{()}[]{}{}(){}({}){[]\
}{{{}}}([])[({})]([]){[[]]}[][{}]()[{}]{[]}{()}()({})((())){{[]}}{}[[]](())[][[]][][][{}]{}()()[][](\
){}[](){}()(())(()){}[]{}[][[]][][({})][]()(){[]}{}[[]]()()(){}{{}}[[]]({})[]()({})(){}[]{{}}({})[]{\
}{}[](())[][](){}(()){[]}[{}]([])[]{}[{}](([]))[[[]]][][]{{}}{}[][]{}[]{}[[{}]]{}{}()(){}()()(){}()[\
](([])){}(()){[]}([])[]{[{}]}[[()]][][]{}([])[]{()}{()}({})()[][][{}]([])(){{{}}}[{()}](){{}}()()(()\
)[][]()(([])){()}[]{}[](){}{{}}{}[]({})(){}[]{}[]()[]{}[]([])(())[]()()[[]]([[]])([()])[{}]{}[]{{}}[\
][][](())([])[][]([]){[]}({})()[]{}([])()[](){}[]({})(){()}[](())(){}{}[][]{}{{}}(){{}}[]{}{}{[{}]}(\
)(())((()))()(){{}}{}[{}]{[{}]}[]((())){}([{}]){}[]{}[{}]([])()[{}]()[[{()}]]([[]]){}{[]}[]()()()[]{\
()}{}()(){}(){}()[][]()[]([])[{}][](){}[]{}{}(){}[](){}[]{}{()}[[()]][]{{}}[][]()([])()[][]{}[]{}[][\
]([]){[]}([])()(){}(())[()]{()}()[]{{}}{{}}{}((())){}()[[({})]][][([])]()[{}][{}]()[][]{}(){}{}[([{}\
])]({})[{[]}][]{{()}}[][]{()}[](){{{}}}(())[]([]){}()(())(){}([])()[{}]{}{[]}[]{{}}[][]()()[(())][]{\
{{}}}{[]}[[]]({{[]}})[([])]{}{}{[()]}{[]}([]){([])}{}([])[{}]([]){}{{[()]}}{()}{{}}[]{[]}[]()[{}](){\
[{}]}{{}}[({})](){}()[][](){()}[]{}[{}]()()[]([])[](){}[()]{}()[({})]()({}){}[[]]()(())[](())({})()(\
[()]){}[([])]{()}[]((())){{()}}(){}(({}))()[({[]})][{[]}][]{{({})}}{}()()[]{(([]))}{}[()][[]][()]{}[\
[]]{[{}]}[]{}()[][]{}{}()({})(){{}}[]{}{}(){{}}(){}()[]()()[{[]}][[()]]{}[][()]()[{}](()){()}(())[[]\
][]{}[{}]()(()){[]}()(){}{}[[]]()[[]]{[{}]}{}[]{}{}[()]{}[{()}]([()]){[[]]}[{([])}][]{}([([])]){}[]{\
[]}()[][[()]]{{}}[][{}]{}[{}]({})()[{{}}](){({})}{}[[()]][]{}{{}}{[]}[{}][]()[]{()}()(){}{}{}{}(){}[\
]({})[]{{}}()[]()({[]})([])()[]()([]){}[({})](){}{{}}{}{()}([]){{}}{()}{}[[]][{[]}][][]{()}[]{[]}[][\
]([]){}[]{}{}[{}][](){}({{}}){[]}([]){}(({}))(())()[][]{}({}){}(){}[][][](){}()[]{}([{()}]){}()[][{}\
]{}{}((())){(())}{{()}}[](){}{[]}{}(){[{}]}{}()[()][[]][{}][()][{}]{}[]{}{}{}{()}()[[]]{[]}{}[{{}}]{\
}{}{[{[]}]}{{[([])]}}(({({})}))()[()][{}]([[[]]]){}({[]})(){}[]{}({})[]{}{{{}}}[]({})()((()))()[{}]{\
()}{[]}[()][][]{}[[()]]()()[][]{[]}[]()()(())[][]{}[][()]{}[][]()[[]]({[]})((())){[]}()()[()](){[]}[\
]{{}}{(())}[]([]){}[][](){}[]{}[{}][]{{}}{}{}{}[{}][]{}[]{}[]{}{{}}{[()]}[]{}()()({})(){()}()[]{}{}{\
}[[]]{}[][][][]{}(){}{}[]{()}()[()]{}[]({})()(){}{}{}[]{}[()]{}[[]](([]))[][()][]{}[[]]()()()[][]{{}\
}[()][]{}(){}(){}{{[]}}{{{}}}[{}]{[]}{[]}((({})))[[]](()){[{}]}({})[]{()}{()}{[()]}{}{}{()}{}[(())]{\
}{}[][(())]{}({{[]}}){[([])]}{}{}(){{[]}}{[]}()(){[]}[()]{}((()))[(())][[]]{[]}[()]{}()[{}][][{}][]{\
}()[][()]{}[{}]{}[{()}]{()}()[]()()(){{}}([])[]{()}{}[]{{}}{}()()[][]{}()[{}][{}]()()([])[{}](){}[]{\
}{}()(){}()(){}()()()[][][{}]{}[][](){}{}{}[[]]()()()(({})){}[[]][]{[]}(){}[()]{}[]{}[]{}{{}}[]()()(\
)[][{}][]()(){[]}()()[][][](()){}([]){}[[]][{}](){}{{}}{}[][][]()()[]()[]{}{}{}[[]][{}][](())[][](()\
){()}({()}){}()[()]{}[[]]{()}{([])}(){}[]([()]){}{}[[]][][]{()}{}(){}{{{}}}()[[]]{[]}()(){[]}[][][](\
){{}}{[[]]}{}({([])})([()])()()()[]()[]{}[][()][()](())()[()][](){}(())[()](){}{}()([[]])[]{}(){}()[\
()][]{}(){}()[]()[[]](){}((()))[]{}[][]{}([]){[]}{{}}[[]]{}({})[][]{}{}()(())[]{}()[][()](())(()){{}\
}[{()}]{}{}[{}]{}[{}][][]{()}([])({}){}{}()[]()()[]()[]{}(){}()()(){}{}[]()[][][]{[]}{[]}{}[[]]{}()(\
)()[][](({}))(){}{}[()]()[]()(){{}}{()}{}()(){}[{}][]()({}){}[[[]]]{}[([])]()[](){}{}[][]{{}}(){}{}[\
[]][](){}[](){()}[(())][]()(()){{}}()(){}{}[][][][{{}}]()(()){}{}[]()()(()){}{}{}{()}({})([{}])(){}(\
)(()){()}{()}({}){()}[]{}[]{}()[][]{}([])[]{}[{[]}][]()(){}[({[]})](()){}({[]})[{[]}][][{}][]{{()}}[\
()][{}][[]][()]{}({})(){}[](){}[]{[[]]}{}(){{}}[][][]{}()()[()]()[][[]]()[]()[]{}[[]]()[][]{{[]}}{}(\
){}({}){}[]()[{{}}]({})[]{}[](){}[](){()}{(())}(({}))()[]({{}}){[]}({})(()){()}()()[()][()]{{}}[]{}(\
)[]()[]()()()[][]{}{}()()({})()()()[]()(){}[]{}[]()[][]{}(){}{}(){}{}()(){[]}()[[]][()]({}){}[]{}{[]\
}{}[](())(()){}[][][[]](){()}(()){}[[]][]{}()[[]](){[]}{}[][][]{}[][()](){}[][{}]()()[{}]()()[][]()(\
()){{[]}}(())()({}){{}}[{}]({})[{}][(())][[[]]]()()()[]()([])()[]()([])()[]()(){}{()}[()][][](()){}[\
]()()(){[]}[{{}}][](())({})[][]{()}[{}]{}()()[][{}]{}[]()(())[{}][][()]({})()({})[{}]{()}()()()[()](\
){()}{}()()[()]{()}(){}(){}(){}[{}]()[]{}[][({})](){}()()[]{}((({})))[([])]{[()]}[[]][()]([()]){}[](\
)()()[]()()(){}()()[[{}]](((())))()()(([])){}[][{}][[]]()[]{[]}{}[{}]{}[[]]({}){[]}[]()[][][()]{{}}[\
][]{{()}}[][][{[[]]}]{{}}[{}]{}{}{}(){}(){}{}[]{}()[][][]([[]])()()(){[]}[]{}[][]{}{}(())[]()[][][{{\
{}}}]{}[{}][]{}()()[{}][][][[]]{}([{}])(){{}}[[[()]]][{[[()]]}][[]]{}()()([]){}[]()()[{}]{[]}{[[]]}[\
]()[[]]()[]{[()]}[[]]()(){}(){([])}[]{{}}()[()][](){}{}()()([])(){}[()]()[][]{}[]{}[](){{}}()[[]]{}{\
}()()()[]()[]()[][](())()[[]]{}{[]}{}{}{}{}(){}[][]()[{}]((()))()()()(){}[]{{{}}}[]()(){{[]}}{}{[[]]\
}{}{}[][](){}{}{}{[]}(){}[][](){{(())}}()()[{({[]})}][]{[]}[][{{}}]([])({([])})([{[]}])()({}){[()]}(\
)()[{[[]]}][][]()[]([[]])(())[]{()}{}{[]}{[]}(()){[[]]}(){{}}({[]}){}({})({})()[]{}[{}]{()}{}[][]{}(\
)({})(){}[{}][[]]()(){}([])[]([])()([])([])[()][]{}{}(){{}}(){[]}{{[]}}((())){}[{(())}]{}[]{}{}{}{}{\
}{[()]}(){[[]]}()[[]][]()[][]({})[](){}{}{}([]){}(){}{}[][]([]){}(){{}}{}{}(){[]}{}[[[]]]{[]}()(([])\
){}{(())}{}[]{}[](){}({()})(()){(())}()[][]()(){[{[]}]}[]{()}{}[][]{}[(())]()((([()])))(){([])}[[]][\
][()]{}[](){}[]{}{[]}(())[{}][][](){()}()()[]()(())()()()(){}[]{}{}{{}}()(){}[]{}({}){}[{}]{{}}[]{{[\
]}}([])[]{{[]}}()[]({}){[()]}()(){{}}(){}[]{}{}{}(())([{}]){}()[][]({})(){}{()}{}[[]][]{}[](){}{}()[\
]()()[]{{{[]}}}[]{}[][][](){[]}{[]}(){}[]()({}){}{}{}({})({}){}{}(())({})[()]{}(())[]()(){}([]){}[](\
)()[][[]]([])[]{{}}[[(({[]}))]][]{[]}{[()]}[](){[]}{{[]}}{[{{{}}}]}[]{[{()}]}[]([(())])[][()][](())[\
{}]([([])])()[][({})](())({}){{{}}}(){()}{}(){}{}[]()({()})(()){(())}{}[]()([()]){[()]}(){}{}()[]{}[\
][]{}{}[]{}{{}}(){}()[]{}[]()[]{}{}(){}(){}{}{[]}[()]{}(){}(){[]}{}()()()[]{}({})[]()()()[](())[]{}{\
}{[]}()(){}(){}{[{}]}[]([])[()]({[]})()[]{(())}{{()}}[][]([]){{}}[]()([[]])(){}{{}}{}{{[]}}()({})(){\
}()()()(()){[[]]}[{}]()[{}]([])[][][]()[[]]()[{()}](()){[]}(){([])}[][]({()})()(){}{{{}}}(()){[[]]}(\
{()})(){[]}(){{}}[]{}(){{[]}}([()])(){[{}]}{}{{({})}}{}{[]}{(())}({}){}[()]()[]({}){{[]}}[]({}){}([]\
)[]{[]}[]{}[][]([]){}[]{}{}()[]{}[{}](()){}[{}]{}()()[][][](){[]}{}[][]{[()]}{}[]()([{}])()(){}{}()[\
]{{{}}}([[]]){}[[(())]]{}{}[]([]){}[()]()[]{}[](){}{}{}[][()](())[()]([]){[]}({})[]{{}}{}()[][]({})(\
{[]})()[][](){[]}()(){{()}}{{}}[](())(())(({}))[]()(())(){[]}(){}{}()[]{}{[]}()[]{[]}()()[[{}]][]{[]\
}{}[]{()}{}[(())]([]){}{}{}([])[](){}[]{}{()}[]([])[{}]{{}}(([]))(){{}}[](){}()[]{[]}{}(){}[]{([])}{\
[]}{()}([]){{{()}}}[{}]{}{}[]{{()}}[[]]{{[]}}(){{}}()[]{}([])[](([])){}{{{()}}}()[[()]][]{()}()()[]{\
[]}[]()({{}})()({})()[]{[()]}(([]))([])([])[{}][()][{}]{[]}()[(())]{}({()})({})(){()}(())[]{}{[]}[][\
]()()({}){}[]([]){[{}]}[[]]{}(){}[][]{}[()]()[{}][[]]({})({})()[()](){}()(){}{()}{}[][](){}{}({})()[\
](()){}{{[]}}[]()(([])){[{}]}[()]{}[[]]()(())[]()[{}]()()[][{}][{}]{}{}()[]{}{}()[][]{[]}[]()(){}({}\
){}{}{{{}}}([()]){}{[[()]]}()[]{}[[]][]{}[](){([])}()[]{[]}[](())({[]}){{}}()()[{}]([([])]){}{{}}[]{\
}[[]]()[](()){}[[]][]{[]}(())[]{}{}{}([])()[()]{()}[][[]][([])][](){}([()]){}()(({{}}))((([])))()[](\
)[]{}[]{}{}{}({})(){{}}{}[()][][](())[]{{([])}}{()}{}{}{}{}{}(){}{}({}){{}}[][[()]][][][{}]()()[]{}[\
]{}[[]]({[()]})(()){()}(){}{}({}){}[][]()()({})(){()}{}[[[({})]]](){{}}[]()(())[]([(([()]))])()([{([\
])}]){}{{{({})}}}([])[{[(({}))]}][()]([]){[{{()}}]}[][{[{}]}]{}[]{}[[[]]]([(())])[]{}[]{}()()()([]){\
}()[][][]{()}[][{}]{}{}([]){}[]{[()]}[()](())[{}](){}[][][](){}{}{}[][]{}{()}([])()()[([])][[]]{}[](\
)[()](){}{}[[]][{}](){}()[]{}([])({})[{}]()()[]{}[[]][][()][][]{}()()()[()]()(){}(())()()[{}][](){}(\
){[]}([])(()){{{}}}{}{([])}([])[{}][][()]{{{}}}{}{}({}){}{[]}[]()[]{}{{}}[](){}{}[][[]]{}[{}]()[]{}{\
}[(())]{{}}[](){[]}{[[]]}()({[]})()()(()){}{[]}[]{{}}[]{}[]{()}{[]}[{{}}]{}[]({}){{[]}}{()}()[]{}{}[\
][](){}[]{{}}()(){{{}}}(){()}()[][]{}{}(){[]}{}()[](){[]}[][]{}()[()][][()][[{}]][{}]{}()[][([])][{[\
]}]{}[][]([]){}{{[]}}((()))()(){}(){}(){}([]){}{}[]()(){}(){}[[]][]{}{}(){()}(())()[]([]){()}()[{}]{\
{}}()[][](()){}[]()()[()]{}[][[]][]([]){}[]{}[][]()(){}{}(([])){}()()(){}{}[]{[]}{()}(()){}{}{}()[]{\
}{}(())()[]()()(){}{}[][]{[]}[](){}[]()[][][{}]()()[]()[]()()({}){[]}[][]{}[][]{[]}{}[]({})([])[][][\
][]{}[]{()}[{}]([{}])()([{}])()([{}]){[]}([[]])[](({}))[{}]{}{[[]]}{}{{}}[][([()])]([]){{(([]))}}()(\
((())))[]([])[{{}}]{[]}[][[]]()[()][][][[]][][](){}[{}](()){{}}[](([]))()()[()]{{}}[]{}()()(){}{}[](\
[])[][]{}[][]{}[]()()[][{}]{}([]){}[]{}{}([])[]()[]()[[]]{[]}{[{}]}{}[[()]]{}[{[()]}][[[]]][]{[]}{}(\
[]){[]}(){}[](){}[]([])(())[()]{()}()(){}{}{}{}{{}}[]()([]){}(([]))[][][[]]{}[]{}[](){}{}{}(){{{}}}{\
()}{}([()])({})[]{}()[[]](){}[]()({})()()[]()()()()[]{}{}[]{}()[][()]{}[]{}[]()(()){([])}(){{}}[]{}[\
{}]{}[[]][]((()))([])[{}](()){}()[]{}{}{}{}()()[]{}(())()[[[]]]{}()()(())[()]{}{}(){}[][]({{}})[()]{\
[]}[]([])[][][]{}[][][]()(){}{}[](){}{}()(){}[]{([])}[]{[]}{}({})[{[]}]{}[][()]({})[{}][]()[]{}{[]}[\
]{{}}[][]({}){}[](){}{()}[][[]](){}({}){}[]{}[[]]{}()[{}][]({})()({})([])([]){}{()}[][][]([]){{}}[]{\
}{}()[][][]({})[]({})[][][](){}[]()({}){}{}{}{}{{}}[]()()()[]()()[{()}][][()](){}(){[([])]}[{[]}][[(\
)]]{}{}[{}]{{[]}}[[]](()){()}([])()[](){(())}[[]](({})){()}[()]{}[({})][[()]](){{}}{{()}}()(())[()]{\
}[][][][]({}){}([])[](){}[][[]][]{}{}{}{{}}[]{}{}{()}()()[]({})[][]{}{}()(){}{}(()){}()[[{}]][()]{[(\
)]}{}{[]}{{}}[][]{}[]{}[](){}{}()(){}{()}{}(){}()[]()[](){}{}{}[](){}[][]{}{}{}{[]}(){}(){}{}()()({{\
[]}})[]({{()}}){[{()}]}[]{({()})}{}(())()[]({})[()][][{({()})}]{[{({})}]}[]{}[{()}][({})]()[[]](){}(\
){()}(())()()()()[]{}(){}()[](())[{}]{}()()({})(())(){{}}{}{}(){}[()]({})[{{}}]([])()(())[]()[](())[\
]{(())}((()))(())[]()(())()(()){}[{}]{[]}(){}(()){}[][]{{}}{{}}{}[()](){}{}[[]]{}[{[]}]{}{[]}()[()](\
()){()}()(){}{}[]{}()(())(){}{}[({})]{}{[]}()[]{}{}{}(){}{}()()()[]()[][](){}[[]]()[][]()[][]{}()[][\
][][()]()[()]()(){}[]([()]){{}}{()}[]{[]}(){}{}[[[]]][]()[]{}{}[]{({[]})}{}[]{}{{}}(){}{()}(()){[]}(\
(()))[](){}[]{}([(())])[{[([])]}]{}[{}]([()])[([()])](){}({})()[[{{}}]][{}]{}[]()({})(){}{({})}{}({}\
)(())[]{}[](){}[][][]{}(){}{}{}()[][][]{}[]()[[]]{[]}{}(){}[]{}[[]]{}[()][]{}()[][[()]]()([])(){}[][\
()]{}{}[][][{}]{[[]]}[](){()}{}[][]()()(){}()[{}]()[][]{}()(){}[]{}()()(){}{()}[][]{{}}({})[[]][][][\
][][]({})()[]([])(){}[][][][[]]()(({})){[]}(){}(){}{}[]{}[][]{}{[]}{}{}[][]{}(){}{{[]}}{}([])(()){}(\
){}[][]{}[[]]{{}}{()}()()[][]{{}}[][][[{}]](){}(){}[[]](){}{()}{[]}()()(){}{[]}()[][][]()[()]{}{}{{}\
}{}(){}(()){{}}(){}[]{[]}[][()][()][]([()]){}{}{}(){()}({})[]()[][]({})(([]))(){}[][]{}(()){}{}{{}}[\
[]]()[][]{()}[()][][[]](){}{}[]{{}}{}[]{[]}{[{}]}(())(){}[](){}[][][{}]{}{[]}[]{}[[]]{[]}[]{()}()[][\
](){}()[]()()()[]()({}){}[[]]{}[()][](){}(())[]{{}}{()}(){}()[][][][]{}([])[][]{()}(){}[][][()]({})(\
){[]}{}{}{[]}{()}[]([])[][]()()[][][[]][][][]()[()]{}()([])()[][][]{}()[]{}[]({})[]([])[][]{}[][]()[\
()]()[]()[]{}[](())()()({}){}{}{}[]{}{}[](())()(()){{{}}}(())[][]{}({})(){}()[]()[()]()(){}{()}[()](\
){{}}[]{}()[]{}[][[]]{}([]){}{}[]{}(){}[]()[[]][()][{}][({})]()[][[[]]][]()[][](()){}[]()()[[]][[{}]\
]()[](){}{}{}({})(())([])()(){()}[][()][[]]{}{}{}[{}][]([])[[]][]()[[]](()){}{[]}[()]{}()[][][{}][](\
{()})[][]{{{}}}{({()})}{}([])(){}{}[][](){{}}{}(){[]}{}{[]}(){}[](())[()]()[][(())]{{[]}}{[]}{}[{{}}\
]{}{}{}()[]{}[[]][[]]()([[]])()[()]{}[([])][[]][()](){()}(){}[([])]{}[(())][]()(){}[]([])[](){}[][][\
[]]()[][()]{}{}[][]()[{}][]()(){}[]{[]}{}()({{[]}})[][({})]{}{}[{()}][]{}[]()(()){}[]{}{}{}()[][]()(\
){}()({})[][][]()()[{}]{[]}{[]}[][]()[()]{}[]{}[[]]{{}}{}[()][[]][{}]{}()[][]{[]}{}[]()[][()]{}[]([]\
)()[()]{()}(()){}()()(())[()][][](){}[]{}()()[][]()()[][()][]{}{[]}[]{}{}[][][[]]{{}}({}){}[]{}(){}[\
][]()()[](){}[]{}{()}{[]}[]{[]}(())[]{()}(()){}{}[([])]{()}{()}()()[][][{}]{}()()()(){}{{}}{}()(){[(\
())]}()()(){({})}[][()][][][][{}][(())][{}]{({})}{}{}[]()[]{}[][]{}{}{()}[[]]([])(){{{[]}}}({}){}{((\
))}(){{[]}}[]()[()]{()}(){{}}()()[()][][]{}{[]}(){}[{}](())()[][]{}[]{}{}{}{}[](())[][][][{}](([]))(\
)()[]{[]}[]((([])))()[(())][][]([{}])[[{}]][][({})][([[]])][{{}}][[]]{{}}([])()[]()[](){[]}[][]()()(\
())[](){{}}[]{}{}[]{}[(())][]{}()({})()[()]{}()[()]{{}}[()]{}()()(){}()()()()()(())[]()[{}]([])()[][\
[]]{}[][]{}()[][][]{}[{}]{()}{}()[]()()[[]]{{}}{({})}(){[]}[{[]}][]{}[]{{}}{{}}{()}(){{}}([])(())()[\
]([]){}()()[]{}[][]()()[]()()[]{}()({})[][][[]]()(){}()[{}]{}([]){}({}){[]}{}[{}]()[][][][[]]({})()(\
)[](([]))(){}{}()()((()))()({})()()(())([])[][]()[](){}[]{}()()[()]{{}}{}[]{{}}{}[]({()})((())){}()(\
)()()(())()[]{}{{}}{}()[]{}(){}()[]{}()(){}({()})[](({}))(){}[{[]}]()[{{}}]({[{}]})()[()]{}[([])][{{\
}}]{}[[]][][]{}()((()))()[]{{}}[][[]]{}[{}][]{}()[][]([])[[([])]]()()[[]]{([])}{[]}[()]()[]{}()[{{}}\
]{()}{()}{}[](()){}({}){()}{{}}({})()()[{}]{}[[]]({})[]()[{}]()(){[]}(){}([]){{()}}()()[][][]({}){}(\
)()()(){()}()()()(){}{[]}({()})[]()[]{}{}({}){}()()[](){[{}]}(){}()([])(())[[{}]]()({[]}){({[]})}{}{\
()}()()()[]{[[]]}(())(){{}}[]{}[{}]{{}}[]{}{}{}(){}(){}()()[{}](({}))[]([])()[[]]([()])()(()){}()[](\
[]){}[]([]){}(){()}(){}(){[]}[][]()[]([])[]{}[](){}{({})}[][][{}][{}]({})(())[]([{}]){({})}()(){}({(\
)})[{}]()[][[{}]]{}{}[]{}[][]()[](){}[]{{}}[][]()[][]{}{}[][]{}{{}}{([])}{}[[]]{[]}{[()]}[][][][]{}(\
)[][]()()[]([])(())()[][{{}}]([]){()}(){}{}()(){}[{}]{}{}[][]()[]{}{[]}({{}}){}{}[]{}()()[]{}[{}]()[\
][](){}{}[][()][]()(){}()[][]({}){}{}{[]}[]{}[][][[]]({[()]})(())[]()[{{}}][][](({()}))[[()]]{{}}{{}\
}[[]]{}[]()({})[{}]{}()()()[]({})([])[]()(([])){}()([])()[{{}}]{[]}{[]}[][](){()}{({})}{}{{}}({})[][\
]{}()()[]{}[]()[][][]{{{}}}[]()[](){}({{}}){[]}()[]{}([])[]()[]()[]()()[]()()()(){}{}(){}[[]][](){{}\
}()[]({})()()({})[]{}[]{}[[]]{}{}()[]{[]}({}){{{}}}()[[()]]{}{}[[[]]][[[]]](()){}[]{}[][][][]{}()[]{\
}{}[]()[]{}[][]{}{}[][]()()(){()}(){}{}{}{}(){}{()}[]()[][()]{}({}){}{}{}([])[][]{}{}{[]}[](){}[]{}(\
){}([]){{}}()[[]]()[()]{}{}[][]{}(){()}(()){}(){}[[]]{}[]{()}{}()[]({()}){{[{}]}}{[]}{[]}()()()({()}\
)()[][()]{()}[][][][[]](){}{([])}()[]{[[]]}{}{}()[[{}]]{}{([])}[]{}[][]([])([])[]{}[[{}]][[]]([])(){\
}()[]()()()()()[[]][]{}[][]{}{()}()([])[{}]([])[]({})(){}{}()[{()}][][[]]{}{()}{}{}(){}[]{}[]{[]}[[(\
)]]{}{}()(){}{}{}{}(){[]}{}[]{{}}{[()]}{}[()][()][{[]}]()[]()[][][]{}({}){}{[]}[][]{}{}{}()()()()[[]\
][]{}()[{}][]{}[{()}]{}[[[]]][][()]()[{()}]{}[][()]{}[()]{}{{}}{}()(){}()({})()[]()[({})][]({[]})[[{\
}]][([])][{}]{{[()]}}{}()(())[{[]}][]{[]}(())[{{}}]()[]{{}}{}[]()[()][]{}((())){}{{}}[]{[()]}[](){{}\
}()({})[]{}{}()({})()[()]{}[[{}]]{}(())[]()({})[]({})(){}([])([]){}{()}{[[]]}({{}}){[{[]}]}{}(){}{[]\
}{}()()[][][][]{}[[[]]][{}][[[[]]]]()(())()[]()[]{[]}[]()[[]][]([])[{}](([[]])){}()[()]{}([([])]){}[\
[]][]{{[]}}()({{[]}}){}[{}](({({})}))[][]{([])}()[]()[](){}([{}])()()[{}]({()}){}{}()()([])[]()[[]]{\
{}}[[]]{()}[({})]{}(){}(()){()}{{}}[]()[][()][]{[]}(){}()[{[]}][(({}))]{()}[]{}[[]][{}]{{}}[][()](){\
}()([])(({}))()[]{}[()][][]()(())[]{}[](){()}({}){}{[{}]}{}({{}})[]{}({{}})[]{}{}()()[][[([])]]{}(([\
{}]))(){}[]{()}[()]{[()]}{}[][[()]]{}(){}[](){{}}([])([]){([])}[[()]]()([])(({{}})){()}[([{}])][]{[[\
]]}{{[]}}{}[]([]){[]}(){}(()){[]}[]{{}}[]()[{}][{}]()(){[]}[[]][][]{}{[]}[][](([])){}(){}()(){}{}[](\
){}()({})()()([])[]()[][[]][]{}[]({}){}[][][]({})[]{(())}[]()(){()}{}[][]{{}}{}{[]}{[]}[][]{[]}[](){\
}[](){}{}[]{}{}()([])[]{{{}}}{}{[]}[[]][]()([])(([]))[]{}({[{}]}){}[[]]{[{}]}(){}[][[]]{}{}[{}]()()[\
][][[]]{}()()[](({})){}()()[[()]]{[]}[({})]()[]()[][][]()(){}[[]]()[()][][]{}({}){}{}[]{}(){}[]()()[\
]{{}}(){}[{}]()[]{}[][]()[]{}()(())[][{}]{}{}{{}}([]){{{}}}()(())[()](){}[][{}][]()(){}()[[]]{}({})[\
]{[]}({}){}()()(){[]}()({}){}(){}[](){}(){}[][[]]()[]()[()][]{()}{}[{}]({{}})[](){}()[[]]{{{}}}()[{}\
]{}[(())]{[]}{}({})(()){}[]{}{[]}{}{}{}{}[]()[]{}([])[][]{}{}{}{}{}[(())]{{[[]]}}(){{[]}}{{}}[]{{[]}\
}[[]]{()}[]()(){}{}{}[]()[()]([()])[{}][][()](()){}[[]][]{{}}[{}][](){}[()]()()(())[][()]()[]()[](){\
}{()}(){}()[]{}{}{}()[]{}()()[]{}[{}][](){}(()){}[()](){}(())({}){}[{}]{()}{}[][{}]{}{{}}()()[()]{}(\
{{}})[()][]{}{}()()()[]{()}([]){}[]{}[][]()(){}{}{()}[](){}(){{}}{{}}[]{{}}[{}]{}[[]]()[][{}]{}()[]{\
[]}(){()}[]({}){}[][][]{}[]{}(){()}{()}{}[]()[()][]{}[][][][[]]()[]{}[][()]{()}(){}{}[](){()}{}{}()[\
{}][{}]{{}}(){{}}()({}){[[]]}{[]}{{}}[](){}()[][]{{}}([]){}[]()[({})]()()[()][{}][()][]{}{}[{}][{{}}\
]()[]{}{[]}[][()]{}(())[{}]{}[()][][]()[{}][{}][[[]]]{{}}[({[]})]{}{}{}[](){}(())(){[]}{}[]{}[[]]{}[\
](()){}{}{()}[()]{}(){}[]()([()]){()}()()([])[][][]({}){}([{}])()([]){}()[][[]]{[]}(){}{}()[]{}([]){\
}([])()()()(){()}[](){()}{}[](){}[{}]([]){}{}{}[][](){}()[]{}[][]{[]}{{}}[]()[][][][]{}(){}(){}{}[](\
)(){{}}{}({}){()}{}{{}}{}[](())[][]()[{}]()[][]()[][]{[]}{[[]]}()([{}])(){[]}()[]{}([])(())()[]()[](\
[]){}()()({[]}){{}}[]()()(){}{}[][]()(){}{}[][]()()(())()()[{{}}]{[]}[]([[]])[]{[]}[]()([])()[{}][]{\
}{}[]{}(())[]{}[][][][{}]{()}[]{{}}[]{([])}({})()[]()(){}[][][][[]]{}()[()](())(())()()()(){{()}}[[]\
](()){}[][]()()[]{[]}[]()(([])){}(())[]{()}(())(){}()([]){}()(()){}()[]{}(){}([]){}()(){}()()(){()}(\
){}([])([]){}[]{}{}{}{}{}[]()[][]{}[{}]()[](){}[[]][()]{}{}[][][()]{[]}()()()({()})()(())(){}(){}{{(\
[])}}({{[]}})(){}{}{()}([[]])[]{}{}[][][[{}]]{{}}()(())[](()){}[][]{[]}{}()[]{}([])[]{}[]()()[()][]{\
}{}[][][]{}()[()]{}([])[](){}[](())[]()(())[()]{}()[{}][]()[]()[{}][][{}][]{}[]()()(){}()([()])[][][\
]()({})()()([])(){}[{}][[]]{}{}()[]{[]}()[[]]([])[]()({})[]()[][]{}([{[]}])((()))({{()}}){}()(({}))[\
]{()}([])[{}]{()}{}{}[]{}{}(())[][]([])[{}]{}{}{}{}[]{}{}({({})}){[{}]}{}[{({})}]()()([[[]]])({()})[\
][]{}[[[[{}]]]][][]()([()])(){}{()}()[{()}]{}([])[](){}()()[]{}[][][]()(){}(){}{}{}{()}([])()[[]][[{\
}]](())[()]{}[]{}(())(){(())}[]([[]])[[{[]}]][{{[]}}]()([()]){}{}()()[([])][[]]()[][{()}][]{{[]}}{}(\
())[]{}(){}{}[]{}[][[[]]]({})[][]{}([])()[[]]()(){}()[][[]]()(){}[{}]()[[()]][]{()}{[[]]}()(){}[]{}[\
]{}[]()({})[]{()}{[]}{}(){}(){}(){}([])()[][]()[][][][][]{[]}([{}])()[]{}{}()(){()}[]{}[][][][[]]{}{\
}{{}}(){}[[]]{}[()][][()]()()[()]{}(()){}({}){}{}{()}(){}[()]({[]})([]){}({{}})(){}{[]}{}{{}}()[]()[\
]{}[][][](()){{}}[]({})[]()[][][]([[]])(){()}[][]{}{}[[]](){}()[{}]{}{}{{}}[{{}}][]{}()[]()[]()[]{}(\
()){[]}{}[][]{}[[]]{}[]{}{}([()])[][[]][][{}]()()[]([])()(){({})}[{}]([])[](){}[]()(){}[][]{()}{}{}(\
){}{}{}[][][()][][](())[]{}[]{}(){}{}({()})()(){()}([])[{}]()()[]{}{}()[[()]](())(({{}})){}(){()}{}[\
]{{}}{[]}([[]])([()])(()){}[]{}({})[{}]()[]{}[]{}[](){}{}[()][({})]{}[[()]]({})()(){}[]{[[]]}(())[[[\
]]]{}[[]]{}([])[{()}]{}()[]{}{}[]{}()[]{}()[]()[](){}[]((())){[[]]}{[()]}(){[()]}[]()()(){}{{[]}}{}(\
)[]()()(){}{}[]()[](){}[{}]{}[]{}{}()()[]()[]{{}}{}{}{}{{}}((()))([])[][][]{}()[]([])(){}((([])))(()\
){({})}[{()}]({}){}{{}}[[[]]]{}[][]([()]){}{}[]()[][]()([])(){}{{}}()[]{}[(())]()[][][]([{}])([[]])(\
[]){}(({}))(){()}[](){{}}()[[]]{}(){}[][]()[](())[]()([]){()}([]){}[{}][()][]{[]}[[{}]][{}](()){}[][\
()][](()){}[]()(()){}{}[()][](){()}{}{[]}{}[]{}{}(){()}()()[]()[{}]{}[]{}[]{[]}()()({})[]{{}}[()][()\
][]{{}}()()()[{}]{}{({})}([])()()[]{}[{}]()[][]()(){}{}(){}[([{}])]({}){(())}{}[][][[]]([]){()}(())[\
]{}[][][][[]][]([[]])()()(()){[]}[][][]{[]}()()[]{}{[]}()(){()}{}{}([[]])[]{}([]){}[[]][]{{()}}[]{{}\
}{()}()[[[]]]()[()]()()()[]()()[][][()]([]){}[{}]{}{}[{}](){{}}[]()()()[[]]()({})(){()}[]{}[][{}]()(\
){([])}[()][{}][](){}[{}](({}))[]({})({})()(){[]}[]{}()()(())()[]()()()(())[]{}{}(){()}{}[]()[]{}{}(\
)(){}{[()]}(()){}[]{}[][()]{}(())[]{}()[](){}()[[]](){(())}[[]][[[]]](){}{}({()}){[{}]}[]()()()[()]{\
}{}[][[()]]([])[[]][{[]}][][]()[[[]]]{}[][]()()[][]{}{{}}[][][]{}(){{}}[{}][[[]]]([])()[()]{}{}[]{}(\
)(){}[{}]{}{()}[](){}[](){}[][]{}[][][]([])()([])[]{}{[]}(){{}}()(){[]}()[[]]{}([])(){}[[]](){}(){}[\
[()]][]{{}}{}()[][]{}()(){}{}[][](())[]()()[{}]{}(())()[[]](){}(){}[{}]{}{}{}{}[]{}(())(){}[()]()(()\
)()[{}](){}[]()()(){}[](())[][[]]()()[]([]){}([])[]()[[]]{}{{}}{}[()]{}{()}[][()]()[[]][{}]{}()[]()(\
){}{[]}()()()[][]{}{}{}[[]](){{}}[][](){}([])[]{}[([])][((()))]([])(()){}(){[]}[{}]{}{{}}()[]{}[]([]\
)[][{}]([{}])(){}[]{}()(){{{}}}()[][]{}[()]{}(){}[](()){}[][][]()[][](){}[]{}{}()(){[()]}{()}(){()}{\
}([]){[()]}(){[]}{}{}()(()){}[][]()[]{}(){}[][][]()(){}(){()}[()][{(())}][]{}{}()[]()[{[]}]{[]}{({()\
})}[[[]]](((())))([])(){}[][][[]]{{[]}}(())(){([])}[]({}){}{([[]])}{[]}(())()(())[]{}{}{{}}[{}][]()[\
]()()()[]({}){}[][][]()()[]{}{{}}[()]{}{}([])[]([])[](){}[()][({})]()()[[[]]]({}){}(){}{}{}[]()({}){\
}[][][](){[]}{}[]{}([]){}()[[()]][{}]{{}}(){}{}[{}][][]()()[()][]{}{}()[]{}([])[](())[{}]{{}}[]()(){\
[]}{}()()[](){()}[]()[()]()([])()(){({})}(){()}({})()[](({})){}[]{}[]{}{}{}{}(){}[()]{}()[()]{{}}[][\
[]]{}{()}{}{}[[[]]]{}[()]({}){}([])[][]({}){}{}()(()){}()[]{}{}{}{}()()()()()()[]{}[]{}{[]}(()){}[[]\
][][]([]){}(())[()]{}{}{}({})(())[][][]()[]{}{}{[]}[][{}](){}{{}}[[]]{}(())[{}]()[{{}}]()(){}{}{()}(\
[[]])[]{[]}[]()()[]()[[]](){}()[]()()[]()[][](){}[]{}{}(){[]}([])()[][][](()){}[]()(())[][()][]{}(){\
}[][{}]()[][](){}([])()[]{{}}{[]}{}(){}{()}[]{{}}[]()()()({})(())[][]{}{}{}[]{}{}{}[]()()()()[]([]){\
}{}[][()](){}{}[]()[][](){}[][][([])]{}{()}[][{{}}]{}[]{{}}(){()}{}[][][][][][][[]]{}[][{[]}]{}{}{[(\
())]}()(([])){[()]}{{}}()()()[]()(){()}[]{}()[][{}][]()()({})[]{}()()[{}][][]{}{()}{}{(())}()[][](){\
}{}[]()([])()[]()(){}{}([])(){}{[]}()[[]]{{}}()[[]][]()[](){}(){}([]){()}[]()((())){}[[]]{()}{}{}()[\
()][[{}]][]{()}([()]){}()[[[]]]{[]}[{}]()[](())[]([]){}[]()[]{}[]()(){}{{}}{}([])[[]](()){}{}[]({}){\
}[][]([])[]{{}}(){}{}[]{}{}([])[]()[{}]{}{}{}[][]({})[][]([])[]{}()[{}][][[]]()(())()({})({})[]([]){\
}()([{}])()[]{}[[{}]]()(()){}{}([]){}({}){}[]()()(){}[](){}()(){}[]{}(){}{}()(){}()()()[]{}{}[]{()}(\
)[][]{{}}[][()]{}(){[[]]}[{[[]]}]{{()}}[]{}{}()(){}{}{}[]{}{}(()){}{{}}{}[][{}]()()[()]{{}}([])()()(\
[]){{}}{}{{}}()[][]{}[()]()[]{}{}{}[]{}{}[]{({})}(())[{}][]{[]}()[{}]{{}}{}(())()([]){}{}{}[]{}()[](\
)[](){}{}(){}(())()()(({})){}()(){{{}}}(){[]}{}[()][[]]{}{}{}{}[][{}]({[]})[]{[]}[](()){}(){[[]]}({}\
){[{}]}{}[]{}[](){}(){{}}{}{}{[]}()[{}]{}{[]}{}{}([])(){[]}[][][][][()][[]](())[]([])()[](){}()(){}{\
}(){()}()([])()([]){}(){}[]{}(){}[]()([[]])[]()[]{}{}[]()[][]()(())[{}]()()[][]{[()]}[{}][]{[]}({{}}\
)([])()()([[()]])[][{}]({}){[[]]}{}[]{}{}[{}]()[][]()[(())](())[]()[]{[]}()()[][](){}(){}[{}]{}(){({\
})}[{}]{}{}()[]({[{}]})({[]})([()]){}[]{[]}{[{{}}]}[]({})[{{{}}}]{()}()(){}[({})]{}[{}]{}{()}[]({}){\
([])}()[](([]))({})()()[[]]()(){{}}()(){}(){}[][{{}}]([])[{}]{}()()[()][()]{}[{}][]{}{}()[]{}{}{()}[\
]()(()){()}{}{}()[]{}({{[]}}){{[]}}()[[()]][[[]]][](({}))({})[()][]{}(){}([])[][]()()[()]{{[]}}({})[\
]{}[][](())(){{}}([[]]){}[]{({})}{}[[]]{}([]){{}}{()}()()[{}]({})[]([]){}()({()})[[]](){()}()({}){}(\
[]){()}{{}}{}[{}][[]][][]()()[()][][][][{}][]{}(())[{}]{()}{{}}()()({{}}){}{}{}[](){}[][]()()[][][](\
){}(){}{}{{}}[]{[]}{}{}{}{}{}([[{}]])((())){()}{{}}[{[]}]{}()[]{}[]{{}}(){}{}[{}]{()}{}[][{}][][{}]{\
}()[][()]()[{}][]([]){}[{()}](){}{{}}()(){}(){}{}{}(){}[]{}[](){}()[{}][]{}(){}()[]({})()[]{[]}[{}][\
]{{}}()({()})([()])[[]]()[()][[]][][[]]()(){}{}()[({})][][]{}()(){}{}{}()[][][{}][]{[]}(){}[()]{}[{}\
](){[]}[[]]()[()]{()}{[]}()[{}]{}{}[]()[]{}()()[[]][](()){()}()[]{()}()[()](())()({})({})()[]{{}}([]\
)()[[[]]][][][]()[{}][](){[]}[][{{}}]{}()[([])](({[]}))(()){{{}}}[]{}[][{{}}]()[]((()))[]{}{()}(){}(\
){}()()({})[]{({})}([])({()})(()){}[]{}[]{}[]()(())[{}](())()()[]()[][]{}()[]()([]){}([])()()(()){}(\
)(()){[]}[][(())][]{}()[][]([])([()])(){}()[](){}(())[]{}(){}[[]]{}{}[][[[]]][{}](())()[]{}{}{}()(){\
}{}()(){}{()}[[]]{{[]}}[]()[]{}{{}}()(){}[{}]{{}}[][]([[{}]])(())[]{}[[{}]][][({{}})]{[]}{}[][[]]({[\
()]})({[]})(({}))[()]({})(())()[()]{}{[]}{}{}([])()[{}](()){{}}()[]({})[]([{}]){{}}[][]{}{}[][][]{}(\
)[]()[][[]]([])[]()(){}[]()[{}][]{}(){}[][]()({[{}]})()[(())][]({})[]{([[]])}({})(){}()(){}(){{()}}[\
]{}()([])()()[]()()[]()[](){{()}}()()({})()[{}]()(){{}}[]{}()(()){()}()[]([]){}[{()}]({})[][]()[{}][\
{}][()]([[]]){([])}([[[[]]]])[()][][{{({})}}]([[{}]])[][]({})()[]()()[]()()((()))[[()]]{}[]{}([()])[\
][]{}[()][](([]))[]{}()(([]))[[]]{}{}[][][]()[](()){}()[][{}]{}(){{}}{}{}()[((()))](()){}({([{[]}])}\
)[]{{[(())]}}[]((())){[([[]])]}{}(([]))(){(())}{}[{}]{}()(()){}[]{{()}}[](())({})[()]{}[]{}[{}]([]){\
}{[]}{}(){[]}{()}()[]{}[]()[]()[{}]()({}){}[][]([])[]{}{[]}[[()]]({}){}({})((()))({[]}){}[][[]]{()}(\
)(){}{{}}{[]}[][](())[][{{()}}][][]([{}]){}[][][](){}()({}){[]}[][][]()([])[]{}(){}[]{}[][{}]{}(){}[\
]()({()})()()[[]][{}](){}{}[]([])[()]([[]]){}[{}][][][(())][][][(())]{()}{()}[()](())(())[][]()[][]{\
}()[]{}(){}{}()({})({})[][](()){}{()}(){}()[{}][][]()[][()]()[{{}}][[{}]][()]{}{{}}[[]][()]{()}{{}}[\
][[]][[{}]]()[]{()}[[()]]()[[[]]]{}{{}}{}{}[[]]{}[]()()({})[[]]{[[]]}[]()[]{}[([])][]{}{}(){}{{}}(()\
)[][[]][][]{}([]){{}}[]{{}}()()[]{}{}{}{}{}{}([])[{{}}]{}(()){}([()])([])([]){}{}()[](){}([]){}(){}{\
}[{}]{[]}[]{}[{[]}][{}]{}{}[]{}{}{}(){}{}[][]{}(())[][(())]()()[][]{}[{}]{}[{()}][][[]]()[](){}[]{}(\
)[](()){{}}(){{}}{}()(())(())[]{}[](){{}}{}({{}})(())[{}]{}{()}()()()(){}{}([])(){[[]]}()()[]{{}}{}(\
)[](){}()(){{[[]]}}[{}][{[]}][][{}][{{}}][]{{}}{}(()){({})}(()){()}{}{}{}{}[[]][]()[][]()[[]]{}{}[](\
[{}])[[]][[]]{}{[]}[[()]]([{[]}])[]{{}}{{}}{}[]{}{()}([])[]{}([()])()[]{({()})}(){}((()))({[[]]}){{(\
)}}([({()})])()[]{}(){}({}){}{}[][]()[({})]{}[]([])()[]{[]}[](){}({[]})[]{[()]}{(())}{}{}{}{}{}{}[[]\
][](){}()[()][](){}(())([])({})[]{}[](()){}[][]{}[][][]{}[]{[]}{()}{}{{}}()()[(())]({})()()[]()[][](\
)(())()[]{}()[[]]([])[{}]{{[]}}([]){}{}()([]){}((())){}{[]}[[]]{}()[]{}()()[]{}{}()()(){[]}{[[()]]}(\
){()}[]{[({})]}{}{[]}{}{}{[]}[][{}](){}[[]][]{{[]}}({})()[][(())][{{}}][][[()]][[{}]]{()}[]{}([])[]{\
}[][[]]([()]){}[]()[][][](){(())}[{}]({})({[]}){([])}()[[()]]{{}}{[]}()({}){}[](()){}[][]()[[]][({})\
([]){}{()}[()][]()(([])){}()([]){}[][]{}{}(){}[][]{}[]{{}}{{}}{()}{[()]}{()}(()){}[]{}[()]()(){}[]{}\
()(){()}{}(){{}}{}{}{}[]()()[](())[](){}()[()]{}{[]}[{}][]()[]{}[]()([])[]()[][][]{}[][]()()[][][()]\
[][]()(())(){}()[()]{}{}{{}}(){}[][]({()}){}(())([[]])({}){}()[][]{}()()()(())()[]()[][][[]]()()[([]\
)][](){[()]}{}{}(()){}{}{}{}()[{}](){}{({})}[](())[()]{{}}[][]{}[{()}]{{()}}[]()(){}()([])()[][{[{}]\
}][()][(())][][]([])(){{}}()(())[]{([])}[]{}{{{}}}()(())[][]{}[]{}[]{()}[][[[{}]]][]([])[{}]{}{{{}}}\
[][[()]]()[][([])]{[]}()()[[[]]]()()()(){}[]{[{[]}]}[][](){}{}()[]{()}{}{(())}{({})}{([])}[](({})){{\
{[]}}}{[{}]}{}()([])[][[{}]][][{}]{}[{}][([])]{()}()[][]{}[][]()(){}({})()[[]]{}{}[[]]{}{[]}()(){[]}\
()[][]{}[[[]]]()(())[]{[]}[]()()(){}[]{()}{}[]()[]{}{{}}{}(){}[][{}]()([]){}{}({[]}){}([{[]}])[]({})\
{()}[]()[]()[]()(){}()[]()()(())[][[]]{}{}[]({()})()([])[]{}{}({})[][[]]{}()[][{}][][()][([])][]()()\
[](){}()[[]]{[]}[][]()()(){}{}{}()({}){}[](())[][]{{}}(){}[{}]{}([])(){}[][][]({{}})([]){}()[][][]{{\
}}[][{()}][]{[()]}{}[][][[]][][]()[()][](){}()[]{}{}()[]()[[]][]{}{()}[][]{()}{}(())[]{}{()}[][]()()\
()[][][{}]{([])}(){[]}[()]{}[][]()[][][]{{}}()[]{}[](){}([]){{}}{{}}(){}(())[{}][[{}]](()){{(())}}[]\
[{}](){}[]()({})[]{}(){}()(){}()[]{}()(){}()[]{[]}[]()(){{}}[][]()()(){}[]{}[{{}}]()[](){}([]){}({})\
[][[{}]]()[{{}}]{}{}{}[([])]({}){{{}}}(){{}}{}[](){}{}[]{}{}()[[]]{[]}[]()()[]()[]()()[]()([])[](){{\
}}{[]}{}{}()[[]][()]()(){()}{}({})()[](())[{[]}]()[[]]{}[][](){[{}]}[{}]{}{}[[]][]{(())}{}{}{{}}(){}\
[{}]()(())(())[()]()(){()}[]{}{[{}]}()[]({})()()[][]{}{}{{}}{}[][][][]()[]()[{[]}]{[]}[()]{}[[()]]({\
}){}[]()({}){}{()}{}({})[](){{}}([]){}{{}}{}{()}()(()){}[]{}{}[[]][][{}][](){}{{}}{{}}{}()()()(){}({\
})()()()(())[]{}[](()){}()()[]()[](){{}}[][[]][][{}]{{}}{}(()){}{}[][{}][{()}][][[]]()({[]}){[]}{{()\
}}(())[]{}[{}]({{}}){}()[][]{}({})[](){}[]([])[][[]]{{}}[{}][](()){}()(()){()}()()({}){}({})[](){[]}\
(())()[]()()[()]{}()()[][]{}[][()]{}()({}){}{}[]{}{}{}(){}{}()[[]][]()[]()()()[{}]{}()[][]()({}){}[]\
([]){}[]()(())()(){}[]{([])}{}(){[]}{}{[]}(()){}{}[]{}[]()[][{}][]{}(({}))[[]]{}([])[]()[][][]([[{}]\
]){(([]))}{[]}()[]{}{}{}{}[][][{()}]{}[()](({}))()[({})]{}{{}}{[]}(())()[()]({})[]{}[](())([])[[[]]]\
[][]()(())[]{}{{[]}}({})[]()[]{{}}[][()][()][]()[]{{}}{[]}{}()[{}][]({})()[]()[()]{[]}[[{}]][]{}({})\
()(){}[][[]][][()]{[]}{[]}[()]{}()[][](){}{{}}(){}()()()(([])){}[]()[{}]()[{}](){}[]{[]}(){}([]){}{}\
{(())}{}()([])(){}{}[()][[]]{()}{}[()]{}()[()]{}()(())()(){}[]{}()[]()[()][]{}[()]()()[]{}()[()]{{}}\
[]()[][[]][([])]{[]}()()[]()[{}][](){[]}{}[[{}]][{}]{[]}()([])[]{}[{[{}]}]{}()[[()]]({[]})(())(){}()\
()[()]{}()([])({({})})[]()([]){{()}}[(())]{}[()]{{}}{}[{}]{}()()({})[][][]{}[](){[]}[{()}]({()})()[]\
[]{}[]{{}}{}[]{}([]){}{}([{}])()[[[]]](())[]{}{}{}{}[]{}[][()]({})[[]]{}{}{{}}{()}{}{}{}(){}(){}[()]\
[()](){}()({})()[()][]{{}}()()[]{}{}()[](){(())}(())([]){}(){[]}{{[]}}{}[][][{}][](([]))()(()){()}{}\
[()](){}()[][{}][]{}{}[]([])({})[](){}([])()(){}[]{}[()][](){}[{}]{{}}{}[()][][][]{}[][[]][][]([])([\
])[{}][][]{}{}(){[]}{}{}{}{}()(){}{}{}({})()()[]({}){}[()][()]([])[[]][{}]{}{}{}{}{}()[{}]()()([])()\
[]{}(())()[()]{}[()]{}(){}{}[]()[[]]{}()({}){}{()}[][][()]()([]){}(){[]}[](){}[]()()[]{[]}()(){}{}([\
])[(())]()(()){}([[]])(())(){}{}([])({}){}()[](){[]}[]()()(){}[]{}[()](){}[][]{[]}{()}[{}]{}{}{}[[]]\
[](){}()({}){}[[]]{}{}()()({})(){}(){}[][][](){}()[][][]()[](){}[]{}[]{}{}{{}}{{}}{}(){}[][]{}()()()\
{{}}[]{{}}(){}()()({})[[]](())[][[[]]][]{}([])(){}[][][][()]{}[][](){}[]{}[]{}()()[]{}(){}()()[()]()\
{}[]{}[]{[]}{}()[]{}[()][[]]{[[]]}{{}}[][()]{}{()}[{}]()[[]]()[{()}][]()[{}]()[]()()(())()(){}{}()()\
()()(){}[[]][{{}}]{[]}[([])][][]({[()]}){}[]([])()[[{}]]{}{}([()])[[]](){}{[([])]}{()}{}([()])[()][]\
[()]{}{}[][{}][][{{}}]()[][][[()]][]()(){}(){[]}({})[{}][]()({[[]]})()[][()][]{}[](){()}{}[](){}[]()\
{}[()]{}[](){}()(){()}{[]}[]{[]}{}({{}})[][()]{}[](([]))(()){[]}[]([()])(){}[]{}{}()[]([])()[][]{}()\
[()]{()}(){}{}()[{[]}]{}(){{}}()[]()()[[{}]]{}[][][]({()}){}[](){}[][][()]([()])([()]){}[[]]{}{}{()}\
{}[][][](){}[][{}][](())({})[]([])[{}]{}{[{}]}[][]{()}{{[]}}{([])}{}[][()]{{}}[]{}{}{}[()][](){[]}[]\
[{}](())[]((())){[]}(())[[]][]({})[({})]()[()]{}{[]}()[()][()][][][][]{}([])[[()]]{}(){}[{}]()[]{[]}\
()[]{}((()))[][][[]]()[{}]{}(){}()([])[](()){}{[]}()[()]([])()()[][]{}{()}([])(){}({}){{}}[{}]{{{}}}\
()()[[]]{()}{{}}[]()()[[]]{}{}[][]()[][{}](){}()({{}})[()]{}[{}][]{}[{}]()()(){}{}{()}{}(){[]}(){}{}\
[()][]{}(){}()[()][][]{}[][](())[]{}(){}()()[[]][]({})[]()({})[]()[([])]([{}])[[]]{}(())[][]{}()[][]\
{}[]{}{}[]{()}{()}()()()[][]{[]}[]{}{}[][](){()}{}[[]]({})[][()][][()]{{}}()[[()]](()){[]}({})()[][]\
{}{}[]{{}}{}[({})]{}()()(){}{}(){}[()](){}[()][]([])()[]{}[](){()}{{}}[]()[]{}(([]))(())[]{}{}(){}[(\
)]{}{}[{}](){}[]()(){}()[][]()({})([]){}[]{[]}[[]][]{{}}({})()(){}{}(){}()()(){}[()]()()({})()(){}{[\
]}(){}{}[][{}](){}[]{}()[()][]{}()()(())[{[]}]()(){}(()){}{}(){}(()){}[]()[()]{{[]}}()[{}][][][][]{}\
[()]{{{}}}{}{}(()){}[()]({()}){}(){}{}()(){}[][](({}))()(){}([[]])({})[][{}]{}{}[]{}{}{(([{}]))}{}[(\
[[]])]{}[]([])()(){()}[]{}{}()()(())[]{{}}[](){}{}{}[][]{}{[]}[](){}{}[](())(){}[][][][]{[(())]}([()\
])[]{()}{{}}[[{}]]({}){({()})}()(({{[]}})){}()[](({})){}([[]])()([])[]{}(){[]}{}{[]}({{}})[[]][]()()\
{}{[()]}(){()}[]([[]])[]{}([]){}([])(){}[][[]]{()}[][(())][](){}[{}][]{[]}()[](){[]}[{}]{}()[]{}()[[\
]]{()}{{}}[](){{}}{[{}]}[]{}[]()(){}{}({})(()){}([])[()]()[]{[{}]}[]{}(){()}(){}(()){{}}[]{}{([])}[(\
)][]{}{}{[()]}()({})()(){([])}[]{}[](())()[]{[]}()[]{}{()}[()][]()[][()]{()}()[[]](({})){}[()][]{}{(\
)}[]{}{}[][](())(()){}[{}]({})([])[][](){}()(){}[]{{()}}[](){}[]{}[{}]{()}{}[][()][]{}(){}()({})[]()\
()[][()](())()({}){}[()][]()(())[][{}]()(){}{[]}({({})})[[(())]]()()()((([{}])))[]({[[{}]]})[][]{[((\
))]}[()]{{{}}}[[]][]{}[](){[[]]}[()](){()}()(){[]}[]()()[]{}{}()[][({{}})]{}[][{}]()[]()[][{}]()(){}\
{}({})[]{}[(())][]{}[()][{}]{()}[](()){}()()(){}()()({}){}{[]}{}([[]]){}[()][]{()}()[]()[]{}[]{}(())\
[]{}{}(){}[{}]()({[]})[[]]{}[][](){{}}(){[]}()({[]}){}[](())[]{{}}{[]}[]{{}}{}()[]()(){}()()[][][][]\
[][]{[]}(){}{{}}()()[({{}})]{}{({})}{}([()])()(){}()[](){}[[]](){}{}[][[]]{}[()](){{}}[]{}[()][]{}{}\
{{}}{}{}({})()()[()][][][](){}[][{}][[]][([])]({}){}()[]{}()[](){[]}([])(){}{}([{}])()[]{{[[]]}}[()]\
{(())}{()}{}[]{()}()([]){}{[]}{}()[]()[()][](()){}(){}{}[]()()[]{}[()][{}]{}[]{}[]{}(){()}[](){}()()\
()()[[]](){}[()]()[][]{}[][][]()[](){}{}()[]{}{}[]()[]()[{}]()(){}[](){}{[]}[()]()[]()()()({})(()){(\
())}[]([]){()}{([])}{}{({})}[]{}[]{}([])[](()){}{}[([])][][][(())]{}{}[[]][][]([])()[]{}[()]()[]()[]\
[]{{}}{}[]()[][](())[[[]]](){}()[][][]()[()]{}{()}{}{}[][][][][]{}()([{}])[][{}][][][]{{}}[]{}({}){}\
()[]([])[]{()}()({})[]()[{{}}]()(){}[][]()()[][]({}){}(){}[[]]{}{}()()[[]]()()[{}]{[]}{}()[](){}(){}\
()[]([])[[]]([{}])(){}[][]((())){}()({}){}{}(){}{}()[](()){}{}[][()]()(){[]}{}{}{}[[]][{}]()[][{}][]\
(){}(())[][[]]{}[[{()}]][]{}[]({{}})()[][([])]{}{}{{[]}}{}{}[]{}()()(){}()[]{{}}[]{}[]{}{}[]{}{()}[{\
}][]{}[{}][](){}[[]][]{}{[]}[][][]{[]}[{}]()()()()(()){()}[]{{}}()[]{}([])()(())(({}))()(){}()[][{}]\
{()}[]()()[()]{[]}(){}()[]()(())(())[{}]{}(())[()]()[](()){{()}}([]){}[[]][()]{}()()[(())]({}){}{}{}\
[]{}[][]{}([])[](){}{[]}[][]()()[]{[]}()()(){[]}[]()()[]{}()()[]()[][]({})[]{}[]([])()[[]]()[][]{}{}\
{}{}()[]{}()()[]()()[](){}[]()[{{}}]{}{}()()(())[()][][(())]{([()])}(())(())[][[]]{}{}()()[][]()[{}]\
({()})({[]})({{{}}})()[](){{}}()(){}[[]]()[[]]{}{{()}}(){}(){}(())[()]()[]{}[]{{[]}}{}()[]({[]})()[{\
[]}]()(){()}[]{}[]{{()}}[()][]()[][{}]()()[([])][([[]])](){(())}([()]){}[](){{}}([])([])[()][][][]{}\
{}{[]}[][()]()[](){}()[](())(){}[]{}()()[]{}[]{}{}[{}]()[{}][()]{}[]{}{}{}[{}]{}[][{}]{}[]{}[]()[]()\
({([{}])}){[{[()]}]}()((([])))[]()[]([({})])({[]})[[]]([{{[]}}]){(())}[]{{[({[]})]}}[()]{{}}[](())([\
]){}{()}{{}}{[]}()(){}(){[]}[([{}])][][][]({}){}{}{}[][](())[{}]({})[]{}{}{}[]{}{}{[]}{}()[]()[][][]\
[[[]]][{}][]{{()}}{{()}}({}){{}}[][()][]{}{}{}{}[]{}{}()(())[]()()([()])([])[]()[]{{}}()[][][]([])[[\
]]({{{}}}){((()))}[{()}][]{}{[]}([])[()]{()}()[{{({})}}][[]][][]([[]])[[(())]]{}(([])){}[]{(())}[(({\
}))]{}{}()()(){{}}{}{}()(())[][]{[]}[][]{[]}{}{}[[]]{}[]{}()()()()(){}[](){}{()}{[()]}()(()){}[](())\
()()[][(())][{}]{}[]{}(){}[][]{()}[]({})[]([[]])()([[]])[{}](){}({})()[][]()()(){[]}(){()}{()}[]{}({\
})()[]{}[][[]]([]){}[][][[]]()(){}()()[][](){[]}{{}}()[][([])]{}(){}[()]{{()}}[][({})][][[]]{{}}[]{[\
{}]}[]{}{{}}[[]]()[(())][][[]](())(){[()]}[][[]][]()({()}){[]}(){}{{()}}{()}[{}][][{}]()[]()[{}]{}((\
)){}{[]}(){[]}{(())}[[]]()()[][]({})(()){()}[{{}}]{{}}[][](){}(){}[{}][][]{}[]{}{}{}{[]}{}[]()[[]]()\
[](){[[]]}()([])()()[{([])}]{}{}[]([])[]{}{}[{()}]{}({})[][{()}]{}[()]()(){}()[]{}[][][]()(())[](){}\
()[]()[{}]{{}}()[[]][()]()[]{}(())(){}(){}{}[()]((()))[][()][{}]({()})[()]()([]){}{}{()}{}(){}[]{}{(\
)}[]{}()[]{}([]){}[]{}()()[][](){}(){[]}(([])){}()([]){()}{()}{}[](){}([[]])[[]]{({()})}[][]{{{[]}}}\
{}(){}()(([[]]))()({[]})(){}{}(){}(())()[]()[]{[[{}]]}[](()){}()[][][{([])}][](){}()()([]){()}[][[[]\
]]([]){}()[()]()([])(){()}{}(){}[][][][[]][]([])[()]{}()()([[()]])({}){}{[()]}{()}((([[]])))()[[]]{}\
(){}{([])}[][](){}{}[]{({})}(()){}[{}][()]({})[][[]]([{()}])[]{([])}[][{}]{[]}[][]{[]}{}()[]{}[]{}[]\
()()(){{}}[]{}[](){}()[([])][](){}[()]()[{}]{{()}}[][](){}()()[]{}[][()][][{[[]]}]{()}{{[]}}[]{}[]{}\
{}{}()()(())[](()){}[][]()[][][{}]{}[]({}){{[]}}({})()[][[]](()){}[{[]}]{[]}{{}}([]){}{[]}((())){[]}\
[]{}[]()[{}]{[()]}{[{[]}]}[()]{}[(({}))]{[[]]}[]{}{}(){}{[()]}()(){}([])[]{}({})(())({})()[{}][()]()\
[](){}{}[][{}][[]][{}]{}[][]{}[]([])[{}]{[()]}(())(([]))[][{}](){}()[]{[]}{}(())[]{}(){}[()]{{{}}}([\
])[]((()))[]()([()])[{}][][][]([()]){[[]]}{}{}(())[]{}{}{}{(())}{}({}){}{[]}{}[](){{}}([])[]{}[][[]]\
[[]][]{}{[]}()[]{[()]}[{}][](({}))[][](){[]}{()}()[()][](){}()[][{}]()()[](){}()[]{(())}()[]([])[][]\
{()}[](())[]{}[][]()[][][]{}()[]()[][][]()()[][]()[]{}(){[]}[](){}[]{}{[]}{[]}()[[]][][{}]{}{}{}()[]\
(())[[]]{{}}[][][]{()}[][]{}[]{}[][()]{}{}{}()[([])][][[]]{()}()[[]]()(({})){}[(())]([]){}[][()][][]\
{}{}(){}{}([])()()[]{}(){}[]{}{}{}()({}){}[{}]()[](){}[]{}[](())[]{{()}}[[()]][[]][]{}[[]]()()()[{{}\
}](){[{}]}{}{}[][]{}{}[[]]()[]{}()[]{}()()[]{}[](){{}}[([()])]{}[][][[]][[[]]][[]][]{}(){}[]{}(()){}\
{()}[]{}{()}{}()()[()][][[()]]{}[][]{}(){}[]{[]}()()({})[]{}()[]{}{{}}{{}}[]()[]()(){()}(){}{}[]{}()\
[]{}{}[](()){}[][]{}[{}][]{()}{}{}(){}[]{}[][{}]{}[](){[]}{{}}(){}(()){}[]()([()])()[][][]{}({})(){}\
[][[]]{{()}}[][]{}{}[][[]][]({})((()))[{[]}]{}{{}}{}{}[]()([])[]{}()()([])()[]{()}([]){}()()()({})[[\
]](){()}{}({})()(){}[{{}}][{}]({})[([])]{[]}{[{}]}[][]{[]}()[](){}[]()[](){()}()()[[]][]()({})([]){}\
[](()){}[]([]){}[[()]]()[][](()){{}}()[](){}[](())([])[][]()(){[]}[]{}{({})}[[]]{}[]{}{({})}{()}(){}\
[[]]{[]}(){{()}}{[]}{}{}[[]]()[{{}}][]()[][]{}{}[]({{}})[{}][()][]()((({}))){[]}{()}{{[([])]}}{[]}{{\
([{}])}}(){}((()))[]()[{{}}]{()}{}{}()[{}][()]([])()(){}{}[]()[]{()}[][][](){}(){}{[]}[]{}[](()){}{}\
[]([]){()}[[]](){[]}[][()]{{}}[]({})()[()][]()()[]()()()(){}([])()[]{[]}[()][]{}{{}}[][][][][](())({\
})[[]]{}()()(())(){{}}{{}}()[][[]]{}{}{}[][][][][]{}[][[]](){}()[][][{}][]{[]}{}[{}]{}[]{()}[][]{[]}\
{}{[]}{}{}{()}{}()[]([()]){}{[]}[{}]{[]}{[[()]]}(){}[][([()])][]{}{}{()}[][]{}[]{}()([[]])()(())(())\
{}{()}[]{}{}[([])]()[[()]][(())][{}](){()}{[]}(){}[][][]()[{}]{}{}{}{[]}()()()[[]]{[]}([])[[]][()][]\
[()](())[][({})]()[][]{}{}{}{}[()]()[][]{{}}{}{}[][]{{[]}}[][]{(())}[{}]()()[][[]]()[][][()]{}{}{}[]\
(([]))()[[]][()](){[]}{}()()[[]][()]()({}){}[]()[[]](){}[[()]]{}{{}}()[([])][][]()()({()}){{}}{}{}()\
{}[](){}{}({[]})()[][](){}[][{}]{{[]}}()[][](([]))(){()}[][[]](){}{[]}()()[]{}{}{{}}({})()[()]{()}{[\
]}()()[]{}()[]{}[][]()[]()()()()()[]()()[]([])(){}[]([])[]()()[[]]{}{{}}{}()()(){}[](){}{}[[]]()({()\
})[()][]{}[](){}[()][{}][{}]{}[()]{}[]()()(){[]}{}({})([])((())){}{}{()}{}{[{}]}{}[]({()})([])[{}]()\
[]{}()[[]](){}[]{}{[]}()()[]([])(){}(){()}[()]([])[]({}){}(){([])}{[]}[()]{}[][([])](){()}{{}}[]{{}}\
[[[]]][{[]}][]{()}[]{()}[][](){[]}([]){}{}[]([])[()][]()({{{}}})[]{}[]()[{}]({{}}){}{(())}{[]}()[{()\
}][]()()[[]][]({})(){{{()}}}([[]])([])[][][]{}[[(())]][{{}}]{}({()}){}{()}{}(())[([])][][]{()}([])()\
()[][][]()()[()]{}()[[]]()(){()}[][[[]]]()[]({})[{}]{}[]{[()]}{{}}()(){}([()])[{}]{()}({{}})[](){}([\
[]]){}([])()(())()()[][]()(){}[](){[]}{}(){}({{}})()({()})([[()]]){[[]]}()(){}{{}}{}()[]()[][](){}[]\
{}[]{}(){}[]{}({})()[()](){[]}{}(){}()[][]{{}}[([])]{}[([])]{}{{}}{}[[]]{{{}}}(())[[[]]]{}[[()]]{}{}\
([[]])(){}{()}()[][]{({})}({()}){}[]([([])])[]{}{}()[]{}{}{}{}([{}])()((())){}(){({})}([[{}]])()(())\
[][{{}}][][][{}][]{}[]()[[]][](([()]))[]{}{}{}()[][]{[{}]}{()}[][][][]()[]{}([])()[{}]()[]{}([])({[]\
}){}{}[[]](){}[][][]{[]}()[]{[[[]]]}()[]([()])({}){}(){([])}([]){}()()[][()][]{}[()]([]){()}[()][][]\
[][]([])(){}[](){}()(())[]{()}[](){}(){}()[][()]{}()(){[]}{}[[]]{{}}{}[](){()}{}[][{}]([])(())()[]()\
[]()({()})()({})(())[{}][]()(){}[]({}){{[]}}[(([]))]{[()]}[([[]])][]()()()()()[[{}]]()(({{()}})){}([\
{}])()()([])[[]]({})(())[()]()({})()({{(())}}){}{()}()(())()()[]{}()[]{()}[]()[][([[([])]])]((({[()]\
}))){}()[]{[{{[]}}]}[{}]()[]()[[]]{{}}[]{}([]){[]}[[]]{()}{()}[[]]{}{({()})}{}{{()}}(([]))(({})){}[]\
[({{{}}})]{}{[(({}))]}[][{}]()[{[{}]}]{}[][][]{{}}{}({[]})()[{{}}](){}()(){()}{}{}{}({})({})[{[]}][[\
()]][]({})()({}){}[({()})][](){({[[]]})}(()){}{}[](({[]}))[](){}({})([]){[[({})]]}([])({})[]()()[{}]\
{()}()(){}{}()[]{}[](){}(){{}}(()){()}{}(([]))(){}()()()[][()]([])()[][]{}([[]])(([]))([]){{}}[{}][]\
[{}](){{}}[]([])[][](){}[][]{{}}{}{}[]()(){{}}[({[]})][]()[][({()})]{}{()}[()][]()(({})){}({()})[([]\
)]()[](({})){}(())(){}(){}[][]({})()[[]][]()(){}{}{[]}[()]()[]{}()[]{}[][]{()}({}){}{}([])([])()({})\
[][][][()]()[]()()(())[][]{()}[()]([{}])(){()}{}()(){[]}()()()([])[{}]({})[]()(()){}{}{}(){{}}[]([{}\
])[](){}[](){()}{}({})[]{()}[][][][](){}()()()[]{}(()){}()[][](){}{}()[][][({})][]{(())}{[]}(){}[{}]\
({})[][]{[]}(){{}}({}){}[][][[]][](){}()([[]])({}){{}}[](){}[][(())](()){[]}[][]{}{()}{[()]}()(){}{}\
[]{}{}(){()}[[]]{()}()(){}(){}(())()[[]](){}()[][]()()({()})(()){}[](())(){}[]([])[()](([]))[]()[]{}\
{}[[]][]{{{[]}}}{}{}[](){[]}[](())[{}][][[]]()[][]{()}[][](){[]}[][[]]{}{}{}{}[]{}()[]{}{{}}()()()[{\
[]}][][]({})[]{}(){[]}[]{}[](){}([])(()){(())}{{({})}}{{}}{}(){}{}()()[(([{}]))]{[[[([])]]]}{{{}}}((\
{}))({}){{}}{{}}{}[](())(({}))()[()][][()]()[]{()}()([[]])([[]])({}){}[][]{()}()({})[[]](){}[][][]((\
)){}[]{}()(())[][](){}[](){}{}[]{}{}(){}{()}{}{}[][][]{{}}[]{()}{}[]{}[]{}[]{}{}()(){{[]}}[{}][[]]{{\
}}[][]{()}()([[]])[]()[][{}][]({{}}){}[]{[]}(){}[][()][]()[][]()[][]([()])(){()}(){}[]([]){}{{{}}}{{\
}}[[]]()()[{}]{[]}{}(){}()[]{[]}[]{}[]{}[]({})[][{}]{}({})([])[]{[]}{{{}}}{}{()}{{}}{[]}[[()]]{}()[]\
[{}]()[[]]{}{{}}([{}])({})(){()}{}(){}{}{}[()]{}(())[][]{}{}[{}]()()[]{{}}()()[][][]{}[]{}[](){({})}\
(())[]{}[]([]){({})}{}{}[]{}{}([])(){[]}[]{}{}([{}])({}){[]}({}){}{}(){}[][][]()()[]{}((()))(){{}}[]\
([]){}(){{}}{}({}){}{}(){}[]()(){}[()][]({([])})()[[{}]][[]]{}({[{}]})({[]})[]([(([]))])[[]]({[()]})\
[](){}({})([[]])()([{}])()()[][][][][]{{}}(){}({}){[]}[]({}){{}}[]{{}}(){{}}()[]{{}}{{}}(){}{}{}{}{}\
()[]()[[]]()(){[]}{()}[]()[][]({})()([])(()){}()([])(())()({}){}{}{}()({}){{}}({})[][[()]][]({}){}()\
[]{}[]{}[][](){}{{{}}}[()](){[]}()(){}(){[]}{([])}[][][][{}][{}]()([]){}[[]]{}{}{}[][][][]{()}{}{}()\
(())[]{[]}(){}()(()){{()}}((())){[]}{[]}{{}}(()){}[]()[]{}({{{}}}){[[]]}{}{[[]]}{}({[{}]}){}[]()([])\
{}{{}}{[{}]}[()]{[()]}{[[]]}{[[]]}()({[[{}]]})(){}{[]}{}()()[](){}()()[][{[]}]()[()]({})()[()][]()[{\
}]{()}[]({}){}{[]}{(())}[](){}{}[]{}{}[{()}]{[]}(()){}{}{}{{}}{}(){()}[][]{}{}[][]()[[]][{}]{}{({})}\
{}{}[][]{}([])()()(())[]([{[]}])[{({})}]{}[](){}[(())]{}(({}))[[]]()({})({[()]})[[[]]][{}]()()[][][]\
[]{}()({})[]{[]}[]{[]}(())[()][][][]{[]}[]{}[{}][()]{}[]{}(())[][][{}][]([()])()()()[][{}][]{}[()][]\
[][([])]{}{}[]{}({{}}){()}()[{}]([]){[]}{}{{}}{}({[]})()(){()}{}[][](){{}}{}()[()][][{}]{}{{}}{}[{{}\
}][][]{}(){()}{}(())(){}(){()}{}[][](){{}}[](){}{}[]([])[]{}(){}[]{[]}(())()(){}{}{}{}{}()[[]]{}[[]]\
([()])([([])])(){}[()]()({[]})[{}][]({[{}]})()[()]()[]{{[]}}()([{}]){}[{}][[()]][{}]{[()]}(()){}[]{(\
)}{}{}{{}}(){{}}[]({})()[{}]()[]()[()][[]]({[]})()[]()((())){}()[]{}[({})]([[]]){}[][][[]]({()})[{}]\
[][][{()}]{}{[]}{}{{}}(){}(){}(){}{}()[]{}[]({}){}({}){}([])([()])[[]]{}(){}({})[]{}{()}[][][]()(){}\
()(()){[]}()[()]{}()[]{}{}{}()[]{()}{}{}[[]][[]]{}(())(){}{}[]{()}()[[]][]()()(){}[]()[]{}{}[]{}[[]]\
{{}}(){}([])[([])]{}{}(){}{{}}{}[][][][][][][]{{}}[]{}([])[]{}({})[]({})[]([]){()}()([])([[]]){}([])\
()(){}{}[]()[()]{[[]]}{}{}[]{}[{}]{([])}()[][()]()[{}][()]()[[{}]](({})){[]}{}({[]}){}()[]{}[](){}{}\
[][][]{}{}()[](())()[()]({})[[]]{}[]()()()[{}][][][](){}(())[]({})([()])([])(){}{()}[]{}[{}]{}(){()}\
{}(){}{()}()()([])[]([])(){}[]{}(){}[{}]()[](){}(())[][[]][]()[()]([]){}{}()[][()]()[{}][](){}{}[]((\
))[](())[]()(())[][()][]{}{[]}{}{}(())[][{}]{([])}[{}]()[]{}()[]{}[][]{}[]()()({})[[]]()(){}(){()}((\
{}))()[{}]({})[]{{{}}}[][[]]()[{}][()][][][][][]{}()[]()[](){}{{}}[](){}{[]}{}{}{{()}}[][[()]]([])()\
()[]()({})({}){}{}[({})]()()(){}(){}[()]()()[]{[[]]}[{}]()({()})[][()]{}{}[{}]{[{}]}[](){}({}){}{[]}\
(()){}{[]}()()[()]{}{}()[][{[]}]{}{[]}(){}(){}([])()[][{}]()[][[{}]][]([])([]){[[()]]}([()])(){}[]{}\
{}(())[][][](){}(){}(())()[][]()()(){}()(){}[]{[([])]}[[()]]({{}})[[]]([[]]){{[]}}{}()[]{}[][]()([])\
{[]}()[]()[[]](())[{()}]()[]{}{}{{{}}}[[]][{}]{}[{{}}][]{}(){}{}{(())}([])()[[]]{}(())[][][]{}(())({\
{}})[{}][{}](){}([]){{}}[([])]()(){}(()){()}[]{}(){}({}){[]}(){}([[]]){[]}[][][](){()}()()[](){[]}{}\
{}{}{}{}{}[][][][]{}()()([])[](){}[]{}{}{}{}[](){}[{}][]()[()][]{[]}{{}}{[{}]}[][[{}]]{}()[]{}{}{}{}\
[](){}[[]][]{(())}{}{}()(([]))[](())[][[]]([[]])({})(()){[[]]}{{}}{[{}]}{}([()])[]{{}}([]){(())}[]()\
({})[][]{()}[()]{}()()()()[{}](){}()[]({})[]{}[]{}{()}{{}}[][](()){()}[{}]{[]}{[]}[](())()[](({})){}\
{[()]}([]){}(({[]}))({{}}){}{}{{}}[][[{()}]]{}({{}}){{()}}[][[]]([()])([])()[()][]{}[()]{}{[]}{}[]()\
[()][{}]{}()[()](){}{}{}[]{}{}(())[][]([]){()}{}()(){([[]])}[]{{}}(())()(){{{}}}[]{}[]{([])}({()})((\
)){[]}[{}]([]){}[]{}[()][[{}]][[]][]()()[]{}{()}{}[{}]()[]{()}{}{{}}{}{}()([])()()()()[]{({})}[]([[]\
])[]{[{{}}]}{}[]{{}}{}()[]{}[]{}[{{()}}][]({})()(({}))(){}[]{}{}[]()({{}})[][{}]{}([]){}()[]{}()([])\
()()[{}]()()[{()}]({})()([]){}{}[({})](())()(()){[]}(){}[]({}){{}}([])()[](){}[]{}[][][]()()[]{}([])\
{}()[][][]{}()[]{{[()]}}{}[{}]([[]])()[()]{{}}()[](){}{[]}[]{()}[](){}[[[]]]{({{}})}{}([[]])()[]({})\
{()}()()[]({})([[]])()[(())]({})[]{{}}[[]][][]{()}{}(()){}[]{}[][]{}()(())()[]{}[][{}][]{}[]{}()[][]\
{}[]([])({[]})[{}]{[]}[]{}()()(){[]}([])[][{()}]{[]}[](([])){}(){}()[]{[()]}({})[]([([])]){()}[({})]\
[]{[]}{}[]([]){({})}{{}}[({})](){{}}[][]()[][]{{}}{}{}[{}][[]][]{}{{}}[][]([]){{}}()[][]{}[{}]{}(){{\
()}}(){{}}()()[][][]{}(())[]{[()]}()()()()[]{[]}[][][][]{({})}[]([])[]([]){}{}[](())[[]][]()[](())[]\
[[{}]]{[()]}({})()[]()()()()()[][{}]{}[]{}((())){[]}({})[()]({}){([])}[][][]()[]({})(){[]}({}){[{}]}\
{[{}]}{([])}[]{{}}(())({}){([])}{()}[][[]]{}{[()]}{}(){[]}{}{({{}})}[]{{()}}[([])]()[[]]{([])}{}{{()\
}}(){{}}()()[]([([])]){}[][][]{}(())({}){}{}({()})(){}(){}[{}](){{}}()([])()()()(())()[()]{{}}(){}{}\
()()()(())[][][][{}][]()[](){{}}[{}]{}[]{}(){}[]([])[]{}(){}{{}}[]{}[]()[{()}][]()(()){{}}([]){}{}{{\
}}[](())[]{}{}{}()[][]{{}}{}{()}{}[][](){}(){{}}{}[][[]]{[]}{}({}){}[][][()][]({})[](){}([])({})[]()\
(){}{}()()[[{}]](){()}{}[]{()}{{}}()[[]]{}[]{()}{}[]{}[]{}[]{{}}{}(){}()(())[][]()[][]{}{()}{()}[][]\
[{}][[]](){}()()[]{}{}([]){}{[]}(())[({})][()][{}][](){}[]({}){}{}[]{{}}[[]]{}()[{}]{()}{}()([])()[(\
)]()[](()){}[[]][][]{}{}()[[]]()[]({[]})[]{}[]()[](())[]()[]{}()[]{}()[[]][]([[]]){}[[]][]{}[]{}[]((\
))(){}({()})()[]()()[()]{()}[[]](()){}()()[][]{}{}[][][][]{}{}(){()}()(){}{}[]{[]}(){}{}()[][]{}[]()\
[][]{{}}(({})){}{}[()]{{}}[]{}()[{}]()(())()()(())()(())[[]](){}[{}]()({})()(){[]}{}(){}{}([])[{()}]\
()[][]{()}[{}][([])]{}{{}}()[]{}[][][][]{}{}({}){[]}{}[][[]][{()}][[]][]{{()}}()()[]{{{}}}[()]()[]{}\
{}(())(())()(()){[]}{}{}[][{}][][]{{}}[](())(){}(){{}}([]){}()(){()}{}{[]}{}([])[{}][()][](())[]()[{\
}]{}{}{}(){}(){()}()(){}{}{}([])()[]{{}}[]{()}()[]()[]{}[]{[{}]}[[]][()]{[]}[([])](){}()[]{}{}()[]{}\
{()}()([]){}(())(){}[]{}(){}()(){}[]{}{}(())[][[]](){[]}[]{{}}{[]}(())(){}()[]{}(){()}[]()[({})](){}\
{}[]{}{}[]{}{}()()[][]{}{}{}()[()]{}{}[](()){}(){}()[[]]([{}])[]{}()[()]{}(){}{{}}[({})]{()}()({()})\
{}{()}()({{}})(())({})[][[]](){()}[]{}{}{()}{{{}}}({()})()[]()[][{}]{()}{{}}()[()]{}{}[][[]]{}(){}[]\
[]{}([]){{}}()[]{}{()}[]{}[[]]{}{}()(){}{}[{}][{}][](){{({})}}((()))([()])[]{}{}(()){}{[]}{()}[{[]}]\
({})(())()(){}({()}){}[()]{}({}){[[()]]}([])[](())[]()()([])[][][{()}](){}()()([])[][()]{}[()][][][{\
}]()(){}()(){}({}){}()(){}[()]({}){}[][][]{}(){}({})[[]]{}()(){{}}[]()(())[{}]{}[[]]{}(()){}(){}{()}\
()[[]]()[][][[]]{}(){[]}{[]}{}()[]((()))[]()[[]](){{}}{(({}))}[{[]}][]()(({}))()[[[]]]{}{}(){}()()[]\
{[]}[[]][]{()}()()()(())[()]{}[][]{}{}{}([]){}{()}()()(()){}{}[]()()[]{}(){}(()){{{}}}[]()({()})[()]\
{}{}{[{[]}]}()([{[{}]}])({{{}}})()[]()({[()]})((()))()([{}])[]{}{}[{}][{}][]({})[()][{{}}][]{{[]}}[(\
())]([()])[{[]}]{}{[]}()()([{([])}])[]((()))[][](){()}()[{}](()){}{}()()()[[({})]](){[[]]}{}{()}({{{\
}}})[]{{({})}}[{{{}}}][]{}(){}(()){}[]()({}){}()({})[()](){}{([])}{()}()[][][]{}[{}][][]{}{[]}{}{}({\
}){}[([])][]{}[[{{}}]]{(())}[]{}{(())}{(())}{}{[]}()[][[{}]][]{{()}}([{}])()[][]{[]}[][]{()}()[]()()\
[]()[]{}{()}(){[]}{}()[]{}[()]()(())(){}{}{{}}(){}[]()([()])[()]([[]])({()})[{}]()[(())][]({[]})[][]\
({}){}()[()]()()[()]({})[][]{}{()}[](){}[()]{}([])(){}(){{}}({}){}[][][][]{}(){}(){}[{}][]{}[]()({})\
{[]}{}(()){{}}[][](())()()()[](){}[][]{{}}{}{[()]}({[]})[{}](){{}}{[]}{}()[()]{[()]}(){}{}{}(){}(){}\
()[()]()[]{}()({})[{}](){}{}(){()}({})[](){()}[]{}[](())[]()[](){}()[()]()[]{}[()]{}{}[](())[](){}{}\
{}{[]}()[]{[]}{{}}{{}}[][][]({})[{}]{}(){}{}{[]}[]{[]}[][[]]()[{}][]()()[()][{}]({})(){}(())[()]([{[\
]}])[(())]{}[[]](){}{}[{[]}]{}{[]}[]{{}}{[]}()[]()(){}()[][{}][](){()}[]{}()[]([])[][]{}{()}{}[[{}]]\
[{}][()][](())[(())]{}[]{}[][]()()(){[]}[[]]{}[]()(){()}[]{}()()[][]{}()()[]()([]){}()(){}[]()()()()\
(){()}[][()][{}]()[]{}[][]{}[()]{}(){}()[]()([])[]([]){[]}[(([]))]{}(({}))()[[]]{}{}(){{}}()(){}[][(\
)]{{{()}}}{(())}{({})}(())[][]()[]()()(){}{()}[(())]{{[]}}(())()(){}[][[[()]]]()()(([]))([])([]){}{(\
)}()([]){}[[{}]]{}([])[]{}()()[]()({})[]()()[[]][][[]][]{}{()}{}(){()}[()][]{}[](([]))(){}[()](){}[]\
(){}{{}}{[]}[][](()){}{}((())){}{[]}(){[()]}(){}{[]}{{}}[[]][]{{}}{{}}{}{}(())()[][]()[][](())[{[]}]\
(){}[]{}{(())}({}){}(){}()(){()}(){[{}]}{{}}{()}()()()[{}][]{}[{}]{}{}()((()))({[]}){}[]{{}}[]{}[][]\
({}){}()([])[][]{}[{()}]{[]}[{}](){()}[]{()}{}[]{}[][]{[]}{()}([[]])(){}({}){{}}[]()(){}{}[]{}[]()[]\
[]{}{}[]()[][]()()[]{{}}(){}{}{}(({}))[]()({})[]{}()[()][()][]{{}}()[]{}[]{()}[{}]{}{}{{}}()()()[]()\
{}{}(){}()[][]{}[](([]))([])()()[{}][()][][]{}([])[[[]]]{[[]]}{{}}[()]()(()){({})}(())(){[]}(){}{}{}\
[]{()}{[]}{()}[][][]{[]}{}{}()()[[[]]][[[[]]]][({()})](())(()){(())}()[]()[{[{}]}]()[{[]}]()[]()[()]\
[{}][]{}{()}()[]()[][]{}{}([])()[]{}{}()[]()(){[]}[{{}}]{}{{}}[][](){{}}()[()][[{}]][][][][]({()})()\
()()[[]]{}()[[[{}]]][{}]{}([])[[]]{[()]}(([]))[()][()]{}()([])[](){}{{}}(())[][](())[[[]]][]{}()[]{}\
()()[]([])(){{{}}}(())([]){}{{}}([[]])([()]){}{(([[]]))}[][{{{}}}]{[]}(([])){}()[()]{[]}[[]][]([])([\
{}])(){{}}()()[]{()}(){{}}[{}]()[]()[[[]]]({}){}{}[][]({})[]{}(){}{[{}]}[{}]{()}{}()()(){}()(){}[[]]\
()[]{}()()()[]{}()[]{}()({})[]{}{[]}({}){}[{}]()[]()(){([])}{}{[]}{}[{}]()[][][()]{}[]()[[]]([])([{}\
])()()()[]{}[][]{()}(())[]({}){{}}{}()[]{}{}({})(())(()){}({})([]){}()(){}{}[({})]()(())[[]][](){({}\
)}(){}()()[]{}()[]([])[](())()[]{}()(){}{({})}{[]}[]{}({})({})[][][()][]({})[][{}]{}[{}]()[][()]{}()\
{}{}()(){[]}[]{}()[]{}[]()[](){}{}[]{()}{}()[()]{}{{[]}}()()[]()[][{}]{{}}(){()}()(){}()(){}[()]({})\
{}[](){()}()[]{[]}(){}({()}){}{}{[{}]}[][]()(){}[]()()()()(){}{}[][]{{}}(){()}[[]]()[]{{}}{}({[]})[]\
()[{}][]{}{()}{{}}{[]}()[][]()[]{}{}{({})}[()]{[]}[](){}[](){[]}(){}[]{()}([])[]{}{}[[]](){[]}[{}]{}\
[{}]{{}}(())[][][]([[]])[](){}()[]{}[[]]({})(){}[[]][](){}{}[{}]{}([])[]{}[()]{}{()}()([])()[{()}]{}\
{}()[]{}[][]{}[][]{}[[[]]][]{()}[[]]{}[]()[][{}]()[][][[]]{[]}[()][]()(){}[]{{}}{{{}}}{[]}([()])()[[\
]][]{}()()()[{}][[[]]](){}(){()}(){[]}()([()])({})()[[]](({}))[]{}{}{}()[]{()}{}{[]}[{}]{}[]()[](())\
{}([])[](){}[](){}[][]()[]{}{}([])[][]{}[]()()()[][](){}{[]}[{}][][]{}{()}()[][][]{}(())()[{}]{}[]{}\
[]()[]()(){}()[][][]{}[][()][{}]{()}()[]()[][](){}[](){}{}[{}][][][]{()}{}[](){}{()}()[()]{}({})()()\
(){}{}()(())(())[[]][]()[()][()](())[{}]({()}){{}}[[]]{}{}{{}}{}()()[]{}[][[]]()([])[]()()([])({()})\
[][{}]{}({}){{}}{[]}[]((()))[]{{}}{(())}()[{}]()(){}(()){}()()(){}(){[{}]}{}{()}[](){}{[]}{}{}{}()((\
))[]()[](){}()[]()[{}]{}(){}()({})([]){}[()]{{{}}}({})(){[]}({}){}[[]]()(()){()}{}(){()}({{}})[][][]\
()()([[]])(){{{}}}[]{()}(){[{}]}(){}([[[]]]){{}}()((()))[()](){()}(){}(){}{}{()}(){}{[]}[][[{}]]()[(\
)][]{}[({})]{()}{}{}()()()[][()](){[]}(([]))([]){}[{()}]{}{}{()}{}[](){}()[][](()){()}()[](){}(()){}\
{{}}[]()[]{}[{}](){}{[]}[]{}()[](({}))([])(())(){}{}{}{}(){}[][]{{}}(())[]{[]}{}()()[]{}{}{}[]{{}}[(\
{})]()(){}[]{}()()[]{{{}}}{{}}{}[[]][()][](){}[[]][{}]{}[{}]{}[]{}{}{}()()[](){[[]]}[{[]}][][[]]({{}\
}){}({})[{}][{{[]}}][{()}]{}{()}()([()])()()[][]()()()[]{}()[](){()}[]({})[]{}()[][[]]()[](())(){}[]\
()[][][]{}[][]()()[]()[{}]{}[]{}(){}(())()(()){{}}(({}))()({})[[]]()({}){}[](())[][]{{}}{()}{()}[()]\
()({})[](({}))()[]([])[]{{}}[()]()[{}]()([])[()](){}[]()[](){}{{}}[{{}}][][{}]{([])}[]{}()[()][]{}[]\
[{}][[]][]{}(())[]()(){}([]){}{}()[]{}()(){}[]{()}()()[]()(){}[][[]][]()[]{}(()){}{}()()(){}{}[][]{}\
(){[]}{{}}()[[]](){()}(())({}){[]}{}[]()()()[{}]{{}}{}[]{[]}{[]}(())[()]([])[]()({}){}{}[]{}()()[]{}\
{{}}[]()()[[]][[]]{}(){[[]]}[]{{}}[][[{()}]][[]]{}{}()([()])[]()(){()}({()}){}{()}([[]]){()}[]()()((\
)){}()()[[]]{}()[]{}()[()]{{}}[[]][]{()}[({})]([])({})()[]{[{}]}({})(){}{}{}(){}[]{}({})[()][{[]}]({\
})[](())[][{()}]{}[{[]}]{}(([]))[({})][]([])[][{{}}]()[()]([{}]){}()()[[(())]]{{[]}}()[{()}][]{{()}}\
()[]{()}{}{}{}()(){()}{}(){}{}{{}}()[][()][]{}()()[][](){}{[]}[]()[{}]{}[][]{}{{}}()[{}]()[]{{}}({[(\
)]})()[][]()[{{}}][][][[]]{}({})[][]{}{}()(){[[]]}[({{}})]{}([])(){()}[]{[()]}[{}][][]{}[][()](){}{}\
{}[][]{}[][]{}[]{}(){}[]{}[]()[]{[]}[{}][()](){}[][]({}){}()(){}[()][][]{}([])()({{}})()([[]])(){}()\
{}{}(){}{}[](){}(){}(){}({{}})(({()})){}[{[]}]([])[]{}{}[][]()([])(){}[()]{}[]()[]{}{()}{}[]([])[]()\
{}()[][]{{}}{}([])()[][][]{{}}{[]}[]({[[]]}){(({}))}{()}[]({})[]()[]([]){({})}()[]{}[[]](){}[([])]()\
[](){}{[]}{{}}{}{}[]{}()({})[[[]]]([])()({}){}[[]](())[]{}([]){}({})[]{([])}{{()}}(()){}([])[](){}{(\
)}[{()}]()[]{}(){}{}()[](){}()[]{}(())()()[]{}[][()][({})][](){[]}{[]}[][]{}[][]{}({}){}([]){(())}((\
({})))({[]})[({})][{}]((()))[[]][][]{}{}({})[()]([])(){}{}{}[](){}{}()[][][]()[][]()()[]()[]{}[]({})\
(){}()[[]]([])([])(){}[{}][()]{[]}[[]]{}(){}[]()[][]{{}}[{}](())[]{}[]{}{}(){}()[{}]{}{()}([{}]){}[]\
[]{}[[[]]]()[[]](({}))()()([]){}[[]][]{()}(([]))()()(){()}{}{}()[]{}(){}(){}{}{[]}()()()[([])][()]()\
()[{{}}][{{([])}}]{[]}(()){{{[]}}}{}[[]]()()()[]{}()[{}]{()}[]{}([])[][[[]]]{{()}}()(())([])[[]]([])\
([[]]){}{[{}]}{([])}(){{{}}}({{}})[({})][]{()}{}{{()}}()[]{}[]{()}(()){}{}{}[]({})[][]({})()[][]{}[]\
{}()()(){}[][]()()[()]()()()[][[]]{{{}}}()({})[[]]()[][]{}({})(){}[]{}[][]{}[]()(())(){}{}[]{}[{}]([\
])[][]{}[]{}({})()()([])[]()()[]{}[][][]{}[[]]{}()[[]]()()()[()]{}{}[{}]()()[]{}({}){}{}()[()][]{}[]\
(){}{{{}}}[()]{}[][()]{()}[()][](){}()({})([[]])[{}]{}[]{[]}(){[{}]}((()))()([{}]){}{}(){({})}()[][[\
]][](){}(({}))({})[[{}]](){}(())()(){}[]()[]{}()[][][][]{[]}()()({})([]){}[(())]{({})}{}[()]()[](){}\
[{[]}]{}()()()(())[]{}([]){()}{}()()[]{(())}[](){}()[]()(()){}{[]}[{}]()()[][()]([])([])(())[][()][]\
{[]}[][{}]{()}([])(()){()}[]{()}()()()(([()]))(([]))[]([])(())(){}{()}({})()(){}{}[{}]{}[[]]{}[][{}]\
([])()(([]))[]{{}}[]([])[{}][({})]{((()))}{}([])[](){}[][][{}]{()}()({()})[][][]()[]()[]{}[](){{}}([\
]){}[[]][{}][]()[][]{}[()]{}{()}(())()([])[()][][[]][]()[]()[][](){}[][]{}({({})})[{{}}]{}(){}{[]}{}\
(){}{}([])()()[](()){}{}[]()()()([])()[]()[[]]({})[]()({})[]{{{{}}}}()()[]({()})[]()[]{}{}[()]()[]()\
({}){({})}[](([])){{}}()[]([{}])[](){}[()]{([])}[()]{[]}([])(()){()}[][]({})(){}[](())({})[()]{}({})\
{}[]{}{}[({})](){}{}()(){}()[]{[]}[[]](){[{}]}()[()][()][]{}[[()]][](){}{()}{}()({})[{}]{}({})[][]{[\
]}()(){}[][](){}[][]()[[]]{[[]]}{}{[(())]}{}[](())(){[{}]}([])([])()[][]()(){[[]]}(){(())}{}({})[{}]\
[]{}(){}{}[]()[()]()(())[]()[]{}{}[][{}][()][]{}()({})()((())){}{}{()}(){}(){[]}()({})(){()}{()}[][]\
{}()()([]){}(()){}{}[()]{{}}()()()[]([]){{}}{}[]{}{}()()[{()}]{[]}()()()()()[]{}{()}({[()]})([{[]}])\
()(){({})}[][{}]{{}}(){}(())[[()]][]{()}{{}}(){}[][[(())]]()([]){}{{{()}}}[{{{}}}]()([[[]]])(){}[([]\
)]({()})[{}][[([])]](){}{}{{[]}}()(){}[]{()}([]){}[[]]()(([]))()()[][{()}][([])]{{}}[][()]{}[]{}(){{\
[()]}}{}({{}}){}{()}[{}]([]){}({})[](())(([{}]))(((())))[][{()}][]({(())}){}{}({})[][]{[]}{()}{{}}[]\
[]{()}(()){}{{}}{}[]()({})()[()]{}[](())()[][]{[]}{[]}{}{}[]{}()()[]()[{}]()[]{}[()][{}][][](({})){}\
[][]()({}){}([]){()}({[]}){([{}])}{{[]}}([{}])[](){}{{[[]]}}()[]{[]}[][][]([])()[][][{}]{}{}([])()[]\
(()){}[]()()()[]([]){}{[]}[][]{({})}[][][][]{}{}[][][]()[][][{()}](())[]()[[]][]{}{{}}{()}{}{()}()[]\
()([])()(){{()}}()(){}({{}})({})[]{{({[]})}}[]{({})}[{(())}]{[{[]}]}{({[]})}{()}[{()}][{([{}])}]{}{}\
(())[{}]({()}){}[]()({{}}){()}({})()[[]]{}[][(())][]{}[{}][]()(){{()}}{}{}[](){}(){}[][]{}[][{}]{{}}\
()[](){}[]()[[]]()[]{}(){}[]{()}{{}}(){}{}[]{}(){}[](){[]}([()])()[{}]()[]([])[]([])()(){}[][]()(())\
{}()(){}()[]()[]{}[]({})[[]]{}()[{}]{}{}(){{}}[()][{}][][](){}()[]{{}}[[]]()(){}()[](){}{}[]{}{}(())\
[][][]{{}}[]{}{}()()(){{}}{}()[(())]{{}}[][]{()}()()(){}[][]{}{()}(())[][](())(){{}}{{[[]]}}[[{}]][]\
{}{}{}(){[]}[]{{}}[][][{}]{}[]{{}}[]{}{}{{}}{{{}}}(){}(){}{()}{}([[]])[[()]]{}{}{}{}()()[{}][][][]()\
[]()()[]()({}){()}{{{}}}[](){[]}{()}([])()[({()})]()[({{}})]{}[](){({})}({}){{()}}()({})([])()[](())\
[]()({{}})(()){[]}()[[]]{}()()[[]][]()(())({})([[{}]])((({{}}))){{}}(()){}{}(()){}{}[](()){([])}{}{}\
[][()]{[]}()()[][](){}{()}{}({{}}){}{}[{}]{}[](({{}}))[]{}(){[]}[][()][()]()(()){[]}{}[]({}){{}}{{[]\
}}[]{()}()[]()[]{}()[](){}()[](){}(){}{}[][()]{}{}{}{}{}()[]([])([])[]{}({}){{}}(){}[[]]{()}(){}[[]]\
(()){}(())()()[]{}{{}}{}{}[[]]{{()}}{({})}()[[[]]]()()[]({})[[]][](())()()[]({()}){}[[{}]][{}]()()()\
{}[]{}{()}()[]()([{}])()[][]{}[]{}[](){}{}()()[{[]}]{{}}({})[]{}{[]}[][[]]()(){{}}[[]][]{{[]}}[]{[]}\
[](){()}{()}({})[()][]([]){}[][]{}()([])(){{}}[{}]{[()]}[]()[]()()()[{}][]{}[]()()[()]{{}}[{}]()[]{}\
{}(())()([]){}()[](){}()[{}]{}{}{}(())[]({})[()]([])(())[]()[(())]{}()(){{}}([]){{}}({})(){}{()}{}[{\
}]{}(){()}{}(){}()[()][]{}()(())[{}]{[]}{}{}{}([])(){}{[]}{}({})({}){}(){}{}()[()]{[]}{}{}()[](){}{(\
)}[[]]{()}{}{[[]]}([])({})({[]})[][][](())()(){{}}[][]({()}){{}}[]{}{{()}}({})(){}(){}[]()(()){[]}[]\
[[]](){}()[{}](){}{}{}{[]}{()}([])[{}][]{}[]((()))[()]{}{}{}[][]()(())([[]])({})()({}){}[[]][](())()\
()[][][][]{}({}){()}[]()[({})][[]]{}[]{}()()([])([])()[](()){{}}{}()(()){}[][]{}{}[][]{()}[]{}{[]}()\
()()[][]()([])([])([])({({})})({[]}){}[[]]({})[][][]()[](([]))()()[]([[]])[](([[]]))(){}{{()}}{}[[()\
]]{}[][([])]{}{}[{}]([])[][][[]]({{[]}})()[]{}{}{}{()}{}{}([])()[]{}()()[]()[][]{}[]{[{}]}[]{{[]}}{}\
[{{}}][]{}{({})}[]{(())}(())()({})()[][{}](){}{{}}(({})){}[{{}}]{}{}{()}[{}]{}([{}])[][]{{[{}]}}(){(\
)}()({[]}){}{[]}[()]()[][]{}[()]([])([])([])[][](){{}}(){}{}[()][{}]{}{[]}()[[]]()[]{()}[]()()[](){}\
()(){[]}(){{}}(){}{{{}}}[](){}{}{}{}[][]{}()[({})][{}]()[{()}]()({()})({([])})[]({{}})[[]][[]]{}({})\
()()()[]{}{(())}([])([]){}[]([]){}((())){}(()){[]}{()}(){}{}[][][[]][][]({})[([])]{[]}()[()][]{}()()\
[]{}{}({[]})()[][](){}{}()[()](){{}}{}{{()}}({})()()()()[](())[()]()()(){}[{}][{}]{}(([])){()}{}{{}}\
()()[]{[]}{[]}[]()[](){}()[]()[()]{{}}(()){}[()]()(){[{}]}(){}{}{{{}}}[[(())]]{}{}{{()}}{}[[]](){{}}\
{}([])([])[]{}[][{}]()([])[]{[]}[]{}{{}}[{()}]{}[](){}()(){}{({()})}[({})]([{}]){}(){}[]{}{}([]){([[\
]])}[(())]()(){}[]{()}([()]){}{{}}(){(())}()([]){[{}]}([])[]{}{[]}[]{}[](){()}(){}()()[{}]()[][[]]()\
[](){}{([])}({})[][{}]{}{}(){()}({[]})({}){}()[]{}({}){}({})([])([])[({[]})][]{}([])[][]({})(())()()\
()([]){}{}[{([])}][][][()][]()[]({([])}){}([]){}{}{({})}()[]([{}]){()}[{[]}]()[[]]{}{}{[([])]}{}{}()\
{}()({[]}){[()]}[{}]()([()])()[]([{}]){{()}}[()]{}[[()]]{}{}()[]{}((()))([{{}}])()[()]{}()([({})])[[\
[()]]]{{{{}}}}{}[]()[]()[[]][][{()}][{{}}][](){{}}(())[]()[()][][({})][()][[]][]()(){{[]}}[]{}[][[]]\
(())[]{()}((()))(())(){{}}()()[]{}({}){}()[](){()}[]{}{}()(){}{}[][]()[]()[][]([])[]()[][()][{{}}]()\
{()}[][]()[]{}[]{[]}{}{[[]]}{[]}()()()[](){[[]]}[({})]()()[][()][]{}()()(())[]{}(){()}{{}}{}()(){}[(\
)][]{}[][()](){}[()](())[][][][()]{}{}[]{[]}[][](){()}[([])][][]{}[]{}([{}])(())(())(()){{}}{}(())([\
])()(){}{}{}[]{}{}[]{}({})()()[][()]()(())()(){}()[]{}[]{}{{}}[]()[()][{}]{[]}[][[]]{}{[]}[][]{}()[]\
{}[]()[]{}[([])](()){()}({}){[]}{({})}()(){[{}]}()[{}]{}[{}]{()}([[{}]])[][[]](())(){}([{()}])[{}]{{\
[]}}[]((())){()}{}[]{{}}(){[]}()[{}]{}{{[]}}[][{()}]()(())()()[]{}()[][](){}[()]()[][]{[]}{}{}({})[]\
[][[]]({})[[]]([])[{}]{}{{[]}}{[]}{{}}()(())(){}{}{}{}()[]{}()[[]][]{}{()}{}({}){()}[(())][]{}[[]][[\
]]{}[]{[({})]}[][[[]]]{}{}{{{}}}{}{}[]()(){()}({})[](){()}{}()[][{{}}][]{[]}[[()]]{{}}{[()]}()[({})]\
(){}[]{}[][[{}]](){{}}({}){()}{[]}{}()[]{()}()[][](){}()[]{}()[][()][{}](){}{}{}(){[]}({[]}){{}}()()\
[](({}))[[]]()()[][]{}[{}]((())){[[()]]}()()[()][]()()()[][](){}[]{}{}[]{}[[]][][][][{}]([])({})()[]\
{}[]{}{}{{}}[]{}()(())(){}{}[]{}()()({}){[]}[[]]({[]})()([])()[]([])[][([])][{(())}]{}{()}[][]({{}})\
()[]{}[][()]{}[{}]{}[]{}[()][{}]()({})()()[]{}{}[]{}()[]({})[]{}()[][][]{}{}[()]{}(())()(){}{}{}[][]\
()[]{}{}{}{}()[[([{()}])]](){}{}{}[](())[{}]()([[{}]]){}([[()]])[{{}}]{[{()}]}{{}}()[][]({(())})[]{}\
[()][[()]][]{}()(){}()()()()()(){}[]()[][](){}()(({[]}))({})[]({{({})}})[[]]({({[]})})([{(())}]){}{}\
{{}}[]([])[][]()[()]{}{}()[[]]()[](){[]}[][({[]})]{}{[]}[{}][][]{}{[[{}]]}(())[(({}))][]({})()({[]})\
{[]}[[()]][[]](){[]}[(([[]]))][][]()[][][][][]()[][[{{{}}}]][][]{}(([[()]])){[[]]}[[]](())(()){}[][(\
[])]{}[][{}](){[]}({})(())(){}()[[]]()[[()]]{}([()])({()})(){({})}[][][]()[{}]()(){}()[][]()[]{}{}()\
{}{}(())[][]{}[][[]]()()[{}]()[][{}][]()[()]{[[[()]]]}{}{}[({{()}})]{}[][][]{}{}[{}][()]{}()[](){}()\
[()](){{}}{}[][][[[{}]]](){}{}[](())(){}{}()()(){{}}(){}[[]][()]{()}()((())){{}}()(){}()[]()()[][][]\
[]{}[][]{}()[]()[]{}(){}{}([])([])(){[]}[{}]({}){}[][]()(())[][](){{}}{}{}{({})}{}[](({}))(){}{()}[]\
[]([])(){[]}[]{}{()}(()){}()()[][{}]{}(){{}}{}{{}}()[{}](){}{}[[]][]{}()[]{}({{}})[({})]({})()[](){}\
([]){[()]}[{}](){{}}([[]])[[]][][]()[()]()[][][]{}{()}[][]({}){}{}[[]]{[]}[]{}{}[]{[]}{}[[[]]]{}[]()\
[]{}({[{()}]}){{[{(())}]}}[]{([[]])}[]()[()](){}[][]{(())}[]{}()[][{}][]{}(())(){[{[{}]}]}{}[]{}[({}\
)]()()[]((({()})))(({})){}{()}()()()()()[]{}()(){()}([])[]{[([])]}[[{{[]}}]]{}{}{}[]{[]}[]{}[][]({})\
(({})){}[[()]][]{()}[][()][][]{{}}()[[]][{}]{}{}[]()[](){{}}{}[[]]{}[{}]({})[][]{}{}({})()[]{}{[]}[]\
{}[][]{}[]{}(){}()[]([])[][{}][]{{}}[{[]}]{}[(())](){}(){}((()))()()()()(){}{{}}()[](){}(())({()}){}\
[]{}(){}[()]{}((()))({})[()]{}{}{}({})[[]]{}(){}{}{}{{}}[]()[[]][]()[](){}[]{}[]()([]){}({})[{}]{}()\
[]([[[]]])[[[]]]()([])(){}[]{}()[]{}[]{{()}}([]){{{}}}[{}]{}{[]}[([])]{}[{}][[[]]]()()[{}]{}{}{}(){}\
()()()()[]()()({})([])()[][]{}()[()][]()[]{}(()){()}{()}{()}{}{}(){}[]{[]}[({})][][][]{}{}(){}(){}{}\
{}{()}{}(){}{}{}{}[()]{}{({})}[([])][]()()[{}](){}[[]][[[]]]{[]}{{}}()(([]))()(){}[][]()(){}()({})()\
([])()[][{}]()()([[[]]]){{[]}}[]({()}){[]}{[]}()[[]]{[]}[{}]{}{}[][]{}[{}][{}]{}[]{()}(){{()}}{{{}}}\
{}{}{}[()][]{}[()]()({{}}){[]}{({[]})}{}({}){}{}()[][()][]()(){}([])[]({{}})(())({})()(){}([]){}[[[]\
]](){}{}({})[]([])(){}(){[{}]}{[]}[{()}]{[]}{[]}[][]{}{}{[]}()()[]{{}}{}{[]}{}[{}][]{}({}){}[()]([])\
()[]{}{{}}()(())[[]](){}[](){{}}()()()[]()[](){}([()])()({()}){}({[{}]})[]{}([]){}[[]]{}{}[]()[(())]\
[][][](())[([])](()){}{}{{[]}}{}()()[][]()({})[][]()(){}()[]({{}})(){[]}[]()[](())()(){}{()}({})[()]\
(){{}}{()}()[]{[]}{{}}{{{}}}(){}{{}}{()}{()}[]{}()[]{()}(){}[]{}{}[]()");
			Assert::AreEqual("Success", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod53)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("Will retrieve data from"
				"the file directly");
			Assert::AreEqual("N/A", outputResultsInString.c_str());
		}

		TEST_METHOD(TestMethod54)
		{
			Balanced balanced;
			std::string outputResultsInString = balanced.outputResults("Will retrieve data from"
				"the file directly");
			Assert::AreEqual("N/A", outputResultsInString.c_str());
		}
	};
}