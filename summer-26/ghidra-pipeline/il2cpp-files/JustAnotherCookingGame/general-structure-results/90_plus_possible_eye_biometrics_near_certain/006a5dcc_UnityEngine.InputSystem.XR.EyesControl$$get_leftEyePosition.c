/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$get_leftEyePosition
ENTRY_POINT: 006a5dcc
PROGRAM: JustAnotherCookingGame-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


undefined8 UnityEngine_InputSystem_XR_EyesControl__get_leftEyePosition(void)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  iVar2 = FUN_00b8c11c();
  if (iVar2 == 0) {
    lVar4 = **(long **)(unaff_x19 + 0x30);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    if ((uVar1 & 1) == 0) {
      FUN_005c1b60(lVar4);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = **(long **)(unaff_x19 + 0x30);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        FUN_005c1b60(lVar4);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        lVar4 = **(long **)(unaff_x19 + 0x30);
        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
          FUN_005c1b60(lVar4);
        }
        thunk_FUN_005c4488(lVar4);
      }
    }
    lVar4 = **(long **)(unaff_x19 + 0x30);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      FUN_005c1b60(lVar4);
    }
    uVar3 = **(undefined8 **)(lVar4 + 0xb8);
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_00769c48(&stack0x00000010);
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 8);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      FUN_005c1b60(lVar4);
    }
    uVar3 = thunk_FUN_005bb628(lVar4);
  }
  return uVar3;
}


