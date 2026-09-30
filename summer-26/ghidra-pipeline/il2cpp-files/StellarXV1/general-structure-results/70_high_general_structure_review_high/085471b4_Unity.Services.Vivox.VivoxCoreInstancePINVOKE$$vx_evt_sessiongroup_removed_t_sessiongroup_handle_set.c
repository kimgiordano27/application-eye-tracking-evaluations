/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_removed_t_sessiongroup_handle_set
ENTRY_POINT: 085471b4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x08547c7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_removed_t_sessiongroup_handle_set
               (undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined1 auVar16 [16];
  long in_stack_00000018;
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
  
                    /* try { // try from 085471b4 to 086471cf has its CatchHandler @ 08546f04 */
  FUN_084f8008(param_1,0);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
                    /* catch() { ... } // from try @ 085471b0 with catch @ 085471cc */
                    /* try { // try from 085471d0 to 086471d7 has its CatchHandler @ 085471e0 */
                    /* try { // try from 085471d8 to 086471e3 has its CatchHandler @ 08546f04 */
                    /* catch() { ... } // from try @ 085471d0 with catch @ 085471e0 */
  in_stack_00000078 = (long *)FUN_05189b28();
  lVar7 = FUN_084f7088();
  FUN_085468c4();
  lVar11 = in_stack_00000070;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  auVar16 = FUN_0851943c(lVar7,0);
  plVar5 = in_stack_00000078;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined1 (*) [16])(lVar11 + 0x1c) = auVar16;
  auVar16 = FUN_0851943c(lVar7,0);
  puVar3 = PTR_DAT_09327ed0;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar11 = *plVar5;
  uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar14 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09327ed0) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_085472b4;
      }
      uVar14 = uVar14 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_09327ed0,0);
LAB_085472b4:
  (*(code *)*puVar8)(plVar5,auVar16._0_8_,auVar16._8_8_,0,2,puVar8[1]);
  plVar5 = in_stack_00000078;
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
    auVar16 = FUN_08519550(lVar7,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar11 = *plVar5;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar12 + 4) * 0x10 + 0x138);
          goto LAB_08547364;
        }
        uVar14 = uVar14 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)puVar3,4);
LAB_08547364:
    (*(code *)*puVar8)(plVar5,auVar16._0_8_,auVar16._8_8_,2,puVar8[1]);
  }
  _in_stack_00000060 = FUN_085197a0(lVar7,0);
  _in_stack_00000050 = FUN_085197d8(lVar7,0);
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
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *(long *)puVar2;
    }
    piVar12 = *(int **)(lVar11 + 0xb8);
    if (uVar1 << 0x10 != *piVar12) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar12 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar12[1]) goto LAB_085474d4;
    }
    plVar5 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar11 = *in_stack_00000078;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set
          ;
        }
        uVar14 = uVar14 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set:
    (*(code *)*puVar8)(plVar5,&stack0x00000060,1,puVar8[1]);
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
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *(long *)puVar2;
    }
    piVar12 = *(int **)(lVar11 + 0xb8);
    if (uVar1 << 0x10 != *piVar12) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar12 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar12[1]) goto LAB_085475e4;
    }
    plVar5 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar11 = *in_stack_00000078;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_085475d0;
        }
        uVar14 = uVar14 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0);
LAB_085475d0:
    (*(code *)*puVar8)(plVar5,&stack0x00000050,1,puVar8[1]);
  }
LAB_085475e4:
  lVar11 = FUN_08519a60(lVar7,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
    uVar14 = 0;
    uVar13 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
    do {
      if (uVar13 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar9 = lVar11 + uVar14 * 0x10;
      in_stack_00000038 = *(undefined8 *)(lVar9 + 0x28);
      in_stack_00000030 = *(undefined8 *)(lVar9 + 0x20);
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
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar9 = *(long *)puVar2;
        }
        piVar12 = *(int **)(lVar9 + 0xb8);
        if (uVar1 << 0x10 != *piVar12) {
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            piVar12 = *(int **)(*(long *)puVar2 + 0xb8);
          }
          if (uVar1 << 0x10 != piVar12[1]) goto LAB_0854772c;
        }
        plVar5 = in_stack_00000078;
        if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar9 = *in_stack_00000078;
        uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar13 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set;
            }
            uVar13 = uVar13 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set:
        (*(code *)*puVar8)(plVar5,&stack0x00000030,1,puVar8[1]);
      }
LAB_0854772c:
      uVar13 = (ulong)*(uint *)(lVar11 + 0x18);
      uVar14 = uVar14 + 1;
    } while ((long)uVar14 < (long)(int)*(uint *)(lVar11 + 0x18));
  }
  _in_stack_00000040 = FUN_08519aa8(lVar7,0);
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
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *(long *)puVar2;
    }
    piVar12 = *(int **)(lVar11 + 0xb8);
    if (uVar1 << 0x10 != *piVar12) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar12 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar12[1]) goto LAB_08547864;
    }
    plVar5 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar11 = *in_stack_00000078;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_08547850;
        }
        uVar14 = uVar14 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0);
LAB_08547850:
    (*(code *)*puVar8)(plVar5,&stack0x00000040,1,puVar8[1]);
  }
LAB_08547864:
  FUN_08546918(unaff_x21);
  if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar15 = *(undefined8 *)(in_stack_00000070 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_0932c870 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar7 = FUN_085057d4(uVar15,0);
  plVar5 = in_stack_00000078;
  lVar11 = in_stack_00000070;
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
    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar14 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto LAB_08547938;
        }
        uVar14 = uVar14 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,9);
LAB_08547938:
    (*(code *)*puVar8)(plVar5,lVar11 + 0x2c,puVar8[1]);
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
  plVar5 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar11 = *in_stack_00000078;
  uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar14 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
        goto LAB_085479a0;
      }
      uVar14 = uVar14 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0xb);
LAB_085479a0:
  (*(code *)*puVar8)(plVar5,0,puVar8[1]);
  plVar5 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar11 = *in_stack_00000078;
  uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar14 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
        goto LAB_08547a08;
      }
      uVar14 = uVar14 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0xc);
LAB_08547a08:
  (*(code *)*puVar8)(plVar5,1,puVar8[1]);
  if (*(long *)(in_stack_00000018 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar14 = FUN_083e3844(*(long *)(in_stack_00000018 + 0x1a0),0);
  plVar5 = in_stack_00000078;
  if ((uVar14 & 1) != 0) {
    if (*(long *)(in_stack_00000018 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar14 = FUN_083e7714(*(long *)(in_stack_00000018 + 0x1a0),0);
    if ((uVar14 & 1) == 0) {
      bVar6 = false;
    }
    else {
      lVar11 = FUN_08515ce4(in_stack_00000018,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      bVar6 = *(char *)(lVar11 + 0x737) != '\0';
    }
    if (plVar5 == (long *)0x0) goto LAB_08547c78;
    lVar11 = *plVar5;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
          goto LAB_08547ac4;
        }
        uVar14 = uVar14 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)puVar4,0xd);
LAB_08547ac4:
    (*(code *)*puVar8)(plVar5,bVar6,puVar8[1]);
  }
  plVar5 = in_stack_00000078;
  puVar3 = PTR_DAT_0932e288;
  lVar11 = *(long *)PTR_DAT_0932e288;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *(long *)puVar3;
  }
  puVar8 = *(undefined8 **)(lVar11 + 0xb8);
  lVar7 = puVar8[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar15 = *puVar8;
    lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e268);
    FUN_06ac88dc(lVar7,uVar15,*(undefined8 *)PTR_DAT_0932e280,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar10 = lVar7;
    thunk_FUN_040ec700(plVar10,lVar7);
  }
  if (plVar5 != (long *)0x0) {
    lVar11 = *plVar5;
    lVar9 = *(long *)PTR_DAT_0932e270;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x20)) {
          lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
          goto LAB_08547bb8;
        }
        uVar14 = uVar14 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar14 != 0);
    }
    lVar11 = FUN_040b1e00(plVar5);
LAB_08547bb8:
    lVar11 = thunk_FUN_04096bb4(*(undefined8 *)(lVar11 + 8),lVar9);
    (**(code **)(lVar11 + 8))(plVar5,lVar7,lVar11);
    plVar5 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      lVar11 = *in_stack_00000078;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092860c0) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_08547c38;
          }
          uVar14 = uVar14 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)PTR_DAT_092860c0,0);
LAB_08547c38:
      (*(code *)*puVar8)(plVar5,puVar8[1]);
    }
    return;
  }
LAB_08547c78:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


