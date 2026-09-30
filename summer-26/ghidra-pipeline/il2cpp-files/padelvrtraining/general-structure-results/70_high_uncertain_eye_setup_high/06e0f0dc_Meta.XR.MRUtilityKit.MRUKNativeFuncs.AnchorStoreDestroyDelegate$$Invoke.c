/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreDestroyDelegate$$Invoke
ENTRY_POINT: 06e0f0dc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreDestroyDelegate__Invoke(long param_1,long param_2)

{
  uint uVar1;
  int in_w8;
  long in_x9;
  long lVar2;
  undefined8 uVar3;
  
  if (in_w8 == *(int *)(in_x9 + 0x1c)) {
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      lVar2 = *(long *)(in_x9 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        uVar3 = *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
        *(uint *)(param_1 + 8) = uVar1 + 1;
        *(undefined8 *)(param_1 + 0x10) = uVar3;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_06e0f158(param_1);
  return 0;
}


