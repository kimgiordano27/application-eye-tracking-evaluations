/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 039e6bf0
PROGRAM: vrfs-libil2cpp.so
SCORE: 133
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  thunk_FUN_0159f088(PTR_DAT_06dd0d08);
  thunk_FUN_0159f088(PTR_DAT_06e206f0);
  thunk_FUN_0159f088(PTR_DAT_06da3220);
  thunk_FUN_0159f088(PTR_DAT_06db5078);
  thunk_FUN_0159f088(PTR_DAT_06d9fd78);
  thunk_FUN_0159f088(PTR_DAT_06e40df8);
  *(undefined1 *)(unaff_x22 + 0xaff) = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar4 = FUN_051d94d4();
  puVar1 = PTR_DAT_06e40df8;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_06dd0d08 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_039e5c54();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (DAT_0722a9d9 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e40df8);
      DAT_0722a9d9 = '\x01';
    }
    puVar2 = PTR_DAT_06db5078;
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar5 = *(long *)puVar1;
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    lVar5 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    puVar3 = PTR_DAT_06e206f0;
    puVar2 = PTR_DAT_06e0a080;
    puVar1 = PTR_DAT_06da6390;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_043c1d00(lVar5,uVar7,*(undefined8 *)PTR_DAT_06da3220);
    uVar4 = FUN_02526f10();
    if ((uVar4 & 1) == 0) {
      FUN_043c2e98(&stack0x00000008,lVar5,*(undefined8 *)puVar3);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        do {
          do {
            uVar4 = FUN_03e1bcc4(&stack0x00000020,*(undefined8 *)puVar1);
            lVar5 = in_stack_00000030;
            if ((uVar4 & 1) == 0) goto LAB_039e6eb4;
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar4 = FUN_051d2ac0(lVar5,0,0);
          } while ((uVar4 & 1) == 0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar7 = FUN_051e516c(lVar5,0);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar4 = FUN_051d94d4(uVar7);
        } while ((uVar4 & 1) == 0);
        lVar6 = FUN_01825820(lVar5,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar4 = thunk_FUN_0252637c();
      } while ((uVar4 & 1) == 0);
      lVar5 = FUN_01825820(lVar5,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_039e5244();
LAB_039e6eb4:
      uVar7 = *(undefined8 *)puVar2;
    }
    else {
      FUN_043c2e98(&stack0x00000008,lVar5,*(undefined8 *)puVar3);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar4 = FUN_03e1bcc4(&stack0x00000020,*(undefined8 *)puVar1), lVar5 = in_stack_00000030
            , (uVar4 & 1) != 0) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar4 = FUN_051d2ac0(lVar5,0,0);
        if ((uVar4 & 1) != 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar7 = FUN_051e516c(lVar5,0);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar4 = FUN_051d94d4(uVar7);
          if ((uVar4 & 1) != 0) {
            lVar5 = FUN_01825820(lVar5,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            FUN_039e5244();
          }
        }
      }
      uVar7 = *(undefined8 *)puVar2;
    }
    FUN_03e1bcc0(&stack0x00000020,uVar7);
  }
  return;
}


