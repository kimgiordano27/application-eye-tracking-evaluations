/*
FUNCTION_NAME: FUN_05c194c4
ENTRY_POINT: 05c194c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_05c194c4(long *param_1,int param_2,long *param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int local_5c [3];
  undefined4 local_50;
  int local_44;
  
  if ((DAT_06dc270c & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff490);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_StringBuilder>_Clear__);
    FUN_02d965b8(PTR_DAT_069ff488);
    FUN_02d965b8(PTR_DAT_06a10338);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_Add__
                );
                    /* try { // try from 05c1952c to 05d1952f has its CatchHandler @ 05c195b4 */
                    /* try { // try from 05c19530 to 05d19533 has its CatchHandler @ 05c195a8 */
                    /* try { // try from 05c19534 to 05d19537 has its CatchHandler @ 05c195a4 */
    FUN_02d965b8(Mono_Security_PKCS7_SignerInfo_TypeInfo);
                    /* try { // try from 05c19538 to 05d1953b has its CatchHandler @ 05c1959c */
                    /* try { // try from 05c1953c to 05d1953f has its CatchHandler @ 05c19598 */
                    /* try { // try from 05c19540 to 05d19547 has its CatchHandler @ 05c19588 */
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_ContainsKey__
                );
                    /* try { // try from 05c19548 to 05d1954f has its CatchHandler @ 05c19584 */
    FUN_02d965b8(PTR_DAT_069ff540);
                    /* try { // try from 05c19550 to 05d19553 has its CatchHandler @ 05c19578 */
                    /* try { // try from 05c19554 to 05d19557 has its CatchHandler @ 05c1957c */
                    /* try { // try from 05c19558 to 05d1955b has its CatchHandler @ 05c19574 */
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
                    /* try { // try from 05c1955c to 05d195d3 has its CatchHandler @ 05c19158 */
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_TryGetValue__
                );
                    /* catch() { ... } // from try @ 05c1946c with catch @ 05c19568 */
                    /* catch() { ... } // from try @ 05c1935c with catch @ 05c1956c */
                    /* catch() { ... } // from try @ 05c19378 with catch @ 05c19570 */
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>__ctor__
                );
                    /* catch() { ... } // from try @ 05c19558 with catch @ 05c19574 */
                    /* catch() { ... } // from try @ 05c19550 with catch @ 05c19578 */
    DAT_06dc270c = 1;
  }
                    /* catch() { ... } // from try @ 05c19554 with catch @ 05c1957c */
                    /* catch() { ... } // from try @ 05c19484 with catch @ 05c19580 */
                    /* catch() { ... } // from try @ 05c19548 with catch @ 05c19584 */
  local_44 = 0;
                    /* catch() { ... } // from try @ 05c19540 with catch @ 05c19588 */
  local_50 = 0;
                    /* catch() { ... } // from try @ 05c192f8 with catch @ 05c1958c */
                    /* catch() { ... } // from try @ 05c19294 with catch @ 05c19590 */
  *(int *)(param_1 + 0x24) = (int)param_1[0x24] + 1;
                    /* catch() { ... } // from try @ 05c19434 with catch @ 05c19594 */
  if (param_2 < 0x130) {
                    /* catch() { ... } // from try @ 05c1953c with catch @ 05c19598 */
                    /* catch() { ... } // from try @ 05c19538 with catch @ 05c1959c */
                    /* catch() { ... } // from try @ 05c19450 with catch @ 05c195a0 */
    if (param_2 - 0x12dU < 2) {
      uVar6 = thunk_FUN_0536b75c(param_1[0x15],*(undefined8 *)PTR_DAT_069ff540,0);
      lVar5 = 0;
      if ((uVar6 & 1) != 0) goto LAB_05c19648;
    }
    else {
                    /* catch() { ... } // from try @ 05c19534 with catch @ 05c195a4 */
                    /* catch() { ... } // from try @ 05c19530 with catch @ 05c195a8 */
      if (param_2 == 300) {
        lVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a10338);
        FUN_05ceb6cc(lVar5,*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>__ctor__
                     ,0);
      }
      else {
                    /* catch() { ... } // from try @ 05c193f4 with catch @ 05c195ac */
                    /* catch() { ... } // from try @ 05c19410 with catch @ 05c195b0 */
        if (param_2 != 0x12f) goto LAB_05c195d0;
LAB_05c19648:
        FUN_05c19440(param_1);
LAB_05c19650:
        lVar5 = 0;
      }
    }
  }
  else {
                    /* catch() { ... } // from try @ 05c193d0 with catch @ 05c195b8 */
    if (param_2 == 0x130) {
      return 0;
    }
    if (param_2 == 0x131) {
      lVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff490);
      FUN_054ea764(lVar5,*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_TryGetValue__
                   ,0);
    }
    else {
      if (param_2 == 0x133) goto LAB_05c19650;
LAB_05c195d0:
      local_44 = param_2;
                    /* try { // try from 05c195d4 to 05d195d7 has its CatchHandler @ 05c195e0 */
      uVar4 = FUN_054e5768(&local_44,0);
                    /* catch() { ... } // from try @ 05c195d4 with catch @ 05c195e0 */
                    /* try { // try from 05c195e4 to 05d195eb has its CatchHandler @ 05c195f4 */
                    /* try { // try from 05c195ec to 05d195f7 has its CatchHandler @ 05c19158 */
                    /* catch() { ... } // from try @ 05c195e4 with catch @ 05c195f4 */
      uVar4 = FUN_05362cb4(*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_Add__
                           ,uVar4,0);
      lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_StringBuilder>_Clear__
                                );
      FUN_05ce49b4(lVar5,uVar4,0);
    }
  }
  puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  uVar6 = FUN_0536ba54(param_1[0x15],*(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo,0);
  if (((uVar6 & 1) != 0) &&
     (((*(char *)((long)param_1 + 0x4a) == '\0' || (uVar6 = FUN_05c16a90(param_1), (uVar6 & 1) == 0)
       ) && (param_1[0x31] == 0)))) {
    if (param_1[0x1f] == 0) goto LAB_05c1987c;
    iVar3 = FUN_05c3095c(param_1[0x1f],0);
    if ((0 < iVar3) || (0 < param_1[0xd])) {
      lVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a10338);
      FUN_05ce6238(lVar5,*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_ContainsKey__
                   ,0,7,param_3,0);
    }
  }
  if (lVar5 != 0) {
    uVar4 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_Add__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(lVar5,uVar4);
  }
  uVar6 = (**(code **)(*param_1 + 0x348))(param_1,*(undefined8 *)(*param_1 + 0x350));
  if (((uVar6 & 1) != 0) ||
     (uVar6 = thunk_FUN_0536b75c(param_1[0x15],*(undefined8 *)puVar1,0), (uVar6 & 1) != 0)) {
    param_1[0xd] = -1;
  }
  if ((param_3 != (long *)0x0) &&
     (lVar5 = (**(code **)(*param_3 + 0x218))(param_3,*(undefined8 *)(*param_3 + 0x220)), lVar5 != 0
     )) {
    lVar5 = FUN_05ccbaa0(lVar5,*(undefined8 *)Mono_Security_PKCS7_SignerInfo_TypeInfo,0);
    if (lVar5 == 0) {
      local_5c[0] = param_2;
      uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),local_5c);
      uVar8 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_GetEnumerator__
                                );
      uVar4 = FUN_0536388c(uVar8,uVar4,0);
      thunk_FUN_02dfd288(PTR_DAT_06a10338);
      uVar8 = thunk_FUN_02dd3144();
      FUN_05ce6238(uVar8,uVar4,0,7,param_3,0);
      uVar4 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_Add__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar8,uVar4);
    }
    plVar10 = param_1 + 8;
    lVar9 = *plVar10;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff488);
    FUN_05c08c50(lVar7,lVar9,lVar5,0);
    *plVar10 = lVar7;
    LeanTween__value(plVar10,lVar7);
    if ((*plVar10 != 0) && (uVar4 = FUN_05c0c424(*plVar10,0), lVar9 != 0)) {
      uVar8 = FUN_05c0c424(lVar9,0);
      uVar6 = FUN_0536ba54(uVar4,uVar8,0);
      if ((uVar6 & 1) == 0) {
        uVar4 = FUN_05c16d38(param_1);
        uVar8 = FUN_05c0b228(lVar9,0);
        bVar2 = FUN_0536ba54(uVar4,uVar8,0);
      }
      else {
        bVar2 = 1;
      }
      *(byte *)(param_1 + 9) = bVar2 & 1;
      return 1;
    }
  }
LAB_05c1987c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


