/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_state_sessions_count_get
ENTRY_POINT: 085ad188
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x085ad654) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_state_sessions_count_get
               (void)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  ulong unaff_x22;
  long *unaff_x25;
  undefined1 auVar13 [16];
  long in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce4f == '\0') {
    FUN_04077588(PTR_DAT_093243d0);
    DAT_0989ce4f = '\x01';
  }
  lVar5 = *unaff_x20;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *unaff_x20;
  }
  if (*(long *)(unaff_x19 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar1 = *(uint *)(*(long *)(lVar5 + 0xb8) + 0x4c);
  bVar3 = FUN_083e7714(*(long *)(unaff_x19 + 0x1a0),0);
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *in_stack_00000018;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
        goto LAB_085ad24c;
      }
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x25,0xd);
LAB_085ad24c:
  (*(code *)*puVar6)(in_stack_00000018,(uVar1 & 2) == 0 & bVar3,puVar6[1]);
  if ((unaff_x22 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_09324758 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0989ce5a == '\0') {
      FUN_04077588(PTR_DAT_092b9d10);
      DAT_0989ce5a = '\x01';
    }
    puVar2 = PTR_DAT_092b9d10;
    if (*(int *)(*(long *)PTR_DAT_092b9d10 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0989ce5b == '\0') {
      FUN_04077588(PTR_DAT_092b9d10);
      DAT_0989ce5b = '\x01';
    }
    if (in_stack_00000020._2_2_ != 0) {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar5 = *(long *)puVar2;
      }
      piVar9 = *(int **)(lVar5 + 0xb8);
      if ((uint)in_stack_00000020._2_2_ << 0x10 != *piVar9) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          piVar9 = *(int **)(*(long *)puVar2 + 0xb8);
        }
        if ((uint)in_stack_00000020._2_2_ << 0x10 != piVar9[1]) goto LAB_085ad420;
      }
      if (*(int *)(*(long *)PTR_DAT_092bc528 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar5 = FUN_083f9008(0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar7 = FUN_05286644(*(long *)(lVar5 + 0x10),*(undefined8 *)PTR_DAT_0932da10);
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(in_stack_00000010 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      auVar13 = FUN_08518b68(*(long *)(in_stack_00000010 + 0x58),0);
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(in_stack_00000010 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar4 = FUN_08518c60(*(long *)(in_stack_00000010 + 0x58),0);
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0858a07c(auVar13._0_8_,auVar13._8_8_,uVar4,uVar7,in_stack_00000010 + 0x34,0);
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar5 = *in_stack_00000018;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x25) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_085ad440;
          }
          uVar10 = uVar10 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar10 != 0);
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
  auVar13 = NEON_fmov(0xbf800000,4);
  *(long *)(in_stack_00000010 + 0x3c) = auVar13._8_8_;
  *(long *)(in_stack_00000010 + 0x34) = auVar13._0_8_;
LAB_085ad454:
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *in_stack_00000018;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
        goto LAB_085ad4ac;
      }
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x25,0xc);
LAB_085ad4ac:
  (*(code *)*puVar6)(in_stack_00000018,1,puVar6[1]);
  puVar2 = PTR_DAT_09330100;
  lVar5 = *(long *)PTR_DAT_09330100;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar5 + 0xb8);
  lVar11 = puVar6[1];
  if (lVar11 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar7 = *puVar6;
    lVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_093300e0);
    FUN_06ac88dc(lVar11,uVar7,*(undefined8 *)PTR_DAT_093300f8,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar8 = lVar11;
    thunk_FUN_040ec700(plVar8,lVar11);
  }
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *in_stack_00000018;
  lVar12 = *(long *)PTR_DAT_093300e8;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_085ad5a0;
      }
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  lVar5 = FUN_040b1e00(in_stack_00000018);
LAB_085ad5a0:
  lVar5 = thunk_FUN_04096bb4(*(undefined8 *)(lVar5 + 8),lVar12);
  (**(code **)(lVar5 + 8))(in_stack_00000018,lVar11,lVar5);
  if (in_stack_00000018 != (long *)0x0) {
    lVar5 = *in_stack_00000018;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_085ad624;
        }
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_085ad624:
    (*(code *)*puVar6)(in_stack_00000018,puVar6[1]);
  }
  return;
}


