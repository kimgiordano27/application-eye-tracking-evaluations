/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$get_leftEyeRotation
ENTRY_POINT: 05d01300
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


undefined8 UnityEngine_InputSystem_XR_Eyes__get_leftEyeRotation(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long lVar7;
  int unaff_w23;
  int in_stack_00000028;
  
  FUN_0297be94(&stack0x00000008);
  if (unaff_w23 == 1) {
    puVar3 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar4 = thunk_FUN_02dfd288(PTR_DAT_069fcb10);
    uVar5 = thunk_FUN_02df8d3c(uVar4,*(undefined8 *)*puVar3);
    iVar1 = in_stack_00000028;
    if ((uVar5 & 1) != 0) {
      uVar4 = *puVar3;
      *(undefined8 *)(&stack0x00000020 + (long)in_stack_00000028 * 8) = uVar4;
      in_stack_00000028 = in_stack_00000028 + 1;
      __cxa_end_catch();
      in_stack_00000028 = iVar1;
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(uVar4);
    }
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *puVar3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&PTR_PTR_066567d8,0);
  }
  if (unaff_w23 == 1) {
    plVar2 = (long *)__cxa_begin_catch(param_1);
    lVar7 = *plVar2;
    __cxa_end_catch();
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar7);
    }
    return *(undefined8 *)(unaff_x19 + 0xb0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e86b8c(param_1);
}


