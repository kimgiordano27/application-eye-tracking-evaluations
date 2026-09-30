/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$get_rightEyeRotation
ENTRY_POINT: 067c4e08
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


void UnityEngine_InputSystem_XR_EyesControl__get_rightEyeRotation
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = FUN_05c7ecc4(*param_1,param_2,0);
  FUN_067c3884(uVar1,uVar1);
  *(undefined4 *)(unaff_x20 + 0x60) = 2;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    UnityEngine_UI_Dropdown_OptionDataList__set_options(*(long *)(unaff_x20 + 0x28),0);
  }
  uVar1 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075abd68);
  FUN_042cb1ac();
  uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075b9748);
  FUN_06e62c78(uVar2,uVar1,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x18),uVar2);
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return;
}


