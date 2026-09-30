/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_removed_t_sessiongroup_handle_get
ENTRY_POINT: 0854724c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_10
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_removed_t_sessiongroup_handle_get
               (undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 unaff_x21;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long *in_stack_00000078;
  
  FUN_0851943c(param_1,0);
  puVar3 = PTR_DAT_09327ed0;
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *unaff_x25;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09327ed0) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_085472b4;
      }
      uVar12 = uVar12 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00();
LAB_085472b4:
  (*(code *)*puVar6)();
  plVar13 = in_stack_00000078;
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(in_stack_00000018 + 0x170) == 1) {
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(in_stack_00000070 + 0x18) != 600) goto LAB_085472f8;
  }
  else {
LAB_085472f8:
    auVar16 = FUN_08519550();
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar9 = *plVar13;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_08547364;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)puVar3,4);
LAB_08547364:
    (*(code *)*puVar6)(plVar13,auVar16._0_8_,auVar16._8_8_,2,puVar6[1]);
  }
  _in_stack_00000060 = FUN_085197a0();
  _in_stack_00000050 = FUN_085197d8();
  puVar3 = PTR_DAT_09324758;
  if (*(int *)(*(long *)PTR_DAT_09324758 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)PTR_DAT_09324758);
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
  puVar4 = PTR_DAT_09327080;
  uVar1 = (uint)in_stack_00000060._2_2_;
  if (in_stack_00000060._2_2_ != 0) {
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar9 = *(long *)puVar2;
    }
    piVar10 = *(int **)(lVar9 + 0xb8);
    if (uVar1 << 0x10 != *piVar10) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar10 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar10[1]) goto LAB_085474d4;
    }
    plVar13 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar9 = *in_stack_00000078;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set
          ;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set:
    (*(code *)*puVar6)(plVar13,&stack0x00000060,1,puVar6[1]);
  }
LAB_085474d4:
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce5a == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5a = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce5b == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5b = '\x01';
  }
  uVar1 = (uint)in_stack_00000050._2_2_;
  if (in_stack_00000050._2_2_ != 0) {
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar9 = *(long *)puVar2;
    }
    piVar10 = *(int **)(lVar9 + 0xb8);
    if (uVar1 << 0x10 != *piVar10) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar10 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar10[1]) goto LAB_085475e4;
    }
    plVar13 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar9 = *in_stack_00000078;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_085475d0;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0);
LAB_085475d0:
    (*(code *)*puVar6)(plVar13,&stack0x00000050,1,puVar6[1]);
  }
LAB_085475e4:
  lVar9 = FUN_08519a60();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
    uVar12 = 0;
    uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
    do {
      if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar7 = lVar9 + uVar12 * 0x10;
      in_stack_00000038 = *(undefined8 *)(lVar7 + 0x28);
      in_stack_00000030 = *(undefined8 *)(lVar7 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (DAT_0989ce5a == '\0') {
        FUN_04077588(puVar2);
        DAT_0989ce5a = '\x01';
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
        piVar10 = *(int **)(lVar7 + 0xb8);
        if (uVar1 << 0x10 != *piVar10) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            piVar10 = *(int **)(*(long *)puVar2 + 0xb8);
          }
          if (uVar1 << 0x10 != piVar10[1]) goto LAB_0854772c;
        }
        plVar13 = in_stack_00000078;
        if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar7 = *in_stack_00000078;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set;
            }
            uVar11 = uVar11 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set:
        (*(code *)*puVar6)(plVar13,&stack0x00000030,1,puVar6[1]);
      }
LAB_0854772c:
      uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)*(uint *)(lVar9 + 0x18));
  }
  _in_stack_00000040 = FUN_08519aa8();
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar3);
  }
  if (DAT_0989ce5a == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5a = '\x01';
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
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar9 = *(long *)puVar2;
    }
    piVar10 = *(int **)(lVar9 + 0xb8);
    if (uVar1 << 0x10 != *piVar10) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar10 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar10[1]) goto LAB_08547864;
    }
    plVar13 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar9 = *in_stack_00000078;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_08547850;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0);
LAB_08547850:
    (*(code *)*puVar6)(plVar13,&stack0x00000040,1,puVar6[1]);
  }
LAB_08547864:
  FUN_08546918(unaff_x21);
  if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar14 = *(undefined8 *)(in_stack_00000070 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_0932c870 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar7 = FUN_085057d4(uVar14,0);
  plVar13 = in_stack_00000078;
  lVar9 = in_stack_00000070;
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
    uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_08547938;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,9);
LAB_08547938:
    (*(code *)*puVar6)(plVar13,lVar9 + 0x2c,puVar6[1]);
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
  plVar13 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *in_stack_00000078;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
        goto LAB_085479a0;
      }
      uVar12 = uVar12 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0xb);
LAB_085479a0:
  (*(code *)*puVar6)(plVar13,0,puVar6[1]);
  plVar13 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *in_stack_00000078;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
        goto LAB_08547a08;
      }
      uVar12 = uVar12 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0xc);
LAB_08547a08:
  (*(code *)*puVar6)(plVar13,1,puVar6[1]);
  if (*(long *)(in_stack_00000018 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar12 = FUN_083e3844(*(long *)(in_stack_00000018 + 0x1a0),0);
  plVar13 = in_stack_00000078;
  if ((uVar12 & 1) != 0) {
    if (*(long *)(in_stack_00000018 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar12 = FUN_083e7714(*(long *)(in_stack_00000018 + 0x1a0),0);
    if ((uVar12 & 1) == 0) {
      bVar5 = false;
    }
    else {
      lVar9 = FUN_08515ce4(in_stack_00000018,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      bVar5 = *(char *)(lVar9 + 0x737) != '\0';
    }
    if (plVar13 == (long *)0x0) goto LAB_08547c78;
    lVar9 = *plVar13;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
          goto LAB_08547ac4;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)puVar4,0xd);
LAB_08547ac4:
    (*(code *)*puVar6)(plVar13,bVar5,puVar6[1]);
  }
  plVar13 = in_stack_00000078;
  puVar3 = PTR_DAT_0932e288;
  lVar9 = *(long *)PTR_DAT_0932e288;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar9 = *(long *)puVar3;
  }
  puVar6 = *(undefined8 **)(lVar9 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar14 = *puVar6;
    lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e268);
    FUN_06ac88dc(lVar7,uVar14,*(undefined8 *)PTR_DAT_0932e280,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar8 = lVar7;
    thunk_FUN_040ec700(plVar8,lVar7);
  }
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    lVar15 = *(long *)PTR_DAT_0932e270;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)(lVar15 + 0x20)) {
          lVar9 = lVar9 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 + 0x138;
          goto LAB_08547bb8;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar12 != 0);
    }
    lVar9 = FUN_040b1e00(plVar13);
LAB_08547bb8:
    lVar9 = thunk_FUN_04096bb4(*(undefined8 *)(lVar9 + 8),lVar15);
    (**(code **)(lVar9 + 8))(plVar13,lVar7,lVar9);
    plVar13 = (long *)*in_stack_00000028;
    if (plVar13 != (long *)0x0) {
      lVar9 = *plVar13;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092860c0) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_08547c38;
          }
          uVar12 = uVar12 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092860c0,0);
LAB_08547c38:
      (*(code *)*puVar6)(plVar13,puVar6[1]);
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


