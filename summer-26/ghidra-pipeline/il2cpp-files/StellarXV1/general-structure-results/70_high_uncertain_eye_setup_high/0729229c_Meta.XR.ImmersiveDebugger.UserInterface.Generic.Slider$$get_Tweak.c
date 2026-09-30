/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$get_Tweak
ENTRY_POINT: 0729229c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x07292390) */
/* WARNING: Removing unreachable block (ram,0x072922d4) */
/* WARNING: Removing unreachable block (ram,0x0729255c) */
/* WARNING: Removing unreachable block (ram,0x07292548) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__get_Tweak(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  int iVar5;
  long *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000028;
  int *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  while (uVar2 = FUN_05385f24(&stack0x00000080,*unaff_x20), (uVar2 & 1) != 0) {
    if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(in_stack_000000b0 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *(long *)(*(long *)(in_stack_000000b0 + 0x40) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_07feaa5c(lVar3,in_stack_00000090,in_stack_00000098,0);
  }
  if (in_stack_000000b8._4_4_ < 0) {
    FUN_05386044(in_stack_00000010,*(undefined8 *)PTR_DAT_09288428);
  }
  if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(in_stack_000000b0 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_05c27784(*(long *)(in_stack_000000b0 + 0x60),*(undefined8 *)PTR_DAT_092858d0);
  puVar1 = PTR_DAT_092858b0;
  in_stack_00000070 = in_stack_00000010;
  in_stack_00000068 = in_stack_00000008;
  in_stack_00000060 = in_stack_00000000;
  while (uVar2 = FUN_07161154(&stack0x00000060,*(undefined8 *)puVar1), (uVar2 & 1) != 0) {
    if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(in_stack_000000b0 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *(long *)(*(long *)(in_stack_000000b0 + 0x40) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_07feab80(lVar3,in_stack_00000070,0);
  }
  if (in_stack_000000b8._4_4_ < 0) {
    FUN_07161150(&stack0x00000060,*(undefined8 *)PTR_DAT_092858a8);
  }
  if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(in_stack_000000b0 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = FUN_07fe9aa4(*(long *)(in_stack_000000b0 + 0x40),*(undefined8 *)(in_stack_000000b0 + 0x68)
                       ,*(undefined8 *)(in_stack_000000b0 + 0x30),0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000058 = FUN_076f1ee4(lVar3,0);
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
LAB_0729246c:
    iVar5 = 0xb;
  }
  else {
    FUN_07591f7c(&stack0x00000058,0);
    if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *(long *)(in_stack_000000b0 + 0x70);
    if ((lVar3 != 0) &&
       ((**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28)),
       in_stack_000000b0 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = FUN_07291b68();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000058 = FUN_076f1ee4(lVar3,0);
    uVar2 = FUN_07591eb4(&stack0x00000058,0);
    if ((uVar2 & 1) == 0) {
      in_stack_000000b8._4_4_ = 1;
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000058;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e53450(unaff_x19 + 2,&stack0x00000058);
      goto LAB_0729246c;
    }
    FUN_07591f7c(&stack0x00000058,0);
    iVar5 = 0x15;
  }
  if (-1 < *in_stack_00000030) {
LAB_072924bc:
    if (in_stack_00000028 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077828();
    }
    if ((iVar5 == 0) || (iVar5 == 0x15)) {
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
    return;
  }
  lVar3 = *in_stack_00000038;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x40) == 0) goto LAB_072924bc;
    if (*(long *)(lVar3 + 0x48) != 0) {
      FUN_076e11d4(*(long *)(lVar3 + 0x48),0);
      if ((*in_stack_00000038 != 0) &&
         (plVar4 = *(long **)(*in_stack_00000038 + 0x40), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        goto LAB_072924bc;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


