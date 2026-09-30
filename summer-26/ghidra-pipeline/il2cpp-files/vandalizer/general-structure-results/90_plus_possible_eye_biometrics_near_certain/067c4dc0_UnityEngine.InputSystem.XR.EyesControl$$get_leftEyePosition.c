/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$get_leftEyePosition
ENTRY_POINT: 067c4dc0
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


void UnityEngine_InputSystem_XR_EyesControl__get_leftEyePosition(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar3;
  undefined4 uStack000000000000000c;
  
  plVar3 = (long *)(unaff_x21 + 0x48);
  *plVar3 = param_2;
  thunk_FUN_0329bf60(plVar3);
  plVar3 = (long *)*plVar3;
  if (plVar3 != (long *)0x0) {
    uStack000000000000000c = (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230))
    ;
    uVar1 = thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x48),&stack0x0000000c);
    uVar1 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_0761feb8,uVar1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


