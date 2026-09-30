/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_rightEyeRotation
ENTRY_POINT: 033f36b8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__set_rightEyeRotation(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x23;
  long *unaff_x25;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto code_r0x033f370c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(param_1,*unaff_x25,0);
code_r0x033f370c:
    (*(code *)*puVar1)(param_1,puVar1[1]);
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bbda54();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab0160();
}


