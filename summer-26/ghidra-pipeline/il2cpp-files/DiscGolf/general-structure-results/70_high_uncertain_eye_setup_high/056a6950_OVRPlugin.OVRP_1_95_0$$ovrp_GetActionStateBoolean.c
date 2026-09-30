/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_GetActionStateBoolean
ENTRY_POINT: 056a6950
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_95_0__ovrp_GetActionStateBoolean(undefined8 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x24;
  int iVar19;
  ulong unaff_x25;
  int iVar20;
  ulong unaff_x26;
  long unaff_x28;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 in_stack_00000008;
  
  uVar7 = FUN_0540c158(param_1,0);
  puVar8 = (undefined8 *)FUN_055339fc(uVar7,0);
  puVar9 = (undefined8 *)
           FUN_036ec8d4(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                        *unaff_x22);
  iVar20 = (int)unaff_x26;
  iVar3 = iVar20 + -1;
  if (0 < iVar20) {
    lVar14 = (long)iVar20;
    puVar17 = puVar8;
    do {
      uVar24 = puVar9[1];
      uVar23 = *puVar9;
      uVar22 = puVar9[3];
      uVar7 = puVar9[2];
      lVar14 = lVar14 + -1;
      puVar1 = puVar9 + 4;
      puVar9 = puVar9 + 5;
      puVar17[4] = *puVar1;
      puVar17[1] = uVar24;
      *puVar17 = uVar23;
      puVar17[3] = uVar22;
      puVar17[2] = uVar7;
      puVar17 = puVar17 + 5;
    } while (lVar14 != 0);
  }
  iVar5 = iVar20 + 0x1e;
  if (-1 < iVar3) {
    iVar5 = iVar3;
  }
  lVar14 = *(long *)(unaff_x28 + 0x50);
  if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = (iVar5 >> 5) + 1;
  uVar21 = (ulong)uVar2;
  uVar7 = FUN_054f73b4(lVar14 + 0x20,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
  puVar4 = UnityEngine_UIElements_StyleValuePropertyBag<StyleTextShadow,_TextShadow>_TypeInfo;
  iVar5 = thunk_FUN_02da28e8(uVar7,0);
  uVar7 = FUN_0540c158(iVar5 * uVar2,0);
  puVar10 = (undefined4 *)FUN_055339fc(uVar7,0);
  if (-0x20 < iVar3) {
    uVar15 = uVar21 - 1;
    uVar16 = uVar21 + 3 & 0x1fffffffc;
    puVar12 = puVar10;
    uVar25 = _DAT_010ff5e0;
    uVar26 = _UNK_010ff5e8;
    uVar27 = _DAT_010fe1d0;
    uVar28 = _UNK_010fe1d8;
    do {
      if (uVar27 <= uVar15) {
        *puVar12 = 0;
      }
      if (uVar28 <= uVar15) {
        puVar12[1] = 0;
      }
      if (uVar25 <= uVar15) {
        puVar12[2] = 0;
      }
      if (uVar26 <= uVar15) {
        puVar12[3] = 0;
      }
      uVar25 = uVar25 + 4;
      uVar26 = uVar26 + 4;
      uVar27 = uVar27 + 4;
      uVar28 = uVar28 + 4;
      uVar16 = uVar16 - 4;
      puVar12 = puVar12 + 4;
    } while (uVar16 != 0);
  }
  lVar14 = FUN_036ec8c4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                        *(undefined8 *)puVar4);
  if (0 < iVar20) {
    uVar16 = 0;
    do {
      if (*(char *)(lVar14 + uVar16) != '\0') {
        uVar25 = uVar16 >> 3 & 0xffffffc;
        *(uint *)(uVar25 + (long)puVar10) =
             *(uint *)(uVar25 + (long)puVar10) | 1 << (ulong)((uint)uVar16 & 0x1f);
      }
      uVar16 = uVar16 + 1;
    } while (unaff_x26 != uVar16);
  }
  lVar14 = *(long *)(unaff_x28 + 0x78);
  if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar4 = System_Collections_Generic_Dictionary<string,_AppContext_SwitchValueState>_TypeInfo;
  uVar7 = FUN_054f73b4(lVar14 + 0x20,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
  iVar5 = thunk_FUN_02da28e8(uVar7,0);
  iVar19 = (int)unaff_x25;
  uVar7 = FUN_0540c158(iVar5 * iVar19,0);
  puVar11 = (undefined4 *)FUN_055339fc(uVar7,0);
  puVar12 = (undefined4 *)
            FUN_036ec8cc(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                         *(undefined8 *)puVar4);
  uVar16 = unaff_x25;
  puVar18 = puVar11;
  if (0 < iVar19) {
    do {
      uVar16 = uVar16 - 1;
      *puVar18 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar18 = puVar18 + 1;
    } while (uVar16 != 0);
  }
  lVar14 = *(long *)(unaff_x28 + 0x50);
  iVar6 = *(int *)(unaff_x20 + 0x40) + -1;
  iVar5 = *(int *)(unaff_x20 + 0x40) + 0x1e;
  if (-1 < iVar6) {
    iVar5 = iVar6;
  }
  if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar7 = FUN_054f73b4(lVar14 + 0x20,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
  iVar6 = thunk_FUN_02da28e8(uVar7,0);
  uVar7 = FUN_0540c158(iVar6 * ((iVar5 >> 5) + 1),0);
  lVar14 = FUN_055339fc(uVar7,0);
  if (-0x20 < iVar3) {
    uVar28 = uVar21 - 1;
    uVar21 = uVar21 + 3 & 0x1fffffffc;
    puVar12 = puVar10;
    uVar16 = _DAT_010ff5e0;
    uVar25 = _UNK_010ff5e8;
    uVar26 = _DAT_010fe1d0;
    uVar27 = _UNK_010fe1d8;
    do {
      if (uVar26 <= uVar28) {
        *puVar12 = 0;
      }
      if (uVar27 <= uVar28) {
        puVar12[1] = 0;
      }
      if (uVar16 <= uVar28) {
        puVar12[2] = 0;
      }
      if (uVar25 <= uVar28) {
        puVar12[3] = 0;
      }
      uVar16 = uVar16 + 4;
      uVar25 = uVar25 + 4;
      uVar26 = uVar26 + 4;
      uVar27 = uVar27 + 4;
      uVar21 = uVar21 - 4;
      puVar12 = puVar12 + 4;
    } while (uVar21 != 0);
  }
  lVar13 = FUN_036ec8c4(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                        *(undefined8 *)
                         UnityEngine_UIElements_StyleValuePropertyBag<StyleTextShadow,_TextShadow>_TypeInfo
                       );
  if (0 < iVar19) {
    uVar21 = 0;
    do {
      if (*(char *)(lVar13 + uVar21) != '\0') {
        uVar16 = uVar21 >> 3 & 0xffffffc;
        *(uint *)(uVar16 + lVar14) = *(uint *)(uVar16 + lVar14) | 1 << (ulong)((uint)uVar21 & 0x1f);
      }
      uVar21 = uVar21 + 1;
    } while (unaff_x25 != uVar21);
  }
  *(undefined8 **)(unaff_x19 + 2) = puVar8;
  *(undefined4 **)(unaff_x19 + 4) = puVar10;
  unaff_x19[6] = iVar19;
  unaff_x19[7] = 0;
  *unaff_x19 = in_stack_00000008._4_4_;
  unaff_x19[1] = iVar20;
  *(undefined4 **)(unaff_x19 + 8) = puVar11;
  *(long *)(unaff_x19 + 10) = lVar14;
  return;
}


