/*
FUNCTION_NAME: MetaXRAcousticMaterialProperties$$WoodThick
ENTRY_POINT: 076afa70
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


/* WARNING: Removing unreachable block (ram,0x076b0fc4) */
/* WARNING: Removing unreachable block (ram,0x076b1e1c) */
/* WARNING: Removing unreachable block (ram,0x076b099c) */
/* WARNING: Removing unreachable block (ram,0x076b0c7c) */
/* WARNING: Removing unreachable block (ram,0x076b2068) */
/* WARNING: Removing unreachable block (ram,0x076b0f94) */
/* WARNING: Removing unreachable block (ram,0x076b0ff0) */
/* WARNING: Removing unreachable block (ram,0x076b0668) */
/* WARNING: Removing unreachable block (ram,0x076b0ffc) */

void MetaXRAcousticMaterialProperties__WoodThick(void)

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
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  undefined8 *unaff_x25;
  undefined1 auVar29 [16];
  long in_stack_00000028;
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
  
  thunk_FUN_044bb4b4();
  while (uVar12 = FUN_0525e218(in_stack_00000040 + 0x14,*(undefined8 *)PTR_DAT_09f2d610),
        puVar3 = PTR_DAT_09f2ac68, (uVar12 & 1) != 0) {
    lVar13 = *(long *)(in_stack_00000040 + 0x18);
    unaff_x25[0xb] = *(undefined8 *)(in_stack_00000040 + 0x1a);
    unaff_x25[10] = lVar13;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar22 = *(long *)(lVar13 + 0x10);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar26 = *(int *)(lVar22 + 0x18);
    iVar9 = *(int *)(lVar22 + 0x14);
    if (*(int *)(lVar22 + 0x1c) < 0) {
      lVar23 = 0;
    }
    else {
      iVar25 = 1;
      if (-1 < *(int *)(lVar22 + 0x20)) {
        iVar25 = 2;
      }
      lVar23 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,
                            (((((iVar25 - ((int)~*(uint *)(lVar22 + 0x24) >> 0x1f)) -
                               ((int)~*(uint *)(lVar22 + 0x28) >> 0x1f)) -
                              ((int)~*(uint *)(lVar22 + 0x2c) >> 0x1f)) -
                             ((int)~*(uint *)(lVar22 + 0x30) >> 0x1f)) -
                            ((int)~*(uint *)(lVar22 + 0x34) >> 0x1f)) -
                            ((int)~*(uint *)(lVar22 + 0x38) >> 0x1f));
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar27 = *(uint *)(lVar23 + 0x18);
      if (uVar27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined4 *)(lVar23 + 0x20) = *(undefined4 *)(lVar22 + 0x1c);
      if (-1 < *(int *)(lVar22 + 0x20)) {
        if (uVar27 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar23 + 0x24) = *(int *)(lVar22 + 0x20);
      }
      if (-1 < *(int *)(lVar22 + 0x24)) {
        if (uVar27 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar23 + 0x28) = *(int *)(lVar22 + 0x24);
      }
      if (-1 < *(int *)(lVar22 + 0x28)) {
        if (uVar27 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar23 + 0x2c) = *(int *)(lVar22 + 0x28);
      }
      if (-1 < *(int *)(lVar22 + 0x2c)) {
        if (uVar27 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar23 + 0x30) = *(int *)(lVar22 + 0x2c);
      }
      if (-1 < *(int *)(lVar22 + 0x30)) {
        if (uVar27 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar23 + 0x34) = *(int *)(lVar22 + 0x30);
      }
      if (-1 < *(int *)(lVar22 + 0x34)) {
        if (uVar27 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar23 + 0x38) = *(int *)(lVar22 + 0x34);
      }
      if (-1 < *(int *)(lVar22 + 0x38)) {
        if (uVar27 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar23 + 0x3c) = *(int *)(lVar22 + 0x38);
      }
      if (-1 < *(int *)(lVar22 + 0x3c)) {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar14 = *(long **)(in_stack_00000030 + 0x130);
        if (plVar14 != (long *)0x0) {
          lVar28 = *(long *)PTR_DAT_09f24cf0;
          lVar21 = *(long *)(lVar28 + 0x38);
          if (lVar21 == 0) {
            FUN_04482014(lVar28);
            lVar21 = *(long *)(lVar28 + 0x38);
          }
          lVar21 = *(long *)(lVar21 + 0x10);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = FUN_04481fb8();
          }
          if (*(int *)(lVar21 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar21 = *(long *)(*(long *)(lVar28 + 0x38) + 0x10);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = FUN_04481fb8();
          }
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar20 = *plVar14;
          lVar28 = *(long *)puVar3;
          uVar19 = **(undefined8 **)(lVar21 + 0xb8);
          uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar12 != 0) {
            piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar28) {
                puVar15 = (undefined8 *)(lVar20 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_076b012c;
              }
              uVar12 = uVar12 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar12 != 0);
          }
          puVar15 = (undefined8 *)FUN_044822ac(plVar14,lVar28,1);
LAB_076b012c:
          (*(code *)*puVar15)(plVar14,0x33,uVar19,puVar15[1]);
        }
      }
    }
    if (_bStack00000000000001c8 == 1) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar19 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar14 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d740);
      FUN_06d85718(plVar14,uVar19,*(undefined8 *)PTR_DAT_09f2d738);
    }
    else if (_bStack00000000000001c8 == 3) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar19 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar14 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d750);
      FUN_06d8679c(plVar14,uVar19,*(undefined8 *)PTR_DAT_09f2d730);
    }
    else {
      if (_bStack00000000000001c8 != 7) {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar14 = *(long **)(in_stack_00000030 + 0x130);
        unaff_x25 = (undefined8 *)&stack0x00000170;
        if (plVar14 == (long *)0x0) goto LAB_076b0510;
        lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,1);
        uVar19 = FUN_058fe430(&stack0x000001c0,*(undefined8 *)PTR_DAT_09f2d698);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar13 + 0x20) = uVar19;
        thunk_FUN_044bb4b4();
        lVar23 = *plVar14;
        lVar22 = *(long *)puVar3;
        uVar12 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar12 == 0) goto LAB_076b04e0;
        piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        goto LAB_076b04c8;
      }
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar19 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar14 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d748);
      FUN_06d87820(plVar14,uVar19,*(undefined8 *)PTR_DAT_09f2d728);
    }
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    bVar2 = 0;
    if (iVar9 < 0) {
      bVar2 = bStack00000000000001c8 >> 1 & 1;
    }
    bVar1 = 0;
    if (iVar26 < 0) {
      bVar1 = bStack00000000000001c8 >> 2 & 1;
    }
    *(byte *)((long)plVar14 + 0x11) = bVar1;
    *(byte *)(plVar14 + 2) = bVar2;
    if (*(long *)(in_stack_00000030 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    unaff_x25 = (undefined8 *)&stack0x00000170;
    FUN_07442978(*(long *)(in_stack_00000030 + 0x90),lVar13,plVar14,*(undefined8 *)PTR_DAT_09f2d5c0)
    ;
    (**(code **)(*plVar14 + 0x178))
              (&stack0x00000070,plVar14,in_stack_00000030,*(undefined4 *)(lVar22 + 0x10),
               *(undefined4 *)(lVar22 + 0x14),*(undefined4 *)(lVar22 + 0x18),lVar23,
               *(undefined4 *)(lVar22 + 0x40),*(undefined4 *)(lVar22 + 0x48));
    in_stack_000001a8 = in_stack_00000078;
    _cStack00000000000001a0 = in_stack_00000070;
    uVar19 = _cStack00000000000001a0;
    cStack00000000000001a0 = (char)in_stack_00000070;
    in_stack_000001b0 = in_stack_00000080;
    _cStack00000000000001a0 = uVar19;
    if (cStack00000000000001a0 == '\0') {
      iVar26 = 0x52;
      *(undefined1 *)(in_stack_00000040 + 0x12) = 0;
      goto LAB_076b0518;
    }
    lVar13 = *(long *)(in_stack_00000040 + 0x10);
    auVar29 = FUN_0613d160(&stack0x000001a0,*(undefined8 *)PTR_DAT_09f2aca0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar22 = *(long *)(lVar13 + 0x10);
    lVar23 = *(long *)PTR_DAT_09f2d6c0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar27 = *(uint *)(lVar13 + 0x18);
    if (uVar27 < *(uint *)(lVar22 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar27 + 1;
      *(undefined1 (*) [16])(lVar22 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
    }
    else {
      FUN_05b19770(lVar13,auVar29._0_8_,auVar29._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
    }
    plVar14 = *(long **)(in_stack_00000030 + 0x20);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar13 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f2ce28) {
          puVar15 = (undefined8 *)(lVar13 + (long)(*piVar24 + 2) * 0x10 + 0x138);
          goto LAB_076b0388;
        }
        uVar12 = uVar12 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar12 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b0388:
    lVar13 = (*(code *)*puVar15)(plVar14,puVar15[1]);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000198 = FUN_07ab3bc0(lVar13,0);
    uVar12 = FUN_0795ad28(&stack0x00000198,0);
    if ((uVar12 & 1) == 0) {
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
  }
  iVar26 = 0x52;
  goto LAB_076b0518;
LAB_076b091c:
  if ((in_stack_00000028 < 0) && (plVar16 != (long *)0x0)) {
    lVar13 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_076b0984;
        }
        uVar12 = uVar12 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar12 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0984:
    (*(code *)*puVar15)(plVar16,puVar15[1]);
  }
  plVar16 = (long *)(**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar13 = *plVar16;
  uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar12 != 0) {
    piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f2d648) {
        puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
        goto LAB_076b0a14;
      }
      uVar12 = uVar12 - 1;
      piVar24 = piVar24 + 4;
    } while (uVar12 != 0);
  }
  puVar15 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d648,0);
LAB_076b0a14:
  plVar16 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
switchD_076b0b98_default:
  lVar22 = *plVar16;
  lVar13 = *(long *)puVar3;
  uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar12 != 0) {
    piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == lVar13) {
        puVar15 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
        goto LAB_076b0a74;
      }
      uVar12 = uVar12 - 1;
      piVar24 = piVar24 + 4;
    } while (uVar12 != 0);
  }
  puVar15 = (undefined8 *)FUN_044822ac(plVar16,lVar13,0);
LAB_076b0a74:
  uVar12 = (*(code *)*puVar15)(plVar16,puVar15[1]);
  if ((uVar12 & 1) != 0) {
    lVar13 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)puVar5) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_076b0ad0;
        }
        uVar12 = uVar12 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar12 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar16,*(long *)puVar5,0);
LAB_076b0ad0:
    plVar17 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
    plVar18 = (long *)(**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar22 = *plVar18;
    lVar13 = plVar17[2];
    uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar12 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)puVar6) {
          puVar15 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto MetaXRAcousticNativeInterface___ctor;
        }
        uVar12 = uVar12 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar12 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar18,*(long *)puVar6,0);
MetaXRAcousticNativeInterface___ctor:
    lVar13 = (*(code *)*puVar15)(plVar18,(int)lVar13,puVar15[1]);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar11 = *(undefined4 *)(lVar13 + 0x24);
    lVar13 = (**(code **)(*plVar17 + 0x178))(plVar17,*(undefined8 *)(*plVar17 + 0x180));
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar10 = FUN_076bd41c(lVar13,0);
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
  if ((in_stack_00000028 < 0) && (plVar16 != (long *)0x0)) {
    lVar13 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_076b0c64;
        }
        uVar12 = uVar12 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar12 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0c64:
    (*(code *)*puVar15)(plVar16,puVar15[1]);
  }
  plVar14 = *(long **)(in_stack_00000040 + 8);
  iVar26 = iVar26 + 1;
  if (plVar14 == (long *)0x0) goto LAB_076b0f7c;
  goto LAB_076b06bc;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar24 = piVar24 + 4;
    if (uVar12 == 0) break;
LAB_076b04c8:
    if (*(long *)(piVar24 + -2) == lVar22) {
      puVar15 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_076b04fc;
    }
  }
LAB_076b04e0:
  puVar15 = (undefined8 *)FUN_044822ac(plVar14,lVar22,0);
LAB_076b04fc:
  (*(code *)*puVar15)(plVar14,9,lVar13,puVar15[1]);
LAB_076b0510:
  iVar26 = 0x48;
LAB_076b0518:
  if (in_stack_00000028 < 0) {
    FUN_0525e33c(in_stack_00000040 + 0x14,*(undefined8 *)PTR_DAT_09f2d5f8);
  }
  if (iVar26 == 0x52) {
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
        while (uVar12 = FUN_052607f8(&stack0x00000170,*(undefined8 *)puVar3), (uVar12 & 1) != 0) {
          if (in_stack_00000188 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          auVar29 = FUN_076c0674(in_stack_00000188,0);
          lVar13 = *(long *)(in_stack_00000040 + 0x10);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar22 = *(long *)(lVar13 + 0x10);
          lVar23 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar27 = *(uint *)(lVar13 + 0x18);
          if (uVar27 < *(uint *)(lVar22 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar27 + 1;
            *(undefined1 (*) [16])(lVar22 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
          }
          else {
            FUN_05b19770(lVar13,auVar29._0_8_,auVar29._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (in_stack_00000028 < 0) {
          FUN_05260918(&stack0x00000170,*(undefined8 *)PTR_DAT_09f2d5e8);
        }
      }
      if (*(long *)(in_stack_00000040 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar12 = FUN_076ca814(*(long *)(in_stack_00000040 + 8),0);
      puVar6 = PTR_DAT_09f2d688;
      puVar5 = PTR_DAT_09f2d660;
      puVar4 = PTR_DAT_09f2d658;
      puVar3 = PTR_DAT_09f1f018;
      if ((uVar12 & 1) != 0) {
        plVar14 = *(long **)(in_stack_00000040 + 8);
        if (plVar14 == (long *)0x0) {
LAB_076b0f7c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        iVar26 = 0;
LAB_076b06bc:
        plVar14 = (long *)(**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar13 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar12 != 0) {
          piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f2d678) {
              puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_076b0724;
            }
            uVar12 = uVar12 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar12 != 0);
        }
        puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f2d678,0);
LAB_076b0724:
        iVar9 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        if (iVar26 < iVar9) {
          plVar14 = *(long **)(in_stack_00000040 + 8);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar14 = (long *)(**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400))
          ;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar13 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar12 != 0) {
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f2d680) {
                puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_076b07b0;
              }
              uVar12 = uVar12 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar12 != 0);
          }
          puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f2d680,0);
LAB_076b07b0:
          plVar14 = (long *)(*(code *)*puVar15)(plVar14,iVar26,puVar15[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar16 = (long *)(**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400))
          ;
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar13 = *plVar16;
          uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar12 != 0) {
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f2d638) {
                puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_076b0838;
              }
              uVar12 = uVar12 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar12 != 0);
          }
          puVar15 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d638,0);
LAB_076b0838:
          plVar16 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          do {
            lVar22 = *plVar16;
            lVar13 = *(long *)puVar3;
            uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar12 != 0) {
              piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == lVar13) {
                  puVar15 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_076b0898;
                }
                uVar12 = uVar12 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar12 != 0);
            }
            puVar15 = (undefined8 *)FUN_044822ac(plVar16,lVar13,0);
LAB_076b0898:
            uVar12 = (*(code *)*puVar15)(plVar16,puVar15[1]);
            if ((uVar12 & 1) == 0) goto LAB_076b091c;
            lVar13 = *plVar16;
            uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar12 != 0) {
              piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)puVar4) {
                  puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_076b08f4;
                }
                uVar12 = uVar12 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar12 != 0);
            }
            puVar15 = (undefined8 *)FUN_044822ac(plVar16,*(long *)puVar4,0);
LAB_076b08f4:
            lVar13 = (*(code *)*puVar15)(plVar16,puVar15[1]);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_076a6f40(in_stack_00000030,*(undefined4 *)(lVar13 + 0x10),0x200);
          } while( true );
        }
      }
      plVar14 = *(long **)(in_stack_00000040 + 8);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      plVar14 = (long *)(**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar13 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f2d010) {
            puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_076b0e20;
          }
          uVar12 = uVar12 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar12 != 0);
      }
      puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f2d010,0);
LAB_076b0e20:
      uVar11 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      uVar19 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d4e8,uVar11);
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      *(undefined8 *)(in_stack_00000030 + 0x68) = uVar19;
      thunk_FUN_044bb4b4();
      iVar26 = 0;
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
        if (*(int *)(*(long *)(in_stack_00000030 + 0x68) + 0x18) <= iVar26) break;
        plVar14 = *(long **)(in_stack_00000040 + 8);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar14 = (long *)(**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180))
        ;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar13 = *plVar14;
        uVar11 = in_stack_00000040[0x20];
        uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar12 != 0) {
          piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f2d018) {
              puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_076b12bc;
            }
            uVar12 = uVar12 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar12 != 0);
        }
        puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f2d018,0);
LAB_076b12bc:
        lVar13 = (*(code *)*puVar15)(plVar14,uVar11,puVar15[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (-1 < *(int *)(lVar13 + 0x18)) {
          uVar8 = Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                            (lVar13,0);
          switch(uVar8) {
          case 1:
            lVar13 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar13 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            iVar26 = *(int *)(lVar13 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
            if (iVar26 < 0x200) {
              if ((iVar26 == 2) || (iVar26 == 4)) {
                lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d240);
                System_Action<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke
                          (lVar13,*(undefined8 *)PTR_DAT_09f2d4f0);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar22 = *(long *)(in_stack_00000030 + 0x70);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar27 = in_stack_00000040[0x20];
                if (*(uint *)(lVar22 + 0x18) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                FUN_076a76c4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                             (long)(int)uVar27,lVar13 + 0x10,&stack0x00000158,lVar13 + 0x18,
                             *(int *)(lVar22 + (long)(int)uVar27 * 4 + 0x20) == 4);
                lVar22 = *(long *)(in_stack_00000040 + 0x10);
                auVar29 = FUN_0613d160(&stack0x00000158,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar23 = *(long *)(lVar22 + 0x10);
                lVar21 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar27 = *(uint *)(lVar22 + 0x18);
                if (uVar27 < *(uint *)(lVar23 + 0x18)) {
                  *(uint *)(lVar22 + 0x18) = uVar27 + 1;
                  *(undefined1 (*) [16])(lVar23 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
                }
                else {
                  FUN_05b19770(lVar22,auVar29._0_8_,auVar29._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                plVar14 = *(long **)(in_stack_00000030 + 0x68);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar27 = in_stack_00000040[0x20];
                lVar22 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar14 + 0x40));
                if (lVar22 == 0) {
                  uVar19 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                  FUN_04447d10(uVar19,0);
                }
                if (*(uint *)(plVar14 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                plVar14[(long)(int)uVar27 + 4] = lVar13;
                thunk_FUN_044bb4b4(plVar14 + (long)(int)uVar27 + 4,lVar13);
              }
            }
            else if ((iVar26 == 0x200) || (iVar26 == 0x2000)) {
              lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d518);
              FUN_07399b20(lVar13,*(undefined8 *)PTR_DAT_09f2d500);
              FUN_076a89e0(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],&stack0x000000e0,&stack0x000000c8);
              if (in_stack_000000e0 != '\0') {
                auVar29 = FUN_0612f58c(&stack0x000000e0,*(undefined8 *)PTR_DAT_09f2d328);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                *(undefined1 (*) [16])(lVar13 + 0x10) = auVar29;
              }
              if (in_stack_000000c8 != '\0') {
                lVar22 = *(long *)(in_stack_00000040 + 0x10);
                auVar29 = FUN_0613d160(&stack0x000000c8,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar23 = *(long *)(lVar22 + 0x10);
                lVar21 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar27 = *(uint *)(lVar22 + 0x18);
                if (uVar27 < *(uint *)(lVar23 + 0x18)) {
                  *(uint *)(lVar22 + 0x18) = uVar27 + 1;
                  *(undefined1 (*) [16])(lVar23 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
                }
                else {
                  FUN_05b19770(lVar22,auVar29._0_8_,auVar29._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
              }
              plVar14 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar27 = in_stack_00000040[0x20];
              if ((lVar13 != 0) &&
                 (lVar22 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar14 + 0x40)), lVar22 == 0)
                 ) {
                uVar19 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar19,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar14[(long)(int)uVar27 + 4] = lVar13;
              thunk_FUN_044bb4b4(plVar14 + (long)(int)uVar27 + 4,lVar13);
            }
            break;
          case 3:
            lVar13 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar13 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            uVar27 = *(uint *)(lVar13 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
            if ((uVar27 >> 10 & 1) == 0) {
              if ((uVar27 >> 0xc & 1) != 0) {
                lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
                FUN_07399b40(lVar13,*(undefined8 *)PTR_DAT_09f2d4f8);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                             in_stack_00000040[0x20],lVar13 + 0x10,&stack0x000000f8,0);
                lVar22 = *(long *)(in_stack_00000040 + 0x10);
                auVar29 = FUN_0613d160(&stack0x000000f8,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar23 = *(long *)(lVar22 + 0x10);
                lVar21 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar27 = *(uint *)(lVar22 + 0x18);
                if (uVar27 < *(uint *)(lVar23 + 0x18)) {
                  *(uint *)(lVar22 + 0x18) = uVar27 + 1;
                  *(undefined1 (*) [16])(lVar23 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
                }
                else {
                  FUN_05b19770(lVar22,auVar29._0_8_,auVar29._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                plVar14 = *(long **)(in_stack_00000030 + 0x68);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar27 = in_stack_00000040[0x20];
                lVar22 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar14 + 0x40));
                if (lVar22 == 0) {
                  uVar19 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                  FUN_04447d10(uVar19,0);
                }
                if (*(uint *)(plVar14 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                plVar14[(long)(int)uVar27 + 4] = lVar13;
                thunk_FUN_044bb4b4(plVar14 + (long)(int)uVar27 + 4,lVar13);
              }
            }
            else {
              lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
              FUN_07399b40(lVar13,*(undefined8 *)PTR_DAT_09f2d4f8);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar13 + 0x10,&stack0x00000128,1);
              lVar22 = *(long *)(in_stack_00000040 + 0x10);
              auVar29 = FUN_0613d160(&stack0x00000128,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar23 = *(long *)(lVar22 + 0x10);
              lVar21 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar27 = *(uint *)(lVar22 + 0x18);
              if (uVar27 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar22 + 0x18) = uVar27 + 1;
                *(undefined1 (*) [16])(lVar23 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
              }
              else {
                FUN_05b19770(lVar22,auVar29._0_8_,auVar29._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
              plVar14 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar27 = in_stack_00000040[0x20];
              lVar22 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar22 == 0) {
                uVar19 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar19,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar14[(long)(int)uVar27 + 4] = lVar13;
              thunk_FUN_044bb4b4(plVar14 + (long)(int)uVar27 + 4,lVar13);
            }
            break;
          case 4:
            lVar13 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar13 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            if ((*(uint *)(lVar13 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
            {
              lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d358);
              FUN_07399b00(lVar13,*(undefined8 *)PTR_DAT_09f2d510);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a850c(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar13 + 0x10,&stack0x00000110);
              lVar22 = *(long *)(in_stack_00000040 + 0x10);
              auVar29 = FUN_0613d160(&stack0x00000110,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar23 = *(long *)(lVar22 + 0x10);
              lVar21 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar27 = *(uint *)(lVar22 + 0x18);
              if (uVar27 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar22 + 0x18) = uVar27 + 1;
                *(undefined1 (*) [16])(lVar23 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
              }
              else {
                FUN_05b19770(lVar22,auVar29._0_8_,auVar29._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
              plVar14 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar27 = in_stack_00000040[0x20];
              lVar22 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar22 == 0) {
                uVar19 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar19,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar14[(long)(int)uVar27 + 4] = lVar13;
              thunk_FUN_044bb4b4(plVar14 + (long)(int)uVar27 + 4,lVar13);
            }
            break;
          case 7:
            lVar13 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar13 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            if (*(int *)(lVar13 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) == 0x100) {
              lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d398);
              FUN_07399ae0(lVar13,*(undefined8 *)PTR_DAT_09f2d508);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a7ce8(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar13 + 0x10,&stack0x00000140);
              lVar22 = *(long *)(in_stack_00000040 + 0x10);
              auVar29 = FUN_0613d160(&stack0x00000140,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar23 = *(long *)(lVar22 + 0x10);
              lVar21 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar27 = *(uint *)(lVar22 + 0x18);
              if (uVar27 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar22 + 0x18) = uVar27 + 1;
                *(undefined1 (*) [16])(lVar23 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
              }
              else {
                FUN_05b19770(lVar22,auVar29._0_8_,auVar29._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
              plVar14 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar27 = in_stack_00000040[0x20];
              lVar22 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar22 == 0) {
                uVar19 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar19,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar14[(long)(int)uVar27 + 4] = lVar13;
              thunk_FUN_044bb4b4(plVar14 + (long)(int)uVar27 + 4,lVar13);
            }
          }
          plVar14 = *(long **)(in_stack_00000030 + 0x20);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar13 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar12 != 0) {
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f2ce28) {
                puVar15 = (undefined8 *)(lVar13 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                goto LAB_076b1af0;
              }
              uVar12 = uVar12 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar12 != 0);
          }
          puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b1af0:
          lVar13 = (*(code *)*puVar15)(plVar14,puVar15[1]);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          in_stack_00000198 = FUN_07ab3bc0(lVar13,0);
          uVar12 = FUN_0795ad28(&stack0x00000198,0);
          if ((uVar12 & 1) == 0) {
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
        iVar26 = in_stack_00000040[0x20] + 1;
        in_stack_00000040[0x20] = iVar26;
      }
      if (0 < (int)in_stack_00000040[0xc]) {
        uStack0000000000000038 = 0;
        uVar27 = 0;
        do {
          plVar14 = *(long **)(in_stack_00000040 + 8);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar14 = (long *)(**(code **)(*plVar14 + 0x1f8))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x200));
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar13 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar12 != 0) {
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f2d160) {
                puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_076b1bec;
              }
              uVar12 = uVar12 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar12 != 0);
          }
          puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f2d160,0);
LAB_076b1bec:
          lVar13 = (*(code *)*puVar15)(plVar14,uStack0000000000000038,puVar15[1]);
          lVar22 = *(long *)(in_stack_00000030 + 0x98);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(uint *)(lVar22 + 0x18) <= uStack0000000000000038) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar22 = *(long *)(lVar22 + (long)(int)uStack0000000000000038 * 8 + 0x20);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar22 = FUN_074427bc(lVar22,*(undefined8 *)PTR_DAT_09f2d5a0);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_06b56d04(&stack0x00000070,lVar22,*(undefined8 *)PTR_DAT_09f2d718);
          in_stack_000000b8 = in_stack_00000078;
          in_stack_000000b0 = in_stack_00000070;
          in_stack_000000c0 = in_stack_00000080;
          while (uVar12 = System_Collections_Generic_EqualityComparer<ConstraintSource>__System_Collections_IEqualityComparer_GetHashCode
                                    (&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d600),
                lVar22 = in_stack_000000c0, (uVar12 & 1) != 0) {
            if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(int *)(in_stack_000000c0 + 0x18) < 1) {
              plVar14 = (long *)0x0;
            }
            else {
              iVar26 = 0;
              plVar14 = (long *)0x0;
              do {
                auVar29 = FUN_059f3e50(lVar22,iVar26,*(undefined8 *)puVar3);
                lVar23 = auVar29._8_8_;
                if (plVar14 == (long *)0x0) {
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  uVar11 = *(undefined4 *)(lVar22 + 0x18);
                  uVar19 = *(undefined8 *)(lVar13 + 0x10);
                  plVar14 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar4);
                  FUN_076c14ec(plVar14,uStack0000000000000038,uVar27,uVar11,uVar19,0);
                }
                else {
                  lVar21 = *(long *)puVar4;
                  bVar2 = *(byte *)(lVar21 + 0x130);
                  if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_076b1e40;
                  if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != lVar21) {
                    plVar14 = (long *)0x0;
                  }
                }
                if (plVar14 == (long *)0x0) {
LAB_076b1e40:
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076c1680(plVar14,iVar26,auVar29._0_8_ & 0xffffffff,0);
                if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                if (*(long *)(lVar23 + 0x28) != 0) {
                  if (*(long *)(in_stack_00000040 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  lVar21 = FUN_0744290c(*(long *)(in_stack_00000040 + 0xe),lVar23,
                                        *(undefined8 *)PTR_DAT_09f2d590);
                  plVar14[5] = lVar21;
                  thunk_FUN_044bb4b4();
                }
                FUN_076c1fc8(plVar14,iVar26,*(undefined4 *)(lVar23 + 0x1c),0);
                iVar26 = iVar26 + 1;
              } while (iVar26 < *(int *)(lVar22 + 0x18));
            }
            plVar16 = *(long **)(in_stack_00000030 + 0x88);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if ((plVar14 != (long *)0x0) &&
               (lVar22 = thunk_FUN_04485110(plVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar22 == 0))
            {
              uVar19 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar19,0);
            }
            if (*(uint *)(plVar16 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar16[(long)(int)uVar27 + 4] = (long)plVar14;
            thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar27 + 4,plVar14);
            uVar27 = uVar27 + 1;
          }
          if (in_stack_00000028 < 0) {
            FUN_05260da0(&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d5f0);
          }
          uStack0000000000000038 = uStack0000000000000038 + 1;
        } while ((int)uStack0000000000000038 < (int)in_stack_00000040[0xc]);
      }
      if (*(long *)(in_stack_00000040 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar19 = FUN_05b1b2ac(*(long *)(in_stack_00000040 + 0x10),*(undefined8 *)PTR_DAT_09f2d6c8);
      FUN_05f9dd28(&stack0x000001e0,uVar19,4,*(undefined8 *)PTR_DAT_09f2d700);
      auVar29 = FUN_094b28ac(in_stack_000001e0,in_stack_000001e8,0);
      *(undefined1 (*) [16])(in_stack_00000030 + 0x78) = auVar29;
      FUN_05f9df64(&stack0x000001e0,*(undefined8 *)PTR_DAT_09f2ac78);
      FUN_094b2800(0);
      bVar7 = *(char *)(in_stack_00000040 + 0x12) != '\0';
      goto MetaXRAcousticNativeInterface_UnityNativeInterface__ovrAudio_DestroyAudioSceneIR;
    }
  }
  else if (iVar26 != 0x48) {
    if (iVar26 != 0) {
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


