/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 04929cd4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__get_Current(long param_1)

{
  long lVar1;
  long in_x9;
  long in_x10;
  long unaff_x19;
  undefined4 unaff_w25;
  long unaff_x26;
  long unaff_x27;
  undefined4 *unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *in_stack_00000008;
  
  *(int *)(param_1 + in_x10 * 4 + 0x20) = *(int *)(unaff_x27 + unaff_x26 * in_x9 + 0x24) + 1;
  lVar1 = unaff_x27 + unaff_x26 * 0x24;
  uVar3 = *(undefined8 *)(lVar1 + 0x34);
  uVar2 = *(undefined8 *)(lVar1 + 0x2c);
  in_stack_00000008[2] = *(undefined8 *)(lVar1 + 0x3c);
  in_stack_00000008[1] = uVar3;
  *in_stack_00000008 = uVar2;
  *unaff_x29 = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
  *(undefined4 *)(unaff_x19 + 0x24) = unaff_w25;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


