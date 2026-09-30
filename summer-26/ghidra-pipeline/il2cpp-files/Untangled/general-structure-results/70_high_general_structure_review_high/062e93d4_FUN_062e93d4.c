/*
FUNCTION_NAME: FUN_062e93d4
ENTRY_POINT: 062e93d4
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_062e93d4(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  byte local_5c [4];
  long local_58;
  
  if ((DAT_071ccefd & 1) == 0) {
    FUN_02f07e70(PlayFab_MultiplayerModels_CreateBuildWithProcessBasedServerResponse_var);
    FUN_02f07e70(PlayFab_EconomyModels_CreateDraftItemRequest_var);
    FUN_02f07e70(PlayFab_EconomyModels_CreateDraftItemResponse_var);
    FUN_02f07e70(UnityEngine_CapsuleCollider_var);
    FUN_02f07e70(System_Threading_CancellationTokenSource_var);
    FUN_02f07e70(PlayFab_ClientModels_ConfirmPurchaseRequest_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_CreateBuildWithManagedContainerResponse_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_CreateBuildWithProcessBasedServerRequest_var);
    FUN_02f07e70(System_Runtime_CompilerServices_ConfiguredTaskAwaitable_var);
    FUN_02f07e70(PTR_DAT_06d3b150);
    DAT_071ccefd = 1;
  }
  local_58 = 0;
  local_5c[0] = 0;
  lVar14 = *(long *)(param_1 + 0x20);
  uVar6 = FUN_066ca064(param_2,0);
  puVar3 = UnityEngine_CapsuleCollider_var;
  if (lVar14 == 0) goto LAB_062e96d8;
  uVar9 = FUN_04bc2bc4(lVar14,uVar6,&local_58,
                       *(undefined8 *)PlayFab_EconomyModels_CreateDraftItemRequest_var);
  if ((uVar9 & 1) == 0) {
    lVar14 = thunk_FUN_02ef1808(*(undefined8 *)
                                 System_Runtime_CompilerServices_ConfiguredTaskAwaitable_var);
    FUN_03fd0468(lVar14,*(undefined8 *)PlayFab_ClientModels_ConfirmPurchaseRequest_var);
    puVar4 = PlayFab_MultiplayerModels_CreateBuildWithProcessBasedServerRequest_var;
    puVar2 = System_Threading_CancellationTokenSource_var;
    lVar10 = *(long *)(param_1 + 0x28);
    local_58 = lVar14;
    if (lVar10 == 0) goto LAB_062e96d8;
    iVar1 = *(int *)(lVar10 + 0x18);
    if (0 < iVar1) {
      iVar13 = 0;
      do {
        lVar14 = FUN_03fd09cc(lVar10,iVar13,*(undefined8 *)puVar4);
        uVar7 = FUN_066ca064(param_2,0);
        if ((lVar14 == 0) || (lVar10 = FUN_066c67ec(lVar14,0), lVar10 == 0)) break;
        uVar8 = FUN_066c9a84(lVar10,0);
        if ((uVar7 >> (ulong)(uVar8 & 0x1f) & 1) != 0) {
          if (local_58 == 0) break;
          lVar10 = *(long *)(local_58 + 0x10);
          lVar12 = *(long *)puVar2;
          *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
          if (lVar10 == 0) break;
          uVar7 = *(uint *)(local_58 + 0x18);
          if (uVar7 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(local_58 + 0x18) = uVar7 + 1;
            plVar11 = (long *)(lVar10 + (long)(int)uVar7 * 8 + 0x20);
            *plVar11 = lVar14;
            thunk_FUN_02f411dc(plVar11,lVar14);
          }
          else {
            FUN_03fd0c9c(local_58,lVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          lVar14 = *(long *)(param_1 + 0x30);
          uVar6 = FUN_066ca064(param_2,0);
          if (lVar14 == 0) break;
          FUN_04bae93c(lVar14,uVar6,1,*(undefined8 *)puVar3);
        }
        iVar13 = iVar13 + 1;
        if (iVar1 == iVar13) goto LAB_062e9600;
        lVar10 = *(long *)(param_1 + 0x28);
      } while (lVar10 != 0);
      goto LAB_062e96d8;
    }
LAB_062e9600:
    lVar14 = *(long *)(param_1 + 0x20);
    uVar6 = FUN_066ca064(param_2,0);
    if (lVar14 == 0) goto LAB_062e96d8;
    FUN_04bc1114(lVar14,uVar6,local_58,
                 *(undefined8 *)
                  PlayFab_MultiplayerModels_CreateBuildWithProcessBasedServerResponse_var);
  }
  lVar14 = *(long *)(param_1 + 0x30);
  uVar6 = FUN_066ca064(param_2,0);
  if (lVar14 == 0) {
LAB_062e96d8:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  bVar5 = FUN_04bb0300(lVar14,uVar6,local_5c,
                       *(undefined8 *)PlayFab_EconomyModels_CreateDraftItemResponse_var);
  if ((bVar5 & local_5c[0] & 1) != 0) {
    lVar14 = *(long *)(param_1 + 0x30);
    uVar6 = FUN_066ca064(param_2,0);
    puVar2 = PTR_DAT_06d3b150;
    if (lVar14 == 0) goto LAB_062e96d8;
    FUN_04bae93c(lVar14,uVar6,0,*(undefined8 *)puVar3);
    lVar14 = local_58;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_062e9818(lVar14);
  }
  return local_58;
}


