/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_rightEyeRotation
ENTRY_POINT: 05cfde04
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

undefined8 UnityEngine_InputSystem_XR_XRHMD__get_rightEyeRotation(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  char cStack00000000000000cc;
  
  plVar5 = *(long **)(unaff_x20 + 0x268);
  lVar2 = *plVar5;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar2 = *plVar5;
  }
  uVar3 = FUN_054ca55c(in_stack_00000028,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18),0);
  if ((uVar3 & 1) == 0) {
    cStack00000000000000cc = '\0';
    FUN_0554bf68(in_stack_00000020,&stack0x000000cc,0);
    if (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x19 + 0x24)) {
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      do {
        plVar5 = *(long **)(in_stack_00000020 + 0x18);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar1 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        if (iVar1 < 1) break;
        plVar5 = *(long **)(in_stack_00000020 + 0x18);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        (**(code **)(*plVar5 + 0x3d8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x3e0));
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


