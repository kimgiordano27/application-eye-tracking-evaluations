/*
FUNCTION_NAME: FUN_02036ae0
ENTRY_POINT: 02036ae0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_02036ae0(long *param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7,uint param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  double dVar12;
  
  uVar9 = param_9;
  puVar5 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if ((DAT_03780a32 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    DAT_03780a32 = 1;
  }
  puVar4 = Newtonsoft_Json_Linq_JToken_TypeInfo;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_02021694(uVar9,0);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  bVar6 = FUN_017895d4(uVar11,uVar9,0);
  *(byte *)((long)param_1 + 0x74) = bVar6 & 1;
  if ((bVar6 & 1) == 0) {
                    /* try { // try from 02036bfc to 02136c03 has its CatchHandler @ 02036d5c */
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar12 = (double)FUN_017889b4(&param_9,0);
    dVar12 = dVar12 + 0.5;
  }
  else {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar12 = (double)FUN_017889b4(*(long *)(*(long *)puVar5 + 0xb8) + 0x38,0);
                    /* catch() { ... } // from try @ 02036d3c with catch @ 02036bf0
                       catch() { ... } // from try @ 02036d8c with catch @ 02036bf0
                       catch() { ... } // from try @ 02036dd0 with catch @ 02036bf0 */
  }
  iVar1 = -0x80000000;
  if (dVar12 != INFINITY) {
    iVar1 = (int)dVar12;
  }
  param_1[0xd] = param_2;
                    /* try { // try from 02036c34 to 02136c37 has its CatchHandler @ 02036d58 */
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)((long)param_1 + 0x14) = param_5;
  *(int *)(param_1 + 0xe) = iVar1;
  *(int *)(param_1 + 3) = param_6;
  if (param_2 == 0) {
LAB_02036e08:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 02036c4c to 02136c4f has its CatchHandler @ 02036d54 */
  uVar8 = FUN_02020d6c(param_2,0);
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__;
  iVar1 = 1;
  if ((uVar8 & 1) != 0) {
    iVar1 = -1;
  }
  if (param_1[0xd] == 0) goto LAB_02036e08;
  uVar8 = FUN_02020d6c(param_1[0xd],0);
                    /* try { // try from 02036c88 to 02136c8f has its CatchHandler @ 02036d50 */
  lVar10 = 0x10;
  if ((uVar8 & 1) == 0) {
    lVar10 = 0x14;
  }
  iVar2 = *(int *)((long)param_1 + lVar10);
  *(int *)(param_1 + 5) = param_6;
  if (param_7 == 0) {
    if (iVar2 == param_6) goto LAB_02036d88;
    *(int *)(param_1 + 5) = iVar1 + param_6;
  }
  if (*(char *)((long)param_1 + 0x74) == '\0') {
    *(undefined4 *)((long)param_1 + 0x7c) = 1000;
    iVar7 = thunk_FUN_00d61070(0);
                    /* try { // try from 02036cc0 to 02136ccb has its CatchHandler @ 02036d48 */
    *(int *)(param_1 + 0xf) = (int)param_1[0xe] + iVar7;
  }
  bVar3 = false;
  while( true ) {
                    /* try { // try from 02036cd4 to 02136cef has its CatchHandler @ 02036d4c */
    uVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if ((uVar8 & 1) != 0) {
      if (*(char *)((long)param_1 + 0x74) == '\0') {
        FUN_02037064(param_1);
      }
      if (!bVar3) {
                    /* try { // try from 02036cf0 to 02136cf3 has its CatchHandler @ 02036d44 */
                    /* try { // try from 02036cf4 to 02136cf7 has its CatchHandler @ 02036d40 */
        FUN_02036e44(param_1);
      }
                    /* try { // try from 02036cf8 to 02136cfb has its CatchHandler @ 02036d3c */
                    /* try { // try from 02036cfc to 02136cff has its CatchHandler @ 02036d58 */
                    /* try { // try from 02036d00 to 02136d37 has its CatchHandler @ 02036d4c */
      (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
      if ((param_1[0xc] == 0) || (lVar10 = *(long *)(param_1[0xc] + 0x68), lVar10 == 0))
      goto LAB_02036e08;
      if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (0 < *(int *)(lVar10 + 0x20)) {
                    /* catch() { ... } // from try @ 02036dcc with catch @ 02036dd8 */
        uVar9 = FUN_02037020(param_1,param_8 & 1);
        return uVar9;
      }
      if (param_1[6] == 0) goto LAB_02036e08;
                    /* try { // try from 02036d38 to 02136d3b has its CatchHandler @ 02036d54 */
                    /* catch() { ... } // from try @ 02036cf8 with catch @ 02036d3c
                       try { // try from 02036d3c to 02136d73 has its CatchHandler @ 02036bf0 */
      *(int *)(param_1 + 7) = (int)*(undefined8 *)(param_1[6] + 0x18);
                    /* catch() { ... } // from try @ 02036cf4 with catch @ 02036d40 */
      if (param_1[8] == 0) goto LAB_02036e08;
                    /* catch() { ... } // from try @ 02036cf0 with catch @ 02036d44 */
                    /* catch() { ... } // from try @ 02036cc0 with catch @ 02036d48 */
                    /* catch() { ... } // from try @ 02036cd4 with catch @ 02036d4c
                       catch() { ... } // from try @ 02036d00 with catch @ 02036d4c */
      *(int *)(param_1 + 9) = (int)*(undefined8 *)(param_1[8] + 0x18);
                    /* catch() { ... } // from try @ 02036c88 with catch @ 02036d50 */
      if (param_1[10] == 0) goto LAB_02036e08;
                    /* catch() { ... } // from try @ 02036c4c with catch @ 02036d54
                       catch() { ... } // from try @ 02036d38 with catch @ 02036d54 */
                    /* catch() { ... } // from try @ 02036c34 with catch @ 02036d58
                       catch() { ... } // from try @ 02036cfc with catch @ 02036d58 */
      bVar3 = true;
                    /* catch() { ... } // from try @ 02036bfc with catch @ 02036d5c */
      *(int *)(param_1 + 0xb) = (int)*(undefined8 *)(param_1[10] + 0x18);
    }
    if ((int)param_1[5] == iVar2) break;
    *(int *)(param_1 + 5) = (int)param_1[5] + iVar1;
                    /* try { // try from 02036d74 to 02136d8b has its CatchHandler @ 02036dc8 */
  }
LAB_02036d88:
                    /* try { // try from 02036d8c to 02136db7 has its CatchHandler @ 02036bf0 */
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03780a45 == '\0') {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__);
    DAT_03780a45 = '\x01';
  }
                    /* try { // try from 02036db8 to 02136dc7 has its CatchHandler @ 02036dc8 */
  lVar10 = *(long *)puVar5;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
                    /* catch() { ... } // from try @ 02036d74 with catch @ 02036dc8
                       catch() { ... } // from try @ 02036db8 with catch @ 02036dc8 */
    lVar10 = *(long *)puVar5;
  }
                    /* try { // try from 02036dcc to 02136dcf has its CatchHandler @ 02036dd8 */
                    /* try { // try from 02036dd0 to 02136ddb has its CatchHandler @ 02036bf0 */
  return **(undefined8 **)(lVar10 + 0xb8);
}


