/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$AddColliders
ENTRY_POINT: 04c39fb8
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__AddColliders(void)

{
  ushort uVar1;
  int in_w8;
  long unaff_x19;
  int unaff_w21;
  
  if (unaff_w21 < in_w8) {
    do {
      uVar1 = FUN_04db48b0();
      if ((9 < (ushort)(uVar1 - 0x30)) &&
         ((0x25 < uVar1 - 0x41 || ((1L << ((ulong)(uVar1 - 0x41) & 0x3f) & 0x3f0000003fU) == 0)))) {
        return;
      }
      unaff_w21 = unaff_w21 + 1;
    } while (unaff_w21 < *(int *)(unaff_x19 + 0x10));
  }
  FUN_04dbaed4();
  return;
}


