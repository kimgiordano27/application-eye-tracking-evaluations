/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$BeginInvoke
ENTRY_POINT: 05836ba8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__BeginInvoke(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_04a43668();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  FUN_04a43668(unaff_x19 + 0x38,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28));
  return;
}


