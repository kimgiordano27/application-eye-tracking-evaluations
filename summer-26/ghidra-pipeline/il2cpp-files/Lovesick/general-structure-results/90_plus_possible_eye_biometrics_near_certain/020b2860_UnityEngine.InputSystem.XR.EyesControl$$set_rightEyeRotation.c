/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_rightEyeRotation
ENTRY_POINT: 020b2860
PROGRAM: Lovesick-libil2cpp.so
SCORE: 137
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


undefined8
UnityEngine_InputSystem_XR_EyesControl__set_rightEyeRotation(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x25;
  
  *(undefined8 *)(param_2 + 0x60) = param_1;
  puVar1 = Method_System_Nullable<Bounds>_get_Value__;
  FUN_020baaf0(param_2,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *(long *)puVar1;
  }
  puVar2 = StringLiteral_5535;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x50);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 == 0) goto LAB_020b2954;
    FUN_0201ae88(lVar4,uVar5,*(undefined8 *)PTR_DAT_033f0608,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50) = lVar4;
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = thunk_FUN_00d62348(*unaff_x25);
  if (lVar3 != 0) {
    FUN_0201b244(lVar3,2,lVar4,uVar5,0);
    FUN_020afbe0();
    return 1;
  }
LAB_020b2954:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


