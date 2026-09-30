/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose
ENTRY_POINT: 07ae5990
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 99
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__set_pose
               (undefined8 param_1,long param_2)

{
  long unaff_x21;
  undefined8 *puVar1;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000050;
  
  puVar1 = *(undefined8 **)(unaff_x21 + 0x2d8);
  uStack0000000000000020 = param_1;
  uStack0000000000000030 = param_1;
  uStack0000000000000050 = param_1;
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338a3c(&stack0x00000008,*unaff_x23);
  uStack0000000000000030 = in_stack_00000010;
  uStack0000000000000028 = in_stack_00000008;
  uStack0000000000000038 = in_stack_00000018;
  thunk_FUN_03afed3c((ulong)&stack0x00000020 | 8,0);
  thunk_FUN_03afed3c(&stack0x00000040);
  thunk_FUN_03afed3c(&stack0x00000048);
  uStack0000000000000020 = CONCAT44(uStack0000000000000020._4_4_,0xffffffff);
  FUN_04132928((ulong)&stack0x00000020 | 8,&stack0x00000020,*unaff_x22);
  FUN_05338a50((ulong)&stack0x00000020 | 8,*puVar1);
  return;
}


