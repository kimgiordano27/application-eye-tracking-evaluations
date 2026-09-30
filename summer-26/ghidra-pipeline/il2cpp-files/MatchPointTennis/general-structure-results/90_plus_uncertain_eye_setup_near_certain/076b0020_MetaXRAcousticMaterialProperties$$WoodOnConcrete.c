/*
FUNCTION_NAME: MetaXRAcousticMaterialProperties$$WoodOnConcrete
ENTRY_POINT: 076b0020
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

void MetaXRAcousticMaterialProperties__WoodOnConcrete(void)

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
  uint in_w8;
  long *plVar16;
  long lVar17;
  long lVar18;
  int in_w9;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  int iVar22;
  long unaff_x19;
  long *unaff_x20;
  uint uVar23;
  long unaff_x22;
  long unaff_x23;
  long lVar24;
  undefined8 uVar25;
  int unaff_w25;
  int unaff_w26;
  undefined1 auVar26 [16];
  long in_stack_00000028;
  long in_stack_00000030;
  uint uStack0000000000000038;
  undefined4 *in_stack_00000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  char in_stack_000000c8;
  char in_stack_000000e0;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  char cStack00000000000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001c0;
  byte bStack00000000000001c8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
code_r0x076b0020:
  if (in_w8 < 6) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  *(int *)(unaff_x23 + 0x34) = in_w9;
LAB_076b002c:
  if (-1 < *(int *)(unaff_x19 + 0x34)) {
    if (in_w8 < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(int *)(unaff_x23 + 0x38) = *(int *)(unaff_x19 + 0x34);
  }
  if (-1 < *(int *)(unaff_x19 + 0x38)) {
    if (in_w8 < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(int *)(unaff_x23 + 0x3c) = *(int *)(unaff_x19 + 0x38);
  }
  if (-1 < *(int *)(unaff_x19 + 0x3c)) {
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar16 = *(long **)(in_stack_00000030 + 0x130);
    if (plVar16 != (long *)0x0) {
      lVar24 = *(long *)PTR_DAT_09f24cf0;
      lVar17 = *(long *)(lVar24 + 0x38);
      if (lVar17 == 0) {
        FUN_04482014(lVar24);
        lVar17 = *(long *)(lVar24 + 0x38);
      }
      lVar17 = *(long *)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_04481fb8();
      }
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar17 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_04481fb8();
      }
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar24 = *plVar16;
      uVar25 = **(undefined8 **)(lVar17 + 0xb8);
      uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *unaff_x20) {
            puVar12 = (undefined8 *)(lVar24 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_076b012c;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_044822ac(plVar16,*unaff_x20,1);
LAB_076b012c:
      (*(code *)*puVar12)(plVar16,0x33,uVar25,puVar12[1]);
    }
  }
  do {
    if (_bStack00000000000001c8 == 1) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar25 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar16 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d740);
      FUN_06d85718(plVar16,uVar25,*(undefined8 *)PTR_DAT_09f2d738);
    }
    else if (_bStack00000000000001c8 == 3) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar25 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar16 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d750);
      FUN_06d8679c(plVar16,uVar25,*(undefined8 *)PTR_DAT_09f2d730);
    }
    else {
      if (_bStack00000000000001c8 != 7) {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar16 = *(long **)(in_stack_00000030 + 0x130);
        if (plVar16 == (long *)0x0) goto LAB_076b0510;
        lVar17 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,1);
        uVar25 = FUN_058fe430(&stack0x000001c0,*(undefined8 *)PTR_DAT_09f2d698);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar17 + 0x20) = uVar25;
        thunk_FUN_044bb4b4();
        lVar24 = *plVar16;
        uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar19 == 0) goto LAB_076b04e0;
        piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        goto LAB_076b04c8;
      }
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar25 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar16 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d748);
      FUN_06d87820(plVar16,uVar25,*(undefined8 *)PTR_DAT_09f2d728);
    }
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    bVar2 = 0;
    if (unaff_w26 < 0) {
      bVar2 = bStack00000000000001c8 >> 1 & 1;
    }
    bVar1 = 0;
    if (unaff_w25 < 0) {
      bVar1 = bStack00000000000001c8 >> 2 & 1;
    }
    *(byte *)((long)plVar16 + 0x11) = bVar1;
    *(byte *)(plVar16 + 2) = bVar2;
    if (*(long *)(in_stack_00000030 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_07442978(*(long *)(in_stack_00000030 + 0x90),unaff_x22,plVar16,
                 *(undefined8 *)PTR_DAT_09f2d5c0);
    (**(code **)(*plVar16 + 0x178))
              (&stack0x00000070,plVar16,in_stack_00000030,*(undefined4 *)(unaff_x19 + 0x10),
               *(undefined4 *)(unaff_x19 + 0x14),*(undefined4 *)(unaff_x19 + 0x18),unaff_x23,
               *(undefined4 *)(unaff_x19 + 0x40),*(undefined4 *)(unaff_x19 + 0x48));
    in_stack_000001a8 = in_stack_00000078;
    _cStack00000000000001a0 = in_stack_00000070;
    uVar25 = _cStack00000000000001a0;
    cStack00000000000001a0 = (char)in_stack_00000070;
    in_stack_000001b0 = in_stack_00000080;
    _cStack00000000000001a0 = uVar25;
    if (cStack00000000000001a0 == '\0') {
      iVar22 = 0x52;
      *(undefined1 *)(in_stack_00000040 + 0x12) = 0;
      goto LAB_076b0518;
    }
    lVar17 = *(long *)(in_stack_00000040 + 0x10);
    auVar26 = FUN_0613d160(&stack0x000001a0,*(undefined8 *)PTR_DAT_09f2aca0);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar24 = *(long *)(lVar17 + 0x10);
    lVar20 = *(long *)PTR_DAT_09f2d6c0;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar23 = *(uint *)(lVar17 + 0x18);
    if (uVar23 < *(uint *)(lVar24 + 0x18)) {
      *(uint *)(lVar17 + 0x18) = uVar23 + 1;
      *(undefined1 (*) [16])(lVar24 + (long)(int)uVar23 * 0x10 + 0x20) = auVar26;
    }
    else {
      FUN_05b19770(lVar17,auVar26._0_8_,auVar26._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
    }
    plVar16 = *(long **)(in_stack_00000030 + 0x20);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar17 = *plVar16;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f2ce28) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          goto LAB_076b0388;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b0388:
    lVar17 = (*(code *)*puVar12)(plVar16,puVar12[1]);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000198 = FUN_07ab3bc0(lVar17,0);
    uVar19 = FUN_0795ad28(&stack0x00000198,0);
    if ((uVar19 & 1) == 0) {
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
    uVar19 = FUN_0525e218(in_stack_00000040 + 0x14,*(undefined8 *)PTR_DAT_09f2d610);
    unaff_x20 = (long *)PTR_DAT_09f2ac68;
    if ((uVar19 & 1) == 0) {
      iVar22 = 0x52;
      goto LAB_076b0518;
    }
    _bStack00000000000001c8 = *(undefined8 *)(in_stack_00000040 + 0x1a);
    unaff_x22 = *(long *)(in_stack_00000040 + 0x18);
    in_stack_000001c0 = unaff_x22;
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    unaff_x19 = *(long *)(unaff_x22 + 0x10);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    unaff_w25 = *(int *)(unaff_x19 + 0x18);
    unaff_w26 = *(int *)(unaff_x19 + 0x14);
    if (-1 < *(int *)(unaff_x19 + 0x1c)) goto code_r0x076aff54;
    unaff_x23 = 0;
  } while( true );
LAB_076b091c:
  if ((in_stack_00000028 < 0) && (plVar13 != (long *)0x0)) {
    lVar17 = *plVar13;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_076b0984;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0984:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  plVar13 = (long *)(**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar17 = *plVar13;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar19 != 0) {
    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f2d648) {
        puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_076b0a14;
      }
      uVar19 = uVar19 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar19 != 0);
  }
  puVar12 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2d648,0);
LAB_076b0a14:
  plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
switchD_076b0b98_default:
  lVar24 = *plVar13;
  lVar17 = *(long *)puVar3;
  uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar19 != 0) {
    piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == lVar17) {
        puVar12 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_076b0a74;
      }
      uVar19 = uVar19 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar19 != 0);
  }
  puVar12 = (undefined8 *)FUN_044822ac(plVar13,lVar17,0);
LAB_076b0a74:
  uVar19 = (*(code *)*puVar12)(plVar13,puVar12[1]);
  if ((uVar19 & 1) != 0) {
    lVar17 = *plVar13;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_076b0ad0;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar13,*(long *)puVar5,0);
LAB_076b0ad0:
    plVar14 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
    plVar15 = (long *)(**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar24 = *plVar15;
    lVar17 = plVar14[2];
    uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar6) {
          puVar12 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
          goto MetaXRAcousticNativeInterface___ctor;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar15,*(long *)puVar6,0);
MetaXRAcousticNativeInterface___ctor:
    lVar17 = (*(code *)*puVar12)(plVar15,(int)lVar17,puVar12[1]);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar11 = *(undefined4 *)(lVar17 + 0x24);
    lVar17 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar10 = FUN_076bd41c(lVar17,0);
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
  if ((in_stack_00000028 < 0) && (plVar13 != (long *)0x0)) {
    lVar17 = *plVar13;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_076b0c64;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0c64:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  plVar16 = *(long **)(in_stack_00000040 + 8);
  iVar22 = iVar22 + 1;
  if (plVar16 == (long *)0x0) goto LAB_076b0f7c;
  goto LAB_076b06bc;
code_r0x076aff54:
  iVar22 = 1;
  if (-1 < *(int *)(unaff_x19 + 0x20)) {
    iVar22 = 2;
  }
  unaff_x23 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,
                           (((((iVar22 - ((int)~*(uint *)(unaff_x19 + 0x24) >> 0x1f)) -
                              ((int)~*(uint *)(unaff_x19 + 0x28) >> 0x1f)) -
                             ((int)~*(uint *)(unaff_x19 + 0x2c) >> 0x1f)) -
                            ((int)~*(uint *)(unaff_x19 + 0x30) >> 0x1f)) -
                           ((int)~*(uint *)(unaff_x19 + 0x34) >> 0x1f)) -
                           ((int)~*(uint *)(unaff_x19 + 0x38) >> 0x1f));
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  in_w8 = *(uint *)(unaff_x23 + 0x18);
  if (in_w8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  *(undefined4 *)(unaff_x23 + 0x20) = *(undefined4 *)(unaff_x19 + 0x1c);
  if (-1 < *(int *)(unaff_x19 + 0x20)) {
    if (in_w8 < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(int *)(unaff_x23 + 0x24) = *(int *)(unaff_x19 + 0x20);
  }
  if (-1 < *(int *)(unaff_x19 + 0x24)) {
    if (in_w8 < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(int *)(unaff_x23 + 0x28) = *(int *)(unaff_x19 + 0x24);
  }
  if (-1 < *(int *)(unaff_x19 + 0x28)) {
    if (in_w8 < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(int *)(unaff_x23 + 0x2c) = *(int *)(unaff_x19 + 0x28);
  }
  if (-1 < *(int *)(unaff_x19 + 0x2c)) {
    if (in_w8 < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(int *)(unaff_x23 + 0x30) = *(int *)(unaff_x19 + 0x2c);
  }
  in_w9 = *(int *)(unaff_x19 + 0x30);
  if (-1 < in_w9) goto code_r0x076b0020;
  goto LAB_076b002c;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar21 = piVar21 + 4;
    if (uVar19 == 0) break;
LAB_076b04c8:
    if (*(long *)(piVar21 + -2) == *unaff_x20) {
      puVar12 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_076b04fc;
    }
  }
LAB_076b04e0:
  puVar12 = (undefined8 *)FUN_044822ac(plVar16,*unaff_x20,0);
LAB_076b04fc:
  (*(code *)*puVar12)(plVar16,9,lVar17,puVar12[1]);
LAB_076b0510:
  iVar22 = 0x48;
LAB_076b0518:
  if (in_stack_00000028 < 0) {
    FUN_0525e33c(in_stack_00000040 + 0x14,*(undefined8 *)PTR_DAT_09f2d5f8);
  }
  if (iVar22 == 0x52) {
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
        in_stack_00000178 = in_stack_00000078;
        in_stack_00000170 = in_stack_00000070;
        in_stack_00000188 = in_stack_00000088;
        in_stack_00000180 = in_stack_00000080;
        in_stack_00000190 = in_stack_00000090;
        while (uVar19 = FUN_052607f8(&stack0x00000170,*(undefined8 *)puVar3), (uVar19 & 1) != 0) {
          if (in_stack_00000188 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          auVar26 = FUN_076c0674(in_stack_00000188,0);
          lVar17 = *(long *)(in_stack_00000040 + 0x10);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar24 = *(long *)(lVar17 + 0x10);
          lVar20 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar23 = *(uint *)(lVar17 + 0x18);
          if (uVar23 < *(uint *)(lVar24 + 0x18)) {
            *(uint *)(lVar17 + 0x18) = uVar23 + 1;
            *(undefined1 (*) [16])(lVar24 + (long)(int)uVar23 * 0x10 + 0x20) = auVar26;
          }
          else {
            FUN_05b19770(lVar17,auVar26._0_8_,auVar26._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
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
      uVar19 = FUN_076ca814(*(long *)(in_stack_00000040 + 8),0);
      puVar6 = PTR_DAT_09f2d688;
      puVar5 = PTR_DAT_09f2d660;
      puVar4 = PTR_DAT_09f2d658;
      puVar3 = PTR_DAT_09f1f018;
      if ((uVar19 & 1) != 0) {
        plVar16 = *(long **)(in_stack_00000040 + 8);
        if (plVar16 == (long *)0x0) {
LAB_076b0f7c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        iVar22 = 0;
LAB_076b06bc:
        plVar16 = (long *)(**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar17 = *plVar16;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f2d678) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_076b0724;
            }
            uVar19 = uVar19 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d678,0);
LAB_076b0724:
        iVar9 = (*(code *)*puVar12)(plVar16,puVar12[1]);
        if (iVar22 < iVar9) {
          plVar16 = *(long **)(in_stack_00000040 + 8);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar16 = (long *)(**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400))
          ;
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar17 = *plVar16;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f2d680) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_076b07b0;
              }
              uVar19 = uVar19 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d680,0);
LAB_076b07b0:
          plVar16 = (long *)(*(code *)*puVar12)(plVar16,iVar22,puVar12[1]);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar13 = (long *)(**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400))
          ;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar17 = *plVar13;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f2d638) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_076b0838;
              }
              uVar19 = uVar19 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2d638,0);
LAB_076b0838:
          plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          do {
            lVar24 = *plVar13;
            lVar17 = *(long *)puVar3;
            uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar19 != 0) {
              piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar17) {
                  puVar12 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_076b0898;
                }
                uVar19 = uVar19 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar19 != 0);
            }
            puVar12 = (undefined8 *)FUN_044822ac(plVar13,lVar17,0);
LAB_076b0898:
            uVar19 = (*(code *)*puVar12)(plVar13,puVar12[1]);
            if ((uVar19 & 1) == 0) goto LAB_076b091c;
            lVar17 = *plVar13;
            uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar19 != 0) {
              piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_076b08f4;
                }
                uVar19 = uVar19 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar19 != 0);
            }
            puVar12 = (undefined8 *)FUN_044822ac(plVar13,*(long *)puVar4,0);
LAB_076b08f4:
            lVar17 = (*(code *)*puVar12)(plVar13,puVar12[1]);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_076a6f40(in_stack_00000030,*(undefined4 *)(lVar17 + 0x10),0x200);
          } while( true );
        }
      }
      plVar16 = *(long **)(in_stack_00000040 + 8);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      plVar16 = (long *)(**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar17 = *plVar16;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f2d010) {
            puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_076b0e20;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d010,0);
LAB_076b0e20:
      uVar11 = (*(code *)*puVar12)(plVar16,puVar12[1]);
      uVar25 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d4e8,uVar11);
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      *(undefined8 *)(in_stack_00000030 + 0x68) = uVar25;
      thunk_FUN_044bb4b4();
      iVar22 = 0;
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
        if (*(int *)(*(long *)(in_stack_00000030 + 0x68) + 0x18) <= iVar22) break;
        plVar16 = *(long **)(in_stack_00000040 + 8);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar16 = (long *)(**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180))
        ;
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar17 = *plVar16;
        uVar11 = in_stack_00000040[0x20];
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f2d018) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_076b12bc;
            }
            uVar19 = uVar19 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d018,0);
LAB_076b12bc:
        lVar17 = (*(code *)*puVar12)(plVar16,uVar11,puVar12[1]);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (-1 < *(int *)(lVar17 + 0x18)) {
          uVar8 = Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                            (lVar17,0);
          switch(uVar8) {
          case 1:
            lVar17 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar17 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            iVar22 = *(int *)(lVar17 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
            if (iVar22 < 0x200) {
              if ((iVar22 == 2) || (iVar22 == 4)) {
                lVar17 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d240);
                System_Action<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke
                          (lVar17,*(undefined8 *)PTR_DAT_09f2d4f0);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar24 = *(long *)(in_stack_00000030 + 0x70);
                if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar23 = in_stack_00000040[0x20];
                if (*(uint *)(lVar24 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                FUN_076a76c4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                             (long)(int)uVar23,lVar17 + 0x10,&stack0x00000158,lVar17 + 0x18,
                             *(int *)(lVar24 + (long)(int)uVar23 * 4 + 0x20) == 4);
                lVar24 = *(long *)(in_stack_00000040 + 0x10);
                auVar26 = FUN_0613d160(&stack0x00000158,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar20 = *(long *)(lVar24 + 0x10);
                lVar18 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar23 = *(uint *)(lVar24 + 0x18);
                if (uVar23 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar24 + 0x18) = uVar23 + 1;
                  *(undefined1 (*) [16])(lVar20 + (long)(int)uVar23 * 0x10 + 0x20) = auVar26;
                }
                else {
                  FUN_05b19770(lVar24,auVar26._0_8_,auVar26._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                plVar16 = *(long **)(in_stack_00000030 + 0x68);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar23 = in_stack_00000040[0x20];
                lVar24 = thunk_FUN_04485110(lVar17,*(undefined8 *)(*plVar16 + 0x40));
                if (lVar24 == 0) {
                  uVar25 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                  FUN_04447d10(uVar25,0);
                }
                if (*(uint *)(plVar16 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                plVar16[(long)(int)uVar23 + 4] = lVar17;
                thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar23 + 4,lVar17);
              }
            }
            else if ((iVar22 == 0x200) || (iVar22 == 0x2000)) {
              lVar17 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d518);
              FUN_07399b20(lVar17,*(undefined8 *)PTR_DAT_09f2d500);
              FUN_076a89e0(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],&stack0x000000e0,&stack0x000000c8);
              if (in_stack_000000e0 != '\0') {
                auVar26 = FUN_0612f58c(&stack0x000000e0,*(undefined8 *)PTR_DAT_09f2d328);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                *(undefined1 (*) [16])(lVar17 + 0x10) = auVar26;
              }
              if (in_stack_000000c8 != '\0') {
                lVar24 = *(long *)(in_stack_00000040 + 0x10);
                auVar26 = FUN_0613d160(&stack0x000000c8,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar20 = *(long *)(lVar24 + 0x10);
                lVar18 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar23 = *(uint *)(lVar24 + 0x18);
                if (uVar23 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar24 + 0x18) = uVar23 + 1;
                  *(undefined1 (*) [16])(lVar20 + (long)(int)uVar23 * 0x10 + 0x20) = auVar26;
                }
                else {
                  FUN_05b19770(lVar24,auVar26._0_8_,auVar26._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
              }
              plVar16 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar23 = in_stack_00000040[0x20];
              if ((lVar17 != 0) &&
                 (lVar24 = thunk_FUN_04485110(lVar17,*(undefined8 *)(*plVar16 + 0x40)), lVar24 == 0)
                 ) {
                uVar25 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar25,0);
              }
              if (*(uint *)(plVar16 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar16[(long)(int)uVar23 + 4] = lVar17;
              thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar23 + 4,lVar17);
            }
            break;
          case 3:
            lVar17 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar17 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            uVar23 = *(uint *)(lVar17 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
            if ((uVar23 >> 10 & 1) == 0) {
              if ((uVar23 >> 0xc & 1) != 0) {
                lVar17 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
                FUN_07399b40(lVar17,*(undefined8 *)PTR_DAT_09f2d4f8);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                             in_stack_00000040[0x20],lVar17 + 0x10,&stack0x000000f8,0);
                lVar24 = *(long *)(in_stack_00000040 + 0x10);
                auVar26 = FUN_0613d160(&stack0x000000f8,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar20 = *(long *)(lVar24 + 0x10);
                lVar18 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar23 = *(uint *)(lVar24 + 0x18);
                if (uVar23 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar24 + 0x18) = uVar23 + 1;
                  *(undefined1 (*) [16])(lVar20 + (long)(int)uVar23 * 0x10 + 0x20) = auVar26;
                }
                else {
                  FUN_05b19770(lVar24,auVar26._0_8_,auVar26._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                plVar16 = *(long **)(in_stack_00000030 + 0x68);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar23 = in_stack_00000040[0x20];
                lVar24 = thunk_FUN_04485110(lVar17,*(undefined8 *)(*plVar16 + 0x40));
                if (lVar24 == 0) {
                  uVar25 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                  FUN_04447d10(uVar25,0);
                }
                if (*(uint *)(plVar16 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                plVar16[(long)(int)uVar23 + 4] = lVar17;
                thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar23 + 4,lVar17);
              }
            }
            else {
              lVar17 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
              FUN_07399b40(lVar17,*(undefined8 *)PTR_DAT_09f2d4f8);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar17 + 0x10,&stack0x00000128,1);
              lVar24 = *(long *)(in_stack_00000040 + 0x10);
              auVar26 = FUN_0613d160(&stack0x00000128,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar20 = *(long *)(lVar24 + 0x10);
              lVar18 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar23 = *(uint *)(lVar24 + 0x18);
              if (uVar23 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(lVar24 + 0x18) = uVar23 + 1;
                *(undefined1 (*) [16])(lVar20 + (long)(int)uVar23 * 0x10 + 0x20) = auVar26;
              }
              else {
                FUN_05b19770(lVar24,auVar26._0_8_,auVar26._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              plVar16 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar23 = in_stack_00000040[0x20];
              lVar24 = thunk_FUN_04485110(lVar17,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar24 == 0) {
                uVar25 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar25,0);
              }
              if (*(uint *)(plVar16 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar16[(long)(int)uVar23 + 4] = lVar17;
              thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar23 + 4,lVar17);
            }
            break;
          case 4:
            lVar17 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar17 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            if ((*(uint *)(lVar17 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
            {
              lVar17 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d358);
              FUN_07399b00(lVar17,*(undefined8 *)PTR_DAT_09f2d510);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a850c(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar17 + 0x10,&stack0x00000110);
              lVar24 = *(long *)(in_stack_00000040 + 0x10);
              auVar26 = FUN_0613d160(&stack0x00000110,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar20 = *(long *)(lVar24 + 0x10);
              lVar18 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar23 = *(uint *)(lVar24 + 0x18);
              if (uVar23 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(lVar24 + 0x18) = uVar23 + 1;
                *(undefined1 (*) [16])(lVar20 + (long)(int)uVar23 * 0x10 + 0x20) = auVar26;
              }
              else {
                FUN_05b19770(lVar24,auVar26._0_8_,auVar26._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              plVar16 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar23 = in_stack_00000040[0x20];
              lVar24 = thunk_FUN_04485110(lVar17,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar24 == 0) {
                uVar25 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar25,0);
              }
              if (*(uint *)(plVar16 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar16[(long)(int)uVar23 + 4] = lVar17;
              thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar23 + 4,lVar17);
            }
            break;
          case 7:
            lVar17 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar17 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            if (*(int *)(lVar17 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) == 0x100) {
              lVar17 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d398);
              FUN_07399ae0(lVar17,*(undefined8 *)PTR_DAT_09f2d508);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a7ce8(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar17 + 0x10,&stack0x00000140);
              lVar24 = *(long *)(in_stack_00000040 + 0x10);
              auVar26 = FUN_0613d160(&stack0x00000140,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar20 = *(long *)(lVar24 + 0x10);
              lVar18 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar23 = *(uint *)(lVar24 + 0x18);
              if (uVar23 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(lVar24 + 0x18) = uVar23 + 1;
                *(undefined1 (*) [16])(lVar20 + (long)(int)uVar23 * 0x10 + 0x20) = auVar26;
              }
              else {
                FUN_05b19770(lVar24,auVar26._0_8_,auVar26._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              plVar16 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar23 = in_stack_00000040[0x20];
              lVar24 = thunk_FUN_04485110(lVar17,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar24 == 0) {
                uVar25 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar25,0);
              }
              if (*(uint *)(plVar16 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar16[(long)(int)uVar23 + 4] = lVar17;
              thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar23 + 4,lVar17);
            }
          }
          plVar16 = *(long **)(in_stack_00000030 + 0x20);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar17 = *plVar16;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f2ce28) {
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar21 + 2) * 0x10 + 0x138);
                goto LAB_076b1af0;
              }
              uVar19 = uVar19 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b1af0:
          lVar17 = (*(code *)*puVar12)(plVar16,puVar12[1]);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          in_stack_00000198 = FUN_07ab3bc0(lVar17,0);
          uVar19 = FUN_0795ad28(&stack0x00000198,0);
          if ((uVar19 & 1) == 0) {
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
        iVar22 = in_stack_00000040[0x20] + 1;
        in_stack_00000040[0x20] = iVar22;
      }
      if (0 < (int)in_stack_00000040[0xc]) {
        uStack0000000000000038 = 0;
        uVar23 = 0;
        do {
          plVar16 = *(long **)(in_stack_00000040 + 8);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar16 = (long *)(**(code **)(*plVar16 + 0x1f8))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x200));
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar17 = *plVar16;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f2d160) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_076b1bec;
              }
              uVar19 = uVar19 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d160,0);
LAB_076b1bec:
          lVar17 = (*(code *)*puVar12)(plVar16,uStack0000000000000038,puVar12[1]);
          lVar24 = *(long *)(in_stack_00000030 + 0x98);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(uint *)(lVar24 + 0x18) <= uStack0000000000000038) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar24 = *(long *)(lVar24 + (long)(int)uStack0000000000000038 * 8 + 0x20);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar24 = FUN_074427bc(lVar24,*(undefined8 *)PTR_DAT_09f2d5a0);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_06b56d04(&stack0x00000070,lVar24,*(undefined8 *)PTR_DAT_09f2d718);
          in_stack_000000b8 = in_stack_00000078;
          in_stack_000000b0 = in_stack_00000070;
          in_stack_000000c0 = in_stack_00000080;
          while (uVar19 = System_Collections_Generic_EqualityComparer<ConstraintSource>__System_Collections_IEqualityComparer_GetHashCode
                                    (&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d600),
                lVar24 = in_stack_000000c0, (uVar19 & 1) != 0) {
            if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(int *)(in_stack_000000c0 + 0x18) < 1) {
              plVar16 = (long *)0x0;
            }
            else {
              iVar22 = 0;
              plVar16 = (long *)0x0;
              do {
                auVar26 = FUN_059f3e50(lVar24,iVar22,*(undefined8 *)puVar3);
                lVar20 = auVar26._8_8_;
                if (plVar16 == (long *)0x0) {
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  uVar11 = *(undefined4 *)(lVar24 + 0x18);
                  uVar25 = *(undefined8 *)(lVar17 + 0x10);
                  plVar16 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar4);
                  FUN_076c14ec(plVar16,uStack0000000000000038,uVar23,uVar11,uVar25,0);
                }
                else {
                  lVar18 = *(long *)puVar4;
                  bVar2 = *(byte *)(lVar18 + 0x130);
                  if (*(byte *)(*plVar16 + 0x130) < bVar2) goto LAB_076b1e40;
                  if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != lVar18) {
                    plVar16 = (long *)0x0;
                  }
                }
                if (plVar16 == (long *)0x0) {
LAB_076b1e40:
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076c1680(plVar16,iVar22,auVar26._0_8_ & 0xffffffff,0);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                if (*(long *)(lVar20 + 0x28) != 0) {
                  if (*(long *)(in_stack_00000040 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  lVar18 = FUN_0744290c(*(long *)(in_stack_00000040 + 0xe),lVar20,
                                        *(undefined8 *)PTR_DAT_09f2d590);
                  plVar16[5] = lVar18;
                  thunk_FUN_044bb4b4();
                }
                FUN_076c1fc8(plVar16,iVar22,*(undefined4 *)(lVar20 + 0x1c),0);
                iVar22 = iVar22 + 1;
              } while (iVar22 < *(int *)(lVar24 + 0x18));
            }
            plVar13 = *(long **)(in_stack_00000030 + 0x88);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if ((plVar16 != (long *)0x0) &&
               (lVar24 = thunk_FUN_04485110(plVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar24 == 0))
            {
              uVar25 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar25,0);
            }
            if (*(uint *)(plVar13 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar13[(long)(int)uVar23 + 4] = (long)plVar16;
            thunk_FUN_044bb4b4(plVar13 + (long)(int)uVar23 + 4,plVar16);
            uVar23 = uVar23 + 1;
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
      uVar25 = FUN_05b1b2ac(*(long *)(in_stack_00000040 + 0x10),*(undefined8 *)PTR_DAT_09f2d6c8);
      FUN_05f9dd28(&stack0x000001e0,uVar25,4,*(undefined8 *)PTR_DAT_09f2d700);
      auVar26 = FUN_094b28ac(in_stack_000001e0,in_stack_000001e8,0);
      *(undefined1 (*) [16])(in_stack_00000030 + 0x78) = auVar26;
      FUN_05f9df64(&stack0x000001e0,*(undefined8 *)PTR_DAT_09f2ac78);
      FUN_094b2800(0);
      bVar7 = *(char *)(in_stack_00000040 + 0x12) != '\0';
      goto MetaXRAcousticNativeInterface_UnityNativeInterface__ovrAudio_DestroyAudioSceneIR;
    }
  }
  else if (iVar22 != 0x48) {
    if (iVar22 != 0) {
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


