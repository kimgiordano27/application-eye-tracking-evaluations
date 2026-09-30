/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_get_session_media_state_string
ENTRY_POINT: 08537908
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08537dfc) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_get_session_media_state_string(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 in_ZR;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  uint uVar11;
  int unaff_w21;
  long unaff_x22;
  long lVar12;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar13 [16];
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  int iStack0000000000000030;
  int iStack0000000000000034;
  undefined8 in_stack_00000060;
  int in_stack_00000068;
  undefined8 in_stack_00000110;
  undefined8 *in_stack_00000118;
  long in_stack_00000190;
  long *in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 uStack00000000000001b8;
  undefined4 uStack00000000000001bc;
  undefined4 uStack00000000000001c0;
  undefined8 uStack00000000000001c4;
  
  while (!(bool)in_ZR) {
    unaff_w24 = unaff_w24 >> 1;
    unaff_w25 = unaff_w25 >> 1;
    lVar6 = *(long *)(unaff_x26 + 0x150);
    if (unaff_w24 < 2) {
      unaff_w24 = 1;
    }
    if (unaff_w25 < 2) {
      unaff_w25 = 1;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = *(long *)(unaff_x26 + 0x148);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar11 = (int)unaff_x29 - 4;
    if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar12 = *(long *)(unaff_x26 + 0x138);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar12 = *(long *)(lVar12 + unaff_x29 * 8);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = *(undefined8 *)(lVar12 + 0x58);
    if (*(int *)(*(long *)PTR_DAT_0932c850 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_000001a8;
    *(undefined8 *)(unaff_x19 + 8) = in_stack_000001a0;
    *(ulong *)(unaff_x19 + 0x20) = CONCAT44(uStack00000000000001bc,uStack00000000000001b8);
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_000001b0;
    *(undefined8 *)(unaff_x19 + 0x2c) = uStack00000000000001c4;
    *(ulong *)(unaff_x19 + 0x24) = CONCAT44(uStack00000000000001c0,uStack00000000000001bc);
    in_stack_00000060._4_4_ = unaff_w24;
    in_stack_00000068 = unaff_w25;
    auVar13 = FUN_08577d94(in_stack_00000020,(long)&stack0x00000060 + 4,uVar3,0,1,1,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    ((undefined8 *)(lVar6 + unaff_x22))[-1] = auVar13._0_8_;
    *(undefined8 *)(lVar6 + unaff_x22) = auVar13._8_8_;
    lVar6 = *(long *)(in_stack_00000028 + 0x140);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar6 = *(long *)(lVar6 + unaff_x29 * 8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = *(undefined8 *)(lVar6 + 0x58);
    *(undefined8 *)(unaff_x28 + 0x10) = in_stack_000001a8;
    *(undefined8 *)(unaff_x28 + 8) = in_stack_000001a0;
    *(ulong *)(unaff_x28 + 0x20) = CONCAT44(uStack00000000000001bc,uStack00000000000001b8);
    *(undefined8 *)(unaff_x28 + 0x18) = in_stack_000001b0;
    *(undefined8 *)(unaff_x28 + 0x2c) = uStack00000000000001c4;
    *(ulong *)(unaff_x28 + 0x24) = CONCAT44(uStack00000000000001c0,uStack00000000000001bc);
    iStack0000000000000030 = unaff_w24;
    iStack0000000000000034 = unaff_w25;
    auVar13 = FUN_08577d94(in_stack_00000020,&stack0x00000030,uVar3,0,1,1,0);
    unaff_x29 = unaff_x29 + 1;
    lVar6 = lVar7 + unaff_x22;
    *(long *)(lVar7 + unaff_x22) = auVar13._8_8_;
    unaff_x22 = unaff_x22 + 0x10;
    *(long *)(lVar6 + -8) = auVar13._0_8_;
    unaff_x26 = in_stack_00000028;
    in_ZR = unaff_w21 + (int)unaff_x29 == 4;
  }
  FUN_0840a284(&stack0x000001ec,0);
  uVar3 = FUN_0513e6bc(0x1a,*(undefined8 *)PTR_DAT_0932c7b8);
  if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000198 =
       (long *)FUN_05189f44(in_stack_00000020,*(undefined8 *)PTR_DAT_0932de98,&stack0x00000190,uVar3
                            ,*(undefined8 *)PTR_DAT_0932dd90,0x1cc,*(undefined8 *)PTR_DAT_0932de88);
  in_stack_00000118 = &stack0x00000198;
  in_stack_00000110 = 0;
  if (in_stack_00000190 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(uint *)(in_stack_00000190 + 0x10) = in_stack_00000018._4_4_;
  if (*(long *)(unaff_x26 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_00000190 + 0x18) = *(undefined8 *)(*(long *)(unaff_x26 + 0x1a0) + 0x50);
  thunk_FUN_040ec700();
  if (*(long *)(unaff_x26 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (in_stack_00000190 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_00000190 + 0x20) = *(undefined8 *)(*(long *)(unaff_x26 + 0x1a0) + 0x58);
  thunk_FUN_040ec700();
  if (in_stack_00000190 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar3 = *in_stack_00000008;
  *(undefined8 *)(in_stack_00000190 + 0x30) = in_stack_00000008[1];
  *(undefined8 *)(in_stack_00000190 + 0x28) = uVar3;
  *(undefined8 *)(in_stack_00000190 + 0x40) = *(undefined8 *)(unaff_x26 + 0x150);
  thunk_FUN_040ec700();
  if (in_stack_00000190 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_00000190 + 0x38) = *(undefined8 *)(unaff_x26 + 0x148);
  thunk_FUN_040ec700();
  plVar2 = in_stack_00000198;
  puVar1 = PTR_DAT_09327080;
  if (in_stack_00000198 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *in_stack_00000198;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09327080) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
        goto LAB_08537a50;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000198,*(long *)PTR_DAT_09327080,0xb);
LAB_08537a50:
  (*(code *)*puVar4)(plVar2,0,puVar4[1]);
  plVar2 = in_stack_00000198;
  if (in_stack_00000198 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *in_stack_00000198;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_08537ab4;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000198,*(long *)puVar1,0);
LAB_08537ab4:
  (*(code *)*puVar4)(plVar2,in_stack_00000008,1,puVar4[1]);
  if (0 < (int)in_stack_00000018._4_4_) {
    uVar8 = 0;
    do {
      plVar2 = in_stack_00000198;
      lVar6 = *(long *)(unaff_x26 + 0x150);
      if ((lVar6 == 0) || (in_stack_00000198 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar7 = *in_stack_00000198;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_08537b40;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000198,*(long *)puVar1,0);
LAB_08537b40:
      (*(code *)*puVar4)(plVar2,lVar6 + uVar8 * 0x10 + 0x20,3,puVar4[1]);
      plVar2 = in_stack_00000198;
      lVar6 = *(long *)(unaff_x26 + 0x148);
      if ((lVar6 == 0) || (in_stack_00000198 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar7 = *in_stack_00000198;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_08537bc0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000198,*(long *)puVar1,0);
LAB_08537bc0:
      (*(code *)*puVar4)(plVar2,lVar6 + uVar8 * 0x10 + 0x20,3,puVar4[1]);
      uVar8 = uVar8 + 1;
    } while (uVar8 != in_stack_00000018._4_4_);
  }
  plVar2 = in_stack_00000198;
  puVar1 = PTR_DAT_0932dd00;
  lVar6 = *(long *)PTR_DAT_0932dd00;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar6 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar6 + 0xb8);
  lVar7 = puVar4[10];
  if (lVar7 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar3 = *puVar4;
    lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932de78);
    FUN_06ac8788(lVar7,uVar3,*(undefined8 *)PTR_DAT_0932de90,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
    *plVar5 = lVar7;
    thunk_FUN_040ec700(plVar5,lVar7);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar2;
  lVar12 = *(long *)PTR_DAT_0932de80;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_08537cc8;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  lVar6 = FUN_040b1e00(plVar2);
LAB_08537cc8:
  lVar6 = thunk_FUN_04096bb4(*(undefined8 *)(lVar6 + 8),lVar12);
  (**(code **)(lVar6 + 8))(plVar2,lVar7,lVar6);
  plVar2 = in_stack_00000198;
  if (in_stack_00000190 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *(long *)(in_stack_00000190 + 0x38);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  uVar3 = *(undefined8 *)(lVar6 + 0x20);
  in_stack_00000010[1] = *(undefined8 *)(lVar6 + 0x28);
  *in_stack_00000010 = uVar3;
  if (in_stack_00000198 != (long *)0x0) {
    lVar6 = *in_stack_00000198;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_08537d70;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000198,*(long *)PTR_DAT_092860c0,0);
LAB_08537d70:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return;
}


