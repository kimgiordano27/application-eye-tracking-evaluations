/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_session_t_session_handle_set
ENTRY_POINT: 084a7b50
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x084a7af8) */
/* WARNING: Removing unreachable block (ram,0x084a7d50) */
/* WARNING: Removing unreachable block (ram,0x084a7db8) */

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_session_handle_set(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *unaff_x29;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_00000100;
  long in_stack_00000118;
  
  while( true ) {
    uVar8 = FUN_06daab3c(&stack0x000000f0,*(undefined8 *)PTR_DAT_091a3f70);
    lVar14 = in_stack_00000100;
    if ((uVar8 & 1) == 0) {
      FUN_06daab38(&stack0x000000f0,*(undefined8 *)PTR_DAT_091a3f68);
      lVar14 = in_stack_00000118;
      puVar3 = PTR_DAT_091a8420;
      if (*(long *)(in_stack_00000060 + 0x50) != 0) {
        lVar9 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a8428);
        FUN_06b6d004(lVar9,*(undefined8 *)puVar3);
        plVar13 = (long *)(lVar14 + 0x50);
        *plVar13 = lVar9;
        thunk_FUN_03d1023c(plVar13,lVar9);
        puVar6 = PTR_DAT_0927f6e0;
        puVar5 = PTR_DAT_0927f6d0;
        puVar4 = PTR_DAT_0927ee08;
        puVar3 = PTR_DAT_091a8410;
        if (*(long *)(in_stack_00000060 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_06b6e20c(&stack0x00000090,*(long *)(in_stack_00000060 + 0x50),
                     *(undefined8 *)PTR_DAT_0927f6c8);
        while (uVar8 = FUN_06e6c258(&stack0x00000090,*(undefined8 *)puVar6),
              uVar7 = in_stack_000000a0, (uVar8 & 1) != 0) {
          if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          lVar10 = *plVar13;
          uVar11 = *(undefined8 *)(in_stack_000000a8 + 0x10);
          uVar15 = *(undefined8 *)(in_stack_000000a8 + 0x18);
          lVar9 = thunk_FUN_03d2ef40(*(undefined8 *)puVar3);
          FUN_071bc31c(lVar9,0);
          *(undefined8 *)(lVar9 + 0x10) = uVar11;
          thunk_FUN_03d1023c((undefined8 *)(lVar9 + 0x10),uVar11);
          *(undefined8 *)(lVar9 + 0x18) = uVar15;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          FUN_06b6ddc8(lVar10,uVar7,lVar9,*(undefined8 *)puVar4);
        }
        FUN_06e6c378(&stack0x00000090,*(undefined8 *)puVar5);
      }
      *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(in_stack_00000060 + 0x20);
      thunk_FUN_03d1023c();
      *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(in_stack_00000060 + 0x28);
      thunk_FUN_03d1023c();
      *(undefined8 *)(lVar14 + 0x58) = *(undefined8 *)(in_stack_00000060 + 0x58);
      thunk_FUN_03d1023c();
      *(undefined1 *)(lVar14 + 0x41) = *(undefined1 *)(in_stack_00000060 + 0x41);
      *(undefined1 *)(lVar14 + 0x40) = *(undefined1 *)(in_stack_00000060 + 0x40);
      *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(in_stack_00000060 + 0x18);
      thunk_FUN_03d1023c((undefined8 *)(lVar14 + 0x18));
      *(undefined4 *)(lVar14 + 0x38) = *(undefined4 *)(in_stack_00000060 + 0x38);
      *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)(in_stack_00000060 + 0x60);
      *(undefined8 *)(lVar14 + 0x68) = *(undefined8 *)(in_stack_00000060 + 0x68);
      return lVar14;
    }
    lVar9 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f730);
    FUN_084b135c(lVar9,0,0,0,0,0,0,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar14 + 0x10);
    thunk_FUN_03d1023c();
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar14 + 0x30);
    thunk_FUN_03d1023c();
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(lVar14 + 0x38);
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar14 + 0x20);
    thunk_FUN_03d1023c();
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)(lVar14 + 0x40);
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar14 + 0x18);
    thunk_FUN_03d1023c();
    if (*(long *)(lVar14 + 0x28) != 0) {
      lVar10 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a8808);
      FUN_06b6d004(lVar10,*(undefined8 *)PTR_DAT_091a8800);
      plVar13 = (long *)(lVar9 + 0x28);
      *plVar13 = lVar10;
      thunk_FUN_03d1023c(plVar13,lVar10);
      if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_06b6e20c(&stack0x00000068,*(long *)(lVar14 + 0x28),*(undefined8 *)PTR_DAT_0927f6c0);
      in_stack_000000c8 = in_stack_00000070;
      in_stack_000000c0 = in_stack_00000068;
      in_stack_000000d8 = in_stack_00000080;
      in_stack_000000d0 = in_stack_00000078;
      in_stack_000000e0 = in_stack_00000088;
      while (uVar8 = FUN_06e6c258(&stack0x000000c0,*unaff_x19), uVar7 = in_stack_000000d0,
            (uVar8 & 1) != 0) {
        if (in_stack_000000d8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar14 = *plVar13;
        uVar1 = *(undefined4 *)(in_stack_000000d8 + 0x18);
        uVar15 = *(undefined8 *)(in_stack_000000d8 + 0x10);
        uVar11 = thunk_FUN_03d2ef40(*unaff_x20);
        FUN_084b1898(uVar11,uVar1,uVar15,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_06b6ddc8(lVar14,uVar7,uVar11,*unaff_x29);
      }
      FUN_06e6c378(&stack0x000000c0,*(undefined8 *)PTR_DAT_0927f6d8);
    }
    lVar14 = *unaff_x21;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar10 = *(long *)(lVar14 + 0x10);
    lVar12 = *(long *)PTR_DAT_0927f720;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar10 == 0) break;
    uVar2 = *(uint *)(lVar14 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
      plVar13 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
      *plVar13 = lVar9;
      thunk_FUN_03d1023c(plVar13,lVar9);
    }
    else {
      FUN_05a39734(lVar14,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


