/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_rightEyePosition
ENTRY_POINT: 0315aea8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_XRHMD__get_rightEyePosition(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x24;
  long in_stack_00000118;
  
                    /* catch() { ... } // from try @ 0315ae98 with catch @ 0315aeac */
  lVar2 = thunk_FUN_01a89d6c();
  puVar1 = System_Collections_Generic_IReadOnlyList<Instruction>_TypeInfo;
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar3,0);
  }
  if (4 < *(uint *)(unaff_x21 + 0x18)) {
    *(undefined8 *)(unaff_x21 + 0x40) = unaff_x22;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar3 = FUN_025be8f4(*(undefined8 *)puVar1);
    FUN_0311e224(uVar3,0);
    FUN_03155d28();
    if (*(long *)(unaff_x24 + 0x28) == in_stack_00000118) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


