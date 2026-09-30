/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_GetActionStateFloat
ENTRY_POINT: 056a69ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_95_0__ovrp_GetActionStateFloat(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  int iVar13;
  ulong unaff_x25;
  ulong unaff_x26;
  int unaff_w27;
  long unaff_x28;
  long unaff_x29;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  thunk_FUN_02df485c(param_1);
  puVar1 = UnityEngine_UIElements_StyleValuePropertyBag<StyleTextShadow,_TextShadow>_TypeInfo;
  iVar2 = thunk_FUN_02da28e8();
  uVar4 = FUN_0540c158(iVar2 * (int)unaff_x29,0);
  puVar5 = (undefined4 *)FUN_055339fc(uVar4,0);
  if (-0x20 < unaff_w27) {
    uVar10 = unaff_x29 - 1;
    uVar11 = unaff_x29 + 3U & 0x1fffffffc;
    puVar8 = puVar5;
    uVar14 = _DAT_010ff5e0;
    uVar15 = _UNK_010ff5e8;
    uVar16 = _DAT_010fe1d0;
    uVar17 = _UNK_010fe1d8;
    do {
      if (uVar16 <= uVar10) {
        *puVar8 = 0;
      }
      if (uVar17 <= uVar10) {
        puVar8[1] = 0;
      }
      if (uVar14 <= uVar10) {
        puVar8[2] = 0;
      }
      if (uVar15 <= uVar10) {
        puVar8[3] = 0;
      }
      uVar14 = uVar14 + 4;
      uVar15 = uVar15 + 4;
      uVar16 = uVar16 + 4;
      uVar17 = uVar17 + 4;
      uVar11 = uVar11 - 4;
      puVar8 = puVar8 + 4;
    } while (uVar11 != 0);
  }
  lVar6 = FUN_036ec8c4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                       *(undefined8 *)puVar1);
  if (0 < (int)unaff_x26) {
    uVar11 = 0;
    do {
      if (*(char *)(lVar6 + uVar11) != '\0') {
        uVar14 = uVar11 >> 3 & 0xffffffc;
        *(uint *)(uVar14 + (long)puVar5) =
             *(uint *)(uVar14 + (long)puVar5) | 1 << (ulong)((uint)uVar11 & 0x1f);
      }
      uVar11 = uVar11 + 1;
    } while (unaff_x26 != uVar11);
  }
  lVar6 = *(long *)(unaff_x28 + 0x78);
  if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar1 = System_Collections_Generic_Dictionary<string,_AppContext_SwitchValueState>_TypeInfo;
  uVar4 = FUN_054f73b4(lVar6 + 0x20,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
  iVar2 = thunk_FUN_02da28e8(uVar4,0);
  iVar13 = (int)unaff_x25;
  uVar4 = FUN_0540c158(iVar2 * iVar13,0);
  puVar7 = (undefined4 *)FUN_055339fc(uVar4,0);
  puVar8 = (undefined4 *)
           FUN_036ec8cc(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                        *(undefined8 *)puVar1);
  uVar11 = unaff_x25;
  puVar12 = puVar7;
  if (0 < iVar13) {
    do {
      uVar11 = uVar11 - 1;
      *puVar12 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar11 != 0);
  }
  lVar6 = *(long *)(unaff_x28 + 0x50);
  iVar3 = *(int *)(unaff_x20 + 0x40) + -1;
  iVar2 = *(int *)(unaff_x20 + 0x40) + 0x1e;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_054f73b4(lVar6 + 0x20,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
  iVar3 = thunk_FUN_02da28e8(uVar4,0);
  uVar4 = FUN_0540c158(iVar3 * ((iVar2 >> 5) + 1),0);
  lVar6 = FUN_055339fc(uVar4,0);
  if (-0x20 < unaff_w27) {
    uVar10 = unaff_x29 - 1;
    uVar11 = unaff_x29 + 3U & 0x1fffffffc;
    puVar8 = puVar5;
    uVar14 = _DAT_010ff5e0;
    uVar15 = _UNK_010ff5e8;
    uVar16 = _DAT_010fe1d0;
    uVar17 = _UNK_010fe1d8;
    do {
      if (uVar16 <= uVar10) {
        *puVar8 = 0;
      }
      if (uVar17 <= uVar10) {
        puVar8[1] = 0;
      }
      if (uVar14 <= uVar10) {
        puVar8[2] = 0;
      }
      if (uVar15 <= uVar10) {
        puVar8[3] = 0;
      }
      uVar14 = uVar14 + 4;
      uVar15 = uVar15 + 4;
      uVar16 = uVar16 + 4;
      uVar17 = uVar17 + 4;
      uVar11 = uVar11 - 4;
      puVar8 = puVar8 + 4;
    } while (uVar11 != 0);
  }
  lVar9 = FUN_036ec8c4(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                       *(undefined8 *)
                        UnityEngine_UIElements_StyleValuePropertyBag<StyleTextShadow,_TextShadow>_TypeInfo
                      );
  if (0 < iVar13) {
    uVar11 = 0;
    do {
      if (*(char *)(lVar9 + uVar11) != '\0') {
        uVar14 = uVar11 >> 3 & 0xffffffc;
        *(uint *)(uVar14 + lVar6) = *(uint *)(uVar14 + lVar6) | 1 << (ulong)((uint)uVar11 & 0x1f);
      }
      uVar11 = uVar11 + 1;
    } while (unaff_x25 != uVar11);
  }
  *(undefined8 *)(unaff_x19 + 2) = in_stack_00000000;
  *(undefined4 **)(unaff_x19 + 4) = puVar5;
  unaff_x19[6] = iVar13;
  unaff_x19[7] = 0;
  *unaff_x19 = in_stack_00000008._4_4_;
  unaff_x19[1] = (int)unaff_x26;
  *(undefined4 **)(unaff_x19 + 8) = puVar7;
  *(long *)(unaff_x19 + 10) = lVar6;
  return;
}


