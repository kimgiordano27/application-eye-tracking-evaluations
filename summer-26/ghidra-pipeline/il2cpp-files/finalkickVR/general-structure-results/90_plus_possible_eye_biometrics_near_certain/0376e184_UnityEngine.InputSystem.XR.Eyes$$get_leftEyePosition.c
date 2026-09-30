/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$get_leftEyePosition
ENTRY_POINT: 0376e184
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 215
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo;active_gaze_retrieval;active_gaze_interaction;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;possible_biometric_feature_from_active_eye_context;functionality_gaze_interaction_hits_2;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__get_leftEyePosition(void)

{
  long lVar1;
  undefined8 uVar2;
  String_t *pSVar3;
  long unaff_x29;
  undefined8 in_stack_00000008;
  byte bStack0000000000000084;
  String_t *pSStack0000000000000098;
  Il2CppObject *in_stack_000000a0;
  void *in_stack_00000100;
  String_t *in_stack_00000108;
  InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E *in_stack_00000118;
  
  pSStack0000000000000098 = in_stack_00000108;
  NullCheck(in_stack_000000a0);
  uVar2 = VirtualFuncInvoker1<String_t*,String_t*>::Invoke
                    (8,in_stack_000000a0,pSStack0000000000000098);
  bStack0000000000000084 =
       String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(uVar2,in_stack_00000008);
  bStack0000000000000084 = bStack0000000000000084 & 1;
  if (bStack0000000000000084 == 0) {
    NullCheck(in_stack_00000100);
    pSVar3 = (String_t *)
             TextInfo_ToTitleCase_m4E869A132CF39BCFC8129690F85509B098994469(in_stack_00000100,uVar2)
    ;
    InputControl_set_displayName_mBDE31F798F8EC1EFA502FDC9B0788C46ADBB18B7_inline
              (in_stack_00000118,pSVar3,(MethodInfo *)0x0);
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


