/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 046da180
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  int iVar1;
  long lVar2;
  long in_x9;
  int unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x26;
  undefined4 unaff_w27;
  int *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + param_1 * in_x9 + 0x24);
  lVar2 = unaff_x26 + param_1 * 0x28;
  *(undefined4 *)(lVar2 + 0x20) = unaff_w27;
  iVar1 = *unaff_x28;
  *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
  *(int *)(lVar2 + 0x24) = iVar1 + -1;
  uVar4 = unaff_x29[1];
  uVar3 = *unaff_x29;
  *(undefined8 *)(lVar2 + 0x40) = unaff_x29[2];
  *(undefined8 *)(lVar2 + 0x38) = uVar4;
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  *unaff_x28 = unaff_w19 + 1;
  return 1;
}


