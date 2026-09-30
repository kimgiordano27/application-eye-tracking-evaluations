/*
FUNCTION_NAME: MetaXRAcousticMaterialProperties$$Vent
ENTRY_POINT: 076af158
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


/* WARNING: Removing unreachable block (ram,0x076b1e1c) */
/* WARNING: Removing unreachable block (ram,0x076b0c7c) */
/* WARNING: Removing unreachable block (ram,0x076b2068) */
/* WARNING: Removing unreachable block (ram,0x076b0ffc) */
/* WARNING: Removing unreachable block (ram,0x076afb3c) */
/* WARNING: Removing unreachable block (ram,0x076af6a8) */
/* WARNING: Removing unreachable block (ram,0x076af914) */
/* WARNING: Removing unreachable block (ram,0x076b0ff0) */
/* WARNING: Removing unreachable block (ram,0x076b0668) */
/* WARNING: Removing unreachable block (ram,0x076b0fc4) */
/* WARNING: Removing unreachable block (ram,0x076afb28) */
/* WARNING: Removing unreachable block (ram,0x076b099c) */
/* WARNING: Removing unreachable block (ram,0x076b0f94) */

void MetaXRAcousticMaterialProperties__Vent(void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  uint in_w8;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  int iVar28;
  long unaff_x21;
  uint uVar29;
  long *unaff_x24;
  long lVar30;
  long unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  undefined1 auVar31 [16];
  undefined8 *in_stack_00000020;
  int iStack0000000000000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  undefined4 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
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
  uint uStack00000000000001dc;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  lVar8 = _iStack0000000000000028;
  uStack00000000000001dc = in_w8;
LAB_076af174:
  if (2 < *(int *)(unaff_x29 + 0x20) - 4U) goto LAB_076af2e0;
  if (*(int *)(unaff_x29 + 0x1c) < 0) {
LAB_076af228:
    uStack00000000000001dc = uStack00000000000001dc | 2;
  }
  else {
    plVar16 = *(long **)(in_stack_00000040 + 8);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar22 = *plVar16;
    uVar12 = *(undefined4 *)(unaff_x29 + 0x1c);
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2cfc8) {
          puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_076af208;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2cfc8,0);
LAB_076af208:
    lVar22 = (*(code *)*puVar17)(plVar16,uVar12,puVar17[1]);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar26 = FUN_076c7ea4(lVar22,0);
    if ((uVar26 & 1) != 0) goto LAB_076af228;
  }
  if (-1 < *(int *)(unaff_x29 + 0x1c)) {
    plVar16 = *(long **)(in_stack_00000040 + 8);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar22 = *plVar16;
    uVar12 = *(undefined4 *)(unaff_x29 + 0x1c);
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2cfc8) {
          puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_076af2b4;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2cfc8,0);
LAB_076af2b4:
    lVar22 = (*(code *)*puVar17)(plVar16,uVar12,puVar17[1]);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar26 = FUN_076c7ed4(lVar22,0);
    if ((uVar26 & 1) != 0) {
      uStack00000000000001dc = uStack00000000000001dc | 4;
    }
  }
LAB_076af2e0:
  FUN_074343d4();
  if (*(int *)(unaff_x29 + 0x1c) < 0) {
    *(byte *)(in_stack_00000030 + 0xe8) =
         *(byte *)(in_stack_00000030 + 0xe8) | *(int *)(unaff_x29 + 0x20) == 0;
  }
  else {
    plVar16 = *(long **)(in_stack_00000040 + 8);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar22 = (**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
    if ((lVar22 != 0) && (*(int *)(unaff_x29 + 0x20) == 0)) {
      FUN_076a44c8(in_stack_00000030,*(undefined4 *)(unaff_x29 + 0x1c));
    }
  }
LAB_076af350:
  unaff_w28 = unaff_w28 + 1;
  do {
    plVar16 = (long *)(**(code **)(*unaff_x27 + 0x178))
                                (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar22 = *plVar16;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d670) {
          puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_076aeea0;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d670,0);
LAB_076aeea0:
    iVar11 = (*(code *)*puVar17)(plVar16,puVar17[1]);
    if (unaff_w28 < iVar11) break;
    plVar16 = (long *)*in_stack_00000020;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((unaff_x26 != 0) &&
       (lVar22 = thunk_FUN_04485110(unaff_x26,*(undefined8 *)(*plVar16 + 0x40)), lVar22 == 0)) {
      uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar15,0);
    }
    if (*(uint *)(plVar16 + 3) <= in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar16[in_stack_00000038 + 4] = unaff_x26;
    thunk_FUN_044bb4b4(plVar16 + in_stack_00000038 + 4,unaff_x26);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar11 = FUN_0744265c(unaff_x26,*(undefined8 *)PTR_DAT_09f2d580);
    in_stack_00000038 = in_stack_00000038 + 1;
    plVar16 = *(long **)(in_stack_00000040 + 8);
    iStack0000000000000028 = iVar11 + iStack0000000000000028;
    if ((long)(int)in_stack_00000040[0xc] <= (long)in_stack_00000038) {
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar22 = (**(code **)(*plVar16 + 0x238))(plVar16,*(undefined8 *)(*plVar16 + 0x240));
      if (lVar22 == 0) goto LAB_076af6ac;
      plVar16 = *(long **)(in_stack_00000040 + 8);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      plVar16 = (long *)(**(code **)(*plVar16 + 0x238))(plVar16,*(undefined8 *)(*plVar16 + 0x240));
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar22 = *plVar16;
      uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar26 == 0) goto LAB_076af460;
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      goto LAB_076af448;
    }
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x1f8))(plVar16,*(undefined8 *)(*plVar16 + 0x200));
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar22 = *plVar16;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d160) {
          puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_076aedd0;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d160,0);
LAB_076aedd0:
    unaff_x27 = (long *)(*(code *)*puVar17)(plVar16,in_stack_00000038 & 0xffffffff,puVar17[1]);
    lVar22 = *(long *)(in_stack_00000030 + 0x110);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar22 + 0x18) <= in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(int *)(lVar22 + in_stack_00000038 * 4 + 0x20) = iStack0000000000000028;
    unaff_x26 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d5c8);
    FUN_07441bc0(unaff_x26,*(undefined8 *)PTR_DAT_09f2d568);
    if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    unaff_w28 = 0;
  } while( true );
  plVar16 = (long *)(**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180))
  ;
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar22 = *plVar16;
  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar26 != 0) {
    piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d690) {
        puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
        goto LAB_076aef20;
      }
      uVar26 = uVar26 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar26 != 0);
  }
  puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d690,0);
LAB_076aef20:
  unaff_x29 = (*(code *)*puVar17)(plVar16,unaff_w28,puVar17[1]);
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar26 = FUN_07442b80(unaff_x26,unaff_x29,*(undefined8 *)PTR_DAT_09f2d540);
  if ((uVar26 & 1) == 0) {
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d6e8);
    FUN_059f38ec(uVar15,*(undefined8 *)PTR_DAT_09f2d6d0);
    FUN_07442978(unaff_x26,unaff_x29,uVar15,*(undefined8 *)PTR_DAT_09f2d5b0);
  }
  lVar22 = FUN_0744290c(unaff_x26,unaff_x29,*(undefined8 *)PTR_DAT_09f2d598);
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  FUN_06c66cdc(&stack0x00000070,unaff_w28,unaff_x29,*(undefined8 *)PTR_DAT_09f2d720);
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar21 = *(long *)(lVar22 + 0x10);
  lVar25 = *(long *)PTR_DAT_09f2d6b8;
  *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar29 = *(uint *)(lVar22 + 0x18);
  if (uVar29 < *(uint *)(lVar21 + 0x18)) {
    lVar21 = lVar21 + (long)(int)uVar29 * 0x10;
    *(uint *)(lVar22 + 0x18) = uVar29 + 1;
    puVar17 = (undefined8 *)(lVar21 + 0x28);
    *puVar17 = in_stack_00000078;
    *(undefined8 *)(lVar21 + 0x20) = in_stack_00000070;
    thunk_FUN_044bb4b4(puVar17,0);
  }
  else {
    FUN_059f416c(lVar22,in_stack_00000070,in_stack_00000078,
                 *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
  }
  if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(long *)(unaff_x29 + 0x28) == 0) goto LAB_076af0f8;
  if (*unaff_x24 == 0) {
    lVar22 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d5d8);
    FUN_07441bc0(lVar22,*(undefined8 *)PTR_DAT_09f2d570);
    *unaff_x24 = lVar22;
    thunk_FUN_044bb4b4();
    goto LAB_076af0a0;
  }
  uVar26 = FUN_07442b80(*unaff_x24,unaff_x29,*(undefined8 *)PTR_DAT_09f2d538);
  if ((uVar26 & 1) == 0) goto LAB_076af0a0;
  goto LAB_076af350;
LAB_076af0a0:
  lVar22 = (**(code **)(*unaff_x27 + 0x188))(unaff_x27,*(undefined8 *)(*unaff_x27 + 400));
  if (lVar22 == 0) {
    uVar15 = 0;
  }
  else {
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar15 = *(undefined8 *)(lVar22 + 0x10);
  }
  auVar31 = FUN_076a6d70(in_stack_00000030,unaff_x29,uVar15);
  if (*unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44(0,auVar31._8_8_,auVar31._0_8_);
  }
  FUN_07442978(*unaff_x24,unaff_x29,auVar31._0_8_,*(undefined8 *)PTR_DAT_09f2d5b8);
LAB_076af0f8:
  lVar22 = *(long *)(unaff_x29 + 0x10);
  if (-1 < *(int *)(unaff_x29 + 0x18)) {
    uVar12 = 2;
    if (*(int *)(unaff_x29 + 0x20) - 4U < 3) {
      uVar12 = 4;
    }
    FUN_076a6f40(in_stack_00000030,*(int *)(unaff_x29 + 0x18),uVar12);
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar26 = FUN_07435eb0();
  if ((uVar26 & 1) == 0) {
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(lVar22 + 0x18) < 0) {
      if (*(int *)(lVar22 + 0x14) < 0) {
        uStack00000000000001dc = 1;
      }
      else {
        uStack00000000000001dc = 3;
      }
    }
    else {
      uStack00000000000001dc = 7;
    }
  }
  goto LAB_076af174;
  while( true ) {
    uVar26 = uVar26 - 1;
    piVar27 = piVar27 + 4;
    if (uVar26 == 0) break;
LAB_076af448:
    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d3a8) {
      puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_076af488;
    }
  }
LAB_076af460:
  puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d3a8,0);
LAB_076af488:
  uVar12 = (*(code *)*puVar17)(plVar16,puVar17[1]);
  uVar15 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d6f0,uVar12);
  *(undefined8 *)(in_stack_00000030 + 0x118) = uVar15;
  thunk_FUN_044bb4b4(in_stack_00000030 + 0x118);
  plVar16 = *(long **)(in_stack_00000040 + 8);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar16 = (long *)(**(code **)(*plVar16 + 0x238))(plVar16,*(undefined8 *)(*plVar16 + 0x240));
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar22 = *plVar16;
  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar26 != 0) {
    piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d640) {
        puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
        goto LAB_076af530;
      }
      uVar26 = uVar26 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar26 != 0);
  }
  puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d640,0);
LAB_076af530:
  plVar16 = (long *)(*(code *)*puVar17)(plVar16,puVar17[1]);
  puVar5 = PTR_DAT_09f2d668;
  puVar4 = PTR_DAT_09f1f018;
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar22 = *plVar16;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)puVar4) {
          puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_076af5a0;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)puVar4,0);
LAB_076af5a0:
    uVar26 = (*(code *)*puVar17)(plVar16,puVar17[1]);
    if ((uVar26 & 1) == 0) {
      if ((-1 < lVar8) || (plVar16 == (long *)0x0)) goto LAB_076af6ac;
      lVar22 = *plVar16;
      uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar26 == 0) goto LAB_076af670;
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      break;
    }
    lVar22 = *plVar16;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)puVar5) {
          puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_076af5fc;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)puVar5,0);
LAB_076af5fc:
    lVar22 = (*(code *)*puVar17)(plVar16,puVar17[1]);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (-1 < *(int *)(lVar22 + 0x18)) {
      FUN_076a6f40(in_stack_00000030,*(int *)(lVar22 + 0x18),0x100);
    }
  } while( true );
  while( true ) {
    uVar26 = uVar26 - 1;
    piVar27 = piVar27 + 4;
    if (uVar26 == 0) break;
    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_076af68c;
    }
  }
LAB_076af670:
  puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f1f008,0);
LAB_076af68c:
  (*(code *)*puVar17)(plVar16,puVar17[1]);
LAB_076af6ac:
  plVar16 = *(long **)(in_stack_00000040 + 8);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar22 = (**(code **)(*plVar16 + 0x208))(plVar16,*(undefined8 *)(*plVar16 + 0x210));
  if (lVar22 != 0) {
    plVar16 = *(long **)(in_stack_00000040 + 8);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x208))(plVar16,*(undefined8 *)(*plVar16 + 0x210));
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar22 = *plVar16;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d630) {
          puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_076af744;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d630,0);
LAB_076af744:
    plVar16 = (long *)(*(code *)*puVar17)(plVar16,puVar17[1]);
    puVar5 = PTR_DAT_09f2d650;
    puVar4 = PTR_DAT_09f1f018;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    do {
      lVar22 = *plVar16;
      uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)puVar4) {
            puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_076af7b8;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)puVar4,0);
LAB_076af7b8:
      uVar26 = (*(code *)*puVar17)(plVar16,puVar17[1]);
      if ((uVar26 & 1) == 0) {
        if ((-1 < lVar8) || (plVar16 == (long *)0x0)) break;
        lVar22 = *plVar16;
        uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar26 == 0) goto LAB_076af8dc;
        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        goto LAB_076af8c4;
      }
      lVar22 = *plVar16;
      uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)puVar5) {
            puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_076af814;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)puVar5,0);
LAB_076af814:
      plVar18 = (long *)(*(code *)*puVar17)(plVar16,puVar17[1]);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar22 = (**(code **)(*plVar18 + 0x178))(plVar18,*(undefined8 *)(*plVar18 + 0x180));
      if (lVar22 != 0) {
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if ((*(long *)(lVar22 + 0x10) != 0) &&
           (lVar22 = *(long *)(*(long *)(lVar22 + 0x10) + 0x10), lVar22 != 0)) {
          if (-1 < *(int *)(lVar22 + 0x10)) {
            FUN_076a6f40(in_stack_00000030,*(int *)(lVar22 + 0x10),0x4400);
          }
          if (-1 < *(int *)(lVar22 + 0x14)) {
            FUN_076a6f40(in_stack_00000030,*(int *)(lVar22 + 0x14),0x4800);
          }
          if (-1 < *(int *)(lVar22 + 0x18)) {
            FUN_076a6f40(in_stack_00000030,*(int *)(lVar22 + 0x18),0x5000);
          }
        }
      }
    } while( true );
  }
  goto LAB_076af918;
  while( true ) {
    uVar26 = uVar26 - 1;
    piVar27 = piVar27 + 4;
    if (uVar26 == 0) break;
LAB_076b04c8:
    if (*(long *)(piVar27 + -2) == lVar21) {
      puVar17 = (undefined8 *)(lVar25 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_076b04fc;
    }
  }
LAB_076b04e0:
  puVar17 = (undefined8 *)FUN_044822ac(plVar16,lVar21,0);
LAB_076b04fc:
  (*(code *)*puVar17)(plVar16,9,lVar22,puVar17[1]);
LAB_076b0510:
  iVar11 = 0x48;
  goto LAB_076b0518;
LAB_076b091c:
  if ((lVar8 < 0) && (plVar18 != (long *)0x0)) {
    lVar22 = *plVar18;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_076b0984;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)FUN_044822ac(plVar18,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0984:
    (*(code *)*puVar17)(plVar18,puVar17[1]);
  }
  plVar18 = (long *)(**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar22 = *plVar18;
  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar26 != 0) {
    piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d648) {
        puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
        goto LAB_076b0a14;
      }
      uVar26 = uVar26 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar26 != 0);
  }
  puVar17 = (undefined8 *)FUN_044822ac(plVar18,*(long *)PTR_DAT_09f2d648,0);
LAB_076b0a14:
  plVar18 = (long *)(*(code *)*puVar17)(plVar18,puVar17[1]);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
switchD_076b0b98_default:
  lVar21 = *plVar18;
  lVar22 = *(long *)puVar4;
  uVar26 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar26 != 0) {
    piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == lVar22) {
        puVar17 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
        goto LAB_076b0a74;
      }
      uVar26 = uVar26 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar26 != 0);
  }
  puVar17 = (undefined8 *)FUN_044822ac(plVar18,lVar22,0);
LAB_076b0a74:
  uVar26 = (*(code *)*puVar17)(plVar18,puVar17[1]);
  if ((uVar26 & 1) != 0) {
    lVar22 = *plVar18;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)puVar6) {
          puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_076b0ad0;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)FUN_044822ac(plVar18,*(long *)puVar6,0);
LAB_076b0ad0:
    plVar19 = (long *)(*(code *)*puVar17)(plVar18,puVar17[1]);
    plVar20 = (long *)(**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar21 = *plVar20;
    lVar22 = plVar19[2];
    uVar26 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
          puVar17 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
          goto MetaXRAcousticNativeInterface___ctor;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)FUN_044822ac(plVar20,*(long *)puVar7,0);
MetaXRAcousticNativeInterface___ctor:
    lVar22 = (*(code *)*puVar17)(plVar20,(int)lVar22,puVar17[1]);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar12 = *(undefined4 *)(lVar22 + 0x24);
    lVar22 = (**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180));
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar14 = FUN_076bd41c(lVar22,0);
    switch(uVar14) {
    case 2:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,uVar12,0x400);
      break;
    case 3:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,uVar12,0x800);
      break;
    case 4:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,uVar12,0x1000);
      break;
    case 5:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,uVar12,0x2000);
    }
    goto switchD_076b0b98_default;
  }
  if ((lVar8 < 0) && (plVar18 != (long *)0x0)) {
    lVar22 = *plVar18;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_076b0c64;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)FUN_044822ac(plVar18,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0c64:
    (*(code *)*puVar17)(plVar18,puVar17[1]);
  }
  plVar16 = *(long **)(in_stack_00000040 + 8);
  iVar11 = iVar11 + 1;
  if (plVar16 == (long *)0x0) goto LAB_076b0f7c;
  goto LAB_076b06bc;
  while( true ) {
    uVar26 = uVar26 - 1;
    piVar27 = piVar27 + 4;
    if (uVar26 == 0) break;
LAB_076af8c4:
    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_076af8f8;
    }
  }
LAB_076af8dc:
  puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f1f008,0);
LAB_076af8f8:
  (*(code *)*puVar17)(plVar16,puVar17[1]);
LAB_076af918:
  lVar22 = *(long *)(in_stack_00000030 + 0x110);
  if (lVar22 != 0) {
    if (*(uint *)(lVar22 + 0x18) <= (uint)in_stack_00000040[0xc]) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(int *)(lVar22 + (long)(int)in_stack_00000040[0xc] * 4 + 0x20) = iStack0000000000000028;
  }
  uVar15 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d6f8,iStack0000000000000028);
  *(undefined8 *)(in_stack_00000030 + 0x108) = uVar15;
  thunk_FUN_044bb4b4(in_stack_00000030 + 0x108);
  uVar15 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d710,iStack0000000000000028);
  *(undefined8 *)(in_stack_00000030 + 0x88) = uVar15;
  thunk_FUN_044bb4b4();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar12 = FUN_074340b8();
  uVar15 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d6e0);
  FUN_05b18f78(uVar15,uVar12,*(undefined8 *)PTR_DAT_09f2d6d8);
  *(undefined8 *)(in_stack_00000040 + 0x10) = uVar15;
  thunk_FUN_044bb4b4(in_stack_00000040 + 0x10,uVar15);
  uVar12 = FUN_074340b8();
  uVar15 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d5e0);
  FUN_07441bd8(uVar15,uVar12,*(undefined8 *)PTR_DAT_09f2d560);
  *(undefined8 *)(in_stack_00000030 + 0x90) = uVar15;
  thunk_FUN_044bb4b4((undefined8 *)(in_stack_00000030 + 0x90),uVar15);
  *(undefined1 *)(in_stack_00000040 + 0x12) = 1;
  FUN_074347d8(&stack0x00000048);
  in_stack_00000078 = in_stack_00000050;
  in_stack_00000070 = in_stack_00000048;
  in_stack_00000088 = in_stack_00000060;
  in_stack_00000080 = in_stack_00000058;
  in_stack_00000090 = in_stack_00000068;
  *(undefined8 *)(in_stack_00000040 + 0x1c) = in_stack_00000068;
  *(undefined8 *)(in_stack_00000040 + 0x16) = in_stack_00000050;
  *(undefined8 *)(in_stack_00000040 + 0x14) = in_stack_00000048;
  *(long *)(in_stack_00000040 + 0x1a) = in_stack_00000060;
  *(long *)(in_stack_00000040 + 0x18) = in_stack_00000058;
  thunk_FUN_044bb4b4(in_stack_00000040 + 0x14,0);
  while (uVar26 = FUN_0525e218(in_stack_00000040 + 0x14,*(undefined8 *)PTR_DAT_09f2d610),
        puVar4 = PTR_DAT_09f2ac68, (uVar26 & 1) != 0) {
    _bStack00000000000001c8 = *(undefined8 *)(in_stack_00000040 + 0x1a);
    lVar22 = *(long *)(in_stack_00000040 + 0x18);
    in_stack_000001c0 = lVar22;
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar21 = *(long *)(lVar22 + 0x10);
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar11 = *(int *)(lVar21 + 0x18);
    iVar13 = *(int *)(lVar21 + 0x14);
    if (*(int *)(lVar21 + 0x1c) < 0) {
      lVar25 = 0;
    }
    else {
      iVar28 = 1;
      if (-1 < *(int *)(lVar21 + 0x20)) {
        iVar28 = 2;
      }
      lVar25 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,
                            (((((iVar28 - ((int)~*(uint *)(lVar21 + 0x24) >> 0x1f)) -
                               ((int)~*(uint *)(lVar21 + 0x28) >> 0x1f)) -
                              ((int)~*(uint *)(lVar21 + 0x2c) >> 0x1f)) -
                             ((int)~*(uint *)(lVar21 + 0x30) >> 0x1f)) -
                            ((int)~*(uint *)(lVar21 + 0x34) >> 0x1f)) -
                            ((int)~*(uint *)(lVar21 + 0x38) >> 0x1f));
      if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar29 = *(uint *)(lVar25 + 0x18);
      if (uVar29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined4 *)(lVar25 + 0x20) = *(undefined4 *)(lVar21 + 0x1c);
      if (-1 < *(int *)(lVar21 + 0x20)) {
        if (uVar29 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar25 + 0x24) = *(int *)(lVar21 + 0x20);
      }
      if (-1 < *(int *)(lVar21 + 0x24)) {
        if (uVar29 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar25 + 0x28) = *(int *)(lVar21 + 0x24);
      }
      if (-1 < *(int *)(lVar21 + 0x28)) {
        if (uVar29 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar25 + 0x2c) = *(int *)(lVar21 + 0x28);
      }
      if (-1 < *(int *)(lVar21 + 0x2c)) {
        if (uVar29 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar25 + 0x30) = *(int *)(lVar21 + 0x2c);
      }
      if (-1 < *(int *)(lVar21 + 0x30)) {
        if (uVar29 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar25 + 0x34) = *(int *)(lVar21 + 0x30);
      }
      if (-1 < *(int *)(lVar21 + 0x34)) {
        if (uVar29 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar25 + 0x38) = *(int *)(lVar21 + 0x34);
      }
      if (-1 < *(int *)(lVar21 + 0x38)) {
        if (uVar29 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(int *)(lVar25 + 0x3c) = *(int *)(lVar21 + 0x38);
      }
      if (-1 < *(int *)(lVar21 + 0x3c)) {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar16 = *(long **)(in_stack_00000030 + 0x130);
        if (plVar16 != (long *)0x0) {
          lVar30 = *(long *)PTR_DAT_09f24cf0;
          lVar24 = *(long *)(lVar30 + 0x38);
          if (lVar24 == 0) {
            FUN_04482014(lVar30);
            lVar24 = *(long *)(lVar30 + 0x38);
          }
          lVar24 = *(long *)(lVar24 + 0x10);
          if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
            lVar24 = FUN_04481fb8();
          }
          if (*(int *)(lVar24 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar24 = *(long *)(*(long *)(lVar30 + 0x38) + 0x10);
          if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
            lVar24 = FUN_04481fb8();
          }
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar23 = *plVar16;
          lVar30 = *(long *)puVar4;
          uVar15 = **(undefined8 **)(lVar24 + 0xb8);
          uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar30) {
                puVar17 = (undefined8 *)(lVar23 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_076b012c;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar17 = (undefined8 *)FUN_044822ac(plVar16,lVar30,1);
LAB_076b012c:
          (*(code *)*puVar17)(plVar16,0x33,uVar15,puVar17[1]);
        }
      }
    }
    if (_bStack00000000000001c8 == 1) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar15 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar16 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d740);
      FUN_06d85718(plVar16,uVar15,*(undefined8 *)PTR_DAT_09f2d738);
    }
    else if (_bStack00000000000001c8 == 3) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar15 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar16 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d750);
      FUN_06d8679c(plVar16,uVar15,*(undefined8 *)PTR_DAT_09f2d730);
    }
    else {
      if (_bStack00000000000001c8 != 7) {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar16 = *(long **)(in_stack_00000030 + 0x130);
        if (plVar16 == (long *)0x0) goto LAB_076b0510;
        lVar22 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,1);
        uVar15 = FUN_058fe430(&stack0x000001c0,*(undefined8 *)PTR_DAT_09f2d698);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(lVar22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar22 + 0x20) = uVar15;
        thunk_FUN_044bb4b4();
        lVar25 = *plVar16;
        lVar21 = *(long *)puVar4;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 == 0) goto LAB_076b04e0;
        piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        goto LAB_076b04c8;
      }
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar15 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar16 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d748);
      FUN_06d87820(plVar16,uVar15,*(undefined8 *)PTR_DAT_09f2d728);
    }
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    bVar3 = 0;
    if (iVar13 < 0) {
      bVar3 = bStack00000000000001c8 >> 1 & 1;
    }
    bVar2 = 0;
    if (iVar11 < 0) {
      bVar2 = bStack00000000000001c8 >> 2 & 1;
    }
    *(byte *)((long)plVar16 + 0x11) = bVar2;
    *(byte *)(plVar16 + 2) = bVar3;
    if (*(long *)(in_stack_00000030 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_07442978(*(long *)(in_stack_00000030 + 0x90),lVar22,plVar16,*(undefined8 *)PTR_DAT_09f2d5c0)
    ;
    (**(code **)(*plVar16 + 0x178))
              (&stack0x00000070,plVar16,in_stack_00000030,*(undefined4 *)(lVar21 + 0x10),
               *(undefined4 *)(lVar21 + 0x14),*(undefined4 *)(lVar21 + 0x18),lVar25,
               *(undefined4 *)(lVar21 + 0x40),*(undefined4 *)(lVar21 + 0x48));
    in_stack_000001a8 = in_stack_00000078;
    _cStack00000000000001a0 = in_stack_00000070;
    uVar15 = _cStack00000000000001a0;
    cStack00000000000001a0 = (char)in_stack_00000070;
    in_stack_000001b0 = in_stack_00000080;
    _cStack00000000000001a0 = uVar15;
    if (cStack00000000000001a0 == '\0') {
      iVar11 = 0x52;
      *(undefined1 *)(in_stack_00000040 + 0x12) = 0;
      goto LAB_076b0518;
    }
    lVar22 = *(long *)(in_stack_00000040 + 0x10);
    auVar31 = FUN_0613d160(&stack0x000001a0,*(undefined8 *)PTR_DAT_09f2aca0);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar21 = *(long *)(lVar22 + 0x10);
    lVar25 = *(long *)PTR_DAT_09f2d6c0;
    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar29 = *(uint *)(lVar22 + 0x18);
    if (uVar29 < *(uint *)(lVar21 + 0x18)) {
      *(uint *)(lVar22 + 0x18) = uVar29 + 1;
      *(undefined1 (*) [16])(lVar21 + (long)(int)uVar29 * 0x10 + 0x20) = auVar31;
    }
    else {
      FUN_05b19770(lVar22,auVar31._0_8_,auVar31._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
    }
    plVar16 = *(long **)(in_stack_00000030 + 0x20);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar22 = *plVar16;
    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2ce28) {
          puVar17 = (undefined8 *)(lVar22 + (long)(*piVar27 + 2) * 0x10 + 0x138);
          goto LAB_076b0388;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b0388:
    lVar22 = (*(code *)*puVar17)(plVar16,puVar17[1]);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000198 = FUN_07ab3bc0(lVar22,0);
    uVar26 = FUN_0795ad28(&stack0x00000198,0);
    if ((uVar26 & 1) == 0) {
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
  iVar11 = 0x52;
LAB_076b0518:
  if (lVar8 < 0) {
    FUN_0525e33c(in_stack_00000040 + 0x14,*(undefined8 *)PTR_DAT_09f2d5f8);
  }
  if (iVar11 == 0x52) {
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
        puVar4 = PTR_DAT_09f2d608;
        in_stack_00000178 = in_stack_00000078;
        in_stack_00000170 = in_stack_00000070;
        in_stack_00000188 = in_stack_00000088;
        in_stack_00000180 = in_stack_00000080;
        in_stack_00000190 = in_stack_00000090;
        while (uVar26 = FUN_052607f8(&stack0x00000170,*(undefined8 *)puVar4), (uVar26 & 1) != 0) {
          if (in_stack_00000188 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          auVar31 = FUN_076c0674(in_stack_00000188,0);
          lVar22 = *(long *)(in_stack_00000040 + 0x10);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar21 = *(long *)(lVar22 + 0x10);
          lVar25 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar29 = *(uint *)(lVar22 + 0x18);
          if (uVar29 < *(uint *)(lVar21 + 0x18)) {
            *(uint *)(lVar22 + 0x18) = uVar29 + 1;
            *(undefined1 (*) [16])(lVar21 + (long)(int)uVar29 * 0x10 + 0x20) = auVar31;
          }
          else {
            FUN_05b19770(lVar22,auVar31._0_8_,auVar31._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (lVar8 < 0) {
          FUN_05260918(&stack0x00000170,*(undefined8 *)PTR_DAT_09f2d5e8);
        }
      }
      if (*(long *)(in_stack_00000040 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar26 = FUN_076ca814(*(long *)(in_stack_00000040 + 8),0);
      puVar7 = PTR_DAT_09f2d688;
      puVar6 = PTR_DAT_09f2d660;
      puVar5 = PTR_DAT_09f2d658;
      puVar4 = PTR_DAT_09f1f018;
      if ((uVar26 & 1) != 0) {
        plVar16 = *(long **)(in_stack_00000040 + 8);
        if (plVar16 == (long *)0x0) {
LAB_076b0f7c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        iVar11 = 0;
LAB_076b06bc:
        plVar16 = (long *)(**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar22 = *plVar16;
        uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d678) {
              puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_076b0724;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d678,0);
LAB_076b0724:
        iVar13 = (*(code *)*puVar17)(plVar16,puVar17[1]);
        if (iVar11 < iVar13) {
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
          lVar22 = *plVar16;
          uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d680) {
                puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_076b07b0;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d680,0);
LAB_076b07b0:
          plVar16 = (long *)(*(code *)*puVar17)(plVar16,iVar11,puVar17[1]);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar18 = (long *)(**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400))
          ;
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar22 = *plVar18;
          uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d638) {
                puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_076b0838;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar17 = (undefined8 *)FUN_044822ac(plVar18,*(long *)PTR_DAT_09f2d638,0);
LAB_076b0838:
          plVar18 = (long *)(*(code *)*puVar17)(plVar18,puVar17[1]);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          do {
            lVar21 = *plVar18;
            lVar22 = *(long *)puVar4;
            uVar26 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar26 != 0) {
              piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == lVar22) {
                  puVar17 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
                  goto LAB_076b0898;
                }
                uVar26 = uVar26 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar26 != 0);
            }
            puVar17 = (undefined8 *)FUN_044822ac(plVar18,lVar22,0);
LAB_076b0898:
            uVar26 = (*(code *)*puVar17)(plVar18,puVar17[1]);
            if ((uVar26 & 1) == 0) goto LAB_076b091c;
            lVar22 = *plVar18;
            uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar26 != 0) {
              piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)puVar5) {
                  puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
                  goto LAB_076b08f4;
                }
                uVar26 = uVar26 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar26 != 0);
            }
            puVar17 = (undefined8 *)FUN_044822ac(plVar18,*(long *)puVar5,0);
LAB_076b08f4:
            lVar22 = (*(code *)*puVar17)(plVar18,puVar17[1]);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_076a6f40(in_stack_00000030,*(undefined4 *)(lVar22 + 0x10),0x200);
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
      lVar22 = *plVar16;
      uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d010) {
            puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_076b0e20;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d010,0);
LAB_076b0e20:
      uVar12 = (*(code *)*puVar17)(plVar16,puVar17[1]);
      uVar15 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d4e8,uVar12);
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      *(undefined8 *)(in_stack_00000030 + 0x68) = uVar15;
      thunk_FUN_044bb4b4();
      iVar11 = 0;
      in_stack_00000040[0x20] = 0;
      while( true ) {
        puVar5 = PTR_DAT_09f2d410;
        puVar4 = PTR_DAT_09f2d408;
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(long *)(in_stack_00000030 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(*(long *)(in_stack_00000030 + 0x68) + 0x18) <= iVar11) break;
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
        lVar22 = *plVar16;
        uVar12 = in_stack_00000040[0x20];
        uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d018) {
              puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_076b12bc;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d018,0);
LAB_076b12bc:
        lVar22 = (*(code *)*puVar17)(plVar16,uVar12,puVar17[1]);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (-1 < *(int *)(lVar22 + 0x18)) {
          uVar10 = Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             (lVar22,0);
          switch(uVar10) {
          case 1:
            lVar22 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar22 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            iVar11 = *(int *)(lVar22 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
            if (iVar11 < 0x200) {
              if ((iVar11 == 2) || (iVar11 == 4)) {
                lVar22 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d240);
                System_Action<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke
                          (lVar22,*(undefined8 *)PTR_DAT_09f2d4f0);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar21 = *(long *)(in_stack_00000030 + 0x70);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar29 = in_stack_00000040[0x20];
                if (*(uint *)(lVar21 + 0x18) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                FUN_076a76c4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                             (long)(int)uVar29,lVar22 + 0x10,&stack0x00000158,lVar22 + 0x18,
                             *(int *)(lVar21 + (long)(int)uVar29 * 4 + 0x20) == 4);
                lVar21 = *(long *)(in_stack_00000040 + 0x10);
                auVar31 = FUN_0613d160(&stack0x00000158,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar25 = *(long *)(lVar21 + 0x10);
                lVar24 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar29 = *(uint *)(lVar21 + 0x18);
                if (uVar29 < *(uint *)(lVar25 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar29 + 1;
                  *(undefined1 (*) [16])(lVar25 + (long)(int)uVar29 * 0x10 + 0x20) = auVar31;
                }
                else {
                  FUN_05b19770(lVar21,auVar31._0_8_,auVar31._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
                }
                plVar16 = *(long **)(in_stack_00000030 + 0x68);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar29 = in_stack_00000040[0x20];
                lVar21 = thunk_FUN_04485110(lVar22,*(undefined8 *)(*plVar16 + 0x40));
                if (lVar21 == 0) {
                  uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                  FUN_04447d10(uVar15,0);
                }
                if (*(uint *)(plVar16 + 3) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                plVar16[(long)(int)uVar29 + 4] = lVar22;
                thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar29 + 4,lVar22);
              }
            }
            else if ((iVar11 == 0x200) || (iVar11 == 0x2000)) {
              lVar22 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d518);
              FUN_07399b20(lVar22,*(undefined8 *)PTR_DAT_09f2d500);
              FUN_076a89e0(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],&stack0x000000e0,&stack0x000000c8);
              if (in_stack_000000e0 != '\0') {
                auVar31 = FUN_0612f58c(&stack0x000000e0,*(undefined8 *)PTR_DAT_09f2d328);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                *(undefined1 (*) [16])(lVar22 + 0x10) = auVar31;
              }
              if (in_stack_000000c8 != '\0') {
                lVar21 = *(long *)(in_stack_00000040 + 0x10);
                auVar31 = FUN_0613d160(&stack0x000000c8,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar25 = *(long *)(lVar21 + 0x10);
                lVar24 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar29 = *(uint *)(lVar21 + 0x18);
                if (uVar29 < *(uint *)(lVar25 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar29 + 1;
                  *(undefined1 (*) [16])(lVar25 + (long)(int)uVar29 * 0x10 + 0x20) = auVar31;
                }
                else {
                  FUN_05b19770(lVar21,auVar31._0_8_,auVar31._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
                }
              }
              plVar16 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar29 = in_stack_00000040[0x20];
              if ((lVar22 != 0) &&
                 (lVar21 = thunk_FUN_04485110(lVar22,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0)
                 ) {
                uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar15,0);
              }
              if (*(uint *)(plVar16 + 3) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar16[(long)(int)uVar29 + 4] = lVar22;
              thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar29 + 4,lVar22);
            }
            break;
          case 3:
            lVar22 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar22 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            uVar29 = *(uint *)(lVar22 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
            if ((uVar29 >> 10 & 1) == 0) {
              if ((uVar29 >> 0xc & 1) != 0) {
                lVar22 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
                FUN_07399b40(lVar22,*(undefined8 *)PTR_DAT_09f2d4f8);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                             in_stack_00000040[0x20],lVar22 + 0x10,&stack0x000000f8,0);
                lVar21 = *(long *)(in_stack_00000040 + 0x10);
                auVar31 = FUN_0613d160(&stack0x000000f8,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar25 = *(long *)(lVar21 + 0x10);
                lVar24 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar29 = *(uint *)(lVar21 + 0x18);
                if (uVar29 < *(uint *)(lVar25 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar29 + 1;
                  *(undefined1 (*) [16])(lVar25 + (long)(int)uVar29 * 0x10 + 0x20) = auVar31;
                }
                else {
                  FUN_05b19770(lVar21,auVar31._0_8_,auVar31._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
                }
                plVar16 = *(long **)(in_stack_00000030 + 0x68);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar29 = in_stack_00000040[0x20];
                lVar21 = thunk_FUN_04485110(lVar22,*(undefined8 *)(*plVar16 + 0x40));
                if (lVar21 == 0) {
                  uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                  FUN_04447d10(uVar15,0);
                }
                if (*(uint *)(plVar16 + 3) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                plVar16[(long)(int)uVar29 + 4] = lVar22;
                thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar29 + 4,lVar22);
              }
            }
            else {
              lVar22 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
              FUN_07399b40(lVar22,*(undefined8 *)PTR_DAT_09f2d4f8);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar22 + 0x10,&stack0x00000128,1);
              lVar21 = *(long *)(in_stack_00000040 + 0x10);
              auVar31 = FUN_0613d160(&stack0x00000128,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar25 = *(long *)(lVar21 + 0x10);
              lVar24 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar29 = *(uint *)(lVar21 + 0x18);
              if (uVar29 < *(uint *)(lVar25 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar29 + 1;
                *(undefined1 (*) [16])(lVar25 + (long)(int)uVar29 * 0x10 + 0x20) = auVar31;
              }
              else {
                FUN_05b19770(lVar21,auVar31._0_8_,auVar31._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
              }
              plVar16 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar29 = in_stack_00000040[0x20];
              lVar21 = thunk_FUN_04485110(lVar22,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar21 == 0) {
                uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar15,0);
              }
              if (*(uint *)(plVar16 + 3) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar16[(long)(int)uVar29 + 4] = lVar22;
              thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar29 + 4,lVar22);
            }
            break;
          case 4:
            lVar22 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar22 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            if ((*(uint *)(lVar22 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
            {
              lVar22 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d358);
              FUN_07399b00(lVar22,*(undefined8 *)PTR_DAT_09f2d510);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a850c(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar22 + 0x10,&stack0x00000110);
              lVar21 = *(long *)(in_stack_00000040 + 0x10);
              auVar31 = FUN_0613d160(&stack0x00000110,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar25 = *(long *)(lVar21 + 0x10);
              lVar24 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar29 = *(uint *)(lVar21 + 0x18);
              if (uVar29 < *(uint *)(lVar25 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar29 + 1;
                *(undefined1 (*) [16])(lVar25 + (long)(int)uVar29 * 0x10 + 0x20) = auVar31;
              }
              else {
                FUN_05b19770(lVar21,auVar31._0_8_,auVar31._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
              }
              plVar16 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar29 = in_stack_00000040[0x20];
              lVar21 = thunk_FUN_04485110(lVar22,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar21 == 0) {
                uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar15,0);
              }
              if (*(uint *)(plVar16 + 3) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar16[(long)(int)uVar29 + 4] = lVar22;
              thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar29 + 4,lVar22);
            }
            break;
          case 7:
            lVar22 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar22 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            if (*(int *)(lVar22 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) == 0x100) {
              lVar22 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d398);
              FUN_07399ae0(lVar22,*(undefined8 *)PTR_DAT_09f2d508);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a7ce8(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar22 + 0x10,&stack0x00000140);
              lVar21 = *(long *)(in_stack_00000040 + 0x10);
              auVar31 = FUN_0613d160(&stack0x00000140,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar25 = *(long *)(lVar21 + 0x10);
              lVar24 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar29 = *(uint *)(lVar21 + 0x18);
              if (uVar29 < *(uint *)(lVar25 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar29 + 1;
                *(undefined1 (*) [16])(lVar25 + (long)(int)uVar29 * 0x10 + 0x20) = auVar31;
              }
              else {
                FUN_05b19770(lVar21,auVar31._0_8_,auVar31._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
              }
              plVar16 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar29 = in_stack_00000040[0x20];
              lVar21 = thunk_FUN_04485110(lVar22,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar21 == 0) {
                uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar15,0);
              }
              if (*(uint *)(plVar16 + 3) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar16[(long)(int)uVar29 + 4] = lVar22;
              thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar29 + 4,lVar22);
            }
          }
          plVar16 = *(long **)(in_stack_00000030 + 0x20);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar22 = *plVar16;
          uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2ce28) {
                puVar17 = (undefined8 *)(lVar22 + (long)(*piVar27 + 2) * 0x10 + 0x138);
                goto LAB_076b1af0;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b1af0:
          lVar22 = (*(code *)*puVar17)(plVar16,puVar17[1]);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          in_stack_00000198 = FUN_07ab3bc0(lVar22,0);
          uVar26 = FUN_0795ad28(&stack0x00000198,0);
          if ((uVar26 & 1) == 0) {
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
        iVar11 = in_stack_00000040[0x20] + 1;
        in_stack_00000040[0x20] = iVar11;
      }
      if (0 < (int)in_stack_00000040[0xc]) {
        uVar1 = 0;
        uVar29 = 0;
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
          lVar22 = *plVar16;
          uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_09f2d160) {
                puVar17 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_076b1bec;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar17 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d160,0);
LAB_076b1bec:
          lVar22 = (*(code *)*puVar17)(plVar16,uVar1,puVar17[1]);
          lVar21 = *(long *)(in_stack_00000030 + 0x98);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(uint *)(lVar21 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar21 = *(long *)(lVar21 + (long)(int)uVar1 * 8 + 0x20);
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
          while (uVar26 = System_Collections_Generic_EqualityComparer<ConstraintSource>__System_Collections_IEqualityComparer_GetHashCode
                                    (&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d600),
                lVar21 = in_stack_000000c0, (uVar26 & 1) != 0) {
            if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(int *)(in_stack_000000c0 + 0x18) < 1) {
              plVar16 = (long *)0x0;
            }
            else {
              iVar11 = 0;
              plVar16 = (long *)0x0;
              do {
                auVar31 = FUN_059f3e50(lVar21,iVar11,*(undefined8 *)puVar4);
                lVar25 = auVar31._8_8_;
                if (plVar16 == (long *)0x0) {
                  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  uVar12 = *(undefined4 *)(lVar21 + 0x18);
                  uVar15 = *(undefined8 *)(lVar22 + 0x10);
                  plVar16 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar5);
                  FUN_076c14ec(plVar16,uVar1,uVar29,uVar12,uVar15,0);
                }
                else {
                  lVar24 = *(long *)puVar5;
                  bVar3 = *(byte *)(lVar24 + 0x130);
                  if (*(byte *)(*plVar16 + 0x130) < bVar3) goto LAB_076b1e40;
                  if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar3 * 8 + -8) != lVar24) {
                    plVar16 = (long *)0x0;
                  }
                }
                if (plVar16 == (long *)0x0) {
LAB_076b1e40:
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076c1680(plVar16,iVar11,auVar31._0_8_ & 0xffffffff,0);
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                if (*(long *)(lVar25 + 0x28) != 0) {
                  if (*(long *)(in_stack_00000040 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  lVar24 = FUN_0744290c(*(long *)(in_stack_00000040 + 0xe),lVar25,
                                        *(undefined8 *)PTR_DAT_09f2d590);
                  plVar16[5] = lVar24;
                  thunk_FUN_044bb4b4();
                }
                FUN_076c1fc8(plVar16,iVar11,*(undefined4 *)(lVar25 + 0x1c),0);
                iVar11 = iVar11 + 1;
              } while (iVar11 < *(int *)(lVar21 + 0x18));
            }
            plVar18 = *(long **)(in_stack_00000030 + 0x88);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if ((plVar16 != (long *)0x0) &&
               (lVar21 = thunk_FUN_04485110(plVar16,*(undefined8 *)(*plVar18 + 0x40)), lVar21 == 0))
            {
              uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar15,0);
            }
            if (*(uint *)(plVar18 + 3) <= uVar29) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar18[(long)(int)uVar29 + 4] = (long)plVar16;
            thunk_FUN_044bb4b4(plVar18 + (long)(int)uVar29 + 4,plVar16);
            uVar29 = uVar29 + 1;
          }
          if (lVar8 < 0) {
            FUN_05260da0(&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d5f0);
          }
          uVar1 = uVar1 + 1;
        } while ((int)uVar1 < (int)in_stack_00000040[0xc]);
      }
      if (*(long *)(in_stack_00000040 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar15 = FUN_05b1b2ac(*(long *)(in_stack_00000040 + 0x10),*(undefined8 *)PTR_DAT_09f2d6c8);
      FUN_05f9dd28(&stack0x000001e0,uVar15,4,*(undefined8 *)PTR_DAT_09f2d700);
      auVar31 = FUN_094b28ac(in_stack_000001e0,in_stack_000001e8,0);
      *(undefined1 (*) [16])(in_stack_00000030 + 0x78) = auVar31;
      FUN_05f9df64(&stack0x000001e0,*(undefined8 *)PTR_DAT_09f2ac78);
      FUN_094b2800(0);
      bVar9 = *(char *)(in_stack_00000040 + 0x12) != '\0';
      goto MetaXRAcousticNativeInterface_UnityNativeInterface__ovrAudio_DestroyAudioSceneIR;
    }
  }
  else if (iVar11 != 0x48) {
    if (iVar11 != 0) {
      return;
    }
    goto LAB_076b0550;
  }
  bVar9 = false;
MetaXRAcousticNativeInterface_UnityNativeInterface__ovrAudio_DestroyAudioSceneIR:
  *in_stack_00000040 = 0xfffffffe;
  *(undefined8 *)(in_stack_00000040 + 0xe) = 0;
  thunk_FUN_044bb4b4(in_stack_00000040 + 0xe,0);
  *(undefined8 *)(in_stack_00000040 + 0x10) = 0;
  thunk_FUN_044bb4b4(in_stack_00000040 + 0x10,0);
  if (*(int *)(*(long *)PTR_DAT_09f2cdd8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_066e2370(in_stack_00000040 + 2,bVar9,*(undefined8 *)PTR_DAT_09f2ce18);
  return;
}


