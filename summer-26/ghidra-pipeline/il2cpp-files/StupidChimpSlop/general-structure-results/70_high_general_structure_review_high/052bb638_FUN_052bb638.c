/*
FUNCTION_NAME: FUN_052bb638
ENTRY_POINT: 052bb638
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


void FUN_052bb638(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_06a52737 & 1) == 0) {
    FUN_02d4dc40(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateCatalogConfigRequest>_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_0664b428);
    FUN_02d4dc40(PTR_DAT_06648af8);
    FUN_02d4dc40(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateCharacterDataRequest>_TypeInfo
                );
    DAT_06a52737 = 1;
  }
  puVar1 = PTR_DAT_06648af8;
  if ((param_2 == 0) || (lVar6 = *(long *)(param_2 + 0x10), lVar6 == 0)) {
    lVar6 = *(long *)(param_1 + 0x18);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    lVar7 = *(long *)PTR_DAT_06648af8;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  }
  if (lVar6 != 0) {
    uVar3 = FUN_052d1a04(lVar6,0);
    puVar2 = PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateCharacterDataRequest>_TypeInfo;
    puVar1 = PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<UpdateCatalogConfigRequest>_TypeInfo;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_0664b428 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_032f1ac8(*(undefined8 *)puVar2,param_2,4,param_3,param_4,param_5,param_6,lVar6,lVar7,
                   param_1,*(undefined8 *)puVar1);
      return;
    }
    thunk_FUN_02db45e8(PTR_DAT_0664b438);
    uVar4 = thunk_FUN_02d8a638();
    uVar5 = thunk_FUN_02db45e8(PTR_DAT_0664b440);
    FUN_052d18d8(uVar4,4,uVar5,0);
    uVar5 = thunk_FUN_02db45e8(
                              PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateSharedGroupResult>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar4,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


