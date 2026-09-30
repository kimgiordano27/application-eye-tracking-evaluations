/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_leftEyePosition
ENTRY_POINT: 0376e1b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__set_leftEyePosition(undefined8 param_1)

{
  long lVar1;
  String_t *pSVar2;
  long unaff_x29;
  byte bStack0000000000000084;
  undefined8 uStack0000000000000088;
  undefined8 in_stack_000000f8;
  void *in_stack_00000100;
  String_t *in_stack_00000108;
  InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E *in_stack_00000118;
  
  uStack0000000000000088 = param_1;
  bStack0000000000000084 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(param_1);
  bStack0000000000000084 = bStack0000000000000084 & 1;
  if (bStack0000000000000084 == 0) {
    NullCheck(in_stack_00000100);
    pSVar2 = (String_t *)
             TextInfo_ToTitleCase_m4E869A132CF39BCFC8129690F85509B098994469
                       (in_stack_00000100,in_stack_000000f8);
    InputControl_set_displayName_mBDE31F798F8EC1EFA502FDC9B0788C46ADBB18B7_inline
              (in_stack_00000118,pSVar2,(MethodInfo *)0x0);
  }
  else {
    InputControl_set_displayName_mBDE31F798F8EC1EFA502FDC9B0788C46ADBB18B7_inline
              (in_stack_00000118,in_stack_00000108,(MethodInfo *)0x0);
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


