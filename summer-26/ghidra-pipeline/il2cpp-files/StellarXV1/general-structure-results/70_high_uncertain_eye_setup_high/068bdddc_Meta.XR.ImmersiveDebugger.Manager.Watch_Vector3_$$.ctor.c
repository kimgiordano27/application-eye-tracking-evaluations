/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.ctor
ENTRY_POINT: 068bdddc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___ctor(undefined8 param_1)

{
  bool in_ZR;
  long unaff_x19;
  
  if (!in_ZR) {
    *(undefined8 *)(unaff_x19 + 0x38) = param_1;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x38),param_1);
    if (4 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)PTR_DAT_092abe98;
      thunk_FUN_040ec700();
      FUN_074e71ac();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


