/*
FUNCTION_NAME: WebSocketSharp.Net.WebHeaderCollection$$ToByteArray
ENTRY_POINT: 0a43d564
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


uint WebSocketSharp_Net_WebHeaderCollection__ToByteArray(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 unaff_w22;
  ulong unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
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
  
  pcVar15 = (code *)*param_1;
  *(undefined8 *)(unaff_x26 + 0xb4) = *(undefined8 *)(unaff_x26 + 0x34);
  *(undefined8 *)(unaff_x26 + 0xac) = *(undefined8 *)(unaff_x26 + 0x2c);
  *(undefined8 *)(unaff_x26 + 0x94) = *(undefined8 *)(unaff_x26 + 0x14);
  *(undefined8 *)(unaff_x26 + 0x8c) = *(undefined8 *)(unaff_x26 + 0xc);
  uVar4 = (*pcVar15)();
  uVar4 = unaff_w24 | uVar4;
  if ((unaff_x23 & 1) == 0) {
    uVar19 = *(undefined8 *)(unaff_x27 + 0x40);
    uVar20 = *(undefined8 *)(unaff_x28 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar7 = FUN_0a17b398(uVar19,uVar20,0);
    if ((uVar7 & 1) != 0) goto LAB_0a43d5e4;
LAB_0a43d684:
    uVar7 = FUN_0a2ab1dc(*(undefined8 *)(unaff_x27 + 0x48),*(undefined8 *)(unaff_x27 + 0x50),
                         *(undefined8 *)(unaff_x28 + 0x48),*(undefined8 *)(unaff_x28 + 0x50),0);
    if ((uVar7 & 1) != 0) goto LAB_0a43d698;
LAB_0a43d74c:
    if (*(int *)(unaff_x27 + 0x58) != *(int *)(unaff_x28 + 0x58)) goto LAB_0a43d75c;
LAB_0a43d7fc:
    uVar7 = FUN_0a2e6620(*(undefined8 *)(unaff_x27 + 0x5c),*(undefined8 *)(unaff_x28 + 0x5c),0);
    if ((uVar7 & 1) != 0) goto LAB_0a43d810;
LAB_0a43d8b0:
    if (*(int *)(unaff_x27 + 100) != *(int *)(unaff_x28 + 100)) goto LAB_0a43d8c0;
LAB_0a43d960:
    fVar21 = (float)*(undefined8 *)(unaff_x27 + 0x6c) - (float)*(undefined8 *)(unaff_x28 + 0x6c);
    fVar22 = (float)((ulong)*(undefined8 *)(unaff_x27 + 0x6c) >> 0x20) -
             (float)((ulong)*(undefined8 *)(unaff_x28 + 0x6c) >> 0x20);
    fVar23 = (float)*(undefined8 *)(unaff_x27 + 0x74) - (float)*(undefined8 *)(unaff_x28 + 0x74);
    fVar24 = (float)((ulong)*(undefined8 *)(unaff_x27 + 0x74) >> 0x20) -
             (float)((ulong)*(undefined8 *)(unaff_x28 + 0x74) >> 0x20);
    if (DAT_01df45a8 <= fVar24 * fVar24 + fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22)
    goto LAB_0a43d9a4;
LAB_0a43da64:
    if (*(float *)(unaff_x27 + 0x7c) != *(float *)(unaff_x28 + 0x7c)) goto LAB_0a43da74;
WebSocketSharp_Net_HttpBasicIdentity___ctor:
    if (*(int *)(unaff_x27 + 0x80) != *(int *)(unaff_x28 + 0x80)) goto LAB_0a43db28;
LAB_0a43dbc8:
    if (*(int *)(unaff_x27 + 0x84) != *(int *)(unaff_x28 + 0x84)) goto LAB_0a43dbd8;
LAB_0a43dc78:
    uVar7 = FUN_0a2e6620(*(undefined8 *)(unaff_x27 + 0x88),*(undefined8 *)(unaff_x28 + 0x88),0);
    if ((uVar7 & 1) != 0) goto LAB_0a43dc8c;
LAB_0a43dd2c:
    uVar7 = FUN_076482ec(in_stack_00000020 + 8,*(undefined8 *)(in_stack_00000028 + 8),
                         *(undefined8 *)PTR_DAT_0acf1e30);
    if ((uVar7 & 1) == 0) goto LAB_0a43dd50;
LAB_0a43f3c0:
    uVar7 = FUN_076487e8(in_stack_00000020 + 0x10,*(undefined8 *)(in_stack_00000028 + 0x10),
                         *(undefined8 *)PTR_DAT_0acf1e28);
    if ((uVar7 & 1) == 0) goto LAB_0a43f3e4;
LAB_0a43fba8:
    uVar7 = FUN_07648ce4(in_stack_00000020 + 0x18,*(undefined8 *)(in_stack_00000028 + 0x18),
                         *(undefined8 *)PTR_DAT_0acf1e18);
    if ((uVar7 & 1) == 0) goto LAB_0a43fbcc;
LAB_0a440054:
    uVar7 = FUN_076496c8(in_stack_00000020 + 0x28,*(undefined8 *)(in_stack_00000028 + 0x28),
                         *(undefined8 *)PTR_DAT_0acf1e20);
    if ((uVar7 & 1) != 0) goto LAB_0a440eb8;
  }
  else {
LAB_0a43d5e4:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar19 = *(undefined8 *)(unaff_x27 + 0x40);
    uVar20 = *(undefined8 *)(unaff_x28 + 0x40);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar10 + 7) * 0x10 + 0x138);
          goto LAB_0a43d658;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,7);
LAB_0a43d658:
    uVar5 = (*(code *)*puVar9)(plVar8,unaff_w25 + 4,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                               in_stack_00000038,puVar9[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43d684;
LAB_0a43d698:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar19 = *(undefined8 *)(unaff_x28 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x28 + 0x50);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    uVar20 = *(undefined8 *)(unaff_x27 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x27 + 0x50);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar10 + 6) * 0x10 + 0x138);
          goto LAB_0a43d70c;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,6);
LAB_0a43d70c:
    unaff_w25 = 0x10001;
    uVar5 = (*(code *)*puVar9)(plVar8,0x10006,uVar20,uVar2,uVar19,uVar1,unaff_w22,
                               uStack0000000000000034);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43d74c;
LAB_0a43d75c:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar25 = *(undefined4 *)(unaff_x27 + 0x58);
    uVar27 = *(undefined4 *)(unaff_x28 + 0x58);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_0a43d7d0;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43d7d0:
    uVar5 = (*(code *)*puVar9)(plVar8,unaff_w25 + 6,uVar25,uVar27,unaff_w22,uStack0000000000000034,
                               in_stack_00000038,puVar9[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43d7fc;
LAB_0a43d810:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar19 = *(undefined8 *)(unaff_x27 + 0x5c);
    uVar20 = *(undefined8 *)(unaff_x28 + 0x5c);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0a43d884;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43d884:
    uVar5 = (*(code *)*puVar9)(plVar8,unaff_w25 + 7,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                               in_stack_00000038,puVar9[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43d8b0;
LAB_0a43d8c0:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar25 = *(undefined4 *)(unaff_x27 + 100);
    uVar27 = *(undefined4 *)(unaff_x28 + 100);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_0a43d934;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43d934:
    uVar5 = (*(code *)*puVar9)(plVar8,unaff_w25 + 8,uVar25,uVar27,unaff_w22,uStack0000000000000034,
                               in_stack_00000038,puVar9[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43d960;
LAB_0a43d9a4:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar27 = *(undefined4 *)(unaff_x28 + 0x74);
    uVar25 = *(undefined4 *)(unaff_x28 + 0x78);
    uVar30 = *(undefined4 *)(unaff_x28 + 0x6c);
    uVar29 = *(undefined4 *)(unaff_x28 + 0x70);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    uVar32 = *(undefined4 *)(unaff_x27 + 0x74);
    uVar31 = *(undefined4 *)(unaff_x27 + 0x78);
    uVar34 = *(undefined4 *)(unaff_x27 + 0x6c);
    uVar33 = *(undefined4 *)(unaff_x27 + 0x70);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_0a43da20;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,3);
LAB_0a43da20:
    uVar5 = (*(code *)*puVar9)(uVar34,uVar33,uVar32,uVar31,uVar30,uVar29,uVar27,uVar25,plVar8,
                               unaff_w25 + 10,unaff_w22,uStack0000000000000034,in_stack_00000038,
                               puVar9[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43da64;
LAB_0a43da74:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar25 = *(undefined4 *)(unaff_x27 + 0x7c);
    uVar27 = *(undefined4 *)(unaff_x28 + 0x7c);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0a43dae4;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0);
LAB_0a43dae4:
    unaff_w25 = 0x10001;
    uVar5 = (*(code *)*puVar9)(uVar25,uVar27,plVar8,0x1000c,unaff_w22,uStack0000000000000034,
                               in_stack_00000038,puVar9[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto WebSocketSharp_Net_HttpBasicIdentity___ctor;
LAB_0a43db28:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar25 = *(undefined4 *)(unaff_x27 + 0x80);
    uVar27 = *(undefined4 *)(unaff_x28 + 0x80);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto FUN_0a43db9c;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
FUN_0a43db9c:
    uVar5 = (*(code *)*puVar9)(plVar8,unaff_w25 + 0xc,uVar25,uVar27,unaff_w22,uStack0000000000000034
                               ,in_stack_00000038,puVar9[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43dbc8;
LAB_0a43dbd8:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar25 = *(undefined4 *)(unaff_x27 + 0x84);
    uVar27 = *(undefined4 *)(unaff_x28 + 0x84);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_0a43dc4c;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43dc4c:
    uVar5 = (*(code *)*puVar9)(plVar8,unaff_w25 + 0xd,uVar25,uVar27,unaff_w22,uStack0000000000000034
                               ,in_stack_00000038,puVar9[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43dc78;
LAB_0a43dc8c:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar19 = *(undefined8 *)(unaff_x27 + 0x88);
    uVar20 = *(undefined8 *)(unaff_x28 + 0x88);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0a43dd00;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43dd00:
    uVar5 = (*(code *)*puVar9)(plVar8,unaff_w25 + 0xe,uVar19,uVar20,unaff_w22,uStack0000000000000034
                               ,in_stack_00000038,puVar9[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43dd2c;
LAB_0a43dd50:
    puVar3 = PTR_DAT_0acec280;
    piVar10 = (int *)FUN_076480cc(in_stack_00000020 + 8,*(undefined8 *)PTR_DAT_0acec280);
    piVar11 = (int *)FUN_076480cc(in_stack_00000028 + 8,*(undefined8 *)puVar3);
    if (((unaff_x23 & 1) == 0) && (*piVar10 == *piVar11)) {
LAB_0a43de3c:
      if (piVar10[1] != piVar11[1]) goto LAB_0a43de4c;
LAB_0a43deec:
      if (piVar10[2] != piVar11[2]) goto LAB_0a43defc;
LAB_0a43df9c:
      if ((float)piVar10[3] != (float)piVar11[3]) goto LAB_0a43dfac;
LAB_0a43e048:
      if ((float)piVar10[4] != (float)piVar11[4]) goto LAB_0a43e058;
LAB_0a43e0f4:
      if ((float)piVar10[5] != (float)piVar11[5]) goto LAB_0a43e104;
LAB_0a43e1a0:
      if ((float)piVar10[6] != (float)piVar11[6]) goto LAB_0a43e1b0;
LAB_0a43e24c:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 7),*(undefined8 *)(piVar11 + 7),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43e260;
LAB_0a43e300:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 10),*(undefined8 *)(piVar11 + 10),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43e314;
LAB_0a43e3b4:
      if (piVar10[0xc] != piVar11[0xc]) goto LAB_0a43e3c4;
LAB_0a43e464:
      if ((float)piVar10[0xd] != (float)piVar11[0xd]) goto LAB_0a43e474;
LAB_0a43e510:
      if ((float)piVar10[0xe] != (float)piVar11[0xe]) goto LAB_0a43e520;
LAB_0a43e5bc:
      if (piVar10[0xf] != piVar11[0xf]) goto LAB_0a43e5cc;
LAB_0a43e66c:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x10),*(undefined8 *)(piVar11 + 0x10),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43e680;
LAB_0a43e720:
      if (piVar10[0x12] != piVar11[0x12]) goto LAB_0a43e730;
LAB_0a43e7d0:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x13),*(undefined8 *)(piVar11 + 0x13),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43e7e4;
LAB_0a43e884:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x15),*(undefined8 *)(piVar11 + 0x15),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43e898;
LAB_0a43e938:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x17),*(undefined8 *)(piVar11 + 0x17),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43e94c;
LAB_0a43e9ec:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x19),*(undefined8 *)(piVar11 + 0x19),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43ea00;
LAB_0a43eaa0:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x1b),*(undefined8 *)(piVar11 + 0x1b),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43eab4;
LAB_0a43eb54:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x1d),*(undefined8 *)(piVar11 + 0x1d),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43eb68;
LAB_0a43ec08:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x1f),*(undefined8 *)(piVar11 + 0x1f),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43ec1c;
LAB_0a43ecbc:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x21),*(undefined8 *)(piVar11 + 0x21),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43ecd0;
LAB_0a43ed70:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x23),*(undefined8 *)(piVar11 + 0x23),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43ed84;
LAB_0a43ee24:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x25),*(undefined8 *)(piVar11 + 0x25),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43ee38;
LAB_0a43eed8:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x27),*(undefined8 *)(piVar11 + 0x27),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43eeec;
LAB_0a43ef8c:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x29),*(undefined8 *)(piVar11 + 0x29),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43efa0;
LAB_0a43f040:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x2b),*(undefined8 *)(piVar11 + 0x2b),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43f054;
LAB_0a43f0f4:
      if (piVar10[0x2d] != piVar11[0x2d]) goto LAB_0a43f104;
LAB_0a43f1a4:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x2e),*(undefined8 *)(piVar11 + 0x2e),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43f1b8;
LAB_0a43f258:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x30),*(undefined8 *)(piVar11 + 0x30),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43f26c;
LAB_0a43f30c:
      uVar7 = FUN_0a2e6620(*(undefined8 *)(piVar10 + 0x32),*(undefined8 *)(piVar11 + 0x32),0);
      if ((uVar7 & 1) == 0) goto LAB_0a43f3c0;
    }
    else {
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = *piVar10;
      iVar28 = *piVar11;
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto LAB_0a43de0c;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43de0c:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20000,iVar26,iVar28,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      unaff_w25 = 0x10001;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43de3c;
LAB_0a43de4c:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = piVar10[1];
      iVar28 = piVar11[1];
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto WebSocketSharp_Net_HttpDigestIdentity__get_Uri;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
WebSocketSharp_Net_HttpDigestIdentity__get_Uri:
      uVar5 = (*(code *)*puVar9)(plVar8,unaff_w25 + 0x10000,iVar26,iVar28,unaff_w22,
                                 uStack0000000000000034,in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43deec;
LAB_0a43defc:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = piVar10[2];
      iVar28 = piVar11[2];
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto LAB_0a43df70;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43df70:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20002,iVar26,iVar28,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43df9c;
LAB_0a43dfac:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = piVar10[3];
      iVar28 = piVar11[3];
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0a43e01c;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0);
LAB_0a43e01c:
      uVar5 = (*(code *)*puVar9)(iVar26,iVar28,plVar8,0x20003,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e048;
LAB_0a43e058:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = piVar10[4];
      iVar28 = piVar11[4];
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0a43e0c8;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0);
LAB_0a43e0c8:
      uVar5 = (*(code *)*puVar9)(iVar26,iVar28,plVar8,0x20004,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e0f4;
LAB_0a43e104:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = piVar10[5];
      iVar28 = piVar11[5];
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0a43e174;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0);
LAB_0a43e174:
      uVar5 = (*(code *)*puVar9)(iVar26,iVar28,plVar8,0x20005,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e1a0;
LAB_0a43e1b0:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = piVar10[6];
      iVar28 = piVar11[6];
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0a43e220;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0);
LAB_0a43e220:
      uVar5 = (*(code *)*puVar9)(iVar26,iVar28,plVar8,0x20006,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e24c;
LAB_0a43e260:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 7);
      uVar20 = *(undefined8 *)(piVar11 + 7);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43e2d4;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43e2d4:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20007,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e300;
LAB_0a43e314:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 10);
      uVar20 = *(undefined8 *)(piVar11 + 10);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43e388;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43e388:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20009,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e3b4;
LAB_0a43e3c4:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = piVar10[0xc];
      iVar28 = piVar11[0xc];
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto FUN_0a43e438;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
FUN_0a43e438:
      uVar5 = (*(code *)*puVar9)(plVar8,0x2000a,iVar26,iVar28,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e464;
LAB_0a43e474:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = piVar10[0xd];
      iVar28 = piVar11[0xd];
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0a43e4e4;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0);
LAB_0a43e4e4:
      uVar5 = (*(code *)*puVar9)(iVar26,iVar28,plVar8,0x2000b,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e510;
LAB_0a43e520:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = piVar10[0xe];
      iVar28 = piVar11[0xe];
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0a43e590;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0);
LAB_0a43e590:
      uVar5 = (*(code *)*puVar9)(iVar26,iVar28,plVar8,0x2000c,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e5bc;
LAB_0a43e5cc:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = piVar10[0xf];
      iVar28 = piVar11[0xf];
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto LAB_0a43e640;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43e640:
      uVar5 = (*(code *)*puVar9)(plVar8,0x2000d,iVar26,iVar28,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e66c;
LAB_0a43e680:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x10);
      uVar20 = *(undefined8 *)(piVar11 + 0x10);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto WebSocketSharp_Net_ChunkedRequestStream___ctor;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
WebSocketSharp_Net_ChunkedRequestStream___ctor:
      uVar5 = (*(code *)*puVar9)(plVar8,0x2000e,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e720;
LAB_0a43e730:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = piVar10[0x12];
      iVar28 = piVar11[0x12];
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto LAB_0a43e7a4;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43e7a4:
      uVar5 = (*(code *)*puVar9)(plVar8,0x2000f,iVar26,iVar28,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e7d0;
LAB_0a43e7e4:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x13);
      uVar20 = *(undefined8 *)(piVar11 + 0x13);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43e858;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43e858:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20010,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e884;
LAB_0a43e898:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x15);
      uVar20 = *(undefined8 *)(piVar11 + 0x15);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43e90c;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43e90c:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20011,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e938;
LAB_0a43e94c:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x17);
      uVar20 = *(undefined8 *)(piVar11 + 0x17);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43e9c0;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43e9c0:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20012,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43e9ec;
LAB_0a43ea00:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x19);
      uVar20 = *(undefined8 *)(piVar11 + 0x19);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43ea74;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43ea74:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20013,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43eaa0;
LAB_0a43eab4:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x1b);
      uVar20 = *(undefined8 *)(piVar11 + 0x1b);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43eb28;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43eb28:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20014,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43eb54;
LAB_0a43eb68:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x1d);
      uVar20 = *(undefined8 *)(piVar11 + 0x1d);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43ebdc;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43ebdc:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20015,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43ec08;
LAB_0a43ec1c:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x1f);
      uVar20 = *(undefined8 *)(piVar11 + 0x1f);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43ec90;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43ec90:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20016,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43ecbc;
LAB_0a43ecd0:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x21);
      uVar20 = *(undefined8 *)(piVar11 + 0x21);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43ed44;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43ed44:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20017,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43ed70;
LAB_0a43ed84:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x23);
      uVar20 = *(undefined8 *)(piVar11 + 0x23);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43edf8;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43edf8:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20018,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43ee24;
LAB_0a43ee38:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x25);
      uVar20 = *(undefined8 *)(piVar11 + 0x25);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43eeac;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43eeac:
      uVar5 = (*(code *)*puVar9)(plVar8,0x20019,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43eed8;
LAB_0a43eeec:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x27);
      uVar20 = *(undefined8 *)(piVar11 + 0x27);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43ef60;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43ef60:
      uVar5 = (*(code *)*puVar9)(plVar8,0x2001a,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43ef8c;
LAB_0a43efa0:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x29);
      uVar20 = *(undefined8 *)(piVar11 + 0x29);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43f014;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43f014:
      uVar5 = (*(code *)*puVar9)(plVar8,0x2001b,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f040;
LAB_0a43f054:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x2b);
      uVar20 = *(undefined8 *)(piVar11 + 0x2b);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43f0c8;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43f0c8:
      uVar5 = (*(code *)*puVar9)(plVar8,0x2001c,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f0f4;
LAB_0a43f104:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      iVar26 = piVar10[0x2d];
      iVar28 = piVar11[0x2d];
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto LAB_0a43f178;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43f178:
      uVar5 = (*(code *)*puVar9)(plVar8,0x2001d,iVar26,iVar28,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f1a4;
LAB_0a43f1b8:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x2e);
      uVar20 = *(undefined8 *)(piVar11 + 0x2e);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43f22c;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43f22c:
      uVar5 = (*(code *)*puVar9)(plVar8,0x2001e,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f258;
LAB_0a43f26c:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar16 = *plVar8;
      uVar19 = *(undefined8 *)(piVar10 + 0x30);
      uVar20 = *(undefined8 *)(piVar11 + 0x30);
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0a43f2e0;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43f2e0:
      uVar5 = (*(code *)*puVar9)(plVar8,0x2001f,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f30c;
    }
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar19 = *(undefined8 *)(piVar10 + 0x32);
    uVar20 = *(undefined8 *)(piVar11 + 0x32);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0a43f394;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a43f394:
    uVar5 = (*(code *)*puVar9)(plVar8,0x20020,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                               in_stack_00000038,puVar9[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43f3c0;
LAB_0a43f3e4:
    puVar3 = PTR_DAT_0acec298;
    lVar16 = FUN_076485c8(in_stack_00000020 + 0x10,*(undefined8 *)PTR_DAT_0acec298);
    lVar12 = FUN_076485c8(in_stack_00000028 + 0x10,*(undefined8 *)puVar3);
    if (((unaff_x23 & 1) == 0) && (*(int *)(lVar16 + 0x18) == *(int *)(lVar12 + 0x18))) {
LAB_0a43f4cc:
      fVar21 = (float)*(undefined8 *)(lVar16 + 0x1c) - (float)*(undefined8 *)(lVar12 + 0x1c);
      fVar22 = (float)((ulong)*(undefined8 *)(lVar16 + 0x1c) >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar12 + 0x1c) >> 0x20);
      fVar23 = (float)*(undefined8 *)(lVar16 + 0x24) - (float)*(undefined8 *)(lVar12 + 0x24);
      fVar24 = (float)((ulong)*(undefined8 *)(lVar16 + 0x24) >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar12 + 0x24) >> 0x20);
      if (DAT_01df45a8 <= fVar24 * fVar24 + fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22)
      goto LAB_0a43f510;
LAB_0a43f5ec:
      if (*(int *)(lVar16 + 0x2c) != *(int *)(lVar12 + 0x2c)) goto LAB_0a43f5fc;
LAB_0a43f6a4:
      if (*(int *)(lVar16 + 0x30) != *(int *)(lVar12 + 0x30)) goto LAB_0a43f6b4;
LAB_0a43f75c:
      if (*(int *)(lVar16 + 0x34) != *(int *)(lVar12 + 0x34)) goto LAB_0a43f76c;
LAB_0a43f814:
      if (*(int *)(lVar16 + 0x38) != *(int *)(lVar12 + 0x38)) goto LAB_0a43f824;
LAB_0a43f8cc:
      if (*(float *)(lVar16 + 0x3c) != *(float *)(lVar12 + 0x3c)) goto LAB_0a43f8dc;
LAB_0a43f980:
      if (*(int *)(lVar16 + 0x40) != *(int *)(lVar12 + 0x40)) goto LAB_0a43f990;
LAB_0a43fa38:
      if (*(int *)(lVar16 + 0x44) != *(int *)(lVar12 + 0x44)) goto LAB_0a43fa48;
LAB_0a43faf0:
      if (*(int *)(lVar16 + 0x5c) == *(int *)(lVar12 + 0x5c)) goto LAB_0a43fba8;
    }
    else {
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar17 = *plVar8;
      uVar25 = *(undefined4 *)(lVar16 + 0x18);
      uVar27 = *(undefined4 *)(lVar12 + 0x18);
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_0a43f49c;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43f49c:
      uVar5 = (*(code *)*puVar9)(plVar8,0x30001,uVar25,uVar27,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f4cc;
LAB_0a43f510:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar17 = *plVar8;
      uVar27 = *(undefined4 *)(lVar12 + 0x24);
      uVar25 = *(undefined4 *)(lVar12 + 0x28);
      uVar30 = *(undefined4 *)(lVar12 + 0x1c);
      uVar29 = *(undefined4 *)(lVar12 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      uVar32 = *(undefined4 *)(lVar16 + 0x24);
      uVar31 = *(undefined4 *)(lVar16 + 0x28);
      uVar34 = *(undefined4 *)(lVar16 + 0x1c);
      uVar33 = *(undefined4 *)(lVar16 + 0x20);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_0a43f590;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,3);
LAB_0a43f590:
      uVar6 = (*(code *)*puVar9)(uVar34,uVar33,uVar32,uVar31,uVar30,uVar29,uVar27,uVar25,plVar8,
                                 0x30002,unaff_w22,uStack0000000000000034,in_stack_00000038,
                                 puVar9[1]);
      uVar4 = uVar4 | uVar6;
      uVar5 = 8;
      if ((uVar6 & 1) == 0) {
        uVar5 = uStack0000000000000030;
      }
      uStack0000000000000030 = uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f5ec;
LAB_0a43f5fc:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar17 = *plVar8;
      uVar25 = *(undefined4 *)(lVar16 + 0x2c);
      uVar27 = *(undefined4 *)(lVar12 + 0x2c);
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_0a43f670;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43f670:
      uVar5 = (*(code *)*puVar9)(plVar8,0x30003,uVar25,uVar27,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f6a4;
LAB_0a43f6b4:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar17 = *plVar8;
      uVar25 = *(undefined4 *)(lVar16 + 0x30);
      uVar27 = *(undefined4 *)(lVar12 + 0x30);
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0a43f728;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,1);
LAB_0a43f728:
      uVar5 = (*(code *)*puVar9)(plVar8,0x30004,uVar25,uVar27,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f75c;
LAB_0a43f76c:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar17 = *plVar8;
      uVar25 = *(undefined4 *)(lVar16 + 0x34);
      uVar27 = *(undefined4 *)(lVar12 + 0x34);
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0a43f7e0;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,1);
LAB_0a43f7e0:
      uVar5 = (*(code *)*puVar9)(plVar8,0x30005,uVar25,uVar27,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f814;
LAB_0a43f824:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar17 = *plVar8;
      uVar25 = *(undefined4 *)(lVar16 + 0x38);
      uVar27 = *(undefined4 *)(lVar12 + 0x38);
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0a43f898;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,1);
LAB_0a43f898:
      uVar5 = (*(code *)*puVar9)(plVar8,0x30006,uVar25,uVar27,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f8cc;
LAB_0a43f8dc:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar17 = *plVar8;
      uVar25 = *(undefined4 *)(lVar16 + 0x3c);
      uVar27 = *(undefined4 *)(lVar12 + 0x3c);
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0a43f94c;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0);
LAB_0a43f94c:
      uVar5 = (*(code *)*puVar9)(uVar25,uVar27,plVar8,0x30007,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43f980;
LAB_0a43f990:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar17 = *plVar8;
      uVar25 = *(undefined4 *)(lVar16 + 0x40);
      uVar27 = *(undefined4 *)(lVar12 + 0x40);
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0a43fa04;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,1);
LAB_0a43fa04:
      uVar5 = (*(code *)*puVar9)(plVar8,0x30008,uVar25,uVar27,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43fa38;
LAB_0a43fa48:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar17 = *plVar8;
      uVar25 = *(undefined4 *)(lVar16 + 0x44);
      uVar27 = *(undefined4 *)(lVar12 + 0x44);
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_0a43fabc;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43fabc:
      uVar5 = (*(code *)*puVar9)(plVar8,0x30009,uVar25,uVar27,unaff_w22,uStack0000000000000034,
                                 in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43faf0;
    }
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar17 = *plVar8;
    uVar25 = *(undefined4 *)(lVar16 + 0x5c);
    uVar27 = *(undefined4 *)(lVar12 + 0x5c);
    uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_0a43fb74;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a43fb74:
    uVar5 = (*(code *)*puVar9)(plVar8,0x3000b,uVar25,uVar27,unaff_w22,uStack0000000000000034,
                               in_stack_00000038,puVar9[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a43fba8;
LAB_0a43fbcc:
    puVar3 = PTR_DAT_0acec2a0;
    lVar16 = FUN_07648ac4(in_stack_00000020 + 0x18,*(undefined8 *)PTR_DAT_0acec2a0);
    lVar12 = FUN_07648ac4(in_stack_00000028 + 0x18,*(undefined8 *)puVar3);
    if (((unaff_x23 & 1) == 0) &&
       (uVar7 = FUN_0a2e6cc0(&stack0x000002a0,&stack0x00000280,0), (uVar7 & 1) == 0)) {
LAB_0a43fd30:
      uVar7 = FUN_0a2e714c(*(undefined8 *)(lVar16 + 0x18),*(undefined8 *)(lVar16 + 0x20),
                           *(undefined8 *)(lVar12 + 0x18),*(undefined8 *)(lVar12 + 0x20),0);
      if ((uVar7 & 1) != 0) goto LAB_0a43fd44;
LAB_0a43fe10:
      uVar7 = FUN_0a2ead40(&stack0x00000220,&stack0x00000200,0);
      if ((uVar7 & 1) != 0) goto LAB_0a43fe44;
LAB_0a43ff34:
      in_stack_000001a8 = *(undefined8 *)(lVar16 + 0x44);
      in_stack_000001a0 = *(undefined8 *)(lVar16 + 0x3c);
      in_stack_000001b0 = *(undefined8 *)(lVar16 + 0x4c);
      in_stack_00000188 = *(undefined8 *)(lVar12 + 0x44);
      in_stack_00000180 = *(undefined8 *)(lVar12 + 0x3c);
      in_stack_00000190 = *(undefined8 *)(lVar12 + 0x4c);
      uVar7 = FUN_0a2eb3dc(&stack0x000001a0,&stack0x00000180,0);
      if ((uVar7 & 1) == 0) goto LAB_0a440054;
    }
    else {
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar17 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
            goto LAB_0a43fcd4;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0xb);
LAB_0a43fcd4:
      uVar5 = (*(code *)*puVar9)(plVar8,0x50000,&stack0x00000360,&stack0x00000340,unaff_w22,
                                 uStack0000000000000034,in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      uStack0000000000000030 = uStack0000000000000030 | uVar5 & 1;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43fd30;
LAB_0a43fd44:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      lVar17 = *plVar8;
      uVar19 = *(undefined8 *)(lVar12 + 0x18);
      uVar1 = *(undefined8 *)(lVar12 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      uVar20 = *(undefined8 *)(lVar16 + 0x18);
      uVar2 = *(undefined8 *)(lVar16 + 0x20);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar10 + 9) * 0x10 + 0x138);
            goto LAB_0a43fdb8;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,9);
LAB_0a43fdb8:
      uVar5 = (*(code *)*puVar9)(plVar8,0x50001,uVar20,uVar2,uVar19,uVar1,unaff_w22,
                                 uStack0000000000000034);
      uVar4 = uVar4 | uVar5;
      uStack0000000000000030 = uStack0000000000000030 | uVar5 & 1;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43fe10;
LAB_0a43fe44:
      plVar8 = (long *)FUN_0a2c65a4();
      if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
      in_stack_000001e8 = *(undefined8 *)(lVar16 + 0x30);
      in_stack_000001e0 = *(undefined8 *)(lVar16 + 0x28);
      in_stack_000001f0 = *(undefined4 *)(lVar16 + 0x38);
      lVar17 = *plVar8;
      in_stack_000001c8 = *(undefined8 *)(lVar12 + 0x30);
      in_stack_000001c0 = *(undefined8 *)(lVar12 + 0x28);
      in_stack_000001d0 = *(undefined4 *)(lVar12 + 0x38);
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
            goto LAB_0a43fed4;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0xc);
LAB_0a43fed4:
      uVar5 = (*(code *)*puVar9)(plVar8,0x50002,&stack0x00000360,&stack0x00000340,unaff_w22,
                                 uStack0000000000000034,in_stack_00000038,puVar9[1]);
      uVar4 = uVar4 | uVar5;
      uStack0000000000000030 = uStack0000000000000030 | uVar5 & 1;
      if ((unaff_x23 & 1) == 0) goto LAB_0a43ff34;
    }
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    in_stack_00000168 = *(undefined8 *)(lVar16 + 0x44);
    in_stack_00000160 = *(undefined8 *)(lVar16 + 0x3c);
    in_stack_00000170 = *(undefined8 *)(lVar16 + 0x4c);
    lVar16 = *plVar8;
    in_stack_00000148 = *(undefined8 *)(lVar12 + 0x44);
    in_stack_00000140 = *(undefined8 *)(lVar12 + 0x3c);
    in_stack_00000150 = *(undefined8 *)(lVar12 + 0x4c);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar10 + 10) * 0x10 + 0x138);
          goto LAB_0a43fff8;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,10);
LAB_0a43fff8:
    uVar5 = (*(code *)*puVar9)(plVar8,0x50003,&stack0x00000360,&stack0x00000340,unaff_w22,
                               uStack0000000000000034,in_stack_00000038,puVar9[1]);
    uVar4 = uVar4 | uVar5;
    uStack0000000000000030 = uStack0000000000000030 | uVar5 & 1;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440054;
  }
  puVar3 = PTR_DAT_0acec288;
  puVar9 = (undefined8 *)
           System_Threading_Tasks_Task<ValueTuple<bool,_int>>__StartNew
                     (in_stack_00000020 + 0x28,*(undefined8 *)PTR_DAT_0acec288);
  puVar13 = (undefined8 *)
            System_Threading_Tasks_Task<ValueTuple<bool,_int>>__StartNew
                      (in_stack_00000028 + 0x28,*(undefined8 *)puVar3);
  if (((unaff_x23 & 1) != 0) ||
     (fVar21 = (float)*puVar9 - (float)*puVar13,
     fVar22 = (float)((ulong)*puVar9 >> 0x20) - (float)((ulong)*puVar13 >> 0x20),
     fVar23 = (float)puVar9[1] - (float)puVar13[1],
     fVar24 = (float)((ulong)puVar9[1] >> 0x20) - (float)((ulong)puVar13[1] >> 0x20),
     DAT_01df45a8 <= fVar24 * fVar24 + fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22)) {
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar27 = *(undefined4 *)(puVar13 + 1);
    uVar25 = *(undefined4 *)((long)puVar13 + 0xc);
    uVar30 = *(undefined4 *)puVar13;
    uVar29 = *(undefined4 *)((long)puVar13 + 4);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    uVar32 = *(undefined4 *)(puVar9 + 1);
    uVar31 = *(undefined4 *)((long)puVar9 + 0xc);
    uVar34 = *(undefined4 *)puVar9;
    uVar33 = *(undefined4 *)((long)puVar9 + 4);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto WebSocketSharp_Net_AuthenticationResponse__get_Password;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,3);
WebSocketSharp_Net_AuthenticationResponse__get_Password:
    uVar6 = (*(code *)*puVar14)(uVar34,uVar33,uVar32,uVar31,uVar30,uVar29,uVar27,uVar25,plVar8,
                                0x70000,unaff_w22,uStack0000000000000034,in_stack_00000038,
                                puVar14[1]);
    uVar4 = uVar4 | uVar6;
    uVar5 = uStack0000000000000030 | 8;
    if ((uVar6 & 1) == 0) {
      uVar5 = uStack0000000000000030;
    }
    uStack0000000000000030 = uVar5;
    if ((unaff_x23 & 1) == 0) goto WebSocketSharp_Net_AuthenticationResponse__get_Response;
LAB_0a4401ec:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    in_stack_000000e8 = puVar9[3];
    in_stack_000000e0 = puVar9[2];
    in_stack_000000f8 = puVar9[5];
    in_stack_000000f0 = puVar9[4];
    lVar16 = *plVar8;
    in_stack_000000c8 = puVar13[3];
    in_stack_000000c0 = puVar13[2];
    in_stack_000000d8 = puVar13[5];
    in_stack_000000d0 = puVar13[4];
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_0a440268;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,5);
LAB_0a440268:
    uVar5 = (*(code *)*puVar14)(plVar8,0x70001,&stack0x00000360,&stack0x00000340,unaff_w22,
                                uStack0000000000000034,in_stack_00000038,puVar14[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a4402ac;
LAB_0a4402c8:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar25 = *(undefined4 *)(puVar13 + 7);
    uVar20 = puVar13[6];
    uVar27 = *(undefined4 *)(puVar9 + 7);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    uVar19 = puVar9[6];
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
          goto LAB_0a440344;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0xd);
LAB_0a440344:
    uVar5 = (*(code *)*puVar14)(plVar8,0x70002,uVar19,uVar27,uVar20,uVar25,unaff_w22,
                                uStack0000000000000034);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a44038c;
LAB_0a4403a8:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar25 = *(undefined4 *)((long)puVar13 + 0x44);
    uVar20 = *(undefined8 *)((long)puVar13 + 0x3c);
    uVar27 = *(undefined4 *)((long)puVar9 + 0x44);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    uVar19 = *(undefined8 *)((long)puVar9 + 0x3c);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
          goto LAB_0a440424;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0xd);
LAB_0a440424:
    uVar5 = (*(code *)*puVar14)(plVar8,0x70003,uVar19,uVar27,uVar20,uVar25,unaff_w22,
                                uStack0000000000000034);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a44046c;
LAB_0a440480:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar19 = puVar9[9];
    uVar20 = puVar13[9];
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_0a4404f4;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0xe);
LAB_0a4404f4:
    uVar5 = (*(code *)*puVar14)(plVar8,0x70004,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                in_stack_00000038,puVar14[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440520;
LAB_0a440554:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 0xf) * 0x10 + 0x138);
          goto LAB_0a4405e0;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0xf);
LAB_0a4405e0:
    uVar5 = (*(code *)*puVar14)(plVar8,0x70005,&stack0x00000360,&stack0x00000340,unaff_w22,
                                uStack0000000000000034,in_stack_00000038,puVar14[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440630;
LAB_0a440674:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar27 = *(undefined4 *)((long)puVar13 + 0x6c);
    uVar25 = *(undefined4 *)(puVar13 + 0xe);
    uVar30 = *(undefined4 *)((long)puVar13 + 100);
    uVar29 = *(undefined4 *)(puVar13 + 0xd);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    uVar32 = *(undefined4 *)((long)puVar9 + 0x6c);
    uVar31 = *(undefined4 *)(puVar9 + 0xe);
    uVar34 = *(undefined4 *)((long)puVar9 + 100);
    uVar33 = *(undefined4 *)(puVar9 + 0xd);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_0a4406f4;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,3);
LAB_0a4406f4:
    uVar6 = (*(code *)*puVar14)(uVar34,uVar33,uVar32,uVar31,uVar30,uVar29,uVar27,uVar25,plVar8,
                                0x70006,unaff_w22,uStack0000000000000034,in_stack_00000038,
                                puVar14[1]);
    uVar4 = uVar4 | uVar6;
    uVar5 = uStack0000000000000030 | 8;
    if ((uVar6 & 1) == 0) {
      uVar5 = uStack0000000000000030;
    }
    uStack0000000000000030 = uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440748;
LAB_0a44075c:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar19 = *(undefined8 *)((long)puVar9 + 0x74);
    uVar20 = *(undefined8 *)((long)puVar13 + 0x74);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0a4407d0;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a4407d0:
    uVar5 = (*(code *)*puVar14)(plVar8,0x70007,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                in_stack_00000038,puVar14[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a4407fc;
LAB_0a440810:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar19 = *(undefined8 *)((long)puVar9 + 0x7c);
    uVar20 = *(undefined8 *)((long)puVar13 + 0x7c);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0a440884;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a440884:
    uVar5 = (*(code *)*puVar14)(plVar8,0x70008,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                in_stack_00000038,puVar14[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a4408b0;
LAB_0a4408f4:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar27 = *(undefined4 *)((long)puVar13 + 0x8c);
    uVar25 = *(undefined4 *)(puVar13 + 0x12);
    uVar30 = *(undefined4 *)((long)puVar13 + 0x84);
    uVar29 = *(undefined4 *)(puVar13 + 0x11);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    uVar32 = *(undefined4 *)((long)puVar9 + 0x8c);
    uVar31 = *(undefined4 *)(puVar9 + 0x12);
    uVar34 = *(undefined4 *)((long)puVar9 + 0x84);
    uVar33 = *(undefined4 *)(puVar9 + 0x11);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_0a440974;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,3);
LAB_0a440974:
    uVar6 = (*(code *)*puVar14)(uVar34,uVar33,uVar32,uVar31,uVar30,uVar29,uVar27,uVar25,plVar8,
                                0x70009,unaff_w22,uStack0000000000000034,in_stack_00000038,
                                puVar14[1]);
    uVar4 = uVar4 | uVar6;
    uVar5 = uStack0000000000000030 | 8;
    if ((uVar6 & 1) == 0) {
      uVar5 = uStack0000000000000030;
    }
    uStack0000000000000030 = uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a4409c8;
LAB_0a440a0c:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar27 = *(undefined4 *)((long)puVar13 + 0x9c);
    uVar25 = *(undefined4 *)(puVar13 + 0x14);
    uVar30 = *(undefined4 *)((long)puVar13 + 0x94);
    uVar29 = *(undefined4 *)(puVar13 + 0x13);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    uVar32 = *(undefined4 *)((long)puVar9 + 0x9c);
    uVar31 = *(undefined4 *)(puVar9 + 0x14);
    uVar34 = *(undefined4 *)((long)puVar9 + 0x94);
    uVar33 = *(undefined4 *)(puVar9 + 0x13);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_0a440a8c;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,3);
LAB_0a440a8c:
    uVar6 = (*(code *)*puVar14)(uVar34,uVar33,uVar32,uVar31,uVar30,uVar29,uVar27,uVar25,plVar8,
                                0x7000a,unaff_w22,uStack0000000000000034,in_stack_00000038,
                                puVar14[1]);
    uVar4 = uVar4 | uVar6;
    uVar5 = uStack0000000000000030 | 8;
    if ((uVar6 & 1) == 0) {
      uVar5 = uStack0000000000000030;
    }
    uStack0000000000000030 = uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440ae0;
LAB_0a440b24:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar27 = *(undefined4 *)((long)puVar13 + 0xac);
    uVar25 = *(undefined4 *)(puVar13 + 0x16);
    uVar30 = *(undefined4 *)((long)puVar13 + 0xa4);
    uVar29 = *(undefined4 *)(puVar13 + 0x15);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    uVar32 = *(undefined4 *)((long)puVar9 + 0xac);
    uVar31 = *(undefined4 *)(puVar9 + 0x16);
    uVar34 = *(undefined4 *)((long)puVar9 + 0xa4);
    uVar33 = *(undefined4 *)(puVar9 + 0x15);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_0a440ba4;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,3);
LAB_0a440ba4:
    uVar6 = (*(code *)*puVar14)(uVar34,uVar33,uVar32,uVar31,uVar30,uVar29,uVar27,uVar25,plVar8,
                                0x7000b,unaff_w22,uStack0000000000000034,in_stack_00000038,
                                puVar14[1]);
    uVar4 = uVar4 | uVar6;
    uVar5 = uStack0000000000000030 | 8;
    if ((uVar6 & 1) == 0) {
      uVar5 = uStack0000000000000030;
    }
    uStack0000000000000030 = uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440bf8;
LAB_0a440c0c:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar19 = *(undefined8 *)((long)puVar9 + 0xb4);
    uVar20 = *(undefined8 *)((long)puVar13 + 0xb4);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0a440c80;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
LAB_0a440c80:
    uVar5 = (*(code *)*puVar14)(plVar8,0x7000c,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                in_stack_00000038,puVar14[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440cac;
LAB_0a440cc0:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar19 = *(undefined8 *)((long)puVar9 + 0xbc);
    uVar20 = *(undefined8 *)((long)puVar13 + 0xbc);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto FUN_0a440d34;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,2);
FUN_0a440d34:
    uVar5 = (*(code *)*puVar14)(plVar8,0x7000d,uVar19,uVar20,unaff_w22,uStack0000000000000034,
                                in_stack_00000038,puVar14[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440d60;
LAB_0a440d70:
    plVar8 = (long *)FUN_0a2c65a4();
    if (plVar8 == (long *)0x0) goto WebSocketSharp_Net_AuthenticationBase__get_Realm;
    lVar16 = *plVar8;
    uVar25 = *(undefined4 *)((long)puVar9 + 0xc4);
    uVar27 = *(undefined4 *)((long)puVar13 + 0xc4);
    uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0a440de0;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,0);
LAB_0a440de0:
    uVar5 = (*(code *)*puVar14)(uVar25,uVar27,plVar8,0x7000e,unaff_w22,uStack0000000000000034,
                                in_stack_00000038,puVar14[1]);
    uVar4 = uVar4 | uVar5;
    if ((unaff_x23 & 1) == 0) goto LAB_0a440e0c;
  }
  else {
WebSocketSharp_Net_AuthenticationResponse__get_Response:
    in_stack_00000108 = puVar13[3];
    in_stack_00000100 = puVar13[2];
    in_stack_00000118 = puVar13[5];
    in_stack_00000110 = puVar13[4];
    in_stack_00000128 = puVar9[3];
    in_stack_00000120 = puVar9[2];
    in_stack_00000138 = puVar9[5];
    in_stack_00000130 = puVar9[4];
    uVar7 = FUN_0a2a7c08(&stack0x00000120,&stack0x00000100,0);
    if ((uVar7 & 1) != 0) goto LAB_0a4401ec;
LAB_0a4402ac:
    uVar7 = FUN_0a277c98(puVar9[6],*(undefined4 *)(puVar9 + 7),puVar13[6],
                         *(undefined4 *)(puVar13 + 7),0);
    if ((uVar7 & 1) != 0) goto LAB_0a4402c8;
LAB_0a44038c:
    uVar7 = FUN_0a277c98(*(undefined8 *)((long)puVar9 + 0x3c),*(undefined4 *)((long)puVar9 + 0x44),
                         *(undefined8 *)((long)puVar13 + 0x3c),*(undefined4 *)((long)puVar13 + 0x44)
                         ,0);
    if ((uVar7 & 1) != 0) goto LAB_0a4403a8;
LAB_0a44046c:
    uVar7 = FUN_0a2785ac(puVar9[9],puVar13[9],0);
    if ((uVar7 & 1) != 0) goto LAB_0a440480;
LAB_0a440520:
    in_stack_000000a8 = puVar9[0xb];
    in_stack_000000a0 = puVar9[10];
    in_stack_000000b0 = *(undefined4 *)(puVar9 + 0xc);
    in_stack_00000088 = puVar13[0xb];
    in_stack_00000080 = puVar13[10];
    in_stack_00000090 = *(undefined4 *)(puVar13 + 0xc);
    uVar7 = FUN_0a278a94(&stack0x000000a0,&stack0x00000080,0);
    if ((uVar7 & 1) != 0) goto LAB_0a440554;
LAB_0a440630:
    fVar21 = (float)*(undefined8 *)((long)puVar9 + 100) -
             (float)*(undefined8 *)((long)puVar13 + 100);
    fVar22 = (float)((ulong)*(undefined8 *)((long)puVar9 + 100) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar13 + 100) >> 0x20);
    fVar23 = (float)*(undefined8 *)((long)puVar9 + 0x6c) -
             (float)*(undefined8 *)((long)puVar13 + 0x6c);
    fVar24 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0x6c) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar13 + 0x6c) >> 0x20);
    if (DAT_01df45a8 <= fVar24 * fVar24 + fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22)
    goto LAB_0a440674;
LAB_0a440748:
    uVar7 = FUN_0a2e6620(*(undefined8 *)((long)puVar9 + 0x74),*(undefined8 *)((long)puVar13 + 0x74),
                         0);
    if ((uVar7 & 1) != 0) goto LAB_0a44075c;
LAB_0a4407fc:
    uVar7 = FUN_0a2e6620(*(undefined8 *)((long)puVar9 + 0x7c),*(undefined8 *)((long)puVar13 + 0x7c),
                         0);
    if ((uVar7 & 1) != 0) goto LAB_0a440810;
LAB_0a4408b0:
    fVar21 = (float)*(undefined8 *)((long)puVar9 + 0x84) -
             (float)*(undefined8 *)((long)puVar13 + 0x84);
    fVar22 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0x84) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar13 + 0x84) >> 0x20);
    fVar23 = (float)*(undefined8 *)((long)puVar9 + 0x8c) -
             (float)*(undefined8 *)((long)puVar13 + 0x8c);
    fVar24 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0x8c) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar13 + 0x8c) >> 0x20);
    if (DAT_01df45a8 <= fVar24 * fVar24 + fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22)
    goto LAB_0a4408f4;
LAB_0a4409c8:
    fVar21 = (float)*(undefined8 *)((long)puVar9 + 0x94) -
             (float)*(undefined8 *)((long)puVar13 + 0x94);
    fVar22 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0x94) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar13 + 0x94) >> 0x20);
    fVar23 = (float)*(undefined8 *)((long)puVar9 + 0x9c) -
             (float)*(undefined8 *)((long)puVar13 + 0x9c);
    fVar24 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0x9c) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar13 + 0x9c) >> 0x20);
    if (DAT_01df45a8 <= fVar24 * fVar24 + fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22)
    goto LAB_0a440a0c;
LAB_0a440ae0:
    fVar21 = (float)*(undefined8 *)((long)puVar9 + 0xa4) -
             (float)*(undefined8 *)((long)puVar13 + 0xa4);
    fVar22 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0xa4) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar13 + 0xa4) >> 0x20);
    fVar23 = (float)*(undefined8 *)((long)puVar9 + 0xac) -
             (float)*(undefined8 *)((long)puVar13 + 0xac);
    fVar24 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0xac) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar13 + 0xac) >> 0x20);
    if (DAT_01df45a8 <= fVar24 * fVar24 + fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22)
    goto LAB_0a440b24;
LAB_0a440bf8:
    uVar7 = FUN_0a2e6620(*(undefined8 *)((long)puVar9 + 0xb4),*(undefined8 *)((long)puVar13 + 0xb4),
                         0);
    if ((uVar7 & 1) != 0) goto LAB_0a440c0c;
LAB_0a440cac:
    uVar7 = FUN_0a2e6620(*(undefined8 *)((long)puVar9 + 0xbc),*(undefined8 *)((long)puVar13 + 0xbc),
                         0);
    if ((uVar7 & 1) != 0) goto LAB_0a440cc0;
LAB_0a440d60:
    if (*(float *)((long)puVar9 + 0xc4) != *(float *)((long)puVar13 + 0xc4)) goto LAB_0a440d70;
LAB_0a440e0c:
    if (*(int *)(puVar9 + 0x19) == *(int *)(puVar13 + 0x19)) goto LAB_0a440eb8;
  }
  plVar8 = (long *)FUN_0a2c65a4();
  if (plVar8 == (long *)0x0) {
WebSocketSharp_Net_AuthenticationBase__get_Realm:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar16 = *plVar8;
  uVar25 = *(undefined4 *)(puVar9 + 0x19);
  uVar27 = *(undefined4 *)(puVar13 + 0x19);
  uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac45ab8) {
        puVar9 = (undefined8 *)(lVar16 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_0a440e90;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac45ab8,4);
LAB_0a440e90:
  uVar5 = (*(code *)*puVar9)(plVar8,0x7000f,uVar25,uVar27,unaff_w22,uStack0000000000000034,
                             in_stack_00000038,puVar9[1]);
  uVar4 = uVar4 | uVar5;
LAB_0a440eb8:
  if (uStack0000000000000030 != 0) {
    FUN_0a2c8da8();
    FUN_0a2c8dc8();
  }
  return uVar4 & 1;
}


