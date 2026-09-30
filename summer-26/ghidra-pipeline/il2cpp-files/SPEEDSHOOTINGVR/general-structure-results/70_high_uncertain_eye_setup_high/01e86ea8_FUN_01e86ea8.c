/*
FUNCTION_NAME: FUN_01e86ea8
ENTRY_POINT: 01e86ea8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01e86ea8(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_0234c2e8;
  if ((DAT_0247e2c3 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234ba20);
    FUN_00fdc2e4(PTR_DAT_0235f470);
    FUN_00fdc2e4(PTR_DAT_0235f478);
    FUN_00fdc2e4(PTR_DAT_0234c2e8);
    FUN_00fdc2e4(PTR_DAT_0235f290);
    DAT_0247e2c3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  iVar3 = FUN_01e79c44();
  if ((param_1 == 0) && (iVar3 == 3)) {
    if (*(int *)(*(long *)PTR_DAT_0234ba20 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01fd0f18(*(undefined8 *)PTR_DAT_0235f290,0);
    param_1 = -1;
  }
  puVar2 = PTR_DAT_0235f478;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar4 = FUN_01e79184();
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar6);
    lVar6 = *(long *)puVar2;
  }
  uVar5 = OVRManager__OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency
                    (uVar4,**(undefined8 **)(lVar6 + 0xb8),0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    puVar2 = PTR_DAT_0235f470;
    if (*(int *)(*(long *)PTR_DAT_0235f470 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    iVar3 = FUN_01ec00d0(param_1,0xffffffff,param_2,*(long *)(*(long *)puVar1 + 0xb8) + 0x5fc,0);
    if (iVar3 == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar4 = FUN_01e79184();
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01022c14(lVar6);
        lVar6 = *(long *)puVar2;
      }
      uVar5 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                        (uVar4,**(undefined8 **)(lVar6 + 0xb8),0);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar6 = *(long *)puVar1;
        }
        *param_3 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x5fc);
      }
      return 1;
    }
  }
  return 0;
}


