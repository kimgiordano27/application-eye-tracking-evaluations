/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_state_sessions_get
ENTRY_POINT: 085ad288
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x085ad654) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_state_sessions_get
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  ulong uVar8;
  long unaff_x19;
  long lVar9;
  long lVar10;
  long *unaff_x25;
  undefined1 auVar11 [16];
  long in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xd10));
  *(undefined1 *)(unaff_x19 + 0xe5a) = 1;
  puVar1 = PTR_DAT_092b9d10;
  if (*(int *)(*(long *)PTR_DAT_092b9d10 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce5b == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5b = '\x01';
  }
  if (in_stack_00000020._2_2_ == 0) {
LAB_085ad420:
    if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    auVar11 = NEON_fmov(0xbf800000,4);
    *(long *)(in_stack_00000010 + 0x3c) = auVar11._8_8_;
    *(long *)(in_stack_00000010 + 0x34) = auVar11._0_8_;
  }
  else {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar3 = *(long *)puVar1;
    }
    piVar7 = *(int **)(lVar3 + 0xb8);
    if ((uint)in_stack_00000020._2_2_ << 0x10 != *piVar7) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar7 = *(int **)(*(long *)puVar1 + 0xb8);
      }
      if ((uint)in_stack_00000020._2_2_ << 0x10 != piVar7[1]) goto LAB_085ad420;
    }
    if (*(int *)(*(long *)PTR_DAT_092bc528 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = FUN_083f9008(0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar4 = FUN_05286644(*(long *)(lVar3 + 0x10),*(undefined8 *)PTR_DAT_0932da10);
    if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(in_stack_00000010 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    auVar11 = FUN_08518b68(*(long *)(in_stack_00000010 + 0x58),0);
    if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(in_stack_00000010 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar2 = FUN_08518c60(*(long *)(in_stack_00000010 + 0x58),0);
    if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0858a07c(auVar11._0_8_,auVar11._8_8_,uVar2,uVar4,in_stack_00000010 + 0x34,0);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *in_stack_00000018;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_085ad440;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x25,0);
LAB_085ad440:
    (*(code *)*puVar5)(in_stack_00000018,&stack0x00000020,1,puVar5[1]);
  }
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *in_stack_00000018;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar8 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
        goto LAB_085ad4ac;
      }
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x25,0xc);
LAB_085ad4ac:
  (*(code *)*puVar5)(in_stack_00000018,1,puVar5[1]);
  puVar1 = PTR_DAT_09330100;
  lVar3 = *(long *)PTR_DAT_09330100;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *(long *)puVar1;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar9 = puVar5[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar4 = *puVar5;
    lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_093300e0);
    FUN_06ac88dc(lVar9,uVar4,*(undefined8 *)PTR_DAT_093300f8,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar6 = lVar9;
    thunk_FUN_040ec700(plVar6,lVar9);
  }
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *in_stack_00000018;
  lVar10 = *(long *)PTR_DAT_093300e8;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar8 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_085ad5a0;
      }
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar8 != 0);
  }
  lVar3 = FUN_040b1e00(in_stack_00000018);
LAB_085ad5a0:
  lVar3 = thunk_FUN_04096bb4(*(undefined8 *)(lVar3 + 8),lVar10);
  (**(code **)(lVar3 + 8))(in_stack_00000018,lVar9,lVar3);
  if (in_stack_00000018 != (long *)0x0) {
    lVar3 = *in_stack_00000018;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_085ad624;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_085ad624:
    (*(code *)*puVar5)(in_stack_00000018,puVar5[1]);
  }
  return;
}


