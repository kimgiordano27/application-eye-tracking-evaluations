/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_leftEyeRotation
ENTRY_POINT: 0376e22c
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


void UnityEngine_InputSystem_XR_Eyes__set_leftEyeRotation
               (undefined8 param_1,undefined8 param_2,MethodInfo *param_3)

{
  long lVar1;
  long unaff_x29;
  String_t *in_stack_00000060;
  InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E *in_stack_00000118;
  
  InputControl_set_displayName_mBDE31F798F8EC1EFA502FDC9B0788C46ADBB18B7_inline
            (in_stack_00000118,in_stack_00000060,param_3);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


