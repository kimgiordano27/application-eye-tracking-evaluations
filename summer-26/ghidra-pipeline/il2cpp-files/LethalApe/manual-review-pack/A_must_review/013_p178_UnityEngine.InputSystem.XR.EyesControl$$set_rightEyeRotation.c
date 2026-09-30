/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_rightEyeRotation
ENTRY_POINT: 01af4ab4
PROGRAM: LethalApe-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__set_rightEyeRotation(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  
  plVar5 = *(long **)(unaff_x19 + 0x598);
  if ((param_1 & 1) == 0) {
    thunk_FUN_009efa0c(PTR_DAT_02bbd7e0);
    thunk_FUN_009efa0c(PTR_DAT_02bf3a30);
    thunk_FUN_009efa0c(PTR_DAT_02c00fa8);
    thunk_FUN_009efa0c(PTR_DAT_02bea598);
    *(undefined1 *)(unaff_x20 + 0x5c9) = 1;
  }
  lVar3 = *plVar5;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_009ddef4();
    lVar3 = *plVar5;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar3 != 0) {
    FUN_01782090(lVar3,0);
    iVar2 = thunk_FUN_00a033a4(*(long *)(*plVar5 + 0xb8) + 0x10,1,0,0);
    if (iVar2 != 0) {
      return;
    }
    lVar3 = thunk_FUN_00a05c70(*(undefined8 *)PTR_DAT_02bbd7e0);
    puVar1 = PTR_DAT_02bf3a30;
    if (lVar3 != 0) {
      FUN_017809dc(lVar3,0,*(undefined8 *)PTR_DAT_02c00fa8,0);
      lVar4 = thunk_FUN_00a05c70(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        FUN_0178a99c(lVar4,lVar3,0);
        FUN_0178ac40(lVar4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


