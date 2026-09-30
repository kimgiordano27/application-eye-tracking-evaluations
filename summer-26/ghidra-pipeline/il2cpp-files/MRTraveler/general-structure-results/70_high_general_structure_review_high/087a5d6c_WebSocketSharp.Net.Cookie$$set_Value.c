/*
FUNCTION_NAME: WebSocketSharp.Net.Cookie$$set_Value
ENTRY_POINT: 087a5d6c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


uint WebSocketSharp_Net_Cookie__set_Value(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long in_x10;
  int *piVar16;
  long unaff_x19;
  uint unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x25;
  long unaff_x26;
  int unaff_w28;
  undefined8 unaff_x29;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined4 uStack0000000000000038;
  uint uStack000000000000003c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uVar15 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == **(long **)(in_x10 + 0x568)) {
        puVar8 = (undefined8 *)(param_1 + (long)(*piVar16 + 2) * 0x10 + 0x138);
        goto LAB_087a5dc0;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_03cf1348(param_2,**(long **)(in_x10 + 0x568),2);
LAB_087a5dc0:
  uVar4 = (*(code *)*puVar8)(param_2,unaff_w28 + 0x10);
  uVar4 = unaff_w20 | uVar4;
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 100),*(undefined8 *)(unaff_x26 + 100),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 100);
    uVar17 = *(undefined8 *)(unaff_x26 + 100);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a5e74;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a5e74:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x11,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 0x6c),*(undefined8 *)(unaff_x26 + 0x6c),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 0x6c);
    uVar17 = *(undefined8 *)(unaff_x26 + 0x6c);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a5f28;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a5f28:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x12,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 0x74),*(undefined8 *)(unaff_x26 + 0x74),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 0x74);
    uVar17 = *(undefined8 *)(unaff_x26 + 0x74);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a5fdc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a5fdc:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x13,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 0x7c),*(undefined8 *)(unaff_x26 + 0x7c),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 0x7c);
    uVar17 = *(undefined8 *)(unaff_x26 + 0x7c);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a6090;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a6090:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x14,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 0x84),*(undefined8 *)(unaff_x26 + 0x84),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 0x84);
    uVar17 = *(undefined8 *)(unaff_x26 + 0x84);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a6144;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a6144:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x15,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 0x8c),*(undefined8 *)(unaff_x26 + 0x8c),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 0x8c);
    uVar17 = *(undefined8 *)(unaff_x26 + 0x8c);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a61f8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a61f8:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x16,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 0x94),*(undefined8 *)(unaff_x26 + 0x94),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 0x94);
    uVar17 = *(undefined8 *)(unaff_x26 + 0x94);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a62ac;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a62ac:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x17,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 0x9c),*(undefined8 *)(unaff_x26 + 0x9c),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 0x9c);
    uVar17 = *(undefined8 *)(unaff_x26 + 0x9c);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a6360;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a6360:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x18,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 0xa4),*(undefined8 *)(unaff_x26 + 0xa4),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 0xa4);
    uVar17 = *(undefined8 *)(unaff_x26 + 0xa4);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a6414;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a6414:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x19,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 0xac),*(undefined8 *)(unaff_x26 + 0xac),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 0xac);
    uVar17 = *(undefined8 *)(unaff_x26 + 0xac);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a64c8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a64c8:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x1a,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  if (*(int *)(unaff_x25 + 0xb4) != *(int *)(unaff_x26 + 0xb4)) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar24 = *(undefined4 *)(unaff_x25 + 0xb4);
    uVar25 = *(undefined4 *)(unaff_x26 + 0xb4);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 4) * 0x10 + 0x138);
          goto LAB_087a6578;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,4);
LAB_087a6578:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x1b,uVar24,uVar25,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 0xb8),*(undefined8 *)(unaff_x26 + 0xb8),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 0xb8);
    uVar17 = *(undefined8 *)(unaff_x26 + 0xb8);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a662c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a662c:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x1c,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 0xc0),*(undefined8 *)(unaff_x26 + 0xc0),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 0xc0);
    uVar17 = *(undefined8 *)(unaff_x26 + 0xc0);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a66e0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a66e0:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x1d,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_087d4244(*(undefined8 *)(unaff_x25 + 200),*(undefined8 *)(unaff_x26 + 200),0);
  if ((uVar15 & 1) != 0) {
    if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
    goto LAB_087a8340;
    lVar13 = *plVar9;
    uVar18 = *(undefined8 *)(unaff_x25 + 200);
    uVar17 = *(undefined8 *)(unaff_x26 + 200);
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_087a67a0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a67a0:
    uVar5 = (*(code *)*puVar8)(plVar9,unaff_w28 + 0x1e,uVar18,uVar17,unaff_w22,unaff_w21);
    uVar4 = uVar4 | uVar5;
  }
  uVar15 = FUN_05ab5398(in_stack_00000028 + 0x10,*(undefined8 *)(in_stack_00000030 + 0x10),
                        *(undefined8 *)System_Func<MinigameScore,_bool>_TypeInfo);
  puVar3 = System_Action<IView>_TypeInfo;
  if ((uVar15 & 1) == 0) {
    lVar13 = FUN_05ab518c(in_stack_00000028 + 0x10,*(undefined8 *)System_Action<IView>_TypeInfo);
    lVar10 = FUN_05ab518c(in_stack_00000030 + 0x10,*(undefined8 *)puVar3);
    if (*(int *)(lVar13 + 0x18) != *(int *)(lVar10 + 0x18)) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar14 = *plVar9;
      uVar24 = *(undefined4 *)(lVar13 + 0x18);
      uVar25 = *(undefined4 *)(lVar10 + 0x18);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_087a68a4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,4);
LAB_087a68a4:
      uVar5 = (*(code *)*puVar8)(plVar9,0x30001,uVar24,uVar25,unaff_w22,unaff_w21);
      uVar4 = uVar4 | uVar5;
    }
    fVar19 = (float)*(undefined8 *)(lVar13 + 0x1c) - (float)*(undefined8 *)(lVar10 + 0x1c);
    fVar20 = (float)((ulong)*(undefined8 *)(lVar13 + 0x1c) >> 0x20) -
             (float)((ulong)*(undefined8 *)(lVar10 + 0x1c) >> 0x20);
    fVar22 = (float)*(undefined8 *)(lVar13 + 0x24) - (float)*(undefined8 *)(lVar10 + 0x24);
    fVar23 = (float)((ulong)*(undefined8 *)(lVar13 + 0x24) >> 0x20) -
             (float)((ulong)*(undefined8 *)(lVar10 + 0x24) >> 0x20);
    uVar5 = uStack000000000000003c;
    if (DAT_018afcdc <= fVar23 * fVar23 + fVar22 * fVar22 + fVar19 * fVar19 + fVar20 * fVar20) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      uVar25 = *(undefined4 *)(lVar10 + 0x24);
      uVar24 = *(undefined4 *)(lVar10 + 0x28);
      uVar27 = *(undefined4 *)(lVar10 + 0x1c);
      uVar26 = *(undefined4 *)(lVar10 + 0x20);
      uVar29 = *(undefined4 *)(lVar13 + 0x24);
      uVar28 = *(undefined4 *)(lVar13 + 0x28);
      lVar14 = *plVar9;
      uVar31 = *(undefined4 *)(lVar13 + 0x1c);
      uVar30 = *(undefined4 *)(lVar13 + 0x20);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_087a6994;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,3);
LAB_087a6994:
      uVar6 = (*(code *)*puVar8)(uVar31,uVar30,uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,plVar9,
                                 0x30002,unaff_w22,unaff_w21);
      uVar4 = uVar4 | uVar6;
      uVar5 = 8;
      if ((uVar6 & 1) == 0) {
        uVar5 = uStack000000000000003c;
      }
    }
    uStack000000000000003c = uVar5;
    if (*(int *)(lVar13 + 0x2c) != *(int *)(lVar10 + 0x2c)) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar14 = *plVar9;
      uVar24 = *(undefined4 *)(lVar13 + 0x2c);
      uVar25 = *(undefined4 *)(lVar10 + 0x2c);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto WebSocketSharp_Net_Cookie__TryCreate;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,4);
WebSocketSharp_Net_Cookie__TryCreate:
      uVar5 = (*(code *)*puVar8)(plVar9,0x30003,uVar24,uVar25,unaff_w22,unaff_w21);
      uVar4 = uVar4 | uVar5;
    }
    if (*(int *)(lVar13 + 0x30) != *(int *)(lVar10 + 0x30)) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar14 = *plVar9;
      uVar24 = *(undefined4 *)(lVar13 + 0x30);
      uVar25 = *(undefined4 *)(lVar10 + 0x30);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_087a6b20;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,1);
LAB_087a6b20:
      uVar5 = (*(code *)*puVar8)(plVar9,0x30004,uVar24,uVar25,unaff_w22,unaff_w21);
      uVar4 = uVar4 | uVar5;
    }
    if (*(int *)(lVar13 + 0x34) != *(int *)(lVar10 + 0x34)) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar14 = *plVar9;
      uVar24 = *(undefined4 *)(lVar13 + 0x34);
      uVar25 = *(undefined4 *)(lVar10 + 0x34);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_087a6bd0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,1);
LAB_087a6bd0:
      uVar5 = (*(code *)*puVar8)(plVar9,0x30005,uVar24,uVar25,unaff_w22,unaff_w21);
      uVar4 = uVar4 | uVar5;
    }
    if (*(int *)(lVar13 + 0x38) != *(int *)(lVar10 + 0x38)) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar14 = *plVar9;
      uVar24 = *(undefined4 *)(lVar13 + 0x38);
      uVar25 = *(undefined4 *)(lVar10 + 0x38);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_087a6c80;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,1);
LAB_087a6c80:
      uVar5 = (*(code *)*puVar8)(plVar9,0x30006,uVar24,uVar25,unaff_w22,unaff_w21);
      uVar4 = uVar4 | uVar5;
    }
    if (*(float *)(lVar13 + 0x3c) != *(float *)(lVar10 + 0x3c)) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar14 = *plVar9;
      uVar25 = *(undefined4 *)(lVar13 + 0x3c);
      uVar24 = *(undefined4 *)(lVar10 + 0x3c);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_087a6d2c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,0);
LAB_087a6d2c:
      uVar5 = (*(code *)*puVar8)(uVar25,uVar24,plVar9,0x30007,unaff_w22,unaff_w21);
      uVar4 = uVar4 | uVar5;
    }
    if (*(int *)(lVar13 + 0x40) != *(int *)(lVar10 + 0x40)) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar14 = *plVar9;
      uVar24 = *(undefined4 *)(lVar13 + 0x40);
      uVar25 = *(undefined4 *)(lVar10 + 0x40);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_087a6ddc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,1);
LAB_087a6ddc:
      uVar5 = (*(code *)*puVar8)(plVar9,0x30008,uVar24,uVar25,unaff_w22,unaff_w21);
      uVar4 = uVar4 | uVar5;
    }
    if (*(int *)(lVar13 + 0x44) != *(int *)(lVar10 + 0x44)) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar14 = *plVar9;
      uVar24 = *(undefined4 *)(lVar13 + 0x44);
      uVar25 = *(undefined4 *)(lVar10 + 0x44);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_087a6e98;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,4);
LAB_087a6e98:
      uVar5 = (*(code *)*puVar8)(plVar9,0x30009,uVar24,uVar25,unaff_w22,unaff_w21);
      uVar4 = uVar4 | uVar5;
    }
  }
  uVar15 = FUN_05ab5858(in_stack_00000028 + 0x18,*(undefined8 *)(in_stack_00000030 + 0x18),
                        *(undefined8 *)System_Func<MinigameMole,_bool>_TypeInfo);
  puVar3 = System_Action<IWitWebSocketRequest>_TypeInfo;
  if ((uVar15 & 1) == 0) {
    puVar8 = (undefined8 *)
             FUN_05ab564c(in_stack_00000028 + 0x18,
                          *(undefined8 *)System_Action<IWitWebSocketRequest>_TypeInfo);
    puVar11 = (undefined8 *)FUN_05ab564c(in_stack_00000030 + 0x18,*(undefined8 *)puVar3);
    uVar15 = FUN_087d465c(&stack0x000002e0,&stack0x000002c0,0);
    if ((uVar15 & 1) != 0) {
      if (unaff_x19 == 0) goto LAB_087a8340;
      plVar9 = (long *)FUN_087c0130();
      in_stack_00000130 = puVar8[2];
      in_stack_00000128 = puVar8[1];
      in_stack_00000120 = *puVar8;
      in_stack_00000110 = puVar11[2];
      in_stack_00000108 = puVar11[1];
      in_stack_00000100 = *puVar11;
      if (plVar9 == (long *)0x0) goto LAB_087a8340;
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
            goto LAB_087a7008;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,0xb);
LAB_087a7008:
      uVar5 = (*(code *)*puVar12)(plVar9,0x50000,&stack0x000003a0,&stack0x00000380,unaff_w22,
                                  unaff_w21);
      uVar4 = uVar4 | uVar5;
      uStack000000000000003c = uStack000000000000003c | uVar5 & 1;
    }
    uVar15 = FUN_087d49ac(puVar8[3],puVar8[4],puVar11[3],puVar11[4],0);
    if ((uVar15 & 1) != 0) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      uVar17 = puVar11[3];
      uVar1 = puVar11[4];
      lVar13 = *plVar9;
      uVar18 = puVar8[3];
      uVar2 = puVar8[4];
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 9) * 0x10 + 0x138);
            goto LAB_087a70f8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,9);
LAB_087a70f8:
      uVar5 = (*(code *)*puVar12)(plVar9,0x50001,uVar18,uVar2,uVar17,uVar1,uStack0000000000000038,
                                  unaff_w21);
      uVar4 = uVar4 | uVar5;
      uStack000000000000003c = uStack000000000000003c | uVar5 & 1;
    }
    uVar15 = FUN_087d7594(&stack0x00000260,&stack0x00000240,0);
    if ((uVar15 & 1) != 0) {
      if (unaff_x19 == 0) goto LAB_087a8340;
      plVar9 = (long *)FUN_087c0130();
      in_stack_00000128 = puVar8[6];
      in_stack_00000120 = puVar8[5];
      in_stack_00000130 = CONCAT44(in_stack_00000130._4_4_,*(undefined4 *)(puVar8 + 7));
      in_stack_00000108 = puVar11[6];
      in_stack_00000100 = puVar11[5];
      in_stack_00000110 = CONCAT44(in_stack_00000110._4_4_,*(undefined4 *)(puVar11 + 7));
      if (plVar9 == (long *)0x0) goto LAB_087a8340;
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xc) * 0x10 + 0x138);
            goto LAB_087a7244;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,0xc);
LAB_087a7244:
      uVar5 = (*(code *)*puVar12)(plVar9,0x50002,&stack0x000003a0,&stack0x00000380,
                                  uStack0000000000000038,unaff_w21,unaff_x29,puVar12[1]);
      uVar4 = uVar4 | uVar5;
      uStack000000000000003c = uStack000000000000003c | uVar5 & 1;
    }
    in_stack_000001e8 = *(undefined8 *)((long)puVar8 + 0x44);
    in_stack_000001e0 = *(undefined8 *)((long)puVar8 + 0x3c);
    in_stack_000001d0 = *(undefined8 *)((long)puVar11 + 0x4c);
    in_stack_000001c8 = *(undefined8 *)((long)puVar11 + 0x44);
    in_stack_000001c0 = *(undefined8 *)((long)puVar11 + 0x3c);
    uVar15 = FUN_087d78f8(&stack0x000001e0,&stack0x000001c0,0);
    unaff_w22 = uStack0000000000000038;
    if ((uVar15 & 1) != 0) {
      if (unaff_x19 == 0) goto LAB_087a8340;
      plVar9 = (long *)FUN_087c0130();
      in_stack_00000130 = *(undefined8 *)((long)puVar8 + 0x4c);
      in_stack_00000128 = *(undefined8 *)((long)puVar8 + 0x44);
      in_stack_00000120 = *(undefined8 *)((long)puVar8 + 0x3c);
      in_stack_00000110 = *(undefined8 *)((long)puVar11 + 0x4c);
      in_stack_00000108 = *(undefined8 *)((long)puVar11 + 0x44);
      in_stack_00000100 = *(undefined8 *)((long)puVar11 + 0x3c);
      if (plVar9 == (long *)0x0) goto LAB_087a8340;
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      in_stack_00000180 = in_stack_00000100;
      in_stack_00000188 = in_stack_00000108;
      in_stack_00000190 = in_stack_00000110;
      in_stack_000001a0 = in_stack_00000120;
      in_stack_000001a8 = in_stack_00000128;
      in_stack_000001b0 = in_stack_00000130;
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 10) * 0x10 + 0x138);
            goto LAB_087a739c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,10);
LAB_087a739c:
      uVar5 = (*(code *)*puVar8)(plVar9,0x50003,&stack0x000003a0,&stack0x00000380,
                                 uStack0000000000000038,unaff_w21,unaff_x29,puVar8[1]);
      uVar4 = uVar4 | uVar5;
      uStack000000000000003c = uStack000000000000003c | uVar5 & 1;
    }
  }
  uVar15 = FUN_05ab61d0(in_stack_00000028 + 0x28,*(undefined8 *)(in_stack_00000030 + 0x28),
                        *(undefined8 *)System_Func<MinigameNpc,_bool>_TypeInfo);
  puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
  if ((uVar15 & 1) == 0) {
    puVar8 = (undefined8 *)
             FUN_05ab5fc4(in_stack_00000028 + 0x28,
                          *(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    puVar11 = (undefined8 *)FUN_05ab5fc4(in_stack_00000030 + 0x28,*(undefined8 *)puVar3);
    fVar19 = DAT_018afcdc;
    fVar20 = (float)*puVar8 - (float)*puVar11;
    fVar22 = (float)((ulong)*puVar8 >> 0x20) - (float)((ulong)*puVar11 >> 0x20);
    fVar23 = (float)puVar8[1] - (float)puVar11[1];
    fVar21 = (float)((ulong)puVar8[1] >> 0x20) - (float)((ulong)puVar11[1] >> 0x20);
    uVar5 = uStack000000000000003c;
    if (DAT_018afcdc <= fVar21 * fVar21 + fVar23 * fVar23 + fVar20 * fVar20 + fVar22 * fVar22) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      uVar25 = *(undefined4 *)(puVar11 + 1);
      uVar24 = *(undefined4 *)((long)puVar11 + 0xc);
      uVar27 = *(undefined4 *)puVar11;
      uVar26 = *(undefined4 *)((long)puVar11 + 4);
      uVar29 = *(undefined4 *)(puVar8 + 1);
      uVar28 = *(undefined4 *)((long)puVar8 + 0xc);
      lVar13 = *plVar9;
      uVar31 = *(undefined4 *)puVar8;
      uVar30 = *(undefined4 *)((long)puVar8 + 4);
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_087a7510;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,3);
LAB_087a7510:
      uVar6 = (*(code *)*puVar12)(uVar31,uVar30,uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,plVar9,
                                  0x70000,unaff_w22,unaff_w21,unaff_x29,puVar12[1]);
      uVar4 = uVar4 | uVar6;
      uVar5 = uStack000000000000003c | 8;
      if ((uVar6 & 1) == 0) {
        uVar5 = uStack000000000000003c;
      }
    }
    uStack000000000000003c = uVar5;
    in_stack_00000168 = puVar8[3];
    in_stack_00000160 = puVar8[2];
    in_stack_00000178 = puVar8[5];
    in_stack_00000170 = puVar8[4];
    in_stack_00000148 = puVar11[3];
    in_stack_00000140 = puVar11[2];
    in_stack_00000158 = puVar11[5];
    in_stack_00000150 = puVar11[4];
    uVar15 = FUN_087b92b8(&stack0x00000160,&stack0x00000140,0);
    if ((uVar15 & 1) != 0) {
      if (unaff_x19 == 0) goto LAB_087a8340;
      plVar9 = (long *)FUN_087c0130();
      in_stack_00000128 = puVar8[3];
      in_stack_00000120 = puVar8[2];
      in_stack_00000138 = puVar8[5];
      in_stack_00000130 = puVar8[4];
      in_stack_00000108 = puVar11[3];
      in_stack_00000100 = puVar11[2];
      in_stack_00000118 = puVar11[5];
      in_stack_00000110 = puVar11[4];
      if (plVar9 == (long *)0x0) goto LAB_087a8340;
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      in_stack_000000c0 = in_stack_00000100;
      in_stack_000000c8 = in_stack_00000108;
      in_stack_000000d0 = in_stack_00000110;
      in_stack_000000d8 = in_stack_00000118;
      in_stack_000000e0 = in_stack_00000120;
      in_stack_000000e8 = in_stack_00000128;
      in_stack_000000f0 = in_stack_00000130;
      in_stack_000000f8 = in_stack_00000138;
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 5) * 0x10 + 0x138);
            goto LAB_087a762c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,5);
LAB_087a762c:
      uVar5 = (*(code *)*puVar12)(plVar9,0x70001,&stack0x000003a0,&stack0x00000380,unaff_w22,
                                  unaff_w21,unaff_x29,puVar12[1]);
      uVar4 = uVar4 | uVar5;
    }
    uVar15 = FUN_086a1bb4(puVar8[6],*(undefined4 *)(puVar8 + 7),puVar11[6],
                          *(undefined4 *)(puVar11 + 7),0);
    if ((uVar15 & 1) != 0) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      uVar24 = *(undefined4 *)(puVar11 + 7);
      uVar17 = puVar11[6];
      lVar13 = *plVar9;
      uVar25 = *(undefined4 *)(puVar8 + 7);
      uVar18 = puVar8[6];
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xd) * 0x10 + 0x138);
            goto LAB_087a7718;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,0xd);
LAB_087a7718:
      uVar5 = (*(code *)*puVar12)(plVar9,0x70002,uVar18,uVar25,uVar17,uVar24,uStack0000000000000038,
                                  unaff_w21);
      uVar4 = uVar4 | uVar5;
    }
    uVar15 = FUN_086a1bb4(*(undefined8 *)((long)puVar8 + 0x3c),*(undefined4 *)((long)puVar8 + 0x44),
                          *(undefined8 *)((long)puVar11 + 0x3c),
                          *(undefined4 *)((long)puVar11 + 0x44),0);
    if ((uVar15 & 1) != 0) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      uVar24 = *(undefined4 *)((long)puVar11 + 0x44);
      uVar17 = *(undefined8 *)((long)puVar11 + 0x3c);
      lVar13 = *plVar9;
      uVar25 = *(undefined4 *)((long)puVar8 + 0x44);
      uVar18 = *(undefined8 *)((long)puVar8 + 0x3c);
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xd) * 0x10 + 0x138);
            goto LAB_087a77f8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,0xd);
LAB_087a77f8:
      uVar5 = (*(code *)*puVar12)(plVar9,0x70003,uVar18,uVar25,uVar17,uVar24,uStack0000000000000038,
                                  unaff_w21);
      uVar4 = uVar4 | uVar5;
    }
    uVar15 = FUN_086a22cc(puVar8[9],puVar11[9],0);
    if ((uVar15 & 1) != 0) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar13 = *plVar9;
      uVar18 = puVar8[9];
      uVar17 = puVar11[9];
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xe) * 0x10 + 0x138);
            goto LAB_087a78d0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,0xe);
LAB_087a78d0:
      uVar5 = (*(code *)*puVar12)(plVar9,0x70004,uVar18,uVar17,uStack0000000000000038,unaff_w21,
                                  unaff_x29,puVar12[1]);
      uVar4 = uVar4 | uVar5;
    }
    in_stack_000000b0 = *(undefined4 *)(puVar8 + 0xc);
    in_stack_000000a8 = puVar8[0xb];
    in_stack_000000a0 = puVar8[10];
    in_stack_00000090 = *(undefined4 *)(puVar11 + 0xc);
    in_stack_00000088 = puVar11[0xb];
    in_stack_00000080 = puVar11[10];
    uVar15 = FUN_086a25a8(&stack0x000000a0,&stack0x00000080,0);
    if ((uVar15 & 1) != 0) {
      if (unaff_x19 == 0) goto LAB_087a8340;
      plVar9 = (long *)FUN_087c0130();
      in_stack_00000128 = puVar8[0xb];
      in_stack_00000120 = puVar8[10];
      in_stack_00000130 = CONCAT44(in_stack_00000130._4_4_,*(undefined4 *)(puVar8 + 0xc));
      in_stack_00000108 = puVar11[0xb];
      in_stack_00000100 = puVar11[10];
      in_stack_00000110 = CONCAT44(in_stack_00000110._4_4_,*(undefined4 *)(puVar11 + 0xc));
      if (plVar9 == (long *)0x0) goto LAB_087a8340;
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xf) * 0x10 + 0x138);
            goto LAB_087a79ec;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,0xf);
LAB_087a79ec:
      uVar5 = (*(code *)*puVar12)(plVar9,0x70005,&stack0x000003a0,&stack0x00000380,
                                  uStack0000000000000038,unaff_w21,unaff_x29,puVar12[1]);
      uVar4 = uVar4 | uVar5;
    }
    fVar20 = (float)*(undefined8 *)((long)puVar8 + 100) -
             (float)*(undefined8 *)((long)puVar11 + 100);
    fVar22 = (float)((ulong)*(undefined8 *)((long)puVar8 + 100) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 100) >> 0x20);
    fVar23 = (float)*(undefined8 *)((long)puVar8 + 0x6c) -
             (float)*(undefined8 *)((long)puVar11 + 0x6c);
    fVar21 = (float)((ulong)*(undefined8 *)((long)puVar8 + 0x6c) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x6c) >> 0x20);
    uVar5 = uStack000000000000003c;
    if (fVar19 <= fVar21 * fVar21 + fVar23 * fVar23 + fVar20 * fVar20 + fVar22 * fVar22) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      uVar25 = *(undefined4 *)((long)puVar11 + 0x6c);
      uVar24 = *(undefined4 *)(puVar11 + 0xe);
      uVar27 = *(undefined4 *)((long)puVar11 + 100);
      uVar26 = *(undefined4 *)(puVar11 + 0xd);
      uVar29 = *(undefined4 *)((long)puVar8 + 0x6c);
      uVar28 = *(undefined4 *)(puVar8 + 0xe);
      lVar13 = *plVar9;
      uVar31 = *(undefined4 *)((long)puVar8 + 100);
      uVar30 = *(undefined4 *)(puVar8 + 0xd);
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_087a7afc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,3);
LAB_087a7afc:
      uVar6 = (*(code *)*puVar12)(uVar31,uVar30,uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,plVar9,
                                  0x70006,uStack0000000000000038,unaff_w21,unaff_x29,puVar12[1]);
      uVar5 = uStack000000000000003c | 8;
      if ((uVar6 & 1) == 0) {
        uVar5 = uStack000000000000003c;
      }
      uVar4 = uVar4 | uVar6;
    }
    uVar15 = FUN_087d4244(*(undefined8 *)((long)puVar8 + 0x74),*(undefined8 *)((long)puVar11 + 0x74)
                          ,0);
    if ((uVar15 & 1) != 0) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar13 = *plVar9;
      uVar18 = *(undefined8 *)((long)puVar8 + 0x74);
      uVar17 = *(undefined8 *)((long)puVar11 + 0x74);
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_087a7be0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a7be0:
      uVar6 = (*(code *)*puVar12)(plVar9,0x70007,uVar18,uVar17,uStack0000000000000038,unaff_w21,
                                  unaff_x29,puVar12[1]);
      uVar4 = uVar4 | uVar6;
    }
    uVar15 = FUN_087d4244(*(undefined8 *)((long)puVar8 + 0x7c),*(undefined8 *)((long)puVar11 + 0x7c)
                          ,0);
    if ((uVar15 & 1) != 0) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar13 = *plVar9;
      uVar18 = *(undefined8 *)((long)puVar8 + 0x7c);
      uVar17 = *(undefined8 *)((long)puVar11 + 0x7c);
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_087a7c9c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a7c9c:
      uVar6 = (*(code *)*puVar12)(plVar9,0x70008,uVar18,uVar17,uStack0000000000000038,unaff_w21,
                                  unaff_x29,puVar12[1]);
      uVar4 = uVar4 | uVar6;
    }
    fVar20 = (float)*(undefined8 *)((long)puVar8 + 0x84) -
             (float)*(undefined8 *)((long)puVar11 + 0x84);
    fVar22 = (float)((ulong)*(undefined8 *)((long)puVar8 + 0x84) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x84) >> 0x20);
    fVar23 = (float)*(undefined8 *)((long)puVar8 + 0x8c) -
             (float)*(undefined8 *)((long)puVar11 + 0x8c);
    fVar21 = (float)((ulong)*(undefined8 *)((long)puVar8 + 0x8c) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x8c) >> 0x20);
    uVar6 = uVar5;
    if (fVar19 <= fVar21 * fVar21 + fVar23 * fVar23 + fVar20 * fVar20 + fVar22 * fVar22) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      uVar25 = *(undefined4 *)((long)puVar11 + 0x8c);
      uVar24 = *(undefined4 *)(puVar11 + 0x12);
      uVar27 = *(undefined4 *)((long)puVar11 + 0x84);
      uVar26 = *(undefined4 *)(puVar11 + 0x11);
      uVar29 = *(undefined4 *)((long)puVar8 + 0x8c);
      uVar28 = *(undefined4 *)(puVar8 + 0x12);
      lVar13 = *plVar9;
      uVar31 = *(undefined4 *)((long)puVar8 + 0x84);
      uVar30 = *(undefined4 *)(puVar8 + 0x11);
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_087a7d88;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,3);
LAB_087a7d88:
      uVar7 = (*(code *)*puVar12)(uVar31,uVar30,uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,plVar9,
                                  0x70009,uStack0000000000000038,unaff_w21,unaff_x29,puVar12[1]);
      uVar6 = uVar5 | 8;
      if ((uVar7 & 1) == 0) {
        uVar6 = uVar5;
      }
      uVar4 = uVar4 | uVar7;
    }
    fVar20 = (float)*(undefined8 *)((long)puVar8 + 0x94) -
             (float)*(undefined8 *)((long)puVar11 + 0x94);
    fVar22 = (float)((ulong)*(undefined8 *)((long)puVar8 + 0x94) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x94) >> 0x20);
    fVar23 = (float)*(undefined8 *)((long)puVar8 + 0x9c) -
             (float)*(undefined8 *)((long)puVar11 + 0x9c);
    fVar21 = (float)((ulong)*(undefined8 *)((long)puVar8 + 0x9c) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x9c) >> 0x20);
    uVar5 = uVar6;
    if (fVar19 <= fVar21 * fVar21 + fVar23 * fVar23 + fVar20 * fVar20 + fVar22 * fVar22) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      uVar25 = *(undefined4 *)((long)puVar11 + 0x9c);
      uVar24 = *(undefined4 *)(puVar11 + 0x14);
      uVar27 = *(undefined4 *)((long)puVar11 + 0x94);
      uVar26 = *(undefined4 *)(puVar11 + 0x13);
      uVar29 = *(undefined4 *)((long)puVar8 + 0x9c);
      uVar28 = *(undefined4 *)(puVar8 + 0x14);
      lVar13 = *plVar9;
      uVar31 = *(undefined4 *)((long)puVar8 + 0x94);
      uVar30 = *(undefined4 *)(puVar8 + 0x13);
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_087a7e9c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,3);
LAB_087a7e9c:
      uVar7 = (*(code *)*puVar12)(uVar31,uVar30,uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,plVar9,
                                  0x7000a,uStack0000000000000038,unaff_w21,unaff_x29,puVar12[1]);
      uVar5 = uVar6 | 8;
      if ((uVar7 & 1) == 0) {
        uVar5 = uVar6;
      }
      uVar4 = uVar4 | uVar7;
    }
    fVar20 = (float)*(undefined8 *)((long)puVar8 + 0xa4) -
             (float)*(undefined8 *)((long)puVar11 + 0xa4);
    fVar22 = (float)((ulong)*(undefined8 *)((long)puVar8 + 0xa4) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0xa4) >> 0x20);
    fVar23 = (float)*(undefined8 *)((long)puVar8 + 0xac) -
             (float)*(undefined8 *)((long)puVar11 + 0xac);
    fVar21 = (float)((ulong)*(undefined8 *)((long)puVar8 + 0xac) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0xac) >> 0x20);
    uStack000000000000003c = uVar5;
    if (fVar19 <= fVar21 * fVar21 + fVar23 * fVar23 + fVar20 * fVar20 + fVar22 * fVar22) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      uVar25 = *(undefined4 *)((long)puVar11 + 0xac);
      uVar24 = *(undefined4 *)(puVar11 + 0x16);
      uVar27 = *(undefined4 *)((long)puVar11 + 0xa4);
      uVar26 = *(undefined4 *)(puVar11 + 0x15);
      uVar29 = *(undefined4 *)((long)puVar8 + 0xac);
      uVar28 = *(undefined4 *)(puVar8 + 0x16);
      lVar13 = *plVar9;
      uVar31 = *(undefined4 *)((long)puVar8 + 0xa4);
      uVar30 = *(undefined4 *)(puVar8 + 0x15);
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_087a7fb0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,3);
LAB_087a7fb0:
      uVar6 = (*(code *)*puVar12)(uVar31,uVar30,uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,plVar9,
                                  0x7000b,uStack0000000000000038,unaff_w21,unaff_x29,puVar12[1]);
      uStack000000000000003c = uVar5 | 8;
      if ((uVar6 & 1) == 0) {
        uStack000000000000003c = uVar5;
      }
      uVar4 = uVar4 | uVar6;
    }
    uVar15 = FUN_087d4244(*(undefined8 *)((long)puVar8 + 0xb4),*(undefined8 *)((long)puVar11 + 0xb4)
                          ,0);
    if ((uVar15 & 1) != 0) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar13 = *plVar9;
      uVar18 = *(undefined8 *)((long)puVar8 + 0xb4);
      uVar17 = *(undefined8 *)((long)puVar11 + 0xb4);
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_087a8090;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a8090:
      uVar5 = (*(code *)*puVar12)(plVar9,0x7000c,uVar18,uVar17,uStack0000000000000038,unaff_w21,
                                  unaff_x29,puVar12[1]);
      uVar4 = uVar4 | uVar5;
    }
    uVar15 = FUN_087d4244(*(undefined8 *)((long)puVar8 + 0xbc),*(undefined8 *)((long)puVar11 + 0xbc)
                          ,0);
    if ((uVar15 & 1) != 0) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar13 = *plVar9;
      uVar18 = *(undefined8 *)((long)puVar8 + 0xbc);
      uVar17 = *(undefined8 *)((long)puVar11 + 0xbc);
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_087a814c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,2);
LAB_087a814c:
      uVar5 = (*(code *)*puVar12)(plVar9,0x7000d,uVar18,uVar17,uStack0000000000000038,unaff_w21,
                                  unaff_x29,puVar12[1]);
      uVar4 = uVar4 | uVar5;
    }
    if (*(float *)((long)puVar8 + 0xc4) != *(float *)((long)puVar11 + 0xc4)) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar13 = *plVar9;
      uVar25 = *(undefined4 *)((long)puVar8 + 0xc4);
      uVar24 = *(undefined4 *)((long)puVar11 + 0xc4);
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_087a8200;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,0);
LAB_087a8200:
      uVar5 = (*(code *)*puVar12)(uVar25,uVar24,plVar9,0x7000e,uStack0000000000000038,unaff_w21,
                                  unaff_x29,puVar12[1]);
      uVar4 = uVar4 | uVar5;
    }
    if (*(int *)(puVar8 + 0x19) != *(int *)(puVar11 + 0x19)) {
      if ((unaff_x19 == 0) || (plVar9 = (long *)FUN_087c0130(), plVar9 == (long *)0x0))
      goto LAB_087a8340;
      lVar13 = *plVar9;
      uVar24 = *(undefined4 *)(puVar8 + 0x19);
      uVar25 = *(undefined4 *)(puVar11 + 0x19);
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_087a82b8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e86568,4);
LAB_087a82b8:
      uVar5 = (*(code *)*puVar8)(plVar9,0x7000f,uVar24,uVar25,uStack0000000000000038,unaff_w21,
                                 unaff_x29,puVar8[1]);
      uVar4 = uVar4 | uVar5;
    }
  }
  if (uStack000000000000003c != 0) {
    if (unaff_x19 == 0) {
LAB_087a8340:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_087c2b74();
    FUN_087c2b9c();
  }
  return uVar4 & 1;
}


