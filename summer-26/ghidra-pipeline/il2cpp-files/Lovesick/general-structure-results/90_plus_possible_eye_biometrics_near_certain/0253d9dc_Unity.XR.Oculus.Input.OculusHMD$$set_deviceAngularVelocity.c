/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_deviceAngularVelocity
ENTRY_POINT: 0253d9dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_1
*/


void Unity_XR_Oculus_Input_OculusHMD__set_deviceAngularVelocity(void)

{
  long *plVar1;
  long *unaff_x19;
  int unaff_w20;
  long lVar2;
  long unaff_x21;
  undefined4 in_stack_00000008;
  
  thunk_FUN_00d48444();
  *(undefined1 *)(unaff_x21 + 0xb73) = 1;
  if (*(int *)(*(long *)(*unaff_x19 + 0xb8) + 8) != unaff_w20) {
    *(int *)(*(long *)(*unaff_x19 + 0xb8) + 8) = unaff_w20;
    Unity_XR_Oculus_Input_OculusHMD__get_rightEyeRotation();
    plVar1 = *(long **)(*unaff_x19 + 0xb8);
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      if (DAT_03782b2d == '\0') {
        thunk_FUN_00d48444();
        DAT_03782b2d = '\x01';
        plVar1 = *(long **)(*unaff_x19 + 0xb8);
      }
      in_stack_00000008 = (undefined4)plVar1[1];
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),&stack0x00000008,*(undefined8 *)(lVar2 + 0x28));
    }
  }
  return;
}


