/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$set_rightEyePosition
ENTRY_POINT: 05cfddf4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 143
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;frame_behavior;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cfdf60) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 UnityEngine_InputSystem_XR_XRHMD__set_rightEyePosition(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long in_x9;
  long unaff_x19;
  int unaff_w21;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  char cStack00000000000000cc;
  
  puVar1 = PTR_DAT_069fc268;
  uVar6 = 1;
  if ((in_x9 == 0) && (unaff_w21 == 0)) {
    lVar3 = *(long *)PTR_DAT_069fc268;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar3 = *(long *)puVar1;
    }
    uVar4 = FUN_054ca55c(in_stack_00000028,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18),0);
    if ((uVar4 & 1) == 0) {
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
          iVar2 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
          if (iVar2 < 1) break;
          plVar5 = *(long **)(in_stack_00000020 + 0x18);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          (**(code **)(*plVar5 + 0x3d8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x3e0));
          iVar2 = *(int *)(unaff_x19 + 0x24) + -1;
          *(int *)(unaff_x19 + 0x24) = iVar2;
        } while (*(int *)(unaff_x19 + 0x1c) <= iVar2);
      }
      if (cStack00000000000000cc != '\0') {
        thunk_FUN_02da42ec(in_stack_00000020,0);
      }
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}


