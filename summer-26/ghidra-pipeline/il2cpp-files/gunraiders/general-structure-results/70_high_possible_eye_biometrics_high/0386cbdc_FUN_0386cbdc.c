/*
FUNCTION_NAME: FUN_0386cbdc
ENTRY_POINT: 0386cbdc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context
*/


void FUN_0386cbdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = FUN_0386c610();
    if (*(char *)(param_1 + 0x93) == '\0') {
      if (lVar2 == 0) goto LAB_0386cc60;
      if (*(long *)(lVar2 + 0x10) == *(long *)(param_1 + 0xd0)) {
        bVar1 = true;
      }
      else if (*(long *)(lVar2 + 0x10) == *(long *)(param_1 + 0xf0)) {
        bVar1 = *(long *)(lVar2 + 0x18) == *(long *)(param_1 + 0xd0);
      }
      else {
        bVar1 = false;
      }
      if (bVar1 != (*(long *)(lVar2 + 0x20) == *(long *)(param_1 + 0x108))) {
        uVar3 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        uVar3 = FUN_01c5d2fc(uVar3,1);
        FUN_019b2708();
        FUN_019b8dd4(uVar3,param_4);
        FUN_019b8e08(uVar3,0,param_4);
        uVar4 = thunk_FUN_01c273e8(Method_OVRFaceExpressions_get_Item__);
        uVar3 = FUN_0389021c(uVar4,uVar3,0);
        thunk_FUN_01c273e8(PTR_DAT_04231770);
        uVar4 = thunk_FUN_01c496e0();
        FUN_032467a0(uVar4,uVar3,0);
        uVar3 = thunk_FUN_01c273e8(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar4,uVar3);
      }
    }
    return;
  }
LAB_0386cc60:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


