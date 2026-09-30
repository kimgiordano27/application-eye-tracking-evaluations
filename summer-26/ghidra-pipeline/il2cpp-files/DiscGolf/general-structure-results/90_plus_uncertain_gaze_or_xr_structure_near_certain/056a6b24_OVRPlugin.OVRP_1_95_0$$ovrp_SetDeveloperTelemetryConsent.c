/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 056a6b24
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar10;
  undefined4 *unaff_x22;
  long *unaff_x24;
  int iVar11;
  ulong unaff_x25;
  undefined4 unaff_w26;
  int unaff_w27;
  long unaff_x28;
  long lVar12;
  long unaff_x29;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  puVar10 = *(undefined8 **)(unaff_x21 + 0x788);
  uVar3 = FUN_054f73b4();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
  iVar1 = thunk_FUN_02da28e8(uVar3,0);
  iVar11 = (int)unaff_x25;
  uVar3 = FUN_0540c158(iVar1 * iVar11,0);
  puVar4 = (undefined4 *)FUN_055339fc(uVar3,0);
  puVar5 = (undefined4 *)
           FUN_036ec8cc(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),*puVar10
                       );
  uVar8 = unaff_x25;
  puVar9 = puVar4;
  if (0 < iVar11) {
    do {
      uVar8 = uVar8 - 1;
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar8 != 0);
  }
  lVar12 = *(long *)(unaff_x28 + 0x50);
  iVar2 = *(int *)(unaff_x20 + 0x40) + -1;
  iVar1 = *(int *)(unaff_x20 + 0x40) + 0x1e;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_054f73b4(lVar12 + 0x20,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
  iVar2 = thunk_FUN_02da28e8(uVar3,0);
  uVar3 = FUN_0540c158(iVar2 * ((iVar1 >> 5) + 1),0);
  lVar12 = FUN_055339fc(uVar3,0);
  if (-0x20 < unaff_w27) {
    uVar7 = unaff_x29 - 1;
    uVar8 = unaff_x29 + 3U & 0x1fffffffc;
    puVar5 = unaff_x22;
    uVar13 = _DAT_010ff5e0;
    uVar14 = _UNK_010ff5e8;
    uVar15 = _DAT_010fe1d0;
    uVar16 = _UNK_010fe1d8;
    do {
      if (uVar15 <= uVar7) {
        *puVar5 = 0;
      }
      if (uVar16 <= uVar7) {
        puVar5[1] = 0;
      }
      if (uVar13 <= uVar7) {
        puVar5[2] = 0;
      }
      if (uVar14 <= uVar7) {
        puVar5[3] = 0;
      }
      uVar13 = uVar13 + 4;
      uVar14 = uVar14 + 4;
      uVar15 = uVar15 + 4;
      uVar16 = uVar16 + 4;
      uVar8 = uVar8 - 4;
      puVar5 = puVar5 + 4;
    } while (uVar8 != 0);
  }
  lVar6 = FUN_036ec8c4(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                       *(undefined8 *)
                        UnityEngine_UIElements_StyleValuePropertyBag<StyleTextShadow,_TextShadow>_TypeInfo
                      );
  if (0 < iVar11) {
    uVar8 = 0;
    do {
      if (*(char *)(lVar6 + uVar8) != '\0') {
        uVar13 = uVar8 >> 3 & 0xffffffc;
        *(uint *)(uVar13 + lVar12) = *(uint *)(uVar13 + lVar12) | 1 << (ulong)((uint)uVar8 & 0x1f);
      }
      uVar8 = uVar8 + 1;
    } while (unaff_x25 != uVar8);
  }
  *(undefined8 *)(unaff_x19 + 2) = in_stack_00000000;
  *(undefined4 **)(unaff_x19 + 4) = unaff_x22;
  unaff_x19[6] = iVar11;
  unaff_x19[7] = 0;
  *unaff_x19 = in_stack_00000008._4_4_;
  unaff_x19[1] = unaff_w26;
  *(undefined4 **)(unaff_x19 + 8) = puVar4;
  *(long *)(unaff_x19 + 10) = lVar12;
  return;
}


