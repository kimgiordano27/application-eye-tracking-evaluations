/*
FUNCTION_NAME: MetaXRAcousticMaterialProperties$$MetaDefault
ENTRY_POINT: 076b02f8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076b0f94) */
/* WARNING: Removing unreachable block (ram,0x076b0668) */
/* WARNING: Removing unreachable block (ram,0x076b0ffc) */
/* WARNING: Removing unreachable block (ram,0x076b099c) */
/* WARNING: Removing unreachable block (ram,0x076b2068) */
/* WARNING: Removing unreachable block (ram,0x076b0fc4) */
/* WARNING: Removing unreachable block (ram,0x076b0ff0) */
/* WARNING: Removing unreachable block (ram,0x076b0c7c) */
/* WARNING: Removing unreachable block (ram,0x076b1e1c) */

void MetaXRAcousticMaterialProperties__MetaDefault
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long in_x9;
  ulong uVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  int iVar24;
  long in_x11;
  int unaff_w19;
  int iVar25;
  uint uVar26;
  long unaff_x22;
  long *plVar27;
  long lVar28;
  undefined8 *unaff_x25;
  undefined1 auVar29 [16];
  long in_stack_00000030;
  uint uStack0000000000000038;
  undefined4 *in_stack_00000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  char in_stack_000000c8;
  char in_stack_000000e0;
  long in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  char cStack00000000000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b0;
  byte bStack00000000000001c8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  auVar29._8_8_ = param_4;
  auVar29._0_8_ = param_1;
code_r0x076b02f8:
  *(int *)(unaff_x22 + 0x18) = (int)in_x11 + 1;
  *(undefined1 (*) [16])(in_x9 + in_x11 * 0x10 + 0x20) = auVar29;
  do {
    plVar27 = *(long **)(in_stack_00000030 + 0x20);
    if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar18 = *plVar27;
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar20 != 0) {
      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2ce28) {
          puVar12 = (undefined8 *)(lVar18 + (long)(*piVar23 + 2) * 0x10 + 0x138);
          goto LAB_076b0388;
        }
        uVar20 = uVar20 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar27,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b0388:
    lVar18 = (*(code *)*puVar12)(plVar27,puVar12[1]);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000198 = FUN_07ab3bc0(lVar18,0);
    uVar20 = FUN_0795ad28(&stack0x00000198,0);
    if ((uVar20 & 1) == 0) {
      *in_stack_00000040 = 0;
      *(undefined8 *)(in_stack_00000040 + 0x1e) = in_stack_00000198;
      thunk_FUN_044bb4b4(in_stack_00000040 + 0x1e,0);
      if (*(int *)(*(long *)PTR_DAT_09f2cdd8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_04639174(in_stack_00000040 + 2,&stack0x00000198,in_stack_00000040,
                   *(undefined8 *)PTR_DAT_09f2d528);
      return;
    }
    FUN_0795adf4(&stack0x00000198,0);
    uVar20 = FUN_0525e218(in_stack_00000040 + 0x14,*(undefined8 *)PTR_DAT_09f2d610);
    puVar3 = PTR_DAT_09f2ac68;
    if ((uVar20 & 1) == 0) {
      iVar25 = 0x52;
      goto LAB_076b0518;
    }
    lVar18 = *(long *)(in_stack_00000040 + 0x18);
    unaff_x25[0xb] = *(undefined8 *)(in_stack_00000040 + 0x1a);
    unaff_x25[10] = lVar18;
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar21 = *(long *)(lVar18 + 0x10);
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar25 = *(int *)(lVar21 + 0x18);
    iVar9 = *(int *)(lVar21 + 0x14);
    if (*(int *)(lVar21 + 0x1c) < 0) {
      lVar22 = 0;
    }
    else {
      iVar24 = 1;
      if (-1 < *(int *)(lVar21 + 0x20)) {
        iVar24 = 2;
      }
      lVar22 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,
                            (((((iVar24 - ((int)~*(uint *)(lVar21 + 0x24) >> 0x1f)) -
                               ((int)~*(uint *)(lVar21 + 0x28) >> 0x1f)) -
                              ((int)~*(uint *)(lVar21 + 0x2c) >> 0x1f)) -
                             ((int)~*(uint *)(lVar21 + 0x30) >> 0x1f)) -
                            ((int)~*(uint *)(lVar21 + 0x34) >> 0x1f)) -
                            ((int)~*(uint *)(lVar21 + 0x38) >> 0x1f));
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar26 = *(uint *)(lVar22 + 0x18);
      if (uVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined4 *)(lVar22 + 0x20) = *(undefined4 *)(lVar21 + 0x1c);
      if (-1 < *(int *)(lVar21 + 0x20)) {
        if (uVar26 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar22 + 0x24) = *(int *)(lVar21 + 0x20);
      }
      if (-1 < *(int *)(lVar21 + 0x24)) {
        if (uVar26 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar22 + 0x28) = *(int *)(lVar21 + 0x24);
      }
      if (-1 < *(int *)(lVar21 + 0x28)) {
        if (uVar26 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar22 + 0x2c) = *(int *)(lVar21 + 0x28);
      }
      if (-1 < *(int *)(lVar21 + 0x2c)) {
        if (uVar26 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar22 + 0x30) = *(int *)(lVar21 + 0x2c);
      }
      if (-1 < *(int *)(lVar21 + 0x30)) {
        if (uVar26 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar22 + 0x34) = *(int *)(lVar21 + 0x30);
      }
      if (-1 < *(int *)(lVar21 + 0x34)) {
        if (uVar26 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar22 + 0x38) = *(int *)(lVar21 + 0x34);
      }
      if (-1 < *(int *)(lVar21 + 0x38)) {
        if (uVar26 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar22 + 0x3c) = *(int *)(lVar21 + 0x38);
      }
      if (-1 < *(int *)(lVar21 + 0x3c)) {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar27 = *(long **)(in_stack_00000030 + 0x130);
        if (plVar27 != (long *)0x0) {
          lVar28 = *(long *)PTR_DAT_09f24cf0;
          lVar19 = *(long *)(lVar28 + 0x38);
          if (lVar19 == 0) {
            FUN_04482014(lVar28);
            lVar19 = *(long *)(lVar28 + 0x38);
          }
          lVar19 = *(long *)(lVar19 + 0x10);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = FUN_04481fb8();
          }
          if (*(int *)(lVar19 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar19 = *(long *)(*(long *)(lVar28 + 0x38) + 0x10);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = FUN_04481fb8();
          }
          if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar17 = *plVar27;
          lVar28 = *(long *)puVar3;
          uVar16 = **(undefined8 **)(lVar19 + 0xb8);
          uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar20 != 0) {
            piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == lVar28) {
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_076b012c;
              }
              uVar20 = uVar20 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar20 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar27,lVar28,1);
LAB_076b012c:
          (*(code *)*puVar12)(plVar27,0x33,uVar16,puVar12[1]);
        }
      }
    }
    if (_bStack00000000000001c8 == 1) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar16 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar27 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d740);
      FUN_06d85718(plVar27,uVar16,*(undefined8 *)PTR_DAT_09f2d738);
    }
    else if (_bStack00000000000001c8 == 3) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar16 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar27 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d750);
      FUN_06d8679c(plVar27,uVar16,*(undefined8 *)PTR_DAT_09f2d730);
    }
    else {
      if (_bStack00000000000001c8 != 7) {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar27 = *(long **)(in_stack_00000030 + 0x130);
        unaff_x25 = (undefined8 *)&stack0x00000170;
        if (plVar27 == (long *)0x0) goto LAB_076b0510;
        lVar18 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,1);
        uVar16 = FUN_058fe430(&stack0x000001c0,*(undefined8 *)PTR_DAT_09f2d698);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(lVar18 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar18 + 0x20) = uVar16;
        thunk_FUN_044bb4b4();
        lVar22 = *plVar27;
        lVar21 = *(long *)puVar3;
        uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar20 == 0) goto LAB_076b04e0;
        piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        goto LAB_076b04c8;
      }
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar16 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar27 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d748);
      FUN_06d87820(plVar27,uVar16,*(undefined8 *)PTR_DAT_09f2d728);
    }
    if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    bVar2 = 0;
    if (iVar9 < 0) {
      bVar2 = bStack00000000000001c8 >> 1 & 1;
    }
    bVar1 = 0;
    if (iVar25 < 0) {
      bVar1 = bStack00000000000001c8 >> 2 & 1;
    }
    *(byte *)((long)plVar27 + 0x11) = bVar1;
    *(byte *)(plVar27 + 2) = bVar2;
    if (*(long *)(in_stack_00000030 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    unaff_x25 = (undefined8 *)&stack0x00000170;
    FUN_07442978(*(long *)(in_stack_00000030 + 0x90),lVar18,plVar27,*(undefined8 *)PTR_DAT_09f2d5c0)
    ;
    (**(code **)(*plVar27 + 0x178))
              (&stack0x00000070,plVar27,in_stack_00000030,*(undefined4 *)(lVar21 + 0x10),
               *(undefined4 *)(lVar21 + 0x14),*(undefined4 *)(lVar21 + 0x18),lVar22,
               *(undefined4 *)(lVar21 + 0x40),*(undefined4 *)(lVar21 + 0x48));
    in_stack_000001a8 = in_stack_00000078;
    _cStack00000000000001a0 = in_stack_00000070;
    uVar16 = _cStack00000000000001a0;
    cStack00000000000001a0 = (char)in_stack_00000070;
    in_stack_000001b0 = in_stack_00000080;
    _cStack00000000000001a0 = uVar16;
    if (cStack00000000000001a0 == '\0') {
      iVar25 = 0x52;
      *(undefined1 *)(in_stack_00000040 + 0x12) = 0;
      goto LAB_076b0518;
    }
    unaff_x22 = *(long *)(in_stack_00000040 + 0x10);
    auVar29 = FUN_0613d160(&stack0x000001a0,*(undefined8 *)PTR_DAT_09f2aca0);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_x9 = *(long *)(unaff_x22 + 0x10);
    lVar18 = *(long *)PTR_DAT_09f2d6c0;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_x11 = (long)(int)*(uint *)(unaff_x22 + 0x18);
    if (*(uint *)(unaff_x22 + 0x18) < *(uint *)(in_x9 + 0x18)) goto code_r0x076b02f8;
    FUN_05b19770(unaff_x22,auVar29._0_8_,auVar29._8_8_,
                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
  } while( true );
LAB_076b091c:
  if ((unaff_w19 < 0) && (plVar13 != (long *)0x0)) {
    lVar18 = *plVar13;
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar20 != 0) {
      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_076b0984;
        }
        uVar20 = uVar20 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0984:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  plVar13 = (long *)(**(code **)(*plVar27 + 0x178))(plVar27,*(undefined8 *)(*plVar27 + 0x180));
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar18 = *plVar13;
  uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar20 != 0) {
    piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d648) {
        puVar12 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
        goto LAB_076b0a14;
      }
      uVar20 = uVar20 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar20 != 0);
  }
  puVar12 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2d648,0);
LAB_076b0a14:
  plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
switchD_076b0b98_default:
  lVar21 = *plVar13;
  lVar18 = *(long *)puVar3;
  uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar20 != 0) {
    piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == lVar18) {
        puVar12 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
        goto LAB_076b0a74;
      }
      uVar20 = uVar20 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar20 != 0);
  }
  puVar12 = (undefined8 *)FUN_044822ac(plVar13,lVar18,0);
LAB_076b0a74:
  uVar20 = (*(code *)*puVar12)(plVar13,puVar12[1]);
  if ((uVar20 & 1) != 0) {
    lVar18 = *plVar13;
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar20 != 0) {
      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_076b0ad0;
        }
        uVar20 = uVar20 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar13,*(long *)puVar5,0);
LAB_076b0ad0:
    plVar14 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
    plVar15 = (long *)(**(code **)(*plVar27 + 0x188))(plVar27,*(undefined8 *)(*plVar27 + 400));
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar21 = *plVar15;
    lVar18 = plVar14[2];
    uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar20 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)puVar6) {
          puVar12 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
          goto MetaXRAcousticNativeInterface___ctor;
        }
        uVar20 = uVar20 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar15,*(long *)puVar6,0);
MetaXRAcousticNativeInterface___ctor:
    lVar18 = (*(code *)*puVar12)(plVar15,(int)lVar18,puVar12[1]);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar11 = *(undefined4 *)(lVar18 + 0x24);
    lVar18 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar10 = FUN_076bd41c(lVar18,0);
    switch(uVar10) {
    case 2:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,uVar11,0x400);
      break;
    case 3:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,uVar11,0x800);
      break;
    case 4:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,uVar11,0x1000);
      break;
    case 5:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,uVar11,0x2000);
    }
    goto switchD_076b0b98_default;
  }
  if ((unaff_w19 < 0) && (plVar13 != (long *)0x0)) {
    lVar18 = *plVar13;
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar20 != 0) {
      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_076b0c64;
        }
        uVar20 = uVar20 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0c64:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  plVar27 = *(long **)(in_stack_00000040 + 8);
  iVar25 = iVar25 + 1;
  if (plVar27 == (long *)0x0) goto LAB_076b0f7c;
  goto LAB_076b06bc;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar23 = piVar23 + 4;
    if (uVar20 == 0) break;
LAB_076b04c8:
    if (*(long *)(piVar23 + -2) == lVar21) {
      puVar12 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_076b04fc;
    }
  }
LAB_076b04e0:
  puVar12 = (undefined8 *)FUN_044822ac(plVar27,lVar21,0);
LAB_076b04fc:
  (*(code *)*puVar12)(plVar27,9,lVar18,puVar12[1]);
LAB_076b0510:
  iVar25 = 0x48;
LAB_076b0518:
  if (unaff_w19 < 0) {
    FUN_0525e33c(in_stack_00000040 + 0x14,*(undefined8 *)PTR_DAT_09f2d5f8);
  }
  if (iVar25 == 0x52) {
LAB_076b0550:
    *(undefined8 *)(in_stack_00000040 + 0x1c) = 0;
    *(undefined8 *)(in_stack_00000040 + 0x16) = 0;
    *(undefined8 *)(in_stack_00000040 + 0x14) = 0;
    *(undefined8 *)(in_stack_00000040 + 0x1a) = 0;
    *(undefined8 *)(in_stack_00000040 + 0x18) = 0;
    if (*(char *)(in_stack_00000040 + 0x12) != '\0') {
      if (*(long *)(in_stack_00000040 + 0xe) != 0) {
        FUN_07442dbc(&stack0x00000070,*(long *)(in_stack_00000040 + 0xe),
                     *(undefined8 *)PTR_DAT_09f2d550);
        puVar3 = PTR_DAT_09f2d608;
        unaff_x25[1] = in_stack_00000078;
        *unaff_x25 = in_stack_00000070;
        unaff_x25[3] = in_stack_00000088;
        unaff_x25[2] = in_stack_00000080;
        in_stack_00000190 = in_stack_00000090;
        while (uVar20 = FUN_052607f8(&stack0x00000170,*(undefined8 *)puVar3), (uVar20 & 1) != 0) {
          if (in_stack_00000188 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          auVar29 = FUN_076c0674(in_stack_00000188,0);
          lVar18 = *(long *)(in_stack_00000040 + 0x10);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar21 = *(long *)(lVar18 + 0x10);
          lVar22 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar26 = *(uint *)(lVar18 + 0x18);
          if (uVar26 < *(uint *)(lVar21 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar26 + 1;
            *(undefined1 (*) [16])(lVar21 + (long)(int)uVar26 * 0x10 + 0x20) = auVar29;
          }
          else {
            FUN_05b19770(lVar18,auVar29._0_8_,auVar29._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (unaff_w19 < 0) {
          FUN_05260918(&stack0x00000170,*(undefined8 *)PTR_DAT_09f2d5e8);
        }
      }
      if (*(long *)(in_stack_00000040 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar20 = FUN_076ca814(*(long *)(in_stack_00000040 + 8),0);
      puVar6 = PTR_DAT_09f2d688;
      puVar5 = PTR_DAT_09f2d660;
      puVar4 = PTR_DAT_09f2d658;
      puVar3 = PTR_DAT_09f1f018;
      if ((uVar20 & 1) != 0) {
        plVar27 = *(long **)(in_stack_00000040 + 8);
        if (plVar27 == (long *)0x0) {
LAB_076b0f7c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        iVar25 = 0;
LAB_076b06bc:
        plVar27 = (long *)(**(code **)(*plVar27 + 0x188))(plVar27,*(undefined8 *)(*plVar27 + 400));
        if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar18 = *plVar27;
        uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar20 != 0) {
          piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d678) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_076b0724;
            }
            uVar20 = uVar20 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar20 != 0);
        }
        puVar12 = (undefined8 *)FUN_044822ac(plVar27,*(long *)PTR_DAT_09f2d678,0);
LAB_076b0724:
        iVar9 = (*(code *)*puVar12)(plVar27,puVar12[1]);
        if (iVar25 < iVar9) {
          plVar27 = *(long **)(in_stack_00000040 + 8);
          if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar27 = (long *)(**(code **)(*plVar27 + 0x188))(plVar27,*(undefined8 *)(*plVar27 + 400))
          ;
          if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar18 = *plVar27;
          uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar20 != 0) {
            piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d680) {
                puVar12 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_076b07b0;
              }
              uVar20 = uVar20 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar20 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar27,*(long *)PTR_DAT_09f2d680,0);
LAB_076b07b0:
          plVar27 = (long *)(*(code *)*puVar12)(plVar27,iVar25,puVar12[1]);
          if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar13 = (long *)(**(code **)(*plVar27 + 0x188))(plVar27,*(undefined8 *)(*plVar27 + 400))
          ;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar18 = *plVar13;
          uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar20 != 0) {
            piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d638) {
                puVar12 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_076b0838;
              }
              uVar20 = uVar20 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar20 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2d638,0);
LAB_076b0838:
          plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          do {
            lVar21 = *plVar13;
            lVar18 = *(long *)puVar3;
            uVar20 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar20 != 0) {
              piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == lVar18) {
                  puVar12 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_076b0898;
                }
                uVar20 = uVar20 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar20 != 0);
            }
            puVar12 = (undefined8 *)FUN_044822ac(plVar13,lVar18,0);
LAB_076b0898:
            uVar20 = (*(code *)*puVar12)(plVar13,puVar12[1]);
            if ((uVar20 & 1) == 0) goto LAB_076b091c;
            lVar18 = *plVar13;
            uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar20 != 0) {
              piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_076b08f4;
                }
                uVar20 = uVar20 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar20 != 0);
            }
            puVar12 = (undefined8 *)FUN_044822ac(plVar13,*(long *)puVar4,0);
LAB_076b08f4:
            lVar18 = (*(code *)*puVar12)(plVar13,puVar12[1]);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_076a6f40(in_stack_00000030,*(undefined4 *)(lVar18 + 0x10),0x200);
          } while( true );
        }
      }
      plVar27 = *(long **)(in_stack_00000040 + 8);
      if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      plVar27 = (long *)(**(code **)(*plVar27 + 0x178))(plVar27,*(undefined8 *)(*plVar27 + 0x180));
      if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar18 = *plVar27;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar20 != 0) {
        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d010) {
            puVar12 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_076b0e20;
          }
          uVar20 = uVar20 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar20 != 0);
      }
      puVar12 = (undefined8 *)FUN_044822ac(plVar27,*(long *)PTR_DAT_09f2d010,0);
LAB_076b0e20:
      uVar11 = (*(code *)*puVar12)(plVar27,puVar12[1]);
      uVar16 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d4e8,uVar11);
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      *(undefined8 *)(in_stack_00000030 + 0x68) = uVar16;
      thunk_FUN_044bb4b4();
      iVar25 = 0;
      in_stack_00000040[0x20] = 0;
      while( true ) {
        puVar4 = PTR_DAT_09f2d410;
        puVar3 = PTR_DAT_09f2d408;
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(long *)(in_stack_00000030 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(*(long *)(in_stack_00000030 + 0x68) + 0x18) <= iVar25) break;
        plVar27 = *(long **)(in_stack_00000040 + 8);
        if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar27 = (long *)(**(code **)(*plVar27 + 0x178))(plVar27,*(undefined8 *)(*plVar27 + 0x180))
        ;
        if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar18 = *plVar27;
        uVar11 = in_stack_00000040[0x20];
        uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar20 != 0) {
          piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d018) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_076b12bc;
            }
            uVar20 = uVar20 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar20 != 0);
        }
        puVar12 = (undefined8 *)FUN_044822ac(plVar27,*(long *)PTR_DAT_09f2d018,0);
LAB_076b12bc:
        lVar18 = (*(code *)*puVar12)(plVar27,uVar11,puVar12[1]);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (-1 < *(int *)(lVar18 + 0x18)) {
          uVar8 = Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                            (lVar18,0);
          switch(uVar8) {
          case 1:
            lVar18 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar18 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            iVar25 = *(int *)(lVar18 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
            if (iVar25 < 0x200) {
              if ((iVar25 == 2) || (iVar25 == 4)) {
                lVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d240);
                System_Action<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke
                          (lVar18,*(undefined8 *)PTR_DAT_09f2d4f0);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar21 = *(long *)(in_stack_00000030 + 0x70);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar26 = in_stack_00000040[0x20];
                if (*(uint *)(lVar21 + 0x18) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                FUN_076a76c4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                             (long)(int)uVar26,lVar18 + 0x10,&stack0x00000158,lVar18 + 0x18,
                             *(int *)(lVar21 + (long)(int)uVar26 * 4 + 0x20) == 4);
                lVar21 = *(long *)(in_stack_00000040 + 0x10);
                auVar29 = FUN_0613d160(&stack0x00000158,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar22 = *(long *)(lVar21 + 0x10);
                lVar19 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar26 = *(uint *)(lVar21 + 0x18);
                if (uVar26 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar26 + 1;
                  *(undefined1 (*) [16])(lVar22 + (long)(int)uVar26 * 0x10 + 0x20) = auVar29;
                }
                else {
                  FUN_05b19770(lVar21,auVar29._0_8_,auVar29._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                plVar27 = *(long **)(in_stack_00000030 + 0x68);
                if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar26 = in_stack_00000040[0x20];
                lVar21 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*plVar27 + 0x40));
                if (lVar21 == 0) {
                  uVar16 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                  FUN_04447d10(uVar16,0);
                }
                if (*(uint *)(plVar27 + 3) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                plVar27[(long)(int)uVar26 + 4] = lVar18;
                thunk_FUN_044bb4b4(plVar27 + (long)(int)uVar26 + 4,lVar18);
              }
            }
            else if ((iVar25 == 0x200) || (iVar25 == 0x2000)) {
              lVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d518);
              FUN_07399b20(lVar18,*(undefined8 *)PTR_DAT_09f2d500);
              FUN_076a89e0(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],&stack0x000000e0,&stack0x000000c8);
              if (in_stack_000000e0 != '\0') {
                auVar29 = FUN_0612f58c(&stack0x000000e0,*(undefined8 *)PTR_DAT_09f2d328);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                *(undefined1 (*) [16])(lVar18 + 0x10) = auVar29;
              }
              if (in_stack_000000c8 != '\0') {
                lVar21 = *(long *)(in_stack_00000040 + 0x10);
                auVar29 = FUN_0613d160(&stack0x000000c8,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar22 = *(long *)(lVar21 + 0x10);
                lVar19 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar26 = *(uint *)(lVar21 + 0x18);
                if (uVar26 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar26 + 1;
                  *(undefined1 (*) [16])(lVar22 + (long)(int)uVar26 * 0x10 + 0x20) = auVar29;
                }
                else {
                  FUN_05b19770(lVar21,auVar29._0_8_,auVar29._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
              }
              plVar27 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar26 = in_stack_00000040[0x20];
              if ((lVar18 != 0) &&
                 (lVar21 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*plVar27 + 0x40)), lVar21 == 0)
                 ) {
                uVar16 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar16,0);
              }
              if (*(uint *)(plVar27 + 3) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar27[(long)(int)uVar26 + 4] = lVar18;
              thunk_FUN_044bb4b4(plVar27 + (long)(int)uVar26 + 4,lVar18);
            }
            break;
          case 3:
            lVar18 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar18 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            uVar26 = *(uint *)(lVar18 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
            if ((uVar26 >> 10 & 1) == 0) {
              if ((uVar26 >> 0xc & 1) != 0) {
                lVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
                FUN_07399b40(lVar18,*(undefined8 *)PTR_DAT_09f2d4f8);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                             in_stack_00000040[0x20],lVar18 + 0x10,&stack0x000000f8,0);
                lVar21 = *(long *)(in_stack_00000040 + 0x10);
                auVar29 = FUN_0613d160(&stack0x000000f8,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar22 = *(long *)(lVar21 + 0x10);
                lVar19 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar26 = *(uint *)(lVar21 + 0x18);
                if (uVar26 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar26 + 1;
                  *(undefined1 (*) [16])(lVar22 + (long)(int)uVar26 * 0x10 + 0x20) = auVar29;
                }
                else {
                  FUN_05b19770(lVar21,auVar29._0_8_,auVar29._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                plVar27 = *(long **)(in_stack_00000030 + 0x68);
                if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar26 = in_stack_00000040[0x20];
                lVar21 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*plVar27 + 0x40));
                if (lVar21 == 0) {
                  uVar16 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                  FUN_04447d10(uVar16,0);
                }
                if (*(uint *)(plVar27 + 3) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                plVar27[(long)(int)uVar26 + 4] = lVar18;
                thunk_FUN_044bb4b4(plVar27 + (long)(int)uVar26 + 4,lVar18);
              }
            }
            else {
              lVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
              FUN_07399b40(lVar18,*(undefined8 *)PTR_DAT_09f2d4f8);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar18 + 0x10,&stack0x00000128,1);
              lVar21 = *(long *)(in_stack_00000040 + 0x10);
              auVar29 = FUN_0613d160(&stack0x00000128,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar22 = *(long *)(lVar21 + 0x10);
              lVar19 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar26 = *(uint *)(lVar21 + 0x18);
              if (uVar26 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar26 + 1;
                *(undefined1 (*) [16])(lVar22 + (long)(int)uVar26 * 0x10 + 0x20) = auVar29;
              }
              else {
                FUN_05b19770(lVar21,auVar29._0_8_,auVar29._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              plVar27 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar26 = in_stack_00000040[0x20];
              lVar21 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*plVar27 + 0x40));
              if (lVar21 == 0) {
                uVar16 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar16,0);
              }
              if (*(uint *)(plVar27 + 3) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar27[(long)(int)uVar26 + 4] = lVar18;
              thunk_FUN_044bb4b4(plVar27 + (long)(int)uVar26 + 4,lVar18);
            }
            break;
          case 4:
            lVar18 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar18 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            if ((*(uint *)(lVar18 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
            {
              lVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d358);
              FUN_07399b00(lVar18,*(undefined8 *)PTR_DAT_09f2d510);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a850c(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar18 + 0x10,&stack0x00000110);
              lVar21 = *(long *)(in_stack_00000040 + 0x10);
              auVar29 = FUN_0613d160(&stack0x00000110,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar22 = *(long *)(lVar21 + 0x10);
              lVar19 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar26 = *(uint *)(lVar21 + 0x18);
              if (uVar26 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar26 + 1;
                *(undefined1 (*) [16])(lVar22 + (long)(int)uVar26 * 0x10 + 0x20) = auVar29;
              }
              else {
                FUN_05b19770(lVar21,auVar29._0_8_,auVar29._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              plVar27 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar26 = in_stack_00000040[0x20];
              lVar21 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*plVar27 + 0x40));
              if (lVar21 == 0) {
                uVar16 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar16,0);
              }
              if (*(uint *)(plVar27 + 3) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar27[(long)(int)uVar26 + 4] = lVar18;
              thunk_FUN_044bb4b4(plVar27 + (long)(int)uVar26 + 4,lVar18);
            }
            break;
          case 7:
            lVar18 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar18 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            if (*(int *)(lVar18 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) == 0x100) {
              lVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d398);
              FUN_07399ae0(lVar18,*(undefined8 *)PTR_DAT_09f2d508);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a7ce8(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar18 + 0x10,&stack0x00000140);
              lVar21 = *(long *)(in_stack_00000040 + 0x10);
              auVar29 = FUN_0613d160(&stack0x00000140,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar22 = *(long *)(lVar21 + 0x10);
              lVar19 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar26 = *(uint *)(lVar21 + 0x18);
              if (uVar26 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar26 + 1;
                *(undefined1 (*) [16])(lVar22 + (long)(int)uVar26 * 0x10 + 0x20) = auVar29;
              }
              else {
                FUN_05b19770(lVar21,auVar29._0_8_,auVar29._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              plVar27 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar26 = in_stack_00000040[0x20];
              lVar21 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*plVar27 + 0x40));
              if (lVar21 == 0) {
                uVar16 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar16,0);
              }
              if (*(uint *)(plVar27 + 3) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar27[(long)(int)uVar26 + 4] = lVar18;
              thunk_FUN_044bb4b4(plVar27 + (long)(int)uVar26 + 4,lVar18);
            }
          }
          plVar27 = *(long **)(in_stack_00000030 + 0x20);
          if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar18 = *plVar27;
          uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar20 != 0) {
            piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2ce28) {
                puVar12 = (undefined8 *)(lVar18 + (long)(*piVar23 + 2) * 0x10 + 0x138);
                goto LAB_076b1af0;
              }
              uVar20 = uVar20 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar20 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar27,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b1af0:
          lVar18 = (*(code *)*puVar12)(plVar27,puVar12[1]);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          in_stack_00000198 = FUN_07ab3bc0(lVar18,0);
          uVar20 = FUN_0795ad28(&stack0x00000198,0);
          if ((uVar20 & 1) == 0) {
            *in_stack_00000040 = 1;
            *(undefined8 *)(in_stack_00000040 + 0x1e) = in_stack_00000198;
            thunk_FUN_044bb4b4(in_stack_00000040 + 0x1e,0);
            if (*(int *)(*(long *)PTR_DAT_09f2cdd8 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_04639174(in_stack_00000040 + 2,&stack0x00000198,in_stack_00000040,
                         *(undefined8 *)PTR_DAT_09f2d528);
            return;
          }
          FUN_0795adf4(&stack0x00000198,0);
        }
        iVar25 = in_stack_00000040[0x20] + 1;
        in_stack_00000040[0x20] = iVar25;
      }
      if (0 < (int)in_stack_00000040[0xc]) {
        uStack0000000000000038 = 0;
        uVar26 = 0;
        do {
          plVar27 = *(long **)(in_stack_00000040 + 8);
          if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar27 = (long *)(**(code **)(*plVar27 + 0x1f8))
                                      (plVar27,*(undefined8 *)(*plVar27 + 0x200));
          if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar18 = *plVar27;
          uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar20 != 0) {
            piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d160) {
                puVar12 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_076b1bec;
              }
              uVar20 = uVar20 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar20 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar27,*(long *)PTR_DAT_09f2d160,0);
LAB_076b1bec:
          lVar18 = (*(code *)*puVar12)(plVar27,uStack0000000000000038,puVar12[1]);
          lVar21 = *(long *)(in_stack_00000030 + 0x98);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(uint *)(lVar21 + 0x18) <= uStack0000000000000038) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar21 = *(long *)(lVar21 + (long)(int)uStack0000000000000038 * 8 + 0x20);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar21 = FUN_074427bc(lVar21,*(undefined8 *)PTR_DAT_09f2d5a0);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_06b56d04(&stack0x00000070,lVar21,*(undefined8 *)PTR_DAT_09f2d718);
          in_stack_000000b8 = in_stack_00000078;
          in_stack_000000b0 = in_stack_00000070;
          in_stack_000000c0 = in_stack_00000080;
          while (uVar20 = System_Collections_Generic_EqualityComparer<ConstraintSource>__System_Collections_IEqualityComparer_GetHashCode
                                    (&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d600),
                lVar21 = in_stack_000000c0, (uVar20 & 1) != 0) {
            if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(int *)(in_stack_000000c0 + 0x18) < 1) {
              plVar27 = (long *)0x0;
            }
            else {
              iVar25 = 0;
              plVar27 = (long *)0x0;
              do {
                auVar29 = FUN_059f3e50(lVar21,iVar25,*(undefined8 *)puVar3);
                lVar22 = auVar29._8_8_;
                if (plVar27 == (long *)0x0) {
                  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  uVar11 = *(undefined4 *)(lVar21 + 0x18);
                  uVar16 = *(undefined8 *)(lVar18 + 0x10);
                  plVar27 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar4);
                  FUN_076c14ec(plVar27,uStack0000000000000038,uVar26,uVar11,uVar16,0);
                }
                else {
                  lVar19 = *(long *)puVar4;
                  bVar2 = *(byte *)(lVar19 + 0x130);
                  if (*(byte *)(*plVar27 + 0x130) < bVar2) goto LAB_076b1e40;
                  if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar2 * 8 + -8) != lVar19) {
                    plVar27 = (long *)0x0;
                  }
                }
                if (plVar27 == (long *)0x0) {
LAB_076b1e40:
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076c1680(plVar27,iVar25,auVar29._0_8_ & 0xffffffff,0);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                if (*(long *)(lVar22 + 0x28) != 0) {
                  if (*(long *)(in_stack_00000040 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  lVar19 = FUN_0744290c(*(long *)(in_stack_00000040 + 0xe),lVar22,
                                        *(undefined8 *)PTR_DAT_09f2d590);
                  plVar27[5] = lVar19;
                  thunk_FUN_044bb4b4();
                }
                FUN_076c1fc8(plVar27,iVar25,*(undefined4 *)(lVar22 + 0x1c),0);
                iVar25 = iVar25 + 1;
              } while (iVar25 < *(int *)(lVar21 + 0x18));
            }
            plVar13 = *(long **)(in_stack_00000030 + 0x88);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if ((plVar27 != (long *)0x0) &&
               (lVar21 = thunk_FUN_04485110(plVar27,*(undefined8 *)(*plVar13 + 0x40)), lVar21 == 0))
            {
              uVar16 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar16,0);
            }
            if (*(uint *)(plVar13 + 3) <= uVar26) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar13[(long)(int)uVar26 + 4] = (long)plVar27;
            thunk_FUN_044bb4b4(plVar13 + (long)(int)uVar26 + 4,plVar27);
            uVar26 = uVar26 + 1;
          }
          if (unaff_w19 < 0) {
            FUN_05260da0(&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d5f0);
          }
          uStack0000000000000038 = uStack0000000000000038 + 1;
        } while ((int)uStack0000000000000038 < (int)in_stack_00000040[0xc]);
      }
      if (*(long *)(in_stack_00000040 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar16 = FUN_05b1b2ac(*(long *)(in_stack_00000040 + 0x10),*(undefined8 *)PTR_DAT_09f2d6c8);
      FUN_05f9dd28(&stack0x000001e0,uVar16,4,*(undefined8 *)PTR_DAT_09f2d700);
      auVar29 = FUN_094b28ac(in_stack_000001e0,in_stack_000001e8,0);
      *(undefined1 (*) [16])(in_stack_00000030 + 0x78) = auVar29;
      FUN_05f9df64(&stack0x000001e0,*(undefined8 *)PTR_DAT_09f2ac78);
      FUN_094b2800(0);
      bVar7 = *(char *)(in_stack_00000040 + 0x12) != '\0';
      goto MetaXRAcousticNativeInterface_UnityNativeInterface__ovrAudio_DestroyAudioSceneIR;
    }
  }
  else if (iVar25 != 0x48) {
    if (iVar25 != 0) {
      return;
    }
    goto LAB_076b0550;
  }
  bVar7 = false;
MetaXRAcousticNativeInterface_UnityNativeInterface__ovrAudio_DestroyAudioSceneIR:
  *in_stack_00000040 = 0xfffffffe;
  *(undefined8 *)(in_stack_00000040 + 0xe) = 0;
  thunk_FUN_044bb4b4(in_stack_00000040 + 0xe,0);
  *(undefined8 *)(in_stack_00000040 + 0x10) = 0;
  thunk_FUN_044bb4b4(in_stack_00000040 + 0x10,0);
  if (*(int *)(*(long *)PTR_DAT_09f2cdd8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_066e2370(in_stack_00000040 + 2,bVar7,*(undefined8 *)PTR_DAT_09f2ce18);
  return;
}


