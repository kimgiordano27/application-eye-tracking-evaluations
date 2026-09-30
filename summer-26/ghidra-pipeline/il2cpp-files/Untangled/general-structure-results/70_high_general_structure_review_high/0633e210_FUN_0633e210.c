/*
FUNCTION_NAME: FUN_0633e210
ENTRY_POINT: 0633e210
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


void FUN_0633e210(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  void *pvVar5;
  long lVar6;
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined1 auStack_110 [200];
  long local_48;
  
  puVar4 = PTR_DAT_06d96a10;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_118 = param_2;
  if ((DAT_071cd205 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d37100);
    FUN_02f07e70(PlayFab_EconomyModels_PurchaseInventoryItemsResponse_var);
    FUN_02f07e70(PTR_DAT_06d96a10);
    FUN_02f07e70(PlayFab_ClientModels_PurchaseItemRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_PurchaseItemResult_var);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_var);
    FUN_02f07e70(UnityEngine_Quaternion_var);
    DAT_071cd205 = 1;
  }
  pvVar5 = memset(auStack_110,0,0xc4);
  local_120[0] = 0;
  FUN_0633e538(auStack_110,pvVar5,*(undefined8 *)(param_1 + 0x100),param_3,
               *(undefined4 *)((long)param_3 + 0x18c));
  lVar6 = *param_3;
  FUN_062a6cd4(local_120,lVar6,*(undefined8 *)(param_1 + 0xf8),0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_066f0aec(&local_118,lVar6,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066e3124(lVar6,0);
  if (*(int *)(*(long *)PlayFab_EconomyModels_PurchaseInventoryItemsResponse_var + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_063a76b0(lVar6,param_3 + 3,0);
  if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x110) + 0x10);
  if (*(int *)(*(long *)PTR_DAT_06d37100 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_062e012c(lVar6,*(undefined8 *)UnityEngine_Quaternion_var,iVar2 == 0,0);
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_062e012c(lVar6,*(undefined8 *)PlayFab_ClientModels_PurchaseItemResult_var,
                 *(int *)(*(long *)(param_1 + 0x110) + 0x10) == 1,0);
    if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_062e012c(lVar6,*(undefined8 *)PlayFab_ClientModels_PurchaseItemRequest_var,
                 *(int *)(*(long *)(param_1 + 0x110) + 0x10) == 2,0);
    FUN_062e012c(lVar6,*(undefined8 *)
                        UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_var,
                 *(undefined1 *)(param_1 + 0x128),0);
    FUN_066f0aec(&local_118,lVar6,0);
    FUN_066e3124(lVar6,0);
    if (*(long *)(param_1 + 0x108) != 0) {
      FUN_06336c30(*(long *)(param_1 + 0x108),lVar6);
    }
    lVar6 = param_3[1];
    lVar1 = param_3[2];
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066f05d0(&local_118,lVar6,lVar1,auStack_110,param_1 + 0xe0,0);
    FUN_062a6cd8(local_120,0);
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


