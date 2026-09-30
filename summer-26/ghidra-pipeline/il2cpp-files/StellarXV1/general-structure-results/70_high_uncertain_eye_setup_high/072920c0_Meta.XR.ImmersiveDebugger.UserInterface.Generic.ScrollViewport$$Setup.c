/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollViewport$$Setup
ENTRY_POINT: 072920c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x07292390) */
/* WARNING: Removing unreachable block (ram,0x072922d4) */
/* WARNING: Removing unreachable block (ram,0x0729255c) */
/* WARNING: Removing unreachable block (ram,0x07292548) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollViewport__Setup(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  int in_w8;
  long lVar5;
  int *in_x9;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar6;
  long unaff_x22;
  long *plVar7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long lStack0000000000000028;
  int *piStack0000000000000030;
  long *plStack0000000000000038;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 in_stack_00000060;
  undefined1 *in_stack_00000068;
  undefined8 *puStack0000000000000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  int iStack00000000000000bc;
  
  puStack0000000000000070 = (undefined8 *)0x0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  plVar7 = *(long **)(unaff_x22 + 0xa68);
  lStack0000000000000028 = 0;
  plStack0000000000000038 = (long *)&stack0x000000b0;
  piStack0000000000000030 = in_x9;
  if (in_w8 == 0) {
    uStack0000000000000058 = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(unaff_x19 + 10) = 0;
    iStack00000000000000bc = -1;
    *unaff_x19 = 0xffffffff;
LAB_07292124:
    FUN_07591f7c(&stack0x00000058,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *(long *)(unaff_x20 + 0x70);
    if ((lVar5 != 0) &&
       ((**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28)),
       unaff_x20 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = FUN_07291b68();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uStack0000000000000058 = FUN_076f1ee4(lVar5,0);
    uVar3 = FUN_07591eb4(&stack0x00000058,0);
    if ((uVar3 & 1) == 0) {
      iStack00000000000000bc = 1;
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 10) = uStack0000000000000058;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*plVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e53450(unaff_x19 + 2,&stack0x00000058);
      goto LAB_0729246c;
    }
LAB_0729217c:
    FUN_07591f7c(&stack0x00000058,0);
    iVar6 = 0x15;
  }
  else {
    if (in_w8 == 1) {
      uStack0000000000000058 = *(undefined8 *)(unaff_x19 + 10);
      *(undefined8 *)(unaff_x19 + 10) = 0;
      iStack00000000000000bc = -1;
      *unaff_x19 = 0xffffffff;
      goto LAB_0729217c;
    }
    iStack00000000000000bc = in_w8;
    uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285888);
    FUN_076e0f60(uVar2,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
    thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x48),uVar2);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar2 = FUN_076e0ebc(*(long *)(unaff_x20 + 0x48),0);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
    thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x30),0);
    uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1fe8);
    FUN_07fe96e4(uVar2,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
    thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x40),uVar2);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_06efcc0c(*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_092883c8);
    puVar1 = PTR_DAT_09288470;
    in_stack_000000a0 = in_stack_00000020;
    in_stack_00000088 = in_stack_00000008;
    in_stack_00000080 = in_stack_00000000;
    in_stack_00000098 = in_stack_00000018;
    in_stack_00000090 = in_stack_00000010;
    while (uVar3 = FUN_05385f24(&stack0x00000080,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x40) + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_07feaa5c(lVar5,in_stack_00000090,in_stack_00000098,0);
    }
    if (iStack00000000000000bc < 0) {
      FUN_05386044(&stack0x00000080,*(undefined8 *)PTR_DAT_09288428);
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_05c27784(*(long *)(unaff_x20 + 0x60),*(undefined8 *)PTR_DAT_092858d0);
    puVar1 = PTR_DAT_092858b0;
    in_stack_00000060 = 0;
    in_stack_00000068 = (undefined1 *)&stack0x000000bc;
    puStack0000000000000070 = &stack0x00000080;
    while (uVar3 = FUN_07161154(&stack0x00000060,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x40) + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_07feab80(lVar5,puStack0000000000000070,0);
    }
    if (iStack00000000000000bc < 0) {
      FUN_07161150(&stack0x00000060,*(undefined8 *)PTR_DAT_092858a8);
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = FUN_07fe9aa4(*(long *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x68),
                         *(undefined8 *)(unaff_x20 + 0x30),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uStack0000000000000058 = FUN_076f1ee4(lVar5,0);
    uVar3 = FUN_07591eb4(&stack0x00000058,0);
    if ((uVar3 & 1) != 0) goto LAB_07292124;
    iStack00000000000000bc = 0;
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = uStack0000000000000058;
    thunk_FUN_040ec700(unaff_x19 + 10,0);
    if (*(int *)(*plVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04e53450(unaff_x19 + 2,&stack0x00000058);
LAB_0729246c:
    iVar6 = 0xb;
  }
  plVar4 = plStack0000000000000038;
  if (-1 < *piStack0000000000000030) {
LAB_072924bc:
    if (lStack0000000000000028 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077828();
    }
    if ((iVar6 == 0) || (iVar6 == 0x15)) {
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*plVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
    return;
  }
  lVar5 = *plStack0000000000000038;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x40) == 0) goto LAB_072924bc;
    if (*(long *)(lVar5 + 0x48) != 0) {
      FUN_076e11d4(*(long *)(lVar5 + 0x48),0);
      if ((*plVar4 != 0) && (plVar4 = *(long **)(*plVar4 + 0x40), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        goto LAB_072924bc;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


