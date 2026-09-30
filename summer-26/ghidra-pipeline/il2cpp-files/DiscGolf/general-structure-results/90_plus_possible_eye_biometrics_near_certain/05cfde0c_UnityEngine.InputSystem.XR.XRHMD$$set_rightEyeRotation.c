/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$set_rightEyeRotation
ENTRY_POINT: 05cfde0c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;frame_behavior;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cfdf60) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 UnityEngine_InputSystem_XR_XRHMD__set_rightEyeRotation(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  char cStack00000000000000cc;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    param_1 = *unaff_x20;
  }
  uVar2 = FUN_054ca55c(in_stack_00000028,*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18),0);
  if ((uVar2 & 1) == 0) {
    cStack00000000000000cc = '\0';
    FUN_0554bf68(in_stack_00000020,&stack0x000000cc,0);
    if (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x19 + 0x24)) {
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      do {
        plVar3 = *(long **)(in_stack_00000020 + 0x18);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar1 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
        if (iVar1 < 1) break;
        plVar3 = *(long **)(in_stack_00000020 + 0x18);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        (**(code **)(*plVar3 + 0x3d8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x3e0));
        iVar1 = *(int *)(unaff_x19 + 0x24) + -1;
        *(int *)(unaff_x19 + 0x24) = iVar1;
      } while (*(int *)(unaff_x19 + 0x1c) <= iVar1);
    }
    if (cStack00000000000000cc != '\0') {
      thunk_FUN_02da42ec(in_stack_00000020,0);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


