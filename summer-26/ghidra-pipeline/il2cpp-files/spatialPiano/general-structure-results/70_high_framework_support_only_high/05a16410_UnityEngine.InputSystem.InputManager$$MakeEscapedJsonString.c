/*
FUNCTION_NAME: UnityEngine.InputSystem.InputManager$$MakeEscapedJsonString
ENTRY_POINT: 05a16410
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_InputSystem_InputManager__MakeEscapedJsonString
               (uint param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  undefined1 *__s;
  long unaff_x29;
  undefined1 auStack_50 [80];
  
  puVar6 = auStack_50;
  lVar4 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(lVar4 + 0x28);
  if ((DAT_06bc206b & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bc206b = 1;
  }
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  puVar5 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  uVar3 = param_1 >> 0x17 & 0xff;
  uVar10 = param_1 & 0x7fffff;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  if (uVar3 == 0) {
    lVar11 = *(long *)puVar5;
    *(undefined8 *)(unaff_x29 + -0x50) = param_2;
    *(undefined8 *)(unaff_x29 + -0x48) = param_3;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    *(undefined4 *)(unaff_x29 + -0x3c) = param_4;
    uVar8 = FUN_05a182f8(uVar10);
    iVar12 = -0x95;
    *(undefined4 *)(unaff_x29 + -0x58) = uVar8;
    *(undefined4 *)(unaff_x29 + -0x54) = 0;
  }
  else {
    if (uVar3 == 0xff) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        FUN_05a1a23c(param_2,param_3,param_4,uVar10,param_1 >> 0x1f,param_5);
        return;
      }
      goto LAB_05a1668c;
    }
    bVar7 = uVar10 == 0;
    *(undefined8 *)(unaff_x29 + -0x50) = param_2;
    *(undefined8 *)(unaff_x29 + -0x48) = param_3;
    uVar10 = uVar10 | 0x800000;
    iVar12 = uVar3 - 0x96;
    *(undefined4 *)(unaff_x29 + -0x3c) = param_4;
    *(undefined4 *)(unaff_x29 + -0x58) = 0x17;
    *(uint *)(unaff_x29 + -0x54) = (uint)(bVar7 && uVar3 != 1);
  }
  uVar3 = param_5 >> 0x10 & 0xff;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar9 = 0;
  if ((param_5 & 0xff0000) != 0) {
    iVar9 = uVar3 + 1;
  }
  iVar9 = FUN_050d645c(10,iVar9,0);
  if (iVar9 == 0) {
    __s = (undefined1 *)0x0;
  }
  else {
    puVar6 = auStack_50 + -((long)iVar9 + 0xfU & 0xfffffffffffffff0);
    __s = puVar6;
  }
  memset(__s,0,(long)iVar9);
  puVar5 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  uVar1 = 7;
  if ((param_5 & 0xff0000) != 0) {
    uVar1 = uVar3;
  }
  if (*(int *)(*(long *)
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar8 = *(undefined4 *)(unaff_x29 + -0x58);
  uVar2 = *(undefined4 *)(unaff_x29 + -0x54);
  *(long *)(puVar6 + -0x10) = unaff_x29 + -0x1c;
  uVar10 = FUN_05a191e0(uVar10,iVar12,uVar8,uVar2,1,uVar1,__s,iVar9 + -1);
  __s[uVar10] = 0;
  lVar11 = *(long *)puVar5;
  *(undefined4 *)(unaff_x29 + -0x30) = 1;
  *(uint *)(unaff_x29 + -0x2c) = uVar10;
  uVar8 = *(undefined4 *)(unaff_x29 + -0x3c);
  iVar12 = *(int *)(lVar11 + 0xe4);
  *(undefined1 **)(unaff_x29 + -0x38) = __s;
  *(int *)(unaff_x29 + -0x28) = *(int *)(unaff_x29 + -0x1c) + 1;
  *(bool *)(unaff_x29 + -0x24) = 0x80000000 < param_1;
  if (iVar12 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05a17648(*(undefined8 *)(unaff_x29 + -0x50),*(undefined8 *)(unaff_x29 + -0x48),uVar8,
               unaff_x29 + -0x38,uVar1,param_5);
  if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
LAB_05a1668c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


