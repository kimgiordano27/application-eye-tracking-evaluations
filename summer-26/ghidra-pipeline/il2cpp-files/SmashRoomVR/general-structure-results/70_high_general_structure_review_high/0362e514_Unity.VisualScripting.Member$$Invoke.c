/*
FUNCTION_NAME: Unity.VisualScripting.Member$$Invoke
ENTRY_POINT: 0362e514
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


long Unity_VisualScripting_Member__Invoke(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  int *piVar25;
  long lVar26;
  uint uVar27;
  long *plVar28;
  uint uVar29;
  long lVar30;
  
  if ((DAT_03ff7280 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_957);
    thunk_FUN_01ad9084(StringLiteral_958);
    thunk_FUN_01ad9084(PTR_DAT_03d7f500);
    thunk_FUN_01ad9084(PTR_DAT_03d7f4d0);
    thunk_FUN_01ad9084(PTR_DAT_03d7f518);
    thunk_FUN_01ad9084(PTR_DAT_03d7f4f8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9a4e0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a4e8);
    DAT_03ff7280 = 1;
  }
  puVar6 = PTR_DAT_03d9a4e0;
  puVar5 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar27 = 0;
    if (param_2 != (long *)0x0) goto LAB_0362e5d8;
LAB_0362e628:
    bVar4 = true;
    uVar23 = (ulong)uVar27;
  }
  else {
    uVar27 = *(uint *)(*(long *)(param_1 + 0x58) + 0x18);
    if (param_2 == (long *)0x0) goto LAB_0362e628;
LAB_0362e5d8:
    lVar22 = *param_2;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)StringLiteral_957) {
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_0362e644;
        }
        uVar23 = uVar23 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar23 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ae9f78(param_2,*(long *)StringLiteral_957,0);
LAB_0362e644:
    uVar23 = (*(code *)*puVar13)(param_2,puVar13[1]);
    uVar23 = uVar23 & 0xffffffff;
    bVar4 = false;
  }
  lVar14 = FUN_01b47fd0(*(undefined8 *)puVar6,uVar23);
  lVar30 = *(long *)(param_1 + 0x88);
  lVar22 = *(long *)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  lVar15 = FUN_0362dc70(param_1);
  lVar16 = FUN_0362dbe8(param_1);
  uVar17 = FUN_0362f0b0(param_1);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar5);
  }
  uVar18 = FUN_0391f968(uVar17,0,0);
  lVar26 = 0;
  if ((uVar18 & 1) != 0) {
    lVar26 = FUN_0362f0b0(param_1);
    if (lVar26 == 0) goto LAB_0362eb54;
    lVar26 = FUN_03902890(lVar26,0);
  }
  puVar6 = PTR_DAT_03d7f500;
  puVar5 = PTR_DAT_03d7f4f8;
  lVar19 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7f4f8);
  FUN_02bd8f38(lVar19,*(undefined8 *)puVar6);
  lVar20 = thunk_FUN_01afaadc(*(undefined8 *)puVar5);
  FUN_02bd8f38(lVar20,*(undefined8 *)puVar6);
  FUN_0362d8d4(param_1,2,lVar19);
  FUN_0362d8d4(param_1,3,lVar20);
  if (lVar22 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = uVar27 == *(uint *)(lVar22 + 0x18);
  }
  if (lVar30 == 0) {
    bVar8 = true;
  }
  else {
    bVar8 = uVar27 != *(uint *)(lVar30 + 0x18);
  }
  if (lVar16 == 0) {
    bVar9 = true;
  }
  else {
    bVar9 = uVar27 != *(uint *)(lVar16 + 0x18);
  }
  if (lVar15 == 0) {
    bVar10 = true;
  }
  else {
    bVar10 = uVar27 != *(uint *)(lVar15 + 0x18);
  }
  if (lVar1 == 0) {
    bVar11 = true;
  }
  else {
    bVar11 = uVar27 != *(uint *)(lVar1 + 0x18);
  }
  if (lVar26 == 0) {
    bVar12 = true;
  }
  else {
    bVar12 = uVar27 != *(uint *)(lVar26 + 0x18);
  }
  if ((lVar19 != 0) && (lVar20 != 0)) {
    if (0 < (int)uVar23) {
      uVar18 = 0;
      uVar2 = *(uint *)(lVar19 + 0x18);
      uVar3 = *(uint *)(lVar20 + 0x18);
      do {
        lVar21 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a4e8);
        FUN_0365abd8(lVar21,0);
        if (lVar14 == 0) goto LAB_0362eb54;
        if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_0362eb50;
        plVar28 = (long *)(lVar14 + uVar18 * 8 + 0x20);
        *plVar28 = lVar21;
        thunk_FUN_01b4f09c(plVar28,lVar21);
        uVar24 = uVar18;
        if (!bVar4) {
          lVar21 = *param_2;
          uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)StringLiteral_958) {
                puVar13 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_0362e8d0;
              }
              uVar24 = uVar24 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar24 != 0);
          }
          puVar13 = (undefined8 *)FUN_01ae9f78(param_2,*(long *)StringLiteral_958,0);
LAB_0362e8d0:
          uVar24 = (*(code *)*puVar13)(param_2,uVar18 & 0xffffffff,puVar13[1]);
        }
        uVar29 = (uint)uVar24;
        if (bVar7) {
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_0362eb50;
          if (lVar22 == 0) goto LAB_0362eb54;
          if (*(uint *)(lVar22 + 0x18) <= uVar29) goto LAB_0362eb50;
          if (*plVar28 == 0) goto LAB_0362eb54;
          lVar21 = lVar22 + (long)(int)uVar29 * 0xc;
          FUN_0365a86c(*(undefined4 *)(lVar21 + 0x20),*(undefined4 *)(lVar21 + 0x24),
                       *(undefined4 *)(lVar21 + 0x28),*plVar28,0);
        }
        if (!bVar8) {
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_0362eb50;
          if (lVar30 == 0) goto LAB_0362eb54;
          if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_0362eb50;
          if (*plVar28 == 0) goto LAB_0362eb54;
          lVar21 = lVar30 + (long)(int)uVar29 * 0x10;
          FUN_0365a8c0(*(undefined4 *)(lVar21 + 0x20),*(undefined4 *)(lVar21 + 0x24),
                       *(undefined4 *)(lVar21 + 0x28),*(undefined4 *)(lVar21 + 0x2c),*plVar28,0);
        }
        if (!bVar9) {
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_0362eb50;
          if (lVar16 == 0) goto LAB_0362eb54;
          if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_0362eb50;
          if (*plVar28 == 0) goto LAB_0362eb54;
          lVar21 = lVar16 + (long)(int)uVar29 * 0xc;
          FUN_0365a924(*(undefined4 *)(lVar21 + 0x20),*(undefined4 *)(lVar21 + 0x24),
                       *(undefined4 *)(lVar21 + 0x28),*plVar28,0);
        }
        if (!bVar10) {
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_0362eb50;
          if (lVar15 == 0) goto LAB_0362eb54;
          if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_0362eb50;
          if (*plVar28 == 0) goto LAB_0362eb54;
          lVar21 = lVar15 + (long)(int)uVar29 * 0x10;
          FUN_0365a988(*(undefined4 *)(lVar21 + 0x20),*(undefined4 *)(lVar21 + 0x24),
                       *(undefined4 *)(lVar21 + 0x28),*(undefined4 *)(lVar21 + 0x2c),*plVar28,0);
        }
        if (!bVar11) {
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_0362eb50;
          if (lVar1 == 0) goto LAB_0362eb54;
          if (*(uint *)(lVar1 + 0x18) <= uVar29) goto LAB_0362eb50;
          if (*plVar28 == 0) goto LAB_0362eb54;
          lVar21 = lVar1 + (long)(int)uVar29 * 8;
          FUN_0365a9e8(*(undefined4 *)(lVar21 + 0x20),*(undefined4 *)(lVar21 + 0x24),*plVar28,0);
        }
        if (!bVar12) {
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_0362eb50;
          if (lVar26 == 0) goto LAB_0362eb54;
          if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_0362eb50;
          if (*plVar28 == 0) goto LAB_0362eb54;
          lVar21 = lVar26 + (long)(int)uVar29 * 8;
          FUN_0365aa44(*(undefined4 *)(lVar21 + 0x20),*(undefined4 *)(lVar21 + 0x24),*plVar28,0);
        }
        if (uVar2 == uVar27) {
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_0362eb50;
          lVar21 = *plVar28;
          FUN_02bd949c(lVar19,uVar24 & 0xffffffff,*(undefined8 *)PTR_DAT_03d7f518);
          if (lVar21 == 0) goto LAB_0362eb54;
          FUN_0365aaa4(lVar21,0);
        }
        if (uVar3 == uVar27) {
          if (*(uint *)(lVar14 + 0x18) <= uVar18) {
LAB_0362eb50:
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          lVar21 = *plVar28;
          FUN_02bd949c(lVar20,uVar24 & 0xffffffff,*(undefined8 *)PTR_DAT_03d7f518);
          if (lVar21 == 0) goto LAB_0362eb54;
          FUN_0365ab08(lVar21,0);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar23);
    }
    return lVar14;
  }
LAB_0362eb54:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


