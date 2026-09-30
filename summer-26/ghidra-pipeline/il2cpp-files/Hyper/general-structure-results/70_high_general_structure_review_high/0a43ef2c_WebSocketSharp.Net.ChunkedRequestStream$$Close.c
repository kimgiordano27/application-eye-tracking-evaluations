/*
FUNCTION_NAME: WebSocketSharp.Net.ChunkedRequestStream$$Close
ENTRY_POINT: 0a43ef2c
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


uint WebSocketSharp_Net_ChunkedRequestStream__Close(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long in_x9;
  int *in_x10;
  int *piVar15;
  long in_x11;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 unaff_w22;
  ulong unaff_x23;
  uint unaff_w24;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  long in_stack_00000020;
  long in_stack_00000028;
  uint uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
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
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined4 in_stack_000001d0;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_000001f0;
  
                    /* try { // try from 0a43ef2c to 0a53ef63 has its CatchHandler @ 0a43f020 */
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar7 = (undefined8 *)FUN_04980e68();
      goto LAB_0a43ef60;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar7 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
LAB_0a43ef60:
  uVar4 = (*(code *)*puVar7)();
  uVar4 = unaff_w24 | uVar4;
  if (((unaff_x23 & 1) == 0) &&
     (uVar8 = FUN_0a2e6620(*(undefined8 *)(unaff_x27 + 0xa4),*(undefined8 *)(unaff_x28 + 0xa4),0),
     (uVar8 & 1) == 0)) {
LAB_0a43f040:
    uVar8 = FUN_0a2e6620(*(undefined8 *)(unaff_x27 + 0xac),*(undefined8 *)(unaff_x28 + 0xac),0);
    if ((uVar8 & 1) != 0) goto LAB_0a43f054;
LAB_0a43f0f4:
    if (*(int *)(unaff_x27 + 0xb4) != *(int *)(unaff_x28 + 0xb4)) goto LAB_0a43f104;
LAB_0a43f1a4:
    uVar8 = FUN_0a2e6620(*(undefined8 *)(unaff_x27 + 0xb8),*(undefined8 *)(unaff_x28 + 0xb8),0);
    if ((uVar8 & 1) != 0) goto LAB_0a43f1b8;
LAB_0a43f258:
    uVar8 = FUN_0a2e6620(*(undefined8 *)(unaff_x27 + 0xc0),*(undefined8 *)(unaff_x28 + 0xc0),0);
    if ((uVar8 & 1) != 0) goto LAB_0a43f26c;
LAB_0a43f30c:
    uVar8 = FUN_0a2e6620(*(undefined8 *)(unaff_x27 + 200),*(undefined8 *)(unaff_x28 + 200),0);
    if ((uVar8 & 1) != 0) goto LAB_0a43f320;
LAB_0a43f3c0:
    uVar8 = FUN_076487e8(in_stack_00000020 + 0x10,*(undefined8 *)(in_stack_00000028 + 0x10),
                         *(undefined8 *)PTR_DAT_0acf1e28);
    if ((uVar8 & 1) == 0) goto LAB_0a43f3e4;
LAB_0a43fba8:
    uVar8 = FUN_07648ce4(in_stack_00000020 + 0x18,*(undefined8 *)(in_stack_00000028 + 0x18),
                         *(undefined8 *)PTR_DAT_0acf1e18);
    if ((uVar8 & 1) == 0) goto LAB_0a43fbcc;
LAB_0a440054:
    uVar8 = FUN_076496c8(in_stack_00000020 + 0x28,*(undefined8 *)(in_stack_00000028 + 0x28),
                         *(undefined8 *)PTR_DAT_0acf1e20);
    if ((uVar8 & 1) != 0) goto LAB_0a440eb8;
  }
  else {
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar16 = *(undefined8 *)(unaff_x27 + 0xa4);
    uVar17 = *(undefined8 *)(unaff_x28 + 0xa4);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_0a43f014;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43f014:
    uVar5 = (*(code *)*puVar7)(plVar9,unaff_w26 + 0x19,uVar16,uVar17,unaff_w22,
                               uStack0000000000000034,in_stack_00000038,puVar7[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43f040;
LAB_0a43f054:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar16 = *(undefined8 *)(unaff_x27 + 0xac);
    uVar17 = *(undefined8 *)(unaff_x28 + 0xac);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_0a43f0c8;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43f0c8:
    uVar5 = (*(code *)*puVar7)(plVar9,unaff_w26 + 0x1a,uVar16,uVar17,unaff_w22,
                               uStack0000000000000034,in_stack_00000038,puVar7[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43f0f4;
LAB_0a43f104:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar22 = *(undefined4 *)(unaff_x27 + 0xb4);
    uVar23 = *(undefined4 *)(unaff_x28 + 0xb4);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
          goto LAB_0a43f178;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43f178:
    uVar5 = (*(code *)*puVar7)(plVar9,unaff_w26 + 0x1b,uVar22,uVar23,unaff_w22,
                               uStack0000000000000034,in_stack_00000038,puVar7[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43f1a4;
LAB_0a43f1b8:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar16 = *(undefined8 *)(unaff_x27 + 0xb8);
    uVar17 = *(undefined8 *)(unaff_x28 + 0xb8);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_0a43f22c;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43f22c:
    uVar5 = (*(code *)*puVar7)(plVar9,unaff_w26 + 0x1c,uVar16,uVar17,unaff_w22,
                               uStack0000000000000034,in_stack_00000038,puVar7[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43f258;
LAB_0a43f26c:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar16 = *(undefined8 *)(unaff_x27 + 0xc0);
    uVar17 = *(undefined8 *)(unaff_x28 + 0xc0);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_0a43f2e0;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43f2e0:
    uVar5 = (*(code *)*puVar7)(plVar9,unaff_w26 + 0x1d,uVar16,uVar17,unaff_w22,
                               uStack0000000000000034,in_stack_00000038,puVar7[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43f30c;
LAB_0a43f320:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar16 = *(undefined8 *)(unaff_x27 + 200);
    uVar17 = *(undefined8 *)(unaff_x28 + 200);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_0a43f394;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43f394:
    uVar5 = (*(code *)*puVar7)(plVar9,unaff_w26 + 0x1e,uVar16,uVar17,unaff_w22,
                               uStack0000000000000034,in_stack_00000038,puVar7[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43f3c0;
LAB_0a43f3e4:
    puVar3 = PTR_DAT_0acec298;
    lVar13 = FUN_076485c8(in_stack_00000020 + 0x10,*(undefined8 *)PTR_DAT_0acec298);
    lVar10 = FUN_076485c8(in_stack_00000028 + 0x10,*(undefined8 *)puVar3);
    if (((unaff_x23 & 1) == 0) && (*(int *)(lVar13 + 0x18) == *(int *)(lVar10 + 0x18))) {
LAB_0a43f4cc:
      fVar18 = (float)*(undefined8 *)(lVar13 + 0x1c) - (float)*(undefined8 *)(lVar10 + 0x1c);
      fVar19 = (float)((ulong)*(undefined8 *)(lVar13 + 0x1c) >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar10 + 0x1c) >> 0x20);
      fVar20 = (float)*(undefined8 *)(lVar13 + 0x24) - (float)*(undefined8 *)(lVar10 + 0x24);
      fVar21 = (float)((ulong)*(undefined8 *)(lVar13 + 0x24) >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar10 + 0x24) >> 0x20);
      if (DAT_01df45a8 <= fVar21 * fVar21 + fVar20 * fVar20 + fVar18 * fVar18 + fVar19 * fVar19)
      goto LAB_0a43f510;
LAB_0a43f5ec:
      if (*(int *)(lVar13 + 0x2c) != *(int *)(lVar10 + 0x2c)) goto LAB_0a43f5fc;
LAB_0a43f6a4:
      if (*(int *)(lVar13 + 0x30) != *(int *)(lVar10 + 0x30)) goto LAB_0a43f6b4;
LAB_0a43f75c:
      if (*(int *)(lVar13 + 0x34) != *(int *)(lVar10 + 0x34)) goto LAB_0a43f76c;
LAB_0a43f814:
      if (*(int *)(lVar13 + 0x38) != *(int *)(lVar10 + 0x38)) goto LAB_0a43f824;
LAB_0a43f8cc:
      if (*(float *)(lVar13 + 0x3c) != *(float *)(lVar10 + 0x3c)) goto LAB_0a43f8dc;
LAB_0a43f980:
      if (*(int *)(lVar13 + 0x40) != *(int *)(lVar10 + 0x40)) goto LAB_0a43f990;
LAB_0a43fa38:
      if (*(int *)(lVar13 + 0x44) != *(int *)(lVar10 + 0x44)) goto LAB_0a43fa48;
LAB_0a43faf0:
      if (*(int *)(lVar13 + 0x5c) == *(int *)(lVar10 + 0x5c)) goto LAB_0a43fba8;
    }
    else {
      plVar9 = (long *)FUN_0a2c65a4();
      if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar14 = *plVar9;
      uVar22 = *(undefined4 *)(lVar13 + 0x18);
      uVar23 = *(undefined4 *)(lVar10 + 0x18);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_0a43f49c;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43f49c:
      uVar5 = (*(code *)*puVar7)(plVar9,0x30001,uVar22,uVar23,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar7[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f4cc;
LAB_0a43f510:
      plVar9 = (long *)FUN_0a2c65a4();
      if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar14 = *plVar9;
      uVar23 = *(undefined4 *)(lVar10 + 0x24);
      uVar22 = *(undefined4 *)(lVar10 + 0x28);
      uVar25 = *(undefined4 *)(lVar10 + 0x1c);
      uVar24 = *(undefined4 *)(lVar10 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar27 = *(undefined4 *)(lVar13 + 0x24);
      uVar26 = *(undefined4 *)(lVar13 + 0x28);
      uVar29 = *(undefined4 *)(lVar13 + 0x1c);
      uVar28 = *(undefined4 *)(lVar13 + 0x20);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 3) * 0x10 + 0x138);
            goto LAB_0a43f590;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,3);
LAB_0a43f590:
      uVar6 = (*(code *)*puVar7)(uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,uVar23,uVar22,plVar9,
                                 0x30002,unaff_w22,uStack0000000000000034,in_stack_00000038,
                                 puVar7[1]);
      uVar4 = uVar4 | uVar6;
      uVar5 = 8;
      if ((uVar6 & 1) == 0) {
        uVar5 = uStack0000000000000030;
      }
      uStack0000000000000030 = uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f5ec;
LAB_0a43f5fc:
      plVar9 = (long *)FUN_0a2c65a4();
      if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar14 = *plVar9;
      uVar22 = *(undefined4 *)(lVar13 + 0x2c);
      uVar23 = *(undefined4 *)(lVar10 + 0x2c);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_0a43f670;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43f670:
      uVar5 = (*(code *)*puVar7)(plVar9,0x30003,uVar22,uVar23,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar7[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f6a4;
LAB_0a43f6b4:
      plVar9 = (long *)FUN_0a2c65a4();
      if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar14 = *plVar9;
      uVar22 = *(undefined4 *)(lVar13 + 0x30);
      uVar23 = *(undefined4 *)(lVar10 + 0x30);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_0a43f728;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,1);
LAB_0a43f728:
      uVar5 = (*(code *)*puVar7)(plVar9,0x30004,uVar22,uVar23,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar7[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f75c;
LAB_0a43f76c:
      plVar9 = (long *)FUN_0a2c65a4();
      if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar14 = *plVar9;
      uVar22 = *(undefined4 *)(lVar13 + 0x34);
      uVar23 = *(undefined4 *)(lVar10 + 0x34);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_0a43f7e0;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,1);
LAB_0a43f7e0:
      uVar5 = (*(code *)*puVar7)(plVar9,0x30005,uVar22,uVar23,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar7[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f814;
LAB_0a43f824:
      plVar9 = (long *)FUN_0a2c65a4();
      if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar14 = *plVar9;
      uVar22 = *(undefined4 *)(lVar13 + 0x38);
      uVar23 = *(undefined4 *)(lVar10 + 0x38);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_0a43f898;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,1);
LAB_0a43f898:
      uVar5 = (*(code *)*puVar7)(plVar9,0x30006,uVar22,uVar23,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar7[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f8cc;
LAB_0a43f8dc:
      plVar9 = (long *)FUN_0a2c65a4();
      if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar14 = *plVar9;
      uVar22 = *(undefined4 *)(lVar13 + 0x3c);
      uVar23 = *(undefined4 *)(lVar10 + 0x3c);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0a43f94c;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,0);
LAB_0a43f94c:
      uVar5 = (*(code *)*puVar7)(uVar22,uVar23,plVar9,0x30007,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar7[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f980;
LAB_0a43f990:
      plVar9 = (long *)FUN_0a2c65a4();
      if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar14 = *plVar9;
      uVar22 = *(undefined4 *)(lVar13 + 0x40);
      uVar23 = *(undefined4 *)(lVar10 + 0x40);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_0a43fa04;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,1);
LAB_0a43fa04:
      uVar5 = (*(code *)*puVar7)(plVar9,0x30008,uVar22,uVar23,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar7[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43fa38;
LAB_0a43fa48:
      plVar9 = (long *)FUN_0a2c65a4();
      if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar14 = *plVar9;
      uVar22 = *(undefined4 *)(lVar13 + 0x44);
      uVar23 = *(undefined4 *)(lVar10 + 0x44);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_0a43fabc;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43fabc:
      uVar5 = (*(code *)*puVar7)(plVar9,0x30009,uVar22,uVar23,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar7[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43faf0;
    }
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar14 = *plVar9;
    uVar22 = *(undefined4 *)(lVar13 + 0x5c);
    uVar23 = *(undefined4 *)(lVar10 + 0x5c);
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 4) * 0x10 + 0x138);
          goto LAB_0a43fb74;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43fb74:
    uVar5 = (*(code *)*puVar7)(plVar9,0x3000b,uVar22,uVar23,unaff_w22,uStack0000000000000034,
                               in_stack_00000038,puVar7[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43fba8;
LAB_0a43fbcc:
    puVar3 = PTR_DAT_0acec2a0;
    lVar13 = FUN_07648ac4(in_stack_00000020 + 0x18,*(undefined8 *)PTR_DAT_0acec2a0);
    lVar10 = FUN_07648ac4(in_stack_00000028 + 0x18,*(undefined8 *)puVar3);
    if (((unaff_x23 & 1) == 0) &&
       (uVar8 = FUN_0a2e6cc0(&stack0x000002a0,&stack0x00000280,0), (uVar8 & 1) == 0)) {
LAB_0a43fd30:
      uVar8 = FUN_0a2e714c(*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)(lVar13 + 0x20),
                           *(undefined8 *)(lVar10 + 0x18),*(undefined8 *)(lVar10 + 0x20),0);
      if ((uVar8 & 1) != 0) goto LAB_0a43fd44;
LAB_0a43fe10:
      uVar8 = FUN_0a2ead40(&stack0x00000220,&stack0x00000200,0);
      if ((uVar8 & 1) != 0) goto LAB_0a43fe44;
LAB_0a43ff34:
      in_stack_000001a8 = *(undefined8 *)(lVar13 + 0x44);
      in_stack_000001a0 = *(undefined8 *)(lVar13 + 0x3c);
      in_stack_000001b0 = *(undefined8 *)(lVar13 + 0x4c);
      in_stack_00000188 = *(undefined8 *)(lVar10 + 0x44);
      in_stack_00000180 = *(undefined8 *)(lVar10 + 0x3c);
      in_stack_00000190 = *(undefined8 *)(lVar10 + 0x4c);
      uVar8 = FUN_0a2eb3dc(&stack0x000001a0,&stack0x00000180,0);
      if ((uVar8 & 1) == 0) goto LAB_0a440054;
    }
    else {
      plVar9 = (long *)FUN_0a2c65a4();
      if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar14 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
            goto LAB_0a43fcd4;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,0xb);
LAB_0a43fcd4:
      uVar5 = (*(code *)*puVar7)(plVar9,0x50000,&stack0x00000360,&stack0x00000340,unaff_w22,
                                 uStack0000000000000034,in_stack_00000038,puVar7[1]);
      uVar4 = uVar4 | uVar5;
      uStack0000000000000030 = uStack0000000000000030 | uVar5 & 1;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43fd30;
LAB_0a43fd44:
      plVar9 = (long *)FUN_0a2c65a4();
      if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar14 = *plVar9;
      uVar16 = *(undefined8 *)(lVar10 + 0x18);
      uVar1 = *(undefined8 *)(lVar10 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar17 = *(undefined8 *)(lVar13 + 0x18);
      uVar2 = *(undefined8 *)(lVar13 + 0x20);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 9) * 0x10 + 0x138);
            goto LAB_0a43fdb8;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,9);
LAB_0a43fdb8:
      uVar5 = (*(code *)*puVar7)(plVar9,0x50001,uVar17,uVar2,uVar16,uVar1,unaff_w22,
                                 uStack0000000000000034);
      uVar4 = uVar4 | uVar5;
      uStack0000000000000030 = uStack0000000000000030 | uVar5 & 1;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43fe10;
LAB_0a43fe44:
      plVar9 = (long *)FUN_0a2c65a4();
      if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      in_stack_000001e8 = *(undefined8 *)(lVar13 + 0x30);
      in_stack_000001e0 = *(undefined8 *)(lVar13 + 0x28);
      in_stack_000001f0 = *(undefined4 *)(lVar13 + 0x38);
      lVar14 = *plVar9;
      in_stack_000001c8 = *(undefined8 *)(lVar10 + 0x30);
      in_stack_000001c0 = *(undefined8 *)(lVar10 + 0x28);
      in_stack_000001d0 = *(undefined4 *)(lVar10 + 0x38);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0xc) * 0x10 + 0x138);
            goto LAB_0a43fed4;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,0xc);
LAB_0a43fed4:
      uVar5 = (*(code *)*puVar7)(plVar9,0x50002,&stack0x00000360,&stack0x00000340,unaff_w22,
                                 uStack0000000000000034,in_stack_00000038,puVar7[1]);
      uVar4 = uVar4 | uVar5;
      uStack0000000000000030 = uStack0000000000000030 | uVar5 & 1;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43ff34;
    }
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    in_stack_00000168 = *(undefined8 *)(lVar13 + 0x44);
    in_stack_00000160 = *(undefined8 *)(lVar13 + 0x3c);
    in_stack_00000170 = *(undefined8 *)(lVar13 + 0x4c);
    lVar13 = *plVar9;
    in_stack_00000148 = *(undefined8 *)(lVar10 + 0x44);
    in_stack_00000140 = *(undefined8 *)(lVar10 + 0x3c);
    in_stack_00000150 = *(undefined8 *)(lVar10 + 0x4c);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 10) * 0x10 + 0x138);
          goto LAB_0a43fff8;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,10);
LAB_0a43fff8:
    uVar5 = (*(code *)*puVar7)(plVar9,0x50003,&stack0x00000360,&stack0x00000340,unaff_w22,
                               uStack0000000000000034,in_stack_00000038,puVar7[1]);
    uVar4 = uVar4 | uVar5;
    uStack0000000000000030 = uStack0000000000000030 | uVar5 & 1;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440054;
  }
  puVar3 = PTR_DAT_0acec288;
  puVar7 = (undefined8 *)
           System_Threading_Tasks_Task<ValueTuple<bool,_int>>__StartNew
                     (in_stack_00000020 + 0x28,*(undefined8 *)PTR_DAT_0acec288);
  puVar11 = (undefined8 *)
            System_Threading_Tasks_Task<ValueTuple<bool,_int>>__StartNew
                      (in_stack_00000028 + 0x28,*(undefined8 *)puVar3);
  if (((unaff_x23 & 1) != 0) ||
     (fVar18 = (float)*puVar7 - (float)*puVar11,
     fVar19 = (float)((ulong)*puVar7 >> 0x20) - (float)((ulong)*puVar11 >> 0x20),
     fVar20 = (float)puVar7[1] - (float)puVar11[1],
     fVar21 = (float)((ulong)puVar7[1] >> 0x20) - (float)((ulong)puVar11[1] >> 0x20),
     DAT_01df45a8 <= fVar21 * fVar21 + fVar20 * fVar20 + fVar18 * fVar18 + fVar19 * fVar19)) {
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar23 = *(undefined4 *)(puVar11 + 1);
    uVar22 = *(undefined4 *)((long)puVar11 + 0xc);
    uVar25 = *(undefined4 *)puVar11;
    uVar24 = *(undefined4 *)((long)puVar11 + 4);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar27 = *(undefined4 *)(puVar7 + 1);
    uVar26 = *(undefined4 *)((long)puVar7 + 0xc);
    uVar29 = *(undefined4 *)puVar7;
    uVar28 = *(undefined4 *)((long)puVar7 + 4);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto WebSocketSharp_Net_AuthenticationResponse__get_Password;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,3);
WebSocketSharp_Net_AuthenticationResponse__get_Password:
    uVar6 = (*(code *)*puVar12)(uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,uVar23,uVar22,plVar9,
                                0x70000,unaff_w22,uStack0000000000000034,in_stack_00000038,
                                puVar12[1]);
    uVar4 = uVar4 | uVar6;
    uVar5 = uStack0000000000000030 | 8;
    if ((uVar6 & 1) == 0) {
      uVar5 = uStack0000000000000030;
    }
    uStack0000000000000030 = uVar5;
    if ((unaff_x23 & 1) == 0) goto WebSocketSharp_Net_AuthenticationResponse__get_Response;
LAB_0a4401ec:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    in_stack_000000e8 = puVar7[3];
    in_stack_000000e0 = puVar7[2];
    in_stack_000000f8 = puVar7[5];
    in_stack_000000f0 = puVar7[4];
    lVar13 = *plVar9;
    in_stack_000000c8 = puVar11[3];
    in_stack_000000c0 = puVar11[2];
    in_stack_000000d8 = puVar11[5];
    in_stack_000000d0 = puVar11[4];
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 5) * 0x10 + 0x138);
          goto LAB_0a440268;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,5);
LAB_0a440268:
    uVar5 = (*(code *)*puVar12)(plVar9,0x70001,&stack0x00000360,&stack0x00000340,unaff_w22,
                                uStack0000000000000034,in_stack_00000038,puVar12[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a4402ac;
LAB_0a4402c8:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar22 = *(undefined4 *)(puVar11 + 7);
    uVar17 = puVar11[6];
    uVar23 = *(undefined4 *)(puVar7 + 7);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar16 = puVar7[6];
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xd) * 0x10 + 0x138);
          goto LAB_0a440344;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,0xd);
LAB_0a440344:
    uVar5 = (*(code *)*puVar12)(plVar9,0x70002,uVar16,uVar23,uVar17,uVar22,unaff_w22,
                                uStack0000000000000034);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a44038c;
LAB_0a4403a8:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar22 = *(undefined4 *)((long)puVar11 + 0x44);
    uVar17 = *(undefined8 *)((long)puVar11 + 0x3c);
    uVar23 = *(undefined4 *)((long)puVar7 + 0x44);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar16 = *(undefined8 *)((long)puVar7 + 0x3c);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xd) * 0x10 + 0x138);
          goto LAB_0a440424;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,0xd);
LAB_0a440424:
    uVar5 = (*(code *)*puVar12)(plVar9,0x70003,uVar16,uVar23,uVar17,uVar22,unaff_w22,
                                uStack0000000000000034);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a44046c;
LAB_0a440480:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar16 = puVar7[9];
    uVar17 = puVar11[9];
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xe) * 0x10 + 0x138);
          goto LAB_0a4404f4;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,0xe);
LAB_0a4404f4:
    uVar5 = (*(code *)*puVar12)(plVar9,0x70004,uVar16,uVar17,unaff_w22,uStack0000000000000034,
                                in_stack_00000038,puVar12[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440520;
LAB_0a440554:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xf) * 0x10 + 0x138);
          goto LAB_0a4405e0;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,0xf);
LAB_0a4405e0:
    uVar5 = (*(code *)*puVar12)(plVar9,0x70005,&stack0x00000360,&stack0x00000340,unaff_w22,
                                uStack0000000000000034,in_stack_00000038,puVar12[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440630;
LAB_0a440674:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar23 = *(undefined4 *)((long)puVar11 + 0x6c);
    uVar22 = *(undefined4 *)(puVar11 + 0xe);
    uVar25 = *(undefined4 *)((long)puVar11 + 100);
    uVar24 = *(undefined4 *)(puVar11 + 0xd);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar27 = *(undefined4 *)((long)puVar7 + 0x6c);
    uVar26 = *(undefined4 *)(puVar7 + 0xe);
    uVar29 = *(undefined4 *)((long)puVar7 + 100);
    uVar28 = *(undefined4 *)(puVar7 + 0xd);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_0a4406f4;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,3);
LAB_0a4406f4:
    uVar6 = (*(code *)*puVar12)(uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,uVar23,uVar22,plVar9,
                                0x70006,unaff_w22,uStack0000000000000034,in_stack_00000038,
                                puVar12[1]);
    uVar4 = uVar4 | uVar6;
    uVar5 = uStack0000000000000030 | 8;
    if ((uVar6 & 1) == 0) {
      uVar5 = uStack0000000000000030;
    }
    uStack0000000000000030 = uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440748;
LAB_0a44075c:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar16 = *(undefined8 *)((long)puVar7 + 0x74);
    uVar17 = *(undefined8 *)((long)puVar11 + 0x74);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_0a4407d0;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a4407d0:
    uVar5 = (*(code *)*puVar12)(plVar9,0x70007,uVar16,uVar17,unaff_w22,uStack0000000000000034,
                                in_stack_00000038,puVar12[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a4407fc;
LAB_0a440810:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar16 = *(undefined8 *)((long)puVar7 + 0x7c);
    uVar17 = *(undefined8 *)((long)puVar11 + 0x7c);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_0a440884;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a440884:
    uVar5 = (*(code *)*puVar12)(plVar9,0x70008,uVar16,uVar17,unaff_w22,uStack0000000000000034,
                                in_stack_00000038,puVar12[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a4408b0;
LAB_0a4408f4:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar23 = *(undefined4 *)((long)puVar11 + 0x8c);
    uVar22 = *(undefined4 *)(puVar11 + 0x12);
    uVar25 = *(undefined4 *)((long)puVar11 + 0x84);
    uVar24 = *(undefined4 *)(puVar11 + 0x11);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar27 = *(undefined4 *)((long)puVar7 + 0x8c);
    uVar26 = *(undefined4 *)(puVar7 + 0x12);
    uVar29 = *(undefined4 *)((long)puVar7 + 0x84);
    uVar28 = *(undefined4 *)(puVar7 + 0x11);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_0a440974;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,3);
LAB_0a440974:
    uVar6 = (*(code *)*puVar12)(uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,uVar23,uVar22,plVar9,
                                0x70009,unaff_w22,uStack0000000000000034,in_stack_00000038,
                                puVar12[1]);
    uVar4 = uVar4 | uVar6;
    uVar5 = uStack0000000000000030 | 8;
    if ((uVar6 & 1) == 0) {
      uVar5 = uStack0000000000000030;
    }
    uStack0000000000000030 = uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a4409c8;
LAB_0a440a0c:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar23 = *(undefined4 *)((long)puVar11 + 0x9c);
    uVar22 = *(undefined4 *)(puVar11 + 0x14);
    uVar25 = *(undefined4 *)((long)puVar11 + 0x94);
    uVar24 = *(undefined4 *)(puVar11 + 0x13);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar27 = *(undefined4 *)((long)puVar7 + 0x9c);
    uVar26 = *(undefined4 *)(puVar7 + 0x14);
    uVar29 = *(undefined4 *)((long)puVar7 + 0x94);
    uVar28 = *(undefined4 *)(puVar7 + 0x13);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_0a440a8c;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,3);
LAB_0a440a8c:
    uVar6 = (*(code *)*puVar12)(uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,uVar23,uVar22,plVar9,
                                0x7000a,unaff_w22,uStack0000000000000034,in_stack_00000038,
                                puVar12[1]);
    uVar4 = uVar4 | uVar6;
    uVar5 = uStack0000000000000030 | 8;
    if ((uVar6 & 1) == 0) {
      uVar5 = uStack0000000000000030;
    }
    uStack0000000000000030 = uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440ae0;
LAB_0a440b24:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar23 = *(undefined4 *)((long)puVar11 + 0xac);
    uVar22 = *(undefined4 *)(puVar11 + 0x16);
    uVar25 = *(undefined4 *)((long)puVar11 + 0xa4);
    uVar24 = *(undefined4 *)(puVar11 + 0x15);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar27 = *(undefined4 *)((long)puVar7 + 0xac);
    uVar26 = *(undefined4 *)(puVar7 + 0x16);
    uVar29 = *(undefined4 *)((long)puVar7 + 0xa4);
    uVar28 = *(undefined4 *)(puVar7 + 0x15);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_0a440ba4;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,3);
LAB_0a440ba4:
    uVar6 = (*(code *)*puVar12)(uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,uVar23,uVar22,plVar9,
                                0x7000b,unaff_w22,uStack0000000000000034,in_stack_00000038,
                                puVar12[1]);
    uVar4 = uVar4 | uVar6;
    uVar5 = uStack0000000000000030 | 8;
    if ((uVar6 & 1) == 0) {
      uVar5 = uStack0000000000000030;
    }
    uStack0000000000000030 = uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440bf8;
LAB_0a440c0c:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar16 = *(undefined8 *)((long)puVar7 + 0xb4);
    uVar17 = *(undefined8 *)((long)puVar11 + 0xb4);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_0a440c80;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a440c80:
    uVar5 = (*(code *)*puVar12)(plVar9,0x7000c,uVar16,uVar17,unaff_w22,uStack0000000000000034,
                                in_stack_00000038,puVar12[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440cac;
LAB_0a440cc0:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar16 = *(undefined8 *)((long)puVar7 + 0xbc);
    uVar17 = *(undefined8 *)((long)puVar11 + 0xbc);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto FUN_0a440d34;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,2);
FUN_0a440d34:
    uVar5 = (*(code *)*puVar12)(plVar9,0x7000d,uVar16,uVar17,unaff_w22,uStack0000000000000034,
                                in_stack_00000038,puVar12[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440d60;
LAB_0a440d70:
    plVar9 = (long *)FUN_0a2c65a4();
    if (plVar9 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar13 = *plVar9;
    uVar22 = *(undefined4 *)((long)puVar7 + 0xc4);
    uVar23 = *(undefined4 *)((long)puVar11 + 0xc4);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0a440de0;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,0);
LAB_0a440de0:
    uVar5 = (*(code *)*puVar12)(uVar22,uVar23,plVar9,0x7000e,unaff_w22,uStack0000000000000034,
                                in_stack_00000038,puVar12[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440e0c;
  }
  else {
WebSocketSharp_Net_AuthenticationResponse__get_Response:
    in_stack_00000108 = puVar11[3];
    in_stack_00000100 = puVar11[2];
    in_stack_00000118 = puVar11[5];
    in_stack_00000110 = puVar11[4];
    in_stack_00000128 = puVar7[3];
    in_stack_00000120 = puVar7[2];
    in_stack_00000138 = puVar7[5];
    in_stack_00000130 = puVar7[4];
    uVar8 = FUN_0a2a7c08(&stack0x00000120,&stack0x00000100,0);
    if ((uVar8 & 1) != 0) goto LAB_0a4401ec;
LAB_0a4402ac:
    uVar8 = FUN_0a277c98(puVar7[6],*(undefined4 *)(puVar7 + 7),puVar11[6],
                         *(undefined4 *)(puVar11 + 7),0);
    if ((uVar8 & 1) != 0) goto LAB_0a4402c8;
LAB_0a44038c:
    uVar8 = FUN_0a277c98(*(undefined8 *)((long)puVar7 + 0x3c),*(undefined4 *)((long)puVar7 + 0x44),
                         *(undefined8 *)((long)puVar11 + 0x3c),*(undefined4 *)((long)puVar11 + 0x44)
                         ,0);
    if ((uVar8 & 1) != 0) goto LAB_0a4403a8;
LAB_0a44046c:
    uVar8 = FUN_0a2785ac(puVar7[9],puVar11[9],0);
    if ((uVar8 & 1) != 0) goto LAB_0a440480;
LAB_0a440520:
    in_stack_000000a8 = puVar7[0xb];
    in_stack_000000a0 = puVar7[10];
    in_stack_000000b0 = *(undefined4 *)(puVar7 + 0xc);
    in_stack_00000088 = puVar11[0xb];
    in_stack_00000080 = puVar11[10];
    in_stack_00000090 = *(undefined4 *)(puVar11 + 0xc);
    uVar8 = FUN_0a278a94(&stack0x000000a0,&stack0x00000080,0);
    if ((uVar8 & 1) != 0) goto LAB_0a440554;
LAB_0a440630:
    fVar18 = (float)*(undefined8 *)((long)puVar7 + 100) -
             (float)*(undefined8 *)((long)puVar11 + 100);
    fVar19 = (float)((ulong)*(undefined8 *)((long)puVar7 + 100) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 100) >> 0x20);
    fVar20 = (float)*(undefined8 *)((long)puVar7 + 0x6c) -
             (float)*(undefined8 *)((long)puVar11 + 0x6c);
    fVar21 = (float)((ulong)*(undefined8 *)((long)puVar7 + 0x6c) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x6c) >> 0x20);
    if (DAT_01df45a8 <= fVar21 * fVar21 + fVar20 * fVar20 + fVar18 * fVar18 + fVar19 * fVar19)
    goto LAB_0a440674;
LAB_0a440748:
    uVar8 = FUN_0a2e6620(*(undefined8 *)((long)puVar7 + 0x74),*(undefined8 *)((long)puVar11 + 0x74),
                         0);
    if ((uVar8 & 1) != 0) goto LAB_0a44075c;
LAB_0a4407fc:
    uVar8 = FUN_0a2e6620(*(undefined8 *)((long)puVar7 + 0x7c),*(undefined8 *)((long)puVar11 + 0x7c),
                         0);
    if ((uVar8 & 1) != 0) goto LAB_0a440810;
LAB_0a4408b0:
    fVar18 = (float)*(undefined8 *)((long)puVar7 + 0x84) -
             (float)*(undefined8 *)((long)puVar11 + 0x84);
    fVar19 = (float)((ulong)*(undefined8 *)((long)puVar7 + 0x84) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x84) >> 0x20);
    fVar20 = (float)*(undefined8 *)((long)puVar7 + 0x8c) -
             (float)*(undefined8 *)((long)puVar11 + 0x8c);
    fVar21 = (float)((ulong)*(undefined8 *)((long)puVar7 + 0x8c) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x8c) >> 0x20);
    if (DAT_01df45a8 <= fVar21 * fVar21 + fVar20 * fVar20 + fVar18 * fVar18 + fVar19 * fVar19)
    goto LAB_0a4408f4;
LAB_0a4409c8:
    fVar18 = (float)*(undefined8 *)((long)puVar7 + 0x94) -
             (float)*(undefined8 *)((long)puVar11 + 0x94);
    fVar19 = (float)((ulong)*(undefined8 *)((long)puVar7 + 0x94) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x94) >> 0x20);
    fVar20 = (float)*(undefined8 *)((long)puVar7 + 0x9c) -
             (float)*(undefined8 *)((long)puVar11 + 0x9c);
    fVar21 = (float)((ulong)*(undefined8 *)((long)puVar7 + 0x9c) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x9c) >> 0x20);
    if (DAT_01df45a8 <= fVar21 * fVar21 + fVar20 * fVar20 + fVar18 * fVar18 + fVar19 * fVar19)
    goto LAB_0a440a0c;
LAB_0a440ae0:
    fVar18 = (float)*(undefined8 *)((long)puVar7 + 0xa4) -
             (float)*(undefined8 *)((long)puVar11 + 0xa4);
    fVar19 = (float)((ulong)*(undefined8 *)((long)puVar7 + 0xa4) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0xa4) >> 0x20);
    fVar20 = (float)*(undefined8 *)((long)puVar7 + 0xac) -
             (float)*(undefined8 *)((long)puVar11 + 0xac);
    fVar21 = (float)((ulong)*(undefined8 *)((long)puVar7 + 0xac) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0xac) >> 0x20);
    if (DAT_01df45a8 <= fVar21 * fVar21 + fVar20 * fVar20 + fVar18 * fVar18 + fVar19 * fVar19)
    goto LAB_0a440b24;
LAB_0a440bf8:
    uVar8 = FUN_0a2e6620(*(undefined8 *)((long)puVar7 + 0xb4),*(undefined8 *)((long)puVar11 + 0xb4),
                         0);
    if ((uVar8 & 1) != 0) goto LAB_0a440c0c;
LAB_0a440cac:
    uVar8 = FUN_0a2e6620(*(undefined8 *)((long)puVar7 + 0xbc),*(undefined8 *)((long)puVar11 + 0xbc),
                         0);
    if ((uVar8 & 1) != 0) goto LAB_0a440cc0;
LAB_0a440d60:
    if (*(float *)((long)puVar7 + 0xc4) != *(float *)((long)puVar11 + 0xc4)) goto LAB_0a440d70;
LAB_0a440e0c:
    if (*(int *)(puVar7 + 0x19) == *(int *)(puVar11 + 0x19)) goto LAB_0a440eb8;
  }
  plVar9 = (long *)FUN_0a2c65a4();
  if (plVar9 == (long *)0x0) {
WebSocketSharp_Net_AuthenticationBase__get_Realm:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar13 = *plVar9;
  uVar22 = *(undefined4 *)(puVar7 + 0x19);
  uVar23 = *(undefined4 *)(puVar11 + 0x19);
  uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar8 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac45ab8) {
        puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
        goto LAB_0a440e90;
      }
      uVar8 = uVar8 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a440e90:
  uVar5 = (*(code *)*puVar7)(plVar9,0x7000f,uVar22,uVar23,unaff_w22,uStack0000000000000034,
                             in_stack_00000038,puVar7[1]);
  uVar4 = uVar4 | uVar5;
LAB_0a440eb8:
  if (uStack0000000000000030 != 0) {
    FUN_0a2c8da8();
    FUN_0a2c8dc8();
  }
  return uVar4 & 1;
}


