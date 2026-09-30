/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$get_leftEyeRotation
ENTRY_POINT: 0376e1fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__get_leftEyeRotation(void *param_1)

{
  long lVar1;
  String_t *pSVar2;
  long unaff_x29;
  undefined8 uStack0000000000000068;
  void *pvStack0000000000000070;
  undefined8 in_stack_000000f8;
  InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E *in_stack_00000118;
  
  uStack0000000000000068 = in_stack_000000f8;
  pvStack0000000000000070 = param_1;
  NullCheck(param_1);
  pSVar2 = (String_t *)
           TextInfo_ToTitleCase_m4E869A132CF39BCFC8129690F85509B098994469
                     (pvStack0000000000000070,uStack0000000000000068);
  InputControl_set_displayName_mBDE31F798F8EC1EFA502FDC9B0788C46ADBB18B7_inline
            (in_stack_00000118,pSVar2,(MethodInfo *)0x0);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


