/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_get_stats_t_incoming_received_set
ENTRY_POINT: 0859b378
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0859ba84) */

undefined1  [16]
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_incoming_received_set
          (long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined2 in_stack_00000190;
  ushort uStack0000000000000192;
  undefined4 uStack0000000000000194;
  undefined8 in_stack_00000198;
  long in_stack_000001a8;
  long *in_stack_000001b8;
  
  FUN_084f7088();
  FUN_084f7088();
  FUN_084f7088();
  FUN_084f8008();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_000001b8 = (long *)FUN_05189b28();
  FUN_08599fd8();
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_0859a0b4();
  puVar4 = PTR_DAT_09327080;
  if (*(char *)(unaff_x20 + 200) == '\0') {
    lVar8 = *(long *)(unaff_x20 + 0x120);
    if (lVar8 != 0) {
      uVar12 = 0;
      do {
        plVar5 = in_stack_000001b8;
        if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar12) {
          in_stack_00000008 = (undefined4)*(undefined8 *)(unaff_x20 + 0x140);
          in_stack_00000000._4_4_ = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x138) >> 0x20);
          if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if (*(int *)(*(long *)PTR_DAT_0932c850 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          auVar15 = FUN_08577d94();
          plVar5 = in_stack_000001b8;
          uVar13 = auVar15._8_8_;
          in_stack_00000190 = auVar15._0_2_;
          uStack0000000000000192 = auVar15._2_2_;
          uStack0000000000000194 = auVar15._4_4_;
          in_stack_00000198 = uVar13;
          if (in_stack_000001b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar8 = *in_stack_000001b8;
          uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar12 == 0) goto LAB_0859b658;
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_0859b640;
        }
        if (in_stack_000001a8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar8 = *(long *)(in_stack_000001a8 + 0x90);
        if ((lVar8 == 0) || (in_stack_000001b8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar10 = *in_stack_000001b8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 9) * 0x10 + 0x138);
              goto LAB_0859b4e8;
            }
            uVar11 = uVar11 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_040b1e00(in_stack_000001b8,*(long *)puVar4,9);
LAB_0859b4e8:
        (*(code *)*puVar6)(plVar5,lVar8 + uVar12 * 0xc + 0x20,puVar6[1]);
        lVar8 = *(long *)(unaff_x20 + 0x120);
        uVar12 = uVar12 + 1;
      } while (lVar8 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar8 = *(long *)(unaff_x19 + 0x58);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000198 = *(undefined8 *)(lVar8 + 0xc0);
  uVar13 = *(undefined8 *)(lVar8 + 0xb8);
  in_stack_00000190 = (undefined2)uVar13;
  uStack0000000000000192 = (ushort)((ulong)uVar13 >> 0x10);
  uStack0000000000000194 = (undefined4)((ulong)uVar13 >> 0x20);
  goto LAB_0859b690;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar9 = piVar9 + 4;
    if (uVar12 == 0) break;
LAB_0859b640:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09327ed0) {
      puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 4) * 0x10 + 0x138);
      goto 
      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_incoming_out_of_time_set
      ;
    }
  }
LAB_0859b658:
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_000001b8,*(long *)PTR_DAT_09327ed0,4);

  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_incoming_out_of_time_set
  :
  (*(code *)*puVar6)(plVar5,auVar15._0_8_,uVar13,2,puVar6[1]);
LAB_0859b690:
  if (*(int *)(*(long *)PTR_DAT_09324758 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_08488eb0(&stack0x00000190);
  plVar5 = in_stack_000001b8;
  if (in_stack_000001a8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(ulong *)(in_stack_000001a8 + 0x58) = CONCAT44(in_stack_00000008,in_stack_00000000._4_4_);
  if (in_stack_000001b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar8 = *in_stack_000001b8;
  uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar12 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
        goto LAB_0859b724;
      }
      uVar12 = uVar12 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_000001b8,*(long *)puVar4,0xb);
LAB_0859b724:
  (*(code *)*puVar6)(plVar5,0,puVar6[1]);
  plVar5 = in_stack_000001b8;
  if (in_stack_000001b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar8 = *in_stack_000001b8;
  uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar12 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
        goto FUN_0859b78c;
      }
      uVar12 = uVar12 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_000001b8,*(long *)puVar4,0xc);
FUN_0859b78c:
  (*(code *)*puVar6)(plVar5,1,puVar6[1]);
  if (DAT_0989ce5a == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5a = '\x01';
  }
  puVar3 = PTR_DAT_092b9d10;
  if (*(int *)(*(long *)PTR_DAT_092b9d10 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce5b == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5b = '\x01';
  }
  uVar2 = (uint)uStack0000000000000192;
  if (uStack0000000000000192 != 0) {
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar8 = *(long *)puVar3;
    }
    piVar9 = *(int **)(lVar8 + 0xb8);
    if (uVar2 << 0x10 != *piVar9) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar9 = *(int **)(*(long *)puVar3 + 0xb8);
      }
      if (uVar2 << 0x10 != piVar9[1]) goto LAB_0859b8d4;
    }
    plVar5 = in_stack_000001b8;
    puVar3 = PTR_DAT_0932fb38;
    lVar8 = *(long *)PTR_DAT_0932fb38;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar8 = *(long *)puVar3;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x18);
    if (uVar12 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_0859b8c0;
        }
        uVar12 = uVar12 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)puVar4,3);
LAB_0859b8c0:
    (*(code *)*puVar6)(plVar5,&stack0x00000190,uVar1,puVar6[1]);
  }
LAB_0859b8d4:
  plVar5 = in_stack_000001b8;
  puVar4 = PTR_DAT_0932fb60;
  lVar8 = *(long *)PTR_DAT_0932fb60;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar8 = *(long *)puVar4;
  }
  puVar6 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar6[1];
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar6 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar13 = *puVar6;
    lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932fb40);
    FUN_06ac88dc(lVar10,uVar13,*(undefined8 *)PTR_DAT_0932fb58,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar7 = lVar10;
    thunk_FUN_040ec700(plVar7,lVar10);
  }
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar8 = *plVar5;
  lVar14 = *(long *)PTR_DAT_0932fb48;
  uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar12 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)(lVar14 + 0x20)) {
        lVar8 = lVar8 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
        goto LAB_0859b9b8;
      }
      uVar12 = uVar12 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar12 != 0);
  }
  lVar8 = FUN_040b1e00(plVar5);
LAB_0859b9b8:
  lVar8 = thunk_FUN_04096bb4(*(undefined8 *)(lVar8 + 8),lVar14);
  (**(code **)(lVar8 + 8))(plVar5,lVar10,lVar8);
  plVar5 = in_stack_000001b8;
  auVar15._2_2_ = uStack0000000000000192;
  auVar15._0_2_ = in_stack_00000190;
  auVar15._4_4_ = uStack0000000000000194;
  auVar15._8_8_ = in_stack_00000198;
  if (in_stack_000001b8 != (long *)0x0) {
    lVar8 = *in_stack_000001b8;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0859ba40;
        }
        uVar12 = uVar12 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_000001b8,*(long *)PTR_DAT_092860c0,0);
LAB_0859ba40:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return auVar15;
}


