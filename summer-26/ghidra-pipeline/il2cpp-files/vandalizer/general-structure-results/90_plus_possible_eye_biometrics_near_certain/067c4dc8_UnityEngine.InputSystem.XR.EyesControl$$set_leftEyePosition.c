/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_leftEyePosition
ENTRY_POINT: 067c4dc8
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


void UnityEngine_InputSystem_XR_EyesControl__set_leftEyePosition(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_0329bf60();
  plVar1 = (long *)*unaff_x21;
  if (plVar1 != (long *)0x0) {
    uStack000000000000000c = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230))
    ;
    uVar2 = thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x48),&stack0x0000000c);
    uVar2 = FUN_05c7ecc4(*(undefined8 *)PTR_DAT_0761feb8,uVar2,0);
    FUN_067c3884(uVar2,uVar2);
    *(undefined4 *)(unaff_x20 + 0x60) = 2;
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      UnityEngine_UI_Dropdown_OptionDataList__set_options(*(long *)(unaff_x20 + 0x28),0);
    }
    uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075abd68);
    FUN_042cb1ac();
    uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075b9748);
    FUN_06e62c78(uVar3,uVar2,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
    thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x18),uVar3);
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


