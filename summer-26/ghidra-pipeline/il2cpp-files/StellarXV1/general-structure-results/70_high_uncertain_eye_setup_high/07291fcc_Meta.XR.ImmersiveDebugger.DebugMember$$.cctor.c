/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugMember$$.cctor
ENTRY_POINT: 07291fcc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x07292390) */
/* WARNING: Removing unreachable block (ram,0x072922d4) */
/* WARNING: Removing unreachable block (ram,0x0729255c) */
/* WARNING: Removing unreachable block (ram,0x07292548) */
/* WARNING: Removing unreachable block (ram,0x07292524) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_ImmersiveDebugger_DebugMember___cctor(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined1 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000b0;
  int iStack00000000000000bc;
  
  if ((DAT_0988f819 & 1) == 0) {
    FUN_04077588(PTR_DAT_092c2080);
    FUN_04077588(PTR_DAT_09285a68);
    FUN_04077588(PTR_DAT_09285888);
    FUN_04077588(PTR_DAT_092c1fe8);
    FUN_04077588(PTR_DAT_092883c8);
    FUN_04077588(PTR_DAT_09288428);
    FUN_04077588(PTR_DAT_092858a8);
    FUN_04077588(PTR_DAT_09288470);
    FUN_04077588(PTR_DAT_092858b0);
    FUN_04077588(PTR_DAT_092858b8);
    FUN_04077588(PTR_DAT_092884a0);
    FUN_04077588(PTR_DAT_092884c8);
    FUN_04077588(PTR_DAT_09287ee8);
    FUN_04077588(PTR_DAT_092858d0);
    DAT_0988f819 = 1;
  }
  puVar2 = PTR_DAT_09285a68;
  iStack00000000000000bc = *param_1;
  lVar6 = *(long *)(param_1 + 8);
  in_stack_000000a0 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = (undefined1 *)0x0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000070 = (undefined8 *)0x0;
  in_stack_00000058 = 0;
  in_stack_000000b0 = lVar6;
  if (iStack00000000000000bc == 0) {
    in_stack_00000058 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    iStack00000000000000bc = -1;
    *param_1 = -1;
LAB_07292124:
    FUN_07591f7c(&stack0x00000058,0);
    if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *(long *)(in_stack_000000b0 + 0x70);
    if ((lVar6 != 0) &&
       ((**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28)),
       in_stack_000000b0 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = FUN_07291b68();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000058 = FUN_076f1ee4(lVar6,0);
    uVar4 = FUN_07591eb4(&stack0x00000058,0);
    if ((uVar4 & 1) == 0) {
      iStack00000000000000bc = 1;
      *param_1 = 1;
      *(undefined8 *)(param_1 + 10) = in_stack_00000058;
      thunk_FUN_040ec700(param_1 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e53450(param_1 + 2,&stack0x00000058,param_1,*(undefined8 *)PTR_DAT_092c2080);
      goto LAB_0729246c;
    }
LAB_0729217c:
    FUN_07591f7c(&stack0x00000058,0);
    iVar8 = 0x15;
  }
  else {
    if (iStack00000000000000bc == 1) {
      in_stack_00000058 = *(undefined8 *)(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      iStack00000000000000bc = -1;
      *param_1 = -1;
      goto LAB_0729217c;
    }
    uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285888);
    FUN_076e0f60(uVar3,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined8 *)(lVar6 + 0x48) = uVar3;
    thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x48),uVar3);
    lVar6 = in_stack_000000b0;
    if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(in_stack_000000b0 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = FUN_076e0ebc(*(long *)(in_stack_000000b0 + 0x48),0);
    *(undefined8 *)(lVar6 + 0x30) = uVar3;
    thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x30),0);
    lVar6 = in_stack_000000b0;
    uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1fe8);
    FUN_07fe96e4(uVar3,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    puVar7 = (undefined8 *)(lVar6 + 0x40);
    *puVar7 = uVar3;
    thunk_FUN_040ec700(puVar7,uVar3);
    if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(in_stack_000000b0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_06efcc0c(*(long *)(in_stack_000000b0 + 0x20),*(undefined8 *)PTR_DAT_092883c8);
    puVar1 = PTR_DAT_09288470;
    in_stack_000000a0 = in_stack_00000020;
    in_stack_00000088 = in_stack_00000008;
    in_stack_00000080 = in_stack_00000000;
    in_stack_00000098 = in_stack_00000018;
    in_stack_00000090 = in_stack_00000010;
    while (uVar4 = FUN_05385f24(&stack0x00000080,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
      if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(in_stack_000000b0 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar6 = *(long *)(*(long *)(in_stack_000000b0 + 0x40) + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_07feaa5c(lVar6,in_stack_00000090,in_stack_00000098,0);
    }
    if (iStack00000000000000bc < 0) {
      FUN_05386044(&stack0x00000080,*(undefined8 *)PTR_DAT_09288428);
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
    in_stack_00000060 = 0;
    in_stack_00000068 = (undefined1 *)&stack0x000000bc;
    in_stack_00000070 = &stack0x00000080;
    while (uVar4 = FUN_07161154(&stack0x00000060,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
      if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(in_stack_000000b0 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar6 = *(long *)(*(long *)(in_stack_000000b0 + 0x40) + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_07feab80(lVar6,in_stack_00000070,0);
    }
    if (iStack00000000000000bc < 0) {
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
    lVar6 = FUN_07fe9aa4(*(long *)(in_stack_000000b0 + 0x40),
                         *(undefined8 *)(in_stack_000000b0 + 0x68),
                         *(undefined8 *)(in_stack_000000b0 + 0x30),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000058 = FUN_076f1ee4(lVar6,0);
    uVar4 = FUN_07591eb4(&stack0x00000058,0);
    if ((uVar4 & 1) != 0) goto LAB_07292124;
    iStack00000000000000bc = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 10) = in_stack_00000058;
    thunk_FUN_040ec700(param_1 + 10,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04e53450(param_1 + 2,&stack0x00000058,param_1,*(undefined8 *)PTR_DAT_092c2080);
LAB_0729246c:
    iVar8 = 0xb;
  }
  if (iStack00000000000000bc < 0) {
    if (in_stack_000000b0 == 0) {
LAB_07292520:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(in_stack_000000b0 + 0x40) != 0) {
      if (((*(long *)(in_stack_000000b0 + 0x48) == 0) ||
          (FUN_076e11d4(*(long *)(in_stack_000000b0 + 0x48),0), in_stack_000000b0 == 0)) ||
         (plVar5 = *(long **)(in_stack_000000b0 + 0x40), plVar5 == (long *)0x0)) goto LAB_07292520;
      (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    }
  }
  if ((iVar8 == 0) || (iVar8 == 0x15)) {
    *param_1 = -2;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0759053c(param_1 + 2,0);
  }
  return;
}


