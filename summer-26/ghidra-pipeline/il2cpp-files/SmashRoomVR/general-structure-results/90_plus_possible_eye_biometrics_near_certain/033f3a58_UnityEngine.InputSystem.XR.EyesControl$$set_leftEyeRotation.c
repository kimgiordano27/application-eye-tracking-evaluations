/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_leftEyeRotation
ENTRY_POINT: 033f3a58
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__set_leftEyeRotation(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = StringLiteral_5968;
  puVar1 = StringLiteral_5600;
  if ((DAT_03ff6452 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_5950);
    thunk_FUN_01ad9084(PTR_DAT_03d8e9f8);
    thunk_FUN_01ad9084(StringLiteral_5600);
    thunk_FUN_01ad9084(StringLiteral_5968);
    DAT_03ff6452 = 1;
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)puVar2;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x94) = 100000;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03083ea4(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = DAT_00b91d60;
  puVar1 = StringLiteral_5950;
  if (param_2 != 0) {
    lVar3 = FUN_03386f60(param_2,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
      lVar6 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_03d8e9f8;
    if (lVar3 == **(long **)(lVar6 + 0xb8)) {
      *(long *)(param_1 + 0x98) = param_2;
      thunk_FUN_01b4f09c((long *)(param_1 + 0x98),param_2);
      *(undefined4 *)(param_1 + 0x50) = 1;
      uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
      UnityEngine_InputSystem_DefaultInputActions_PlayerActions___ctor(uVar4,9,0);
      *(undefined8 *)(param_1 + 0x58) = uVar4;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x58),uVar4);
      return;
    }
    thunk_FUN_01ad9084(StringLiteral_2200);
    uVar4 = thunk_FUN_01afaadc();
    uVar5 = thunk_FUN_01ad9084(StringLiteral_8049);
    FUN_02fd9200(uVar4,uVar5,0);
    uVar5 = thunk_FUN_01ad9084(PTR_DAT_03d8f150);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar4,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


