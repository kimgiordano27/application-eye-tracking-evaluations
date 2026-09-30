/*
FUNCTION_NAME: FUN_051df210
ENTRY_POINT: 051df210
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_10
*/


uint FUN_051df210(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_06a51f1c & 1) == 0) {
    FUN_02d4dc40(PlayFab_ClientModels_SetFriendTagsRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_SearchItemsRequest_var);
    FUN_02d4dc40(System_Data_SqlTypes_SqlGuid_var);
    FUN_02d4dc40(PlayFab_EventsModels_SetTelemetryKeyActiveResponse_var);
    FUN_02d4dc40(UnityEngine_UIElements_SetupDragAndDropArgs_var);
    FUN_02d4dc40(System_Data_SqlTypes_SqlInt16_var);
    DAT_06a51f1c = 1;
  }
  puVar1 = (undefined8 *)System_Data_SqlTypes_SqlGuid_var;
  puVar2 = (undefined8 *)PlayFab_EventsModels_SetTelemetryKeyActiveResponse_var;
  plVar3 = (long *)PlayFab_EconomyModels_SearchItemsRequest_var;
  if ((char)param_1[8] == '\x03') {
    iVar4 = FUN_051b2544(param_1,0);
    lVar8 = param_1[0x11];
    iVar5 = FUN_051b5060(param_1,0);
    puVar1 = (undefined8 *)System_Data_SqlTypes_SqlGuid_var;
    puVar2 = (undefined8 *)PlayFab_EventsModels_SetTelemetryKeyActiveResponse_var;
    plVar3 = (long *)PlayFab_EconomyModels_SearchItemsRequest_var;
    if (iVar5 < iVar4 - (int)lVar8) {
      FUN_051af9e0(param_1,0x410,0);
      uVar7 = thunk_FUN_02d8a638(*(undefined8 *)PlayFab_ClientModels_SetFriendTagsRequest_var);
                    /* try { // try from 051df2e0 to 052df623 has its CatchHandler @ 051df2e0
                       catch() { ... } // from try @ 051df2e0 with catch @ 051df2e0
                       catch() { ... } // from try @ 051df664 with catch @ 051df2e0
                       catch() { ... } // from try @ 051df788 with catch @ 051df2e0
                       catch() { ... } // from try @ 051dfa64 with catch @ 051df2e0 */
      FUN_051be010(uVar7,param_1,*(undefined8 *)(*param_1 + 0x1f0),0);
      FUN_051b6134(param_1,uVar7,0);
      puVar1 = (undefined8 *)System_Data_SqlTypes_SqlGuid_var;
      puVar2 = (undefined8 *)PlayFab_EventsModels_SetTelemetryKeyActiveResponse_var;
      plVar3 = (long *)PlayFab_EconomyModels_SearchItemsRequest_var;
    }
  }
  while( true ) {
    lVar8 = param_1[0xc];
    thunk_FUN_02d5b8bc(lVar8,0);
    lVar9 = param_1[0xc];
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(int *)(lVar9 + 0x20) < 1) break;
    lVar9 = FUN_03a8bc6c(lVar9,*puVar2);
    RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(lVar8,0);
    if (lVar9 == 0) {
LAB_051df4e4:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
  }
  RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(lVar8,0);
  lVar8 = param_1[0x24];
  thunk_FUN_02d5b8bc(lVar8,0);
  lVar9 = param_1[0x24];
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (*(int *)(lVar9 + 0x20) < 1) {
    RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(lVar8,0);
    uVar6 = 0;
  }
  else {
    lVar9 = FUN_03a8bc6c(lVar9,*puVar1);
    RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(lVar8,0);
    if (lVar9 == 0) goto LAB_051df4e4;
    *(int *)(param_1 + 9) = *(int *)(lVar9 + 0x14) + 3;
    uVar6 = (**(code **)(*param_1 + 0x278))(param_1,lVar9,*(undefined8 *)(*param_1 + 0x280));
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*plVar3);
    }
    FUN_051b42e8(lVar9,0);
  }
  return uVar6 & 1;
}


