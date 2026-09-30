/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$get_leftEyeRotation
ENTRY_POINT: 0315e718
PROGRAM: vrlegs-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__get_leftEyeRotation(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long lStack0000000000000088;
  
  puVar2 = Cysharp_Threading_Tasks_IUniTaskSource<BaseEventData>_TypeInfo;
                    /* try { // try from 0315e718 to 0325e723 has its CatchHandler @ 0315e930 */
  lVar1 = tpidr_el0;
  lStack0000000000000088 = *(long *)(lVar1 + 0x28);
  if ((DAT_0412bded & 1) == 0) {
    FUN_01ab69ac(Cysharp_Threading_Tasks_IUniTaskSource<BaseEventData>_TypeInfo);
    DAT_0412bded = 1;
  }
  FUN_03112b88(*(undefined8 *)puVar2,0);
  in_stack_00000048 = in_stack_00000008;
  in_stack_00000040 = in_stack_00000000;
  in_stack_00000058 = in_stack_00000018;
  in_stack_00000050 = in_stack_00000010;
  in_stack_00000068 = in_stack_00000028;
  in_stack_00000060 = in_stack_00000020;
  in_stack_00000078 = in_stack_00000038;
  in_stack_00000070 = in_stack_00000030;
  if (param_2 != 0) {
    FUN_0315988c(param_1,*(undefined8 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x1c),
                 &stack0x00000040);
    FUN_03153c70(param_1,param_2,0);
    if (*(long *)(lVar1 + 0x28) == lStack0000000000000088) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


