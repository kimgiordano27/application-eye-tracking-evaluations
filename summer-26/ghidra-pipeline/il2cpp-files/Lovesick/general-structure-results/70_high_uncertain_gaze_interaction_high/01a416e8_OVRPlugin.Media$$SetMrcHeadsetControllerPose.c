/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 01a416e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


undefined8 OVRPlugin_Media__SetMrcHeadsetControllerPose(void)

{
  return **(undefined8 **)
           (*(long *)Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
           + 0xb8);
}


