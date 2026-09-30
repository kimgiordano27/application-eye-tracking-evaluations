/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 038ee3d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__Dispose
              (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16])

{
  undefined4 in_w9;
  long unaff_x19;
  
                    /* try { // try from 038ee3d0 to 039ee3f7 has its CatchHandler @ 038ee340 */
  *(undefined4 *)(unaff_x19 + 0x18) = in_w9;
  *(long *)(param_1 + 0x28) = param_2._8_8_;
  *(long *)(param_1 + 0x20) = param_2._0_8_;
  *(long *)(param_1 + 0x38) = param_3._8_8_;
  *(long *)(param_1 + 0x30) = param_3._0_8_;
  *(long *)(param_1 + 0x48) = param_4._8_8_;
  *(long *)(param_1 + 0x40) = param_4._0_8_;
  return *(int *)(unaff_x19 + 0x18) + -1;
}


