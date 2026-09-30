/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreOnOpenXrEventDelegate$$EndInvoke
ENTRY_POINT: 06e0ff44
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate__EndInvoke
          (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long in_x9;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(unaff_x19 + 8);
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    lVar3 = *(long *)(in_x9 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar3 = lVar3 + (long)(int)uVar1 * 0x18;
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    uVar2 = *(undefined8 *)(lVar3 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
    thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
    uVar2 = 1;
    *(int *)(unaff_x19 + 8) = *(int *)(unaff_x19 + 8) + 1;
  }
  else {
    if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    FUN_06e0ffcc();
    uVar2 = 0;
  }
  return uVar2;
}


