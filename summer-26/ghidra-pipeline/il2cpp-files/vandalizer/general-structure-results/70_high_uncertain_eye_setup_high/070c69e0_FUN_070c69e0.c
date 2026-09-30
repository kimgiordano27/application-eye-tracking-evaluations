/*
FUNCTION_NAME: FUN_070c69e0
ENTRY_POINT: 070c69e0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_070c69e0(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  
  if ((DAT_07a5a94d & 1) == 0) {
    FUN_031f20f4(OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                    /* try { // try from 070c6a10 to 071c6a3b has its CatchHandler @ 070c6e08 */
    FUN_031f20f4(OVRPassthroughLayer_StylesHandler_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d7708);
    FUN_031f20f4(PTR_DAT_0759bc60);
    FUN_031f20f4(OVRPassthroughColorLut_ColorChannels_TypeInfo);
                    /* try { // try from 070c6a48 to 071c6a53 has its CatchHandler @ 070c6df4 */
    FUN_031f20f4(OVRPlugin_Hand_TypeInfo);
    DAT_07a5a94d = 1;
  }
  lVar4 = *(long *)(param_1 + 0x540);
  if ((int)param_3 == 0) {
    plVar1 = (long *)(param_1 + 0x540);
    if (lVar4 == 0) {
      lVar4 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d7708);
                    /* try { // try from 070c6a88 to 071c6a8f has its CatchHandler @ 070c6f00 */
                    /* try { // try from 070c6a9c to 071c6aa3 has its CatchHandler @ 070c6efc */
      FUN_070948f4(lVar4,*(undefined8 *)OVRPlugin_Hand_TypeInfo,0);
      puVar3 = OVRPassthroughColorLut_ColorChannels_TypeInfo;
      if (*(int *)(*(long *)OVRPassthroughColorLut_ColorChannels_TypeInfo + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      if (lVar4 == 0) goto LAB_070c6bc8;
                    /* try { // try from 070c6abc to 071c6ac3 has its CatchHandler @ 070c6e28 */
      UnityEngine_UIElements_Toggle_UxmlTraits___ctor
                (lVar4,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x178),0);
      lVar5 = FUN_06fc5b50(lVar4,0);
      if (lVar5 == 0) goto LAB_070c6bc8;
                    /* try { // try from 070c6aec to 071c6af3 has its CatchHandler @ 070c6dbc */
      lVar7 = *(long *)(lVar5 + 0x10);
      uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x178);
      lVar9 = *(long *)PTR_DAT_0759bc60;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_070c6bc8;
      uVar2 = *(uint *)(lVar5 + 0x18);
                    /* try { // try from 070c6b14 to 071c6b1f has its CatchHandler @ 070c6da8 */
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
        *puVar8 = uVar6;
        thunk_FUN_0329bf60(puVar8);
      }
      else {
        FUN_047af440(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      *plVar1 = lVar4;
                    /* try { // try from 070c6b58 to 071c6b7b has its CatchHandler @ 070c6de8 */
      thunk_FUN_0329bf60(plVar1,lVar4);
    }
    lVar4 = FUN_05435a24(param_1,*(undefined8 *)OVRPassthroughLayer_StylesHandler_TypeInfo);
    if (lVar4 == 0) {
LAB_070c6bc8:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
                    /* try { // try from 070c6b7c to 071c6b87 has its CatchHandler @ 070c6db8 */
    FUN_06fcd45c(lVar4,0,*plVar1,0);
    param_2 = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = param_3;
    if (lVar4 != 0) {
                    /* try { // try from 070c6a60 to 071c6a6b has its CatchHandler @ 070c6e00 */
      FUN_06fcdca0(lVar4,0);
    }
  }
  uVar10 = param_3 & 0xffffffff00000000 | uVar10 & 0xffffffff;
                    /* try { // try from 070c6b98 to 071c6bab has its CatchHandler @ 070c6dd0 */
  FUN_05437694(param_1,param_2,uVar10,*(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                    /* try { // try from 070c6bb0 to 071c6bbb has its CatchHandler @ 070c6de4 */
  FUN_070c6638(param_1,param_2,uVar10);
  return;
}


