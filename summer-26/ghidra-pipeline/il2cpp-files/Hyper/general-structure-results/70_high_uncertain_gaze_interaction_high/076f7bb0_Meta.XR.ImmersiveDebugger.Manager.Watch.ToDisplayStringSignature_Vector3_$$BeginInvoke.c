/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$BeginInvoke
ENTRY_POINT: 076f7bb0
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__BeginInvoke
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  long unaff_x26;
  long unaff_x27;
  long *plVar1;
  
  plVar1 = *(long **)(unaff_x27 + 0xaf0);
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac10af0);
    *(undefined1 *)(unaff_x26 + 0x894) = 1;
  }
  if (*(int *)(*plVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08df4bb4(param_2,param_3,0,param_4,param_5,param_6,param_7);
  return;
}


