/*
FUNCTION_NAME: OVRPlugin$$ResetBodyTrackingCalibration
ENTRY_POINT: 0322bf88
PROGRAM: vrfs-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void OVRPlugin__ResetBodyTrackingCalibration
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  if (pcRam0000000007237ef8 == (code *)0x0) {
    pcRam0000000007237ef8 =
         (code *)FUN_0160ed64(
                             "UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                             );
  }
                    /* WARNING: Could not recover jumptable at 0x0322bfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000007237ef8)(param_1,param_2,param_3,param_4);
  return;
}


