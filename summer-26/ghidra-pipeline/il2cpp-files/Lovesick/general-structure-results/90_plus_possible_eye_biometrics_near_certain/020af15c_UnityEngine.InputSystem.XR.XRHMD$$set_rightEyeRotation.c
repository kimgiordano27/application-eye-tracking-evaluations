/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$set_rightEyeRotation
ENTRY_POINT: 020af15c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 139
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_XRHMD__set_rightEyeRotation(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  
  if (in_w8 != 0x11) {
    return;
  }
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Gamepad>__ctor__);
  uVar1 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_020b48c8(uVar1,0x273a,0);
  uVar2 = thunk_FUN_00d48444(PTR_DAT_033eecf8);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar1,uVar2);
}


