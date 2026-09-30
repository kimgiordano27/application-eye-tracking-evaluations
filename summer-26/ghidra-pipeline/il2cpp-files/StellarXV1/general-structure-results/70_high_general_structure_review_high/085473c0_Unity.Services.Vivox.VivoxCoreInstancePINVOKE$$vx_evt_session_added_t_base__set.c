/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_added_t_base__set
ENTRY_POINT: 085473c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_8
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_base__set(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 unaff_x21;
  long lVar14;
  long *unaff_x23;
  long unaff_x29;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  long in_stack_00000070;
  long *in_stack_00000078;
  
  if (*(char *)(unaff_x29 + 0xe5a) == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    *(undefined1 *)(unaff_x29 + 0xe5a) = 1;
  }
  puVar2 = PTR_DAT_092b9d10;
  if (*(int *)(*(long *)PTR_DAT_092b9d10 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
                    /* try { // try from 085473f4 to 086473fb has its CatchHandler @ 0854749c */
  if (DAT_0989ce5b == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5b = '\x01';
  }
  puVar3 = PTR_DAT_09327080;
  if (in_stack_00000060._2_2_ != 0) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
                    /* try { // try from 08547438 to 0864743f has its CatchHandler @ 085474a0 */
      lVar5 = *(long *)puVar2;
    }
    piVar9 = *(int **)(lVar5 + 0xb8);
                    /* try { // try from 08547440 to 08647487 has its CatchHandler @ 0854731c */
    if ((uint)in_stack_00000060._2_2_ << 0x10 != *piVar9) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar9 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if ((uint)in_stack_00000060._2_2_ << 0x10 != piVar9[1]) goto LAB_085474d4;
    }
    plVar12 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *in_stack_00000078;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set
          ;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar3,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set:
    (*(code *)*puVar6)(plVar12,&stack0x00000060,1,puVar6[1]);
  }
LAB_085474d4:
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (*(char *)(unaff_x29 + 0xe5a) == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    *(undefined1 *)(unaff_x29 + 0xe5a) = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce5b == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5b = '\x01';
  }
  if (in_stack_00000050._2_2_ != 0) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar5 = *(long *)puVar2;
    }
    piVar9 = *(int **)(lVar5 + 0xb8);
    if ((uint)in_stack_00000050._2_2_ << 0x10 != *piVar9) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar9 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if ((uint)in_stack_00000050._2_2_ << 0x10 != piVar9[1]) goto LAB_085475e4;
    }
    plVar12 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *in_stack_00000078;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_085475d0;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar3,0);
LAB_085475d0:
    (*(code *)*puVar6)(plVar12,&stack0x00000050,1,puVar6[1]);
  }
LAB_085475e4:
  lVar5 = FUN_08519a60();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
    uVar11 = 0;
    uVar10 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar7 = lVar5 + uVar11 * 0x10;
      in_stack_00000038 = *(undefined8 *)(lVar7 + 0x28);
      in_stack_00000030 = *(undefined8 *)(lVar7 + 0x20);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (*(char *)(unaff_x29 + 0xe5a) == '\0') {
        FUN_04077588(puVar2);
        *(undefined1 *)(unaff_x29 + 0xe5a) = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (DAT_0989ce5b == '\0') {
        FUN_04077588(puVar2);
        DAT_0989ce5b = '\x01';
      }
      uVar1 = (uint)in_stack_00000030._2_2_;
      if (in_stack_00000030._2_2_ != 0) {
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar7 = *(long *)puVar2;
        }
        piVar9 = *(int **)(lVar7 + 0xb8);
        if (uVar1 << 0x10 != *piVar9) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            piVar9 = *(int **)(*(long *)puVar2 + 0xb8);
          }
          if (uVar1 << 0x10 != piVar9[1]) goto LAB_0854772c;
        }
        plVar12 = in_stack_00000078;
        if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar7 = *in_stack_00000078;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set;
            }
            uVar10 = uVar10 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar3,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set:
        (*(code *)*puVar6)(plVar12,&stack0x00000030,1,puVar6[1]);
      }
LAB_0854772c:
      uVar10 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  _in_stack_00000040 = FUN_08519aa8();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x23);
  }
  if (*(char *)(unaff_x29 + 0xe5a) == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    *(undefined1 *)(unaff_x29 + 0xe5a) = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce5b == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5b = '\x01';
  }
  uVar1 = (uint)in_stack_00000040._2_2_;
  if (in_stack_00000040._2_2_ != 0) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar5 = *(long *)puVar2;
    }
    piVar9 = *(int **)(lVar5 + 0xb8);
    if (uVar1 << 0x10 != *piVar9) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar9 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar9[1]) goto LAB_08547864;
    }
    plVar12 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *in_stack_00000078;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08547850;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar3,0);
LAB_08547850:
    (*(code *)*puVar6)(plVar12,&stack0x00000040,1,puVar6[1]);
  }
LAB_08547864:
  FUN_08546918(unaff_x21);
  if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar13 = *(undefined8 *)(in_stack_00000070 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_0932c870 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar7 = FUN_085057d4(uVar13,0);
  plVar12 = in_stack_00000078;
  lVar5 = in_stack_00000070;
  if (lVar7 == 0) {
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = *in_stack_00000078;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
          goto LAB_08547938;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar3,9);
LAB_08547938:
    (*(code *)*puVar6)(plVar12,lVar5 + 0x2c,puVar6[1]);
  }
  else {
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(in_stack_00000070 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_084f23a4(*(long *)(in_stack_00000070 + 0x38),in_stack_00000078,0);
  }
  plVar12 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *in_stack_00000078;
  uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar11 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
        goto LAB_085479a0;
      }
      uVar11 = uVar11 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar3,0xb);
LAB_085479a0:
  (*(code *)*puVar6)(plVar12,0,puVar6[1]);
  plVar12 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *in_stack_00000078;
  uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar11 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
        goto LAB_08547a08;
      }
      uVar11 = uVar11 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar3,0xc);
LAB_08547a08:
  (*(code *)*puVar6)(plVar12,1,puVar6[1]);
  if (*(long *)(in_stack_00000018 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar11 = FUN_083e3844(*(long *)(in_stack_00000018 + 0x1a0),0);
  plVar12 = in_stack_00000078;
  if ((uVar11 & 1) != 0) {
    if (*(long *)(in_stack_00000018 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar11 = FUN_083e7714(*(long *)(in_stack_00000018 + 0x1a0),0);
    if ((uVar11 & 1) == 0) {
      bVar4 = false;
    }
    else {
      lVar5 = FUN_08515ce4(in_stack_00000018,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      bVar4 = *(char *)(lVar5 + 0x737) != '\0';
    }
    if (plVar12 == (long *)0x0) goto LAB_08547c78;
    lVar5 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
          goto LAB_08547ac4;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)puVar3,0xd);
LAB_08547ac4:
    (*(code *)*puVar6)(plVar12,bVar4,puVar6[1]);
  }
  plVar12 = in_stack_00000078;
  puVar2 = PTR_DAT_0932e288;
  lVar5 = *(long *)PTR_DAT_0932e288;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar13 = *puVar6;
    lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e268);
    FUN_06ac88dc(lVar7,uVar13,*(undefined8 *)PTR_DAT_0932e280,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar8 = lVar7;
    thunk_FUN_040ec700(plVar8,lVar7);
  }
  if (plVar12 != (long *)0x0) {
    lVar5 = *plVar12;
    lVar14 = *(long *)PTR_DAT_0932e270;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(lVar14 + 0x20)) {
          lVar5 = lVar5 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
          goto LAB_08547bb8;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    lVar5 = FUN_040b1e00(plVar12);
LAB_08547bb8:
    lVar5 = thunk_FUN_04096bb4(*(undefined8 *)(lVar5 + 8),lVar14);
    (**(code **)(lVar5 + 8))(plVar12,lVar7,lVar5);
    plVar12 = (long *)*in_stack_00000028;
    if (plVar12 != (long *)0x0) {
      lVar5 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092860c0) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_08547c38;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_092860c0,0);
LAB_08547c38:
      (*(code *)*puVar6)(plVar12,puVar6[1]);
    }
    if (in_stack_00000020 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
LAB_08547c78:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


