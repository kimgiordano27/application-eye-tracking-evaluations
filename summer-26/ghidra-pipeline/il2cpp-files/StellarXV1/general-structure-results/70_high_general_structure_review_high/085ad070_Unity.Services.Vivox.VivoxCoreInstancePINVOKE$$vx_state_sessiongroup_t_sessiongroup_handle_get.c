/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_sessiongroup_handle_get
ENTRY_POINT: 085ad070
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x085ad654) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_sessiongroup_handle_get
               (long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long unaff_x19;
  undefined1 (*unaff_x20) [16];
  long lVar12;
  undefined1 (*unaff_x21) [16];
  long lVar13;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  undefined1 auVar14 [16];
  long in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  *(undefined4 *)(unaff_x23 + 0x30) = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0xbc);
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  auVar14 = *unaff_x21;
  *(long *)(in_stack_00000010 + 0x18) = auVar14._8_8_;
  *(long *)(in_stack_00000010 + 0x10) = auVar14._0_8_;
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *in_stack_00000018;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x25) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_085ad0e0;
      }
      uVar11 = uVar11 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x25,0);
LAB_085ad0e0:
  (*(code *)*puVar6)(in_stack_00000018);
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  auVar14 = *unaff_x20;
  *(long *)(in_stack_00000010 + 0x28) = auVar14._8_8_;
  *(long *)(in_stack_00000010 + 0x20) = auVar14._0_8_;
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *in_stack_00000018;
  uVar7 = *(undefined8 *)*unaff_x20;
  uVar1 = *(undefined8 *)(*unaff_x20 + 8);
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09327ed0) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_085ad164;
      }
      uVar11 = uVar11 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_09327ed0,0);
LAB_085ad164:
  (*(code *)*puVar6)(in_stack_00000018,uVar7,uVar1,0,2,puVar6[1]);
  puVar3 = PTR_DAT_093243d0;
  if (*(int *)(*(long *)PTR_DAT_093243d0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce4f == '\0') {
    FUN_04077588(PTR_DAT_093243d0);
    DAT_0989ce4f = '\x01';
  }
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar9 = *(long *)puVar3;
  }
  if (*(long *)(unaff_x19 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar2 = *(uint *)(*(long *)(lVar9 + 0xb8) + 0x4c);
  bVar4 = FUN_083e7714(*(long *)(unaff_x19 + 0x1a0),0);
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *in_stack_00000018;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x25) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
        goto LAB_085ad24c;
      }
      uVar11 = uVar11 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x25,0xd);
LAB_085ad24c:
  (*(code *)*puVar6)(in_stack_00000018,(uVar2 & 2) == 0 & bVar4,puVar6[1]);
  if ((unaff_x22 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_09324758 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
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
    if (in_stack_00000020._2_2_ != 0) {
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar9 = *(long *)puVar3;
      }
      piVar10 = *(int **)(lVar9 + 0xb8);
      if ((uint)in_stack_00000020._2_2_ << 0x10 != *piVar10) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          piVar10 = *(int **)(*(long *)puVar3 + 0xb8);
        }
        if ((uint)in_stack_00000020._2_2_ << 0x10 != piVar10[1]) goto LAB_085ad420;
      }
      if (*(int *)(*(long *)PTR_DAT_092bc528 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar9 = FUN_083f9008(0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar7 = FUN_05286644(*(long *)(lVar9 + 0x10),*(undefined8 *)PTR_DAT_0932da10);
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(in_stack_00000010 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      auVar14 = FUN_08518b68(*(long *)(in_stack_00000010 + 0x58),0);
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(in_stack_00000010 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar5 = FUN_08518c60(*(long *)(in_stack_00000010 + 0x58),0);
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0858a07c(auVar14._0_8_,auVar14._8_8_,uVar5,uVar7,in_stack_00000010 + 0x34,0);
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar9 = *in_stack_00000018;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_085ad440;
          }
          uVar11 = uVar11 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x25,0);
LAB_085ad440:
      (*(code *)*puVar6)(in_stack_00000018,&stack0x00000020,1,puVar6[1]);
      goto LAB_085ad454;
    }
  }
LAB_085ad420:
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  auVar14 = NEON_fmov(0xbf800000,4);
  *(long *)(in_stack_00000010 + 0x3c) = auVar14._8_8_;
  *(long *)(in_stack_00000010 + 0x34) = auVar14._0_8_;
LAB_085ad454:
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *in_stack_00000018;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x25) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
        goto LAB_085ad4ac;
      }
      uVar11 = uVar11 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x25,0xc);
LAB_085ad4ac:
  (*(code *)*puVar6)(in_stack_00000018,1,puVar6[1]);
  puVar3 = PTR_DAT_09330100;
  lVar9 = *(long *)PTR_DAT_09330100;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar9 = *(long *)puVar3;
  }
  puVar6 = *(undefined8 **)(lVar9 + 0xb8);
  lVar12 = puVar6[1];
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar7 = *puVar6;
    lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_093300e0);
    FUN_06ac88dc(lVar12,uVar7,*(undefined8 *)PTR_DAT_093300f8,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar8 = lVar12;
    thunk_FUN_040ec700(plVar8,lVar12);
  }
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *in_stack_00000018;
  lVar13 = *(long *)PTR_DAT_093300e8;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)(lVar13 + 0x20)) {
        lVar9 = lVar9 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
        goto LAB_085ad5a0;
      }
      uVar11 = uVar11 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar11 != 0);
  }
  lVar9 = FUN_040b1e00(in_stack_00000018);
LAB_085ad5a0:
  lVar9 = thunk_FUN_04096bb4(*(undefined8 *)(lVar9 + 8),lVar13);
  (**(code **)(lVar9 + 8))(in_stack_00000018,lVar12,lVar9);
  if (in_stack_00000018 != (long *)0x0) {
    lVar9 = *in_stack_00000018;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_085ad624;
        }
        uVar11 = uVar11 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_085ad624:
    (*(code *)*puVar6)(in_stack_00000018,puVar6[1]);
  }
  return;
}


