/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$get_rightEyeRotation
ENTRY_POINT: 09c2cf84
PROGRAM: Hyper-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__get_rightEyeRotation(long param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x740));
  *(undefined1 *)(unaff_x20 + 0xf7) = 1;
  lVar2 = FUN_04947fd0(*unaff_x21,8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (((((uVar1 != 0) &&
        (*(undefined1 *)(lVar2 + 0x20) = *(undefined1 *)(unaff_x19 + 0x10), uVar1 != 1)) &&
       (*(undefined1 *)(lVar2 + 0x21) = *(undefined1 *)(unaff_x19 + 0x11), 2 < uVar1)) &&
      ((*(undefined1 *)(lVar2 + 0x22) = *(undefined1 *)(unaff_x19 + 0x12), uVar1 != 3 &&
       (*(undefined1 *)(lVar2 + 0x23) = *(undefined1 *)(unaff_x19 + 0x13), 4 < uVar1)))) &&
     ((*(undefined1 *)(lVar2 + 0x24) = *(undefined1 *)(unaff_x19 + 0x14), uVar1 != 5 &&
      ((*(undefined1 *)(lVar2 + 0x25) = *(undefined1 *)(unaff_x19 + 0x15), 6 < uVar1 &&
       (*(undefined1 *)(lVar2 + 0x26) = *(undefined1 *)(unaff_x19 + 0x16), uVar1 != 7)))))) {
    *(undefined1 *)(lVar2 + 0x27) = *(undefined1 *)(unaff_x19 + 0x17);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


