/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$FinishSetup
ENTRY_POINT: 07ae59a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__FinishSetup(void)

{
  int in_w8;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338a3c(&stack0x00000008,*unaff_x23);
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  thunk_FUN_03afed3c((ulong)&stack0x00000020 | 8,0);
  thunk_FUN_03afed3c(&stack0x00000040);
  thunk_FUN_03afed3c(&stack0x00000048);
  in_stack_00000020 = 0xffffffff;
  FUN_04132928((ulong)&stack0x00000020 | 8,&stack0x00000020,*unaff_x22);
  FUN_05338a50((ulong)&stack0x00000020 | 8,*unaff_x21);
  return;
}


