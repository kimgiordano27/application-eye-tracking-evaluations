/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_leftEyeRotation
ENTRY_POINT: 0569ceb8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0569cf48) */

undefined8 UnityEngine_InputSystem_XR_EyesControl__set_leftEyeRotation(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02b3c81c();
  *(undefined1 *)(unaff_x20 + 0xeed) = 1;
  if ((unaff_x19 == 0) || (iVar2 = FUN_04c2d920(), puVar1 = PTR_DAT_0631e258, iVar2 == 0)) {
    uVar4 = **(undefined8 **)(*(long *)(PTR_DAT_06312310 + 0x90) + 0xb8);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0631e258 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar3 = FUN_04ca74d8();
    uVar4 = thunk_FUN_02b488a8(lVar3,0);
    if (lVar3 != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_04ca6e50(lVar3,0);
    }
  }
  return uVar4;
}


