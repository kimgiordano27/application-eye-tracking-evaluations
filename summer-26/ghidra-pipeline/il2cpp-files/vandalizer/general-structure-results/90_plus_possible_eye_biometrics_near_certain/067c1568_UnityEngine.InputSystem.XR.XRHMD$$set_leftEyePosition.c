/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$set_leftEyePosition
ENTRY_POINT: 067c1568
PROGRAM: vandalizer-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_XRHMD__set_leftEyePosition(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((DAT_07a4db23 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0761e940);
    DAT_07a4db23 = 1;
  }
  puVar2 = PTR_DAT_0761e940;
  if (param_1 != (long *)0x0) {
    uVar3 = *(undefined4 *)(param_2 + 0x24);
    uVar4 = *(undefined4 *)(param_2 + 0x28);
    uVar5 = *(undefined4 *)(param_2 + 0x2c);
    uVar6 = *(undefined4 *)(param_2 + 0x30);
    uVar7 = *(undefined4 *)(param_2 + 0x34);
    uVar8 = *(undefined4 *)(param_2 + 0x38);
    uVar9 = *(undefined4 *)(param_2 + 0x3c);
    *(undefined1 *)(param_1 + 0xb) = 1;
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
      FUN_067c008c(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2730(uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


