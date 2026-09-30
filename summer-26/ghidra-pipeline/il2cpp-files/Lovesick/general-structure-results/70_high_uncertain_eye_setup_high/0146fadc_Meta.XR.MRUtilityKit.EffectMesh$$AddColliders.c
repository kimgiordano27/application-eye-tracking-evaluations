/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$AddColliders
ENTRY_POINT: 0146fadc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__AddColliders
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1._8_8_;
  uVar1 = param_1._0_8_;
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar1;
  *(long *)(unaff_x19 + 0xb8) = param_3._8_8_;
  *(long *)(unaff_x19 + 0xb0) = param_3._0_8_;
  *(long *)(unaff_x19 + 200) = param_2._8_8_;
  *(long *)(unaff_x19 + 0xc0) = param_2._0_8_;
  *(undefined8 *)(unaff_x19 + 0xd0) = 0x3f80000000000000;
  FUN_017b46ec();
  return;
}


