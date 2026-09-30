/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Setup
ENTRY_POINT: 0729238c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Setup(void)

{
  bool in_ZR;
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 *unaff_x19;
  int unaff_w21;
  long *unaff_x22;
  long in_stack_00000028;
  int *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000058;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  if ((in_ZR) || (unaff_w21 == 0)) {
    if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(in_stack_000000b0 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar1 = FUN_07fe9aa4(*(long *)(in_stack_000000b0 + 0x40),
                         *(undefined8 *)(in_stack_000000b0 + 0x68),
                         *(undefined8 *)(in_stack_000000b0 + 0x30),0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000058 = FUN_076f1ee4(lVar1,0);
    uVar2 = FUN_07591eb4(&stack0x00000058,0);
    if ((uVar2 & 1) == 0) {
      in_stack_000000b8._4_4_ = 0;
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000058;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e53450(unaff_x19 + 2,&stack0x00000058);
    }
    else {
      FUN_07591f7c(&stack0x00000058,0);
      if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar1 = *(long *)(in_stack_000000b0 + 0x70);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      lVar1 = FUN_07291b68();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_stack_00000058 = FUN_076f1ee4(lVar1,0);
      uVar2 = FUN_07591eb4(&stack0x00000058,0);
      if ((uVar2 & 1) != 0) {
        FUN_07591f7c(&stack0x00000058,0);
        unaff_w21 = 0x15;
        goto LAB_07292470;
      }
      in_stack_000000b8._4_4_ = 1;
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000058;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e53450(unaff_x19 + 2,&stack0x00000058);
    }
    unaff_w21 = 0xb;
  }
LAB_07292470:
  if (*in_stack_00000030 < 0) {
    lVar1 = *in_stack_00000038;
    if (lVar1 != 0) {
      if (*(long *)(lVar1 + 0x40) == 0) goto LAB_072924bc;
      if (*(long *)(lVar1 + 0x48) != 0) {
        FUN_076e11d4(*(long *)(lVar1 + 0x48),0);
        if ((*in_stack_00000038 != 0) &&
           (plVar3 = *(long **)(*in_stack_00000038 + 0x40), plVar3 != (long *)0x0)) {
          (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
          goto LAB_072924bc;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
LAB_072924bc:
  if (in_stack_00000028 == 0) {
    if ((unaff_w21 == 0) || (unaff_w21 == 0x15)) {
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


