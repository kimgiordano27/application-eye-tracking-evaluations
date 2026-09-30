/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastAnchorAllDelegate$$BeginInvoke
ENTRY_POINT: 06e10a0c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate__BeginInvoke
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long in_x9;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  if ((uint)param_1 < *(uint *)(in_x9 + 0x18)) {
    lVar2 = *(long *)(in_x9 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar2 + 0x18) <= (uint)param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar2 = lVar2 + param_1 * 0x18;
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    uVar1 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    thunk_FUN_03d1023c(unaff_x19 + 0x18,0);
    uVar1 = 1;
    *(int *)(unaff_x19 + 8) = *(int *)(unaff_x19 + 8) + 1;
  }
  else {
    if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    FUN_06e10a90();
    uVar1 = 0;
  }
  return uVar1;
}


