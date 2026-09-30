/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_leftEyePosition
ENTRY_POINT: 05cfddbc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 146
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;frame_behavior;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint UnityEngine_InputSystem_XR_XRHMD__get_leftEyePosition(byte *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  uint extraout_w8;
  uint uVar6;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000080;
  undefined8 *in_stack_00000090;
  undefined8 in_stack_000000b0;
  char cStack00000000000000cc;
  
  uVar6 = (uint)*param_1;
  if (*param_1 != 0) {
    thunk_FUN_02da42ec(*in_stack_00000090,0);
    uVar6 = extraout_w8;
  }
  puVar1 = PTR_DAT_069fc268;
  if (in_stack_00000080 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if (unaff_w22 != 0x17) {
    if (unaff_w22 == 0x16) {
      uVar6 = (uint)(in_stack_000000b0._4_1_ != '\0');
      goto LAB_05cfdcfc;
    }
    if (unaff_w22 != 0) goto LAB_05cfdcfc;
  }
  uVar6 = 1;
  if ((in_stack_00000018 == 0) && (unaff_w21 == 0)) {
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
LAB_05cfdcfc:
  return uVar6 & 1;
}


