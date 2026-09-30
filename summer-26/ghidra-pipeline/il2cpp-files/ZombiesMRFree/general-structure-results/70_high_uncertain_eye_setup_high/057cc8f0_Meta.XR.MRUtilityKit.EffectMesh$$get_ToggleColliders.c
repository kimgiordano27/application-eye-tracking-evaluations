/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$get_ToggleColliders
ENTRY_POINT: 057cc8f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__get_ToggleColliders(long param_1,ulong param_2)

{
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  
  while( true ) {
    FUN_04430018(param_1,param_2,*(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x68));
    FUN_04f3e428();
    unaff_w21 = unaff_w21 + 1;
    if (unaff_x20[5] == 0) break;
    if (*(int *)(unaff_x20[5] + 0x18) <= (int)unaff_w21) {
      return;
    }
    (**(code **)(*unaff_x20 + 0x178))();
    param_1 = unaff_x20[5];
    if (param_1 == 0) break;
    in_x9 = *(long *)(unaff_x19 + 0x20);
    param_2 = (ulong)unaff_w21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


