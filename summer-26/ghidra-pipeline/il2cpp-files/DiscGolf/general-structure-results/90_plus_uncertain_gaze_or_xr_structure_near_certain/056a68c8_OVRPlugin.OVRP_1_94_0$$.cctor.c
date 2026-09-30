/*
FUNCTION_NAME: OVRPlugin.OVRP_1_94_0$$.cctor
ENTRY_POINT: 056a68c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 108
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_94_0___cctor(void)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar22;
  long unaff_x22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined4 uStack000000000000000c;
  
  FUN_02d965b8();
  FUN_02d965b8(
              UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<SliceType>,_SliceType>_TypeInfo
              );
  *(undefined1 *)(unaff_x22 + 0xa4b) = 1;
  puVar6 = PTR_DAT_06a0d5f0;
  puVar5 = PTR_DAT_069fb9c0;
  uVar3 = *(uint *)(unaff_x20 + 0x20);
  uVar4 = *(uint *)(unaff_x20 + 0x40);
  uStack000000000000000c = *(undefined4 *)(unaff_x20 + 0x10);
  uVar22 = *unaff_x21;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar7 = System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo;
  uVar22 = FUN_054f73b4(uVar22,0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar6);
  }
  iVar8 = thunk_FUN_02da28e8(uVar22,0);
  uVar22 = FUN_0540c158(iVar8 * uVar3,0);
  puVar11 = (undefined8 *)FUN_055339fc(uVar22,0);
  puVar12 = (undefined8 *)
            FUN_036ec8d4(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                         *(undefined8 *)puVar7);
  iVar8 = uVar3 - 1;
  if (0 < (int)uVar3) {
    lVar17 = (long)(int)uVar3;
    puVar20 = puVar11;
    do {
      uVar26 = puVar12[1];
      uVar25 = *puVar12;
      uVar24 = puVar12[3];
      uVar22 = puVar12[2];
      lVar17 = lVar17 + -1;
      puVar1 = puVar12 + 4;
      puVar12 = puVar12 + 5;
      puVar20[4] = *puVar1;
      puVar20[1] = uVar26;
      *puVar20 = uVar25;
      puVar20[3] = uVar24;
      puVar20[2] = uVar22;
      puVar20 = puVar20 + 5;
    } while (lVar17 != 0);
  }
  iVar9 = uVar3 + 0x1e;
  if (-1 < iVar8) {
    iVar9 = iVar8;
  }
  lVar17 = *(long *)(puVar5 + 0x50);
  if (*(int *)(*(long *)(puVar5 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = (iVar9 >> 5) + 1;
  uVar23 = (ulong)uVar2;
  uVar22 = FUN_054f73b4(lVar17 + 0x20,0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar6);
  }
  puVar7 = UnityEngine_UIElements_StyleValuePropertyBag<StyleTextShadow,_TextShadow>_TypeInfo;
  iVar9 = thunk_FUN_02da28e8(uVar22,0);
  uVar22 = FUN_0540c158(iVar9 * uVar2,0);
  puVar13 = (undefined4 *)FUN_055339fc(uVar22,0);
  if (-0x20 < iVar8) {
    uVar18 = uVar23 - 1;
    uVar19 = uVar23 + 3 & 0x1fffffffc;
    puVar15 = puVar13;
    uVar27 = _DAT_010ff5e0;
    uVar28 = _UNK_010ff5e8;
    uVar29 = _DAT_010fe1d0;
    uVar30 = _UNK_010fe1d8;
    do {
      if (uVar29 <= uVar18) {
        *puVar15 = 0;
      }
      if (uVar30 <= uVar18) {
        puVar15[1] = 0;
      }
      if (uVar27 <= uVar18) {
        puVar15[2] = 0;
      }
      if (uVar28 <= uVar18) {
        puVar15[3] = 0;
      }
      uVar27 = uVar27 + 4;
      uVar28 = uVar28 + 4;
      uVar29 = uVar29 + 4;
      uVar30 = uVar30 + 4;
      uVar19 = uVar19 - 4;
      puVar15 = puVar15 + 4;
    } while (uVar19 != 0);
  }
  lVar17 = FUN_036ec8c4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                        *(undefined8 *)puVar7);
  if (0 < (int)uVar3) {
    uVar19 = 0;
    do {
      if (*(char *)(lVar17 + uVar19) != '\0') {
        uVar27 = uVar19 >> 3 & 0xffffffc;
        *(uint *)(uVar27 + (long)puVar13) =
             *(uint *)(uVar27 + (long)puVar13) | 1 << (ulong)((uint)uVar19 & 0x1f);
      }
      uVar19 = uVar19 + 1;
    } while (uVar3 != uVar19);
  }
  lVar17 = *(long *)(puVar5 + 0x78);
  if (*(int *)(*(long *)(puVar5 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar7 = System_Collections_Generic_Dictionary<string,_AppContext_SwitchValueState>_TypeInfo;
  uVar22 = FUN_054f73b4(lVar17 + 0x20,0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar6);
  }
  iVar9 = thunk_FUN_02da28e8(uVar22,0);
  uVar22 = FUN_0540c158(iVar9 * uVar4,0);
  puVar14 = (undefined4 *)FUN_055339fc(uVar22,0);
  puVar15 = (undefined4 *)
            FUN_036ec8cc(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                         *(undefined8 *)puVar7);
  uVar19 = (ulong)uVar4;
  puVar21 = puVar14;
  if (0 < (int)uVar4) {
    do {
      uVar19 = uVar19 - 1;
      *puVar21 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar21 = puVar21 + 1;
    } while (uVar19 != 0);
  }
  lVar17 = *(long *)(puVar5 + 0x50);
  iVar10 = *(int *)(unaff_x20 + 0x40) + -1;
  iVar9 = *(int *)(unaff_x20 + 0x40) + 0x1e;
  if (-1 < iVar10) {
    iVar9 = iVar10;
  }
  if (*(int *)(*(long *)(puVar5 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar22 = FUN_054f73b4(lVar17 + 0x20,0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar6);
  }
  iVar10 = thunk_FUN_02da28e8(uVar22,0);
  uVar22 = FUN_0540c158(iVar10 * ((iVar9 >> 5) + 1),0);
  lVar17 = FUN_055339fc(uVar22,0);
  if (-0x20 < iVar8) {
    uVar30 = uVar23 - 1;
    uVar23 = uVar23 + 3 & 0x1fffffffc;
    puVar15 = puVar13;
    uVar19 = _DAT_010ff5e0;
    uVar27 = _UNK_010ff5e8;
    uVar28 = _DAT_010fe1d0;
    uVar29 = _UNK_010fe1d8;
    do {
      if (uVar28 <= uVar30) {
        *puVar15 = 0;
      }
      if (uVar29 <= uVar30) {
        puVar15[1] = 0;
      }
      if (uVar19 <= uVar30) {
        puVar15[2] = 0;
      }
      if (uVar27 <= uVar30) {
        puVar15[3] = 0;
      }
      uVar19 = uVar19 + 4;
      uVar27 = uVar27 + 4;
      uVar28 = uVar28 + 4;
      uVar29 = uVar29 + 4;
      uVar23 = uVar23 - 4;
      puVar15 = puVar15 + 4;
    } while (uVar23 != 0);
  }
  lVar16 = FUN_036ec8c4(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                        *(undefined8 *)
                         UnityEngine_UIElements_StyleValuePropertyBag<StyleTextShadow,_TextShadow>_TypeInfo
                       );
  if (0 < (int)uVar4) {
    uVar23 = 0;
    do {
      if (*(char *)(lVar16 + uVar23) != '\0') {
        uVar19 = uVar23 >> 3 & 0xffffffc;
        *(uint *)(uVar19 + lVar17) = *(uint *)(uVar19 + lVar17) | 1 << (ulong)((uint)uVar23 & 0x1f);
      }
      uVar23 = uVar23 + 1;
    } while (uVar4 != uVar23);
  }
  *(undefined8 **)(unaff_x19 + 2) = puVar11;
  *(undefined4 **)(unaff_x19 + 4) = puVar13;
  unaff_x19[6] = uVar4;
  unaff_x19[7] = 0;
  *unaff_x19 = uStack000000000000000c;
  unaff_x19[1] = uVar3;
  *(undefined4 **)(unaff_x19 + 8) = puVar14;
  *(long *)(unaff_x19 + 10) = lVar17;
  return;
}


