/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_removed_t_base__set
ENTRY_POINT: 085470b4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x08547c7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_removed_t_base__set(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined1 auVar18 [16];
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
  
  FUN_04077588(PTR_DAT_0932c8c0);
                    /* try { // try from 085470c8 to 086470d3 has its CatchHandler @ 08547168 */
  FUN_04077588(PTR_DAT_0932c840);
  FUN_04077588(PTR_DAT_09327080);
  FUN_04077588(PTR_DAT_092860c0);
                    /* try { // try from 085470ec to 086470f7 has its CatchHandler @ 0854716c */
  FUN_04077588(PTR_DAT_0932e270);
                    /* try { // try from 085470f8 to 08647127 has its CatchHandler @ 08546f04 */
  FUN_04077588(PTR_DAT_09327ed0);
  FUN_04077588(PTR_DAT_0932e278);
  FUN_04077588(PTR_DAT_0932c870);
  FUN_04077588(PTR_DAT_09324758);
                    /* try { // try from 08547128 to 08647137 has its CatchHandler @ 08547194 */
  FUN_04077588(PTR_DAT_0932e280);
  FUN_04077588(PTR_DAT_0932e288);
  FUN_04077588(PTR_DAT_0932e290);
  *(undefined1 *)(unaff_x19 + 0x9cc) = 1;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  if (unaff_x24 == 0) {
LAB_08547c74:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = FUN_084f7088();
  uVar8 = FUN_084f7088();
  uVar9 = FUN_084f7088();
  FUN_084f8008();
  if (unaff_x22 == 0) goto LAB_08547c74;
  in_stack_00000078 = (long *)FUN_05189b28();
  lVar10 = FUN_084f7088();
  FUN_085468c4();
  lVar14 = in_stack_00000070;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  auVar18 = FUN_0851943c(lVar10,0);
  plVar5 = in_stack_00000078;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined1 (*) [16])(lVar14 + 0x1c) = auVar18;
  auVar18 = FUN_0851943c(lVar10,0);
  puVar3 = PTR_DAT_09327ed0;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar14 = *plVar5;
  uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar17 != 0) {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09327ed0) {
        puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_085472b4;
      }
      uVar17 = uVar17 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_09327ed0,0);
LAB_085472b4:
  (*(code *)*puVar11)(plVar5,auVar18._0_8_,auVar18._8_8_,0,2,puVar11[1]);
  plVar5 = in_stack_00000078;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(lVar7 + 0x170) == 1) {
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(in_stack_00000070 + 0x18) != 600) goto LAB_085472f8;
  }
  else {
LAB_085472f8:
    auVar18 = FUN_08519550(lVar10,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *plVar5;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 4) * 0x10 + 0x138);
          goto LAB_08547364;
        }
        uVar17 = uVar17 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)puVar3,4);
LAB_08547364:
    (*(code *)*puVar11)(plVar5,auVar18._0_8_,auVar18._8_8_,2,puVar11[1]);
  }
  _in_stack_00000060 = FUN_085197a0(lVar10,0);
  _in_stack_00000050 = FUN_085197d8(lVar10,0);
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
    lVar14 = *(long *)puVar2;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar14 = *(long *)puVar2;
    }
    piVar15 = *(int **)(lVar14 + 0xb8);
    if (uVar1 << 0x10 != *piVar15) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar15 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar15[1]) goto LAB_085474d4;
    }
    plVar5 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *in_stack_00000078;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set
          ;
        }
        uVar17 = uVar17 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set:
    (*(code *)*puVar11)(plVar5,&stack0x00000060,1,puVar11[1]);
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
    lVar14 = *(long *)puVar2;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar14 = *(long *)puVar2;
    }
    piVar15 = *(int **)(lVar14 + 0xb8);
    if (uVar1 << 0x10 != *piVar15) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar15 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar15[1]) goto LAB_085475e4;
    }
    plVar5 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *in_stack_00000078;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_085475d0;
        }
        uVar17 = uVar17 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0);
LAB_085475d0:
    (*(code *)*puVar11)(plVar5,&stack0x00000050,1,puVar11[1]);
  }
LAB_085475e4:
  lVar14 = FUN_08519a60(lVar10,0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
    uVar17 = 0;
    uVar16 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
    do {
      if (uVar16 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar12 = lVar14 + uVar17 * 0x10;
      in_stack_00000038 = *(undefined8 *)(lVar12 + 0x28);
      in_stack_00000030 = *(undefined8 *)(lVar12 + 0x20);
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
        lVar12 = *(long *)puVar2;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar12 = *(long *)puVar2;
        }
        piVar15 = *(int **)(lVar12 + 0xb8);
        if (uVar1 << 0x10 != *piVar15) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            piVar15 = *(int **)(*(long *)puVar2 + 0xb8);
          }
          if (uVar1 << 0x10 != piVar15[1]) goto LAB_0854772c;
        }
        plVar5 = in_stack_00000078;
        if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar12 = *in_stack_00000078;
        uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar16 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set;
            }
            uVar16 = uVar16 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set:
        (*(code *)*puVar11)(plVar5,&stack0x00000030,1,puVar11[1]);
      }
LAB_0854772c:
      uVar16 = (ulong)*(uint *)(lVar14 + 0x18);
      uVar17 = uVar17 + 1;
    } while ((long)uVar17 < (long)(int)*(uint *)(lVar14 + 0x18));
  }
  _in_stack_00000040 = FUN_08519aa8(lVar10,0);
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
    lVar14 = *(long *)puVar2;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar14 = *(long *)puVar2;
    }
    piVar15 = *(int **)(lVar14 + 0xb8);
    if (uVar1 << 0x10 != *piVar15) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar15 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar15[1]) goto LAB_08547864;
    }
    plVar5 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *in_stack_00000078;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08547850;
        }
        uVar17 = uVar17 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0);
LAB_08547850:
    (*(code *)*puVar11)(plVar5,&stack0x00000040,1,puVar11[1]);
  }
LAB_08547864:
  FUN_08546918(unaff_x21,uVar8,uVar9,&stack0x00000070,0,unaff_x22,1);
  if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar8 = *(undefined8 *)(in_stack_00000070 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_0932c870 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar10 = FUN_085057d4(uVar8,0);
  plVar5 = in_stack_00000078;
  lVar14 = in_stack_00000070;
  if (lVar10 == 0) {
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *in_stack_00000078;
    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar17 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar10 + (long)(*piVar15 + 9) * 0x10 + 0x138);
          goto LAB_08547938;
        }
        uVar17 = uVar17 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,9);
LAB_08547938:
    (*(code *)*puVar11)(plVar5,lVar14 + 0x2c,puVar11[1]);
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
  lVar14 = *in_stack_00000078;
  uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar17 != 0) {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
        puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
        goto LAB_085479a0;
      }
      uVar17 = uVar17 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0xb);
LAB_085479a0:
  (*(code *)*puVar11)(plVar5,0,puVar11[1]);
  plVar5 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar14 = *in_stack_00000078;
  uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar17 != 0) {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
        puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0xc) * 0x10 + 0x138);
        goto LAB_08547a08;
      }
      uVar17 = uVar17 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)puVar4,0xc);
LAB_08547a08:
  (*(code *)*puVar11)(plVar5,1,puVar11[1]);
  if (*(long *)(lVar7 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar17 = FUN_083e3844(*(long *)(lVar7 + 0x1a0),0);
  plVar5 = in_stack_00000078;
  if ((uVar17 & 1) != 0) {
    if (*(long *)(lVar7 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar17 = FUN_083e7714(*(long *)(lVar7 + 0x1a0),0);
    if ((uVar17 & 1) == 0) {
      bVar6 = false;
    }
    else {
      lVar7 = FUN_08515ce4(lVar7,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      bVar6 = *(char *)(lVar7 + 0x737) != '\0';
    }
    if (plVar5 == (long *)0x0) goto LAB_08547c78;
    lVar7 = *plVar5;
    uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar17 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar7 + (long)(*piVar15 + 0xd) * 0x10 + 0x138);
          goto LAB_08547ac4;
        }
        uVar17 = uVar17 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)puVar4,0xd);
LAB_08547ac4:
    (*(code *)*puVar11)(plVar5,bVar6,puVar11[1]);
  }
  plVar5 = in_stack_00000078;
  puVar3 = PTR_DAT_0932e288;
  lVar7 = *(long *)PTR_DAT_0932e288;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar7 = *(long *)puVar3;
  }
  puVar11 = *(undefined8 **)(lVar7 + 0xb8);
  lVar14 = puVar11[1];
  if (lVar14 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar11 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar8 = *puVar11;
    lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e268);
    FUN_06ac88dc(lVar14,uVar8,*(undefined8 *)PTR_DAT_0932e280,0);
    plVar13 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar13 = lVar14;
    thunk_FUN_040ec700(plVar13,lVar14);
  }
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    lVar10 = *(long *)PTR_DAT_0932e270;
    uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar17 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)(lVar10 + 0x20)) {
          lVar7 = lVar7 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
          goto LAB_08547bb8;
        }
        uVar17 = uVar17 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar17 != 0);
    }
    lVar7 = FUN_040b1e00(plVar5);
LAB_08547bb8:
    lVar7 = thunk_FUN_04096bb4(*(undefined8 *)(lVar7 + 8),lVar10);
    (**(code **)(lVar7 + 8))(plVar5,lVar14,lVar7);
    plVar5 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      lVar7 = *in_stack_00000078;
      uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar17 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092860c0) {
            puVar11 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_08547c38;
          }
          uVar17 = uVar17 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*(long *)PTR_DAT_092860c0,0);
LAB_08547c38:
      (*(code *)*puVar11)(plVar5,puVar11[1]);
    }
    return;
  }
LAB_08547c78:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


