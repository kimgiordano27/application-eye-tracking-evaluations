/*
FUNCTION_NAME: FUN_0633ea78
ENTRY_POINT: 0633ea78
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


void FUN_0633ea78(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  undefined1 local_130 [8];
  undefined8 local_128;
  undefined1 auStack_120 [200];
  long local_58;
  
  puVar6 = PTR_DAT_06d96a10;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_128 = param_2;
  if ((DAT_071cd209 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d37100);
    FUN_02f07e70(System_Collections_Generic_Queue<T>_var);
    FUN_02f07e70(PlayFab_EconomyModels_PurchaseInventoryItemsResponse_var);
    FUN_02f07e70(UnityEngine_ExecuteInEditMode_var);
    FUN_02f07e70(PTR_DAT_06d96a10);
    FUN_02f07e70(PlayFab_ClientModels_PurchaseItemRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_PurchaseItemResult_var);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_var);
    FUN_02f07e70(UnityEngine_Quaternion_var);
    DAT_071cd209 = 1;
  }
  pvVar7 = memset(auStack_120,0,0xc4);
  local_130[0] = 0;
  FUN_0633e538(auStack_120,pvVar7,*(undefined8 *)(param_1 + 0x100),param_3,0);
  lVar9 = *param_3;
  FUN_062a6cd4(local_130,lVar9,*(undefined8 *)(param_1 + 0xf8),0);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_066f0aec(&local_128,lVar9,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066e3124(lVar9,0);
  if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0636d830(lVar9,param_3,0);
  if (*(int *)(*(long *)PlayFab_EconomyModels_PurchaseInventoryItemsResponse_var + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_063a76b0(lVar9,param_3 + 3,0);
  puVar5 = PTR_DAT_06d37100;
  if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x110) + 0x10);
  if (*(int *)(*(long *)PTR_DAT_06d37100 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_062e012c(lVar9,*(undefined8 *)UnityEngine_Quaternion_var,iVar2 == 0,0);
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_062e012c(lVar9,*(undefined8 *)PlayFab_ClientModels_PurchaseItemResult_var,
                 *(int *)(*(long *)(param_1 + 0x110) + 0x10) == 1,0);
    if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_062e012c(lVar9,*(undefined8 *)PlayFab_ClientModels_PurchaseItemRequest_var,
                 *(int *)(*(long *)(param_1 + 0x110) + 0x10) == 2,0);
    if (*(int *)(*(long *)System_Collections_Generic_Queue<T>_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar8 = FUN_06367484(0);
    if ((uVar8 & 1) == 0) {
      cVar3 = *(char *)(param_1 + 0x118);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_062e012c(lVar9,*(undefined8 *)
                          UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_var,
                   cVar3 != '\0',0);
    }
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066f0aec(&local_128,lVar9,0);
    FUN_066e3124(lVar9,0);
    if (*(long *)(param_1 + 0x108) != 0) {
      FUN_06336c30(*(long *)(param_1 + 0x108),lVar9);
    }
    lVar9 = param_3[1];
    lVar1 = param_3[2];
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066f05d0(&local_128,lVar9,lVar1,auStack_120,param_1 + 0xe0,0);
    FUN_062a6cd8(local_130,0);
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


