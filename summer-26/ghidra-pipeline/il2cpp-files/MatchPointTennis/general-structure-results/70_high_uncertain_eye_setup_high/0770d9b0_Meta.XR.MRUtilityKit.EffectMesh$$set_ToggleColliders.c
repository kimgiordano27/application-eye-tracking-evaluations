/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$set_ToggleColliders
ENTRY_POINT: 0770d9b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__set_ToggleColliders(long param_1)

{
  long in_x9;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x25;
  
  if (in_x9 != 0) {
    (**(code **)(in_x9 + 0x18))
              (*(undefined8 *)(in_x9 + 0x40),1,*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)(in_x9 + 0x28));
    *unaff_x20 = 0;
    thunk_FUN_044bb4b4();
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_0795995c(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


