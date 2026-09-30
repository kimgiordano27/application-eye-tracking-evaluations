/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_rightEyePosition
ENTRY_POINT: 05c50958
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


undefined8 UnityEngine_InputSystem_XR_EyesControl__set_rightEyePosition(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long unaff_x21;
  long lVar6;
  undefined8 uVar7;
  long unaff_x23;
  long *plVar8;
  
  plVar8 = *(long **)(unaff_x23 + 0x1b8);
  if ((*(byte *)(unaff_x21 + 0xbd6) & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06aa51c0);
    FUN_02e3ca1c(PTR_DAT_06aa4ea0);
    FUN_02e3ca1c(PTR_DAT_06a6add8);
    FUN_02e3ca1c(PTR_DAT_06aa51c8);
    FUN_02e3ca1c(PTR_DAT_06aa51b8);
    FUN_02e3ca1c(PTR_DAT_06aa51d0);
    FUN_02e3ca1c(PTR_DAT_06aa51d8);
    *(undefined1 *)(unaff_x21 + 0xbd6) = 1;
  }
  *unaff_x19 = 0;
  thunk_FUN_02ee2be8();
  lVar3 = *plVar8;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar3 = *plVar8;
  }
  puVar1 = PTR_DAT_06aa4ea0;
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar5 = *(undefined8 **)(*plVar8 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a6add8);
    FUN_052813e4(lVar6,uVar7,*(undefined8 *)PTR_DAT_06aa51c8,0);
    plVar8 = (long *)(*(long *)(*plVar8 + 0xb8) + 8);
    *plVar8 = lVar6;
    thunk_FUN_02ee2be8(plVar8,lVar6);
  }
  puVar2 = PTR_DAT_06aa51c0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar4 = FUN_039131dc(param_1,lVar6,*(undefined8 *)puVar2);
  puVar5 = (undefined8 *)PTR_DAT_06aa51d0;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar4 = FUN_05c499f4(param_1);
    puVar5 = (undefined8 *)PTR_DAT_06aa51d8;
    if ((uVar4 & 1) == 0) {
      return 1;
    }
  }
  *unaff_x19 = *puVar5;
  thunk_FUN_02ee2be8();
  return 0;
}


