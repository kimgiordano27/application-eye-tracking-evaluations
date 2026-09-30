/*
FUNCTION_NAME: FUN_0630c1c8
ENTRY_POINT: 0630c1c8
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4
*/


void FUN_0630c1c8(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uStack_54;
  
  if ((bRam00000000071cd050 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(PlayFab_EconomyModels_GetItemModerationStateRequest_var);
    FUN_02f07e70(PlayFab_EconomyModels_GetItemModerationStateResponse_var);
    FUN_02f07e70(PlayFab_EconomyModels_GetItemPublishStatusRequest_var);
    bRam00000000071cd050 = 1;
  }
  puVar6 = PlayFab_EconomyModels_GetItemPublishStatusRequest_var;
  puVar5 = PlayFab_EconomyModels_GetItemModerationStateResponse_var;
  puVar4 = PlayFab_EconomyModels_GetItemModerationStateRequest_var;
  puVar3 = PTR_DAT_06d02708;
  uStack_54 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) == 4) {
      lVar10 = *(long *)(param_1 + 0x50);
      if (lVar10 == 0) goto LAB_0630c340;
      if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
        uVar11 = 0;
        uVar9 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          uVar2 = *(undefined4 *)(lVar10 + 0x20 + uVar11 * 4);
          uVar1 = *(undefined4 *)(param_1 + 0x28);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar9 = FUN_0630f844(uVar2,uVar1);
          if ((uVar9 & 1) != 0) {
            uVar7 = FUN_0668c8c0(uVar2,0);
            uStack_54 = *(undefined4 *)(param_1 + 0x28);
            uVar8 = FUN_055ff450(&uStack_54,0);
            uVar7 = FUN_05465734(*(undefined8 *)puVar5,uVar7,*(undefined8 *)puVar6,uVar8,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02f12b58(*(long *)puVar3);
            }
            FUN_06693dbc(uVar7,0);
          }
          uVar9 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar11 = uVar11 + 1;
        } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
    }
    return;
  }
LAB_0630c340:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


