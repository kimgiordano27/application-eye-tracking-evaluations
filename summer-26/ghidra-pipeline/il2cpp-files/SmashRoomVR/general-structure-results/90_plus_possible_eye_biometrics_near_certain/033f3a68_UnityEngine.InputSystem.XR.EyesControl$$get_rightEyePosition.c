/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$get_rightEyePosition
ENTRY_POINT: 033f3a68
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


void UnityEngine_InputSystem_XR_EyesControl__get_rightEyePosition(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x21;
  long unaff_x22;
  long *plVar6;
  long unaff_x23;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(unaff_x23 + 0x4f0);
  plVar6 = *(long **)(unaff_x22 + 0x970);
  if ((*(byte *)(unaff_x21 + 0x452) & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_5950);
    thunk_FUN_01ad9084(PTR_DAT_03d8e9f8);
    thunk_FUN_01ad9084(StringLiteral_5600);
    thunk_FUN_01ad9084(StringLiteral_5968);
    *(undefined1 *)(unaff_x21 + 0x452) = 1;
  }
  *(undefined8 *)(param_1 + 0x60) = *puVar7;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x94) = 100000;
  if (*(int *)(*plVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03083ea4(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = DAT_00b91d60;
  puVar1 = StringLiteral_5950;
  if (param_2 != 0) {
    lVar2 = FUN_03386f60(param_2,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar5);
      lVar5 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_03d8e9f8;
    if (lVar2 == **(long **)(lVar5 + 0xb8)) {
      *(long *)(param_1 + 0x98) = param_2;
      thunk_FUN_01b4f09c((long *)(param_1 + 0x98),param_2);
      *(undefined4 *)(param_1 + 0x50) = 1;
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
      UnityEngine_InputSystem_DefaultInputActions_PlayerActions___ctor(uVar3,9,0);
      *(undefined8 *)(param_1 + 0x58) = uVar3;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x58),uVar3);
      return;
    }
    thunk_FUN_01ad9084(StringLiteral_2200);
    uVar3 = thunk_FUN_01afaadc();
    uVar4 = thunk_FUN_01ad9084(StringLiteral_8049);
    FUN_02fd9200(uVar3,uVar4,0);
    uVar4 = thunk_FUN_01ad9084(PTR_DAT_03d8f150);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar3,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


