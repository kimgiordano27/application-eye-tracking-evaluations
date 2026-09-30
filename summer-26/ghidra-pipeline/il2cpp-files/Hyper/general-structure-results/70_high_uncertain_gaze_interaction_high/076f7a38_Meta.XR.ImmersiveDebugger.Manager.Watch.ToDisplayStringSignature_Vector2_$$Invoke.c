/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$Invoke
ENTRY_POINT: 076f7a38
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


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__Invoke
               (long param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0ac10af0;
  if ((DAT_0b327892 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac10af0);
    DAT_0b327892 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08df4798(param_1,param_2 & 1,param_5,param_6,0);
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x50) = param_3;
    *(undefined8 *)(param_1 + 0x58) = param_4;
  }
  return;
}


