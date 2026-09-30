/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$EndInvoke
ENTRY_POINT: 05b66780
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__EndInvoke(void)

{
  undefined1 in_w8;
  undefined4 unaff_w20;
  long unaff_x24;
  long *unaff_x25;
  
                    /* try { // try from 05b66780 to 05c667ab has its CatchHandler @ 05b667b8 */
  *(undefined1 *)(unaff_x24 + 0x430) = in_w8;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0717c324(unaff_w20,0);
  FUN_05bf9494();
  return;
}


