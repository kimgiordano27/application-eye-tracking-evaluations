/*
FUNCTION_NAME: UnityEngine.InputSystem.InputManager$$OnFocusChanged
ENTRY_POINT: 05a16794
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_InputSystem_InputManager__OnFocusChanged(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined1 *__s;
  undefined8 uVar9;
  undefined4 unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  ulong uVar10;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  int iVar11;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  uVar8 = (uint)(unaff_x23 >> 0x34) & 0x7ff;
  uVar10 = unaff_x23 & 0xfffffffffffff;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  if (uVar8 == 0) {
    lVar7 = *(long *)puVar3;
    *(undefined8 *)(unaff_x29 + -0x50) = unaff_x26;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    *(undefined8 *)(unaff_x29 + -0x48) = unaff_x25;
    uVar5 = FUN_05a182f8(unaff_x23 & 0xffffffff);
    iVar11 = -0x432;
    *(undefined4 *)(unaff_x29 + -0x58) = uVar5;
    *(undefined4 *)(unaff_x29 + -0x54) = 0;
  }
  else {
    if (uVar8 == 0x7ff) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        FUN_05a1a23c();
        return;
      }
      goto LAB_05a169b8;
    }
    bVar4 = uVar10 == 0;
    iVar11 = uVar8 - 0x433;
    *(undefined8 *)(unaff_x29 + -0x50) = unaff_x26;
    *(undefined8 *)(unaff_x29 + -0x48) = unaff_x25;
    uVar10 = uVar10 | 0x10000000000000;
    *(undefined4 *)(unaff_x29 + -0x58) = 0x34;
    *(uint *)(unaff_x29 + -0x54) = (uint)(bVar4 && uVar8 != 1);
  }
  *(undefined4 *)(unaff_x29 + -0x3c) = unaff_w20;
  uVar8 = unaff_w21 >> 0x10 & 0xff;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar6 = 0;
  if ((unaff_w21 & 0xff0000) != 0) {
    iVar6 = uVar8 + 1;
  }
  iVar6 = FUN_050d645c(0x12,iVar6,0);
  if (iVar6 == 0) {
    __s = (undefined1 *)0x0;
  }
  else {
    register0x00000008 =
         (BADSPACEBASE *)(&stack0x00000000 + -((long)iVar6 + 0xfU & 0xfffffffffffffff0));
    __s = (undefined1 *)register0x00000008;
  }
  memset(__s,0,(long)iVar6);
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  uVar1 = 0xf;
  if ((unaff_w21 & 0xff0000) != 0) {
    uVar1 = uVar8;
  }
  if (*(int *)(*(long *)
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = *(undefined4 *)(unaff_x29 + -0x58);
  uVar2 = *(undefined4 *)(unaff_x29 + -0x54);
  *(long *)((long)register0x00000008 + -0x10) = unaff_x29 + -0x1c;
  uVar8 = FUN_05a191e0(uVar10,iVar11,uVar5,uVar2,1,uVar1,__s,iVar6 + -1);
  __s[uVar8] = 0;
  lVar7 = *(long *)puVar3;
  *(undefined1 **)(unaff_x29 + -0x38) = __s;
  *(undefined4 *)(unaff_x29 + -0x30) = 1;
  *(uint *)(unaff_x29 + -0x2c) = uVar8;
  uVar9 = *(undefined8 *)(unaff_x29 + -0x48);
  iVar11 = *(int *)(lVar7 + 0xe4);
  *(int *)(unaff_x29 + -0x28) = *(int *)(unaff_x29 + -0x1c) + 1;
  *(bool *)(unaff_x29 + -0x24) = 0x8000000000000000 < unaff_x23;
  if (iVar11 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05a17648(*(undefined8 *)(unaff_x29 + -0x50),uVar9,*(undefined4 *)(unaff_x29 + -0x3c),
               unaff_x29 + -0x38,uVar1,unaff_w21);
                    /* try { // try from 05a1698c to 05b169cb has its CatchHandler @ 05a16a04 */
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
LAB_05a169b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


