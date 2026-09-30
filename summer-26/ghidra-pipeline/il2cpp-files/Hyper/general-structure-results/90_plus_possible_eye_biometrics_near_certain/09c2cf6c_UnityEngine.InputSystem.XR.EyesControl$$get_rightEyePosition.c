/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$get_rightEyePosition
ENTRY_POINT: 09c2cf6c
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


void UnityEngine_InputSystem_XR_EyesControl__get_rightEyePosition(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar2 = PTR_DAT_0ac09740;
  if ((*(byte *)(unaff_x20 + 0xf7) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09740);
    *(undefined1 *)(unaff_x20 + 0xf7) = 1;
  }
  lVar3 = FUN_04947fd0(*(undefined8 *)puVar2,8);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (((((uVar1 != 0) &&
          (*(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(param_1 + 0x10), uVar1 != 1)) &&
         (*(undefined1 *)(lVar3 + 0x21) = *(undefined1 *)(param_1 + 0x11), 2 < uVar1)) &&
        ((*(undefined1 *)(lVar3 + 0x22) = *(undefined1 *)(param_1 + 0x12), uVar1 != 3 &&
         (*(undefined1 *)(lVar3 + 0x23) = *(undefined1 *)(param_1 + 0x13), 4 < uVar1)))) &&
       ((*(undefined1 *)(lVar3 + 0x24) = *(undefined1 *)(param_1 + 0x14), uVar1 != 5 &&
        ((*(undefined1 *)(lVar3 + 0x25) = *(undefined1 *)(param_1 + 0x15), 6 < uVar1 &&
         (*(undefined1 *)(lVar3 + 0x26) = *(undefined1 *)(param_1 + 0x16), uVar1 != 7)))))) {
      *(undefined1 *)(lVar3 + 0x27) = *(undefined1 *)(param_1 + 0x17);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


