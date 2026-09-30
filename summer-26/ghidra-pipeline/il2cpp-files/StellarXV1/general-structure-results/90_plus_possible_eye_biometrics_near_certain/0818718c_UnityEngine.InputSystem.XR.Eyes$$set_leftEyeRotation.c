/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_leftEyeRotation
ENTRY_POINT: 0818718c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__set_leftEyeRotation(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_092d1c50;
  if ((DAT_0989bc8d & 1) == 0) {
    FUN_04077588(PTR_DAT_092d1c50);
    DAT_0989bc8d = 1;
  }
  lVar3 = FUN_04077674(*(undefined8 *)puVar2,8);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (((((uVar1 != 0) &&
          (*(undefined2 *)(lVar3 + 0x20) = *(undefined2 *)(param_1 + 0x10), uVar1 != 1)) &&
         (*(undefined2 *)(lVar3 + 0x22) = *(undefined2 *)(param_1 + 0x12), 2 < uVar1)) &&
        ((*(undefined2 *)(lVar3 + 0x24) = *(undefined2 *)(param_1 + 0x14), uVar1 != 3 &&
         (*(undefined2 *)(lVar3 + 0x26) = *(undefined2 *)(param_1 + 0x16), 4 < uVar1)))) &&
       ((*(undefined2 *)(lVar3 + 0x28) = *(undefined2 *)(param_1 + 0x18), uVar1 != 5 &&
        ((*(undefined2 *)(lVar3 + 0x2a) = *(undefined2 *)(param_1 + 0x1a), 6 < uVar1 &&
         (*(undefined2 *)(lVar3 + 0x2c) = *(undefined2 *)(param_1 + 0x1c), uVar1 != 7)))))) {
      *(undefined2 *)(lVar3 + 0x2e) = *(undefined2 *)(param_1 + 0x1e);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


