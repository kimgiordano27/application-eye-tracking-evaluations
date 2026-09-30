/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_session_handle_set
ENTRY_POINT: 0854a1b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_session_handle_set
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 extraout_x1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  uint uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined1 *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  undefined1 uStack00000000000000c4;
  long in_stack_000000c8;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x918));
  *(undefined1 *)(unaff_x22 + 0x9d6) = 1;
  in_stack_000000c8 = 0;
  puVar13 = (undefined8 *)(unaff_x19 + 0xc0);
  uVar12 = *puVar13;
  uStack00000000000000c4 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000a8 = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar7 = FUN_089cc398(uVar12,0,0);
  if ((uVar7 & 1) != 0) {
    plVar8 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,1);
    plVar9 = (long *)thunk_FUN_0408781c();
    if (plVar9 != (long *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      if (plVar8 != (long *)0x0) {
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
          uVar12 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar12,0);
        }
        if ((int)plVar8[3] != 0) {
          plVar8[4] = lVar10;
          thunk_FUN_040ec700(plVar8 + 4,lVar10);
          if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_0897eb14(*(undefined8 *)PTR_DAT_0932e358,plVar8,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar8 = (long *)FUN_0858b7d0();
  lVar10 = *plVar8;
  in_stack_000000c8 = lVar10;
  uVar12 = FUN_0513e6bc(0x11,*(undefined8 *)PTR_DAT_0932c7b8);
  FUN_0840a27c(&stack0x000000c4,lVar10,uVar12,0);
  in_stack_00000098 = 0;
  in_stack_000000a0 = &stack0x000000c4;
  if (*(long *)(unaff_x19 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(char *)(*(long *)(unaff_x19 + 0x158) + 0x15) == '\0') {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_089f3d7c(lVar10,*(long *)(*(long *)PTR_DAT_0932c488 + 0xb8) + 0x210,1,0);
  }
  lVar11 = *(long *)(unaff_x19 + 0xf8);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  FUN_08447f84(&stack0x00000048,*(undefined8 *)(lVar11 + 0x38),0);
  in_stack_00000078 = in_stack_00000050;
  in_stack_00000070 = in_stack_00000048;
  in_stack_00000088 = in_stack_00000060;
  in_stack_00000080 = in_stack_00000058;
  in_stack_00000090 = in_stack_00000068;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000028 = in_stack_00000050;
  in_stack_00000020 = in_stack_00000048;
  in_stack_00000038 = in_stack_00000060;
  in_stack_00000030 = in_stack_00000058;
  in_stack_00000040 = in_stack_00000068;
  FUN_089fc120(lVar10,*(undefined8 *)PTR_DAT_0932c918,&stack0x00000020,0);
  lVar11 = FUN_0858d130(unaff_x20 + 8,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar7 = FUN_083e7714(lVar11,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if ((*(char *)(*(long *)(unaff_x19 + 0x158) + 0x14) != '\0') ||
       (uVar6 = FUN_089d7054(0), (uVar6 >> 1 & 1) != 0)) {
LAB_0854a408:
      FUN_089f5964(lVar10,0,0);
      uVar6 = 0;
      goto LAB_0854a41c;
    }
    uVar7 = FUN_089d7054(0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(*(long *)(unaff_x19 + 0x158) + 0x18) == 0) goto LAB_0854a408;
    }
    uVar7 = FUN_089d7054(0);
    if ((uVar7 & 1) != 0) {
      uVar6 = 1;
      FUN_089f5964(lVar10,1,0);
      goto LAB_0854a41c;
    }
  }
  uVar6 = 0;
LAB_0854a41c:
  puVar5 = PTR_DAT_0932d298;
  if (*(long *)(unaff_x19 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar3 = *(undefined4 *)(unaff_x19 + 0x100);
  cVar4 = *(char *)(*(long *)(unaff_x19 + 0x158) + 0x15);
  if (*(int *)(*(long *)PTR_DAT_0932d298 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0854a75c(uVar3,cVar4 != '\0',&stack0x000000b8,&stack0x000000b0);
  plVar8 = (long *)FUN_0858d534(unaff_x20 + 8,0);
  if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_000000a8 = FUN_0850a48c(*plVar8,0);
  auVar15 = FUN_0858d534(unaff_x20 + 8,0);
  lVar11 = *(long *)(unaff_x19 + 0xf8);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  uStack0000000000000014 = uVar6;
  FUN_0854a93c(&stack0x000000c8,auVar15._8_8_,auVar15._0_8_,puVar13,&stack0x000000a8,lVar11 + 0x20,0
              );
  lVar11 = 0;
  while( true ) {
    if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar6 = (uint)lVar11;
    if (*(int *)(in_stack_000000b0 + 0x18) <= (int)uVar6) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar6 = uStack0000000000000014;
      if (*(long *)(unaff_x19 + 0x158) != 0) {
        FUN_089f2f08(0x3f800000,0,0,*(undefined4 *)(*(long *)(unaff_x19 + 0x158) + 0x24),lVar10,
                     **(undefined4 **)(*(long *)puVar5 + 0xb8),0);
        if ((uVar6 & 1) != 0) {
          FUN_089f5964(lVar10,0,0);
        }
        FUN_0840a284(&stack0x000000c4,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(in_stack_000000b8 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (*(uint *)(in_stack_000000b8 + 0x18) <= (uint)(lVar11 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar14 = in_stack_000000b8 + lVar11 * 4;
    uVar1 = *(uint *)(lVar14 + 0x20);
    uVar2 = *(uint *)(lVar14 + 0x24);
    auVar15 = FUN_0858d534(unaff_x20 + 8,0);
    uVar12 = auVar15._8_8_;
    lVar14 = *(long *)(unaff_x19 + 0xf8);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(in_stack_000000b0 + 0x18) <= uVar6) break;
    uVar3 = *(undefined4 *)(in_stack_000000b0 + lVar11 * 4 + 0x20);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      uVar12 = extraout_x1;
    }
    if ((*(uint *)(lVar14 + 0x18) <= uVar1) || (*(uint *)(lVar14 + 0x18) <= uVar2)) break;
    FUN_0854a93c(&stack0x000000c8,uVar12,auVar15._0_8_,puVar13,lVar14 + 0x20 + (long)(int)uVar1 * 8,
                 lVar14 + 0x20 + (long)(int)uVar2 * 8,uVar3);
    lVar11 = lVar11 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


