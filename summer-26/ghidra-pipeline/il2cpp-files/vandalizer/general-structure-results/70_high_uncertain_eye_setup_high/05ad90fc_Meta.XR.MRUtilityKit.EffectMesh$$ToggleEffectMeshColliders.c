/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$ToggleEffectMeshColliders
ENTRY_POINT: 05ad90fc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__ToggleEffectMeshColliders(void)

{
  undefined4 uVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  thunk_FUN_0329bf60();
  if (unaff_x21 != 0) {
    uVar1 = *(undefined4 *)(unaff_x21 + 0x2c);
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined4 *)(unaff_x20 + 0x18) = 0;
    *(undefined4 *)(unaff_x20 + 0x1c) = unaff_w19;
    *(undefined4 *)(unaff_x20 + 8) = uVar1;
    *(undefined4 *)(unaff_x20 + 0xc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


