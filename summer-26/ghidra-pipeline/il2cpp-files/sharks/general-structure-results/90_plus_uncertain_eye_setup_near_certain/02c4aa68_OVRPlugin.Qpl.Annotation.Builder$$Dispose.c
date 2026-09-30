/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Dispose
ENTRY_POINT: 02c4aa68
PROGRAM: sharks-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4aad4) */

void OVRPlugin_Qpl_Annotation_Builder__Dispose(undefined8 param_1)

{
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  
  if (unaff_x21 != 0) {
    *unaff_x20 = 0;
    thunk_FUN_0188fd20();
  }
  if (unaff_x23 != 0) {
    (**(code **)(unaff_x23 + 0x18))(*(undefined8 *)(unaff_x23 + 0x40));
    if (unaff_x21 != 0) {
      *unaff_x20 = unaff_x21;
      thunk_FUN_0188fd20();
    }
    FUN_02c391ac(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


