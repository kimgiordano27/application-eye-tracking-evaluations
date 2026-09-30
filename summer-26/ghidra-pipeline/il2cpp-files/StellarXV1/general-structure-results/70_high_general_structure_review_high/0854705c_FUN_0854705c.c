/*
FUNCTION_NAME: FUN_0854705c
ENTRY_POINT: 0854705c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x08547c7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0854705c(long param_1,long param_2,long param_3)

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
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  long local_70;
  long *local_68;
  
  if ((DAT_0989d9cc & 1) == 0) {
                    /* try { // try from 08547090 to 086470b3 has its CatchHandler @ 08547178 */
    FUN_04077588(PTR_DAT_0932e268);
    FUN_04077588(PTR_DAT_0932c838);
    FUN_04077588(PTR_DAT_0932c8b8);
    FUN_04077588(PTR_DAT_0932c8c0);
    FUN_04077588(PTR_DAT_0932c840);
    FUN_04077588(PTR_DAT_09327080);
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_0932e270);
    FUN_04077588(PTR_DAT_09327ed0);
    FUN_04077588(PTR_DAT_0932e278);
    FUN_04077588(PTR_DAT_0932c870);
    FUN_04077588(PTR_DAT_09324758);
    FUN_04077588(PTR_DAT_0932e280);
    FUN_04077588(PTR_DAT_0932e288);
    FUN_04077588(PTR_DAT_0932e290);
    DAT_0989d9cc = 1;
  }
  puVar2 = PTR_DAT_0932c8c0;
  puVar3 = PTR_DAT_0932c8b8;
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (param_3 == 0) {
LAB_08547c74:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = FUN_084f7088(param_3,*(undefined8 *)PTR_DAT_0932c838);
  uVar8 = FUN_084f7088(param_3,*(undefined8 *)puVar2);
  uVar9 = FUN_084f7088(param_3,*(undefined8 *)puVar3);
  uVar19 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = FUN_084f8008(param_1,0);
  puVar3 = PTR_DAT_0932c840;
  if (param_2 == 0) goto LAB_08547c74;
  local_68 = (long *)FUN_05189b28(param_2,uVar19,&local_70,uVar10,*(undefined8 *)PTR_DAT_0932e290,
                                  0x112,*(undefined8 *)PTR_DAT_0932e278);
  lVar11 = FUN_084f7088(param_3,*(undefined8 *)puVar3);
  FUN_085468c4(param_1,lVar7,&local_70);
  lVar15 = local_70;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  auVar20 = FUN_0851943c(lVar11,0);
  plVar5 = local_68;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined1 (*) [16])(lVar15 + 0x1c) = auVar20;
  auVar20 = FUN_0851943c(lVar11,0);
  puVar3 = PTR_DAT_09327ed0;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar15 = *plVar5;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09327ed0) {
        puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_085472b4;
      }
      uVar18 = uVar18 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_09327ed0,0);
LAB_085472b4:
  (*(code *)*puVar12)(plVar5,auVar20._0_8_,auVar20._8_8_,0,2,puVar12[1]);
  plVar5 = local_68;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(lVar7 + 0x170) == 1) {
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(local_70 + 0x18) != 600) goto LAB_085472f8;
  }
  else {
LAB_085472f8:
    auVar20 = FUN_08519550(lVar11,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar15 = *plVar5;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
          goto LAB_08547364;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)puVar3,4);
LAB_08547364:
    (*(code *)*puVar12)(plVar5,auVar20._0_8_,auVar20._8_8_,2,puVar12[1]);
  }
  local_80 = FUN_085197a0(lVar11,0);
  local_90 = FUN_085197d8(lVar11,0);
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
  uVar1 = (uint)(ushort)local_80._2_2_;
  if (local_80._2_2_ != 0) {
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar15 = *(long *)puVar2;
    }
    piVar16 = *(int **)(lVar15 + 0xb8);
    if (uVar1 << 0x10 != *piVar16) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar16 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar16[1]) goto LAB_085474d4;
    }
    plVar5 = local_68;
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar15 = *local_68;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set
          ;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_040b1e00(local_68,*(long *)puVar4,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set:
    (*(code *)*puVar12)(plVar5,local_80,1,puVar12[1]);
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
  uVar1 = (uint)(ushort)local_90._2_2_;
  if (local_90._2_2_ != 0) {
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar15 = *(long *)puVar2;
    }
    piVar16 = *(int **)(lVar15 + 0xb8);
    if (uVar1 << 0x10 != *piVar16) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar16 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar16[1]) goto LAB_085475e4;
    }
    plVar5 = local_68;
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar15 = *local_68;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_085475d0;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_040b1e00(local_68,*(long *)puVar4,0);
LAB_085475d0:
    (*(code *)*puVar12)(plVar5,local_90,1,puVar12[1]);
  }
LAB_085475e4:
  lVar15 = FUN_08519a60(lVar11,0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
    uVar18 = 0;
    uVar17 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
    do {
      if (uVar17 <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar13 = lVar15 + uVar18 * 0x10;
      uStack_a8 = *(undefined8 *)(lVar13 + 0x28);
      local_b0 = *(undefined8 *)(lVar13 + 0x20);
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
      uVar1 = (uint)local_b0._2_2_;
      if (local_b0._2_2_ != 0) {
        lVar13 = *(long *)puVar2;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar13 = *(long *)puVar2;
        }
        piVar16 = *(int **)(lVar13 + 0xb8);
        if (uVar1 << 0x10 != *piVar16) {
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            piVar16 = *(int **)(*(long *)puVar2 + 0xb8);
          }
          if (uVar1 << 0x10 != piVar16[1]) goto LAB_0854772c;
        }
        plVar5 = local_68;
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar13 = *local_68;
        uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar17 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set;
            }
            uVar17 = uVar17 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_040b1e00(local_68,*(long *)puVar4,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set:
        (*(code *)*puVar12)(plVar5,&local_b0,1,puVar12[1]);
      }
LAB_0854772c:
      uVar17 = (ulong)*(uint *)(lVar15 + 0x18);
      uVar18 = uVar18 + 1;
    } while ((long)uVar18 < (long)(int)*(uint *)(lVar15 + 0x18));
  }
  local_a0 = FUN_08519aa8(lVar11,0);
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
  uVar1 = (uint)(ushort)local_a0._2_2_;
  if (local_a0._2_2_ != 0) {
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar15 = *(long *)puVar2;
    }
    piVar16 = *(int **)(lVar15 + 0xb8);
    if (uVar1 << 0x10 != *piVar16) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar16 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar16[1]) goto LAB_08547864;
    }
    plVar5 = local_68;
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar15 = *local_68;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_08547850;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_040b1e00(local_68,*(long *)puVar4,0);
LAB_08547850:
    (*(code *)*puVar12)(plVar5,local_a0,1,puVar12[1]);
  }
LAB_08547864:
  FUN_08546918(param_1,uVar8,uVar9,&local_70,0,param_2,1);
  if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar8 = *(undefined8 *)(local_70 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_0932c870 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar11 = FUN_085057d4(uVar8,0);
  plVar5 = local_68;
  lVar15 = local_70;
  if (lVar11 == 0) {
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar11 = *local_68;
    uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar11 + (long)(*piVar16 + 9) * 0x10 + 0x138);
          goto LAB_08547938;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_040b1e00(local_68,*(long *)puVar4,9);
LAB_08547938:
    (*(code *)*puVar12)(plVar5,lVar15 + 0x2c,puVar12[1]);
  }
  else {
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(local_70 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_084f23a4(*(long *)(local_70 + 0x38),local_68,0);
  }
  plVar5 = local_68;
  if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar15 = *local_68;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
        puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
        goto LAB_085479a0;
      }
      uVar18 = uVar18 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_040b1e00(local_68,*(long *)puVar4,0xb);
LAB_085479a0:
  (*(code *)*puVar12)(plVar5,0,puVar12[1]);
  plVar5 = local_68;
  if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar15 = *local_68;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
        puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0xc) * 0x10 + 0x138);
        goto LAB_08547a08;
      }
      uVar18 = uVar18 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_040b1e00(local_68,*(long *)puVar4,0xc);
LAB_08547a08:
  (*(code *)*puVar12)(plVar5,1,puVar12[1]);
  if (*(long *)(lVar7 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar18 = FUN_083e3844(*(long *)(lVar7 + 0x1a0),0);
  plVar5 = local_68;
  if ((uVar18 & 1) != 0) {
    if (*(long *)(lVar7 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar18 = FUN_083e7714(*(long *)(lVar7 + 0x1a0),0);
    if ((uVar18 & 1) == 0) {
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
    uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar7 + (long)(*piVar16 + 0xd) * 0x10 + 0x138);
          goto LAB_08547ac4;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)puVar4,0xd);
LAB_08547ac4:
    (*(code *)*puVar12)(plVar5,bVar6,puVar12[1]);
  }
  plVar5 = local_68;
  puVar3 = PTR_DAT_0932e288;
  lVar7 = *(long *)PTR_DAT_0932e288;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar7 = *(long *)puVar3;
  }
  puVar12 = *(undefined8 **)(lVar7 + 0xb8);
  lVar15 = puVar12[1];
  if (lVar15 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar8 = *puVar12;
    lVar15 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e268);
    FUN_06ac88dc(lVar15,uVar8,*(undefined8 *)PTR_DAT_0932e280,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar14 = lVar15;
    thunk_FUN_040ec700(plVar14,lVar15);
  }
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    lVar11 = *(long *)PTR_DAT_0932e270;
    uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)(lVar11 + 0x20)) {
          lVar7 = lVar7 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
          goto LAB_08547bb8;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    lVar7 = FUN_040b1e00(plVar5);
LAB_08547bb8:
    lVar7 = thunk_FUN_04096bb4(*(undefined8 *)(lVar7 + 8),lVar11);
    (**(code **)(lVar7 + 8))(plVar5,lVar15,lVar7);
    plVar5 = local_68;
    if (local_68 != (long *)0x0) {
      lVar7 = *local_68;
      uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar18 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092860c0) {
            puVar12 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_08547c38;
          }
          uVar18 = uVar18 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_040b1e00(local_68,*(long *)PTR_DAT_092860c0,0);
LAB_08547c38:
      (*(code *)*puVar12)(plVar5,puVar12[1]);
    }
    return;
  }
LAB_08547c78:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


