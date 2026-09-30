/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_leftEyePosition
ENTRY_POINT: 05d012f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


undefined8 UnityEngine_InputSystem_XR_Eyes__set_leftEyePosition(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *puVar4;
  long unaff_x22;
  char *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  if (*in_stack_00000010 != '\0') {
    thunk_FUN_02da42ec(*in_stack_00000018,0);
  }
  if (unaff_x22 == 0) {
    uVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>__ctor__
                              );
    FUN_05ce0750();
    puVar4 = (undefined8 *)(unaff_x19 + 0xb0);
    *puVar4 = uVar2;
    LeanTween__value(puVar4,uVar2);
    puVar1 = Method_System_Collections_Generic_HashSet<string>__ctor__;
    lVar3 = *(long *)Method_System_Collections_Generic_HashSet<string>__ctor__;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar3 = *(long *)puVar1;
    }
    FUN_05557f04(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),*puVar4,0);
    return *(undefined8 *)(unaff_x19 + 0xb0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


