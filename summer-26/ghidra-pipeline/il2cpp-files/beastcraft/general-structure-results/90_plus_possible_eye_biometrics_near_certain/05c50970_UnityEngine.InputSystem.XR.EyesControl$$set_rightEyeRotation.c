/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_rightEyeRotation
ENTRY_POINT: 05c50970
PROGRAM: beastcraft-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


undefined8 UnityEngine_InputSystem_XR_EyesControl__set_rightEyeRotation(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 uVar6;
  long *unaff_x23;
  
  FUN_02e3ca1c();
  FUN_02e3ca1c(PTR_DAT_06aa4ea0);
  FUN_02e3ca1c(PTR_DAT_06a6add8);
  FUN_02e3ca1c(PTR_DAT_06aa51c8);
  FUN_02e3ca1c(PTR_DAT_06aa51b8);
  FUN_02e3ca1c(PTR_DAT_06aa51d0);
  FUN_02e3ca1c(PTR_DAT_06aa51d8);
  *(undefined1 *)(unaff_x21 + 0xbd6) = 1;
  *unaff_x19 = 0;
  thunk_FUN_02ee2be8();
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar2 = *unaff_x23;
  }
  puVar1 = PTR_DAT_06aa4ea0;
  puVar5 = *(undefined8 **)(lVar2 + 0xb8);
  if (puVar5[1] == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar5 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar6 = *puVar5;
    uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a6add8);
    FUN_052813e4(uVar3,uVar6,*(undefined8 *)PTR_DAT_06aa51c8,0);
    puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *puVar5 = uVar3;
    thunk_FUN_02ee2be8(puVar5,uVar3);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar4 = FUN_039131dc();
  puVar5 = (undefined8 *)PTR_DAT_06aa51d0;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar4 = FUN_05c499f4();
    puVar5 = (undefined8 *)PTR_DAT_06aa51d8;
    if ((uVar4 & 1) == 0) {
      return 1;
    }
  }
  *unaff_x19 = *puVar5;
  thunk_FUN_02ee2be8();
  return 0;
}


