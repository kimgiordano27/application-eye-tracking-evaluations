/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$EndInvoke
ENTRY_POINT: 0533c550
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


bool Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__EndInvoke
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_03b921e8(*(undefined8 *)(param_1 + 0x10),param_2,param_3,
                         *(int *)(param_1 + 0x18) + -1,
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30));
    bVar1 = iVar2 != -1;
  }
  return bVar1;
}


