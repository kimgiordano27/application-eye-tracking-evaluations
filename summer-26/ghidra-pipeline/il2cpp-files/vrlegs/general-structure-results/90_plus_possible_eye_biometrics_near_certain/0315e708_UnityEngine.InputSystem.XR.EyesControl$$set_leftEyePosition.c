/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_leftEyePosition
ENTRY_POINT: 0315e708
PROGRAM: vrlegs-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__set_leftEyePosition(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar2 = Cysharp_Threading_Tasks_IUniTaskSource<BaseEventData>_TypeInfo;
                    /* try { // try from 0315e708 to 0325e70f has its CatchHandler @ 0315e93c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_0412bded & 1) == 0) {
    FUN_01ab69ac(Cysharp_Threading_Tasks_IUniTaskSource<BaseEventData>_TypeInfo);
    DAT_0412bded = 1;
  }
  FUN_03112b88(&local_c0,*(undefined8 *)puVar2,0);
  uStack_78 = uStack_b8;
  local_80 = local_c0;
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  uStack_58 = uStack_98;
  local_60 = local_a0;
  uStack_48 = uStack_88;
  uStack_50 = uStack_90;
  if (param_2 != 0) {
    FUN_0315988c(param_1,*(undefined8 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x1c),&local_80);
    FUN_03153c70(param_1,param_2,0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


