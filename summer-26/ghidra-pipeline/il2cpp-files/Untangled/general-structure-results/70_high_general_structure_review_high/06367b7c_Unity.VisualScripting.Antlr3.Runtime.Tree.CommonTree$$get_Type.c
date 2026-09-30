/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree$$get_Type
ENTRY_POINT: 06367b7c
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_5;telemetry_or_network_hits_20;frame_or_lifecycle_behavior
*/


undefined8 Unity_VisualScripting_Antlr3_Runtime_Tree_CommonTree__get_Type(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  FUN_02f07e70(PlayFab_MultiplayerModels_UpdateBuildNameRequest_var);
  FUN_02f07e70(PTR_DAT_06d37100);
  FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRAnchorSubsystem_var);
  FUN_02f07e70(PlayFab_MultiplayerModels_UpdateBuildRegionRequest_var);
  FUN_02f07e70(PlayFab_MultiplayerModels_UpdateBuildRegionsRequest_var);
  FUN_02f07e70(PlayFab_EconomyModels_UpdateCatalogConfigRequest_var);
  FUN_02f07e70(PlayFab_EconomyModels_UpdateCatalogConfigResponse_var);
  FUN_02f07e70(PlayFab_ClientModels_UpdateCharacterDataRequest_var);
  FUN_02f07e70(PlayFab_ClientModels_UpdateCharacterDataResult_var);
  FUN_02f07e70(PlayFab_ClientModels_UpdateCharacterStatisticsRequest_var);
  FUN_02f07e70(PlayFab_ClientModels_UpdateCharacterStatisticsResult_var);
  FUN_02f07e70(System_Collections_Generic_Queue<T>_var);
  FUN_02f07e70(PlayFab_EconomyModels_UpdateDraftItemRequest_var);
  FUN_02f07e70(PlayFab_EconomyModels_UpdateDraftItemResponse_var);
  FUN_02f07e70(PlayFab_ExperimentationModels_UpdateExclusionGroupRequest_var);
  FUN_02f07e70(PlayFab_ExperimentationModels_UpdateExperimentRequest_var);
  FUN_02f07e70(PlayFab_GroupsModels_UpdateGroupRequest_var);
  FUN_02f07e70(PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var);
  *(undefined1 *)(unaff_x21 + 0x31e) = 1;
  if (*(char *)(unaff_x19 + 0x50) == '\0') {
    return 1;
  }
  uVar4 = FUN_06367a00();
  *(int *)(unaff_x19 + 0x38) = (int)uVar4;
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar4 = FUN_063677dc();
  *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
  thunk_FUN_02f411dc();
  uVar4 = FUN_0636785c();
  *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x48),uVar4);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_06d37100 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_062d8208(uVar4,0);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
  thunk_FUN_02f411dc();
  uVar4 = FUN_062d8208(*(undefined8 *)(unaff_x19 + 0x30),0);
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
  thunk_FUN_02f411dc();
  puVar3 = System_Collections_Generic_Queue<T>_var;
  plVar6 = (long *)(unaff_x19 + 0x70);
  lVar8 = *plVar6;
  if (lVar8 == 0) {
    if (*(int *)(*(long *)System_Collections_Generic_Queue<T>_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (DAT_071cd3ad == '\0') {
      FUN_02f07e70(System_Collections_Generic_Queue<T>_var);
      DAT_071cd3ad = '\x01';
    }
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar8 = *(long *)puVar3;
    }
    if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_063681b4;
    lVar8 = FUN_06366e5c();
    *plVar6 = lVar8;
    thunk_FUN_02f411dc(plVar6,lVar8);
    lVar8 = *plVar6;
  }
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)
                              PlayFab_ExperimentationModels_UpdateExclusionGroupRequest_var);
  FUN_0633bb88(uVar4,lVar8,0);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x78),uVar4);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x70);
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)
                              PlayFab_ExperimentationModels_UpdateExperimentRequest_var);
  FUN_0633c9a8(uVar4,uVar7,0);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x88),uVar4);
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_063681b4;
  uVar10 = *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x14);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x70);
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_MultiplayerModels_UpdateBuildRegionRequest_var);
  FUN_06336308(uVar10,uVar4,uVar7,0);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar4;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x90),uVar4);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x70);
  if (*(int *)(unaff_x19 + 0x38) == 1) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_063681b4;
    uVar10 = *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x14);
    uVar7 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_GroupsModels_UpdateGroupRequest_var);
    FUN_0633ce94(uVar10,uVar7,uVar4,0);
    puVar5 = (undefined8 *)(unaff_x19 + 0x80);
    *puVar5 = uVar7;
  }
  else {
    uVar7 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_EconomyModels_UpdateDraftItemResponse_var);
    FUN_0633b14c(uVar7,uVar4,0);
    puVar5 = (undefined8 *)(unaff_x19 + 0xd8);
    *puVar5 = uVar7;
  }
  thunk_FUN_02f411dc(puVar5,uVar7);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x70);
  uVar10 = *(undefined4 *)(unaff_x19 + 0x38);
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_EconomyModels_UpdateCatalogConfigRequest_var);
  FUN_063348ac(uVar4,uVar7,uVar10,0);
  *(undefined8 *)(unaff_x19 + 0x98) = uVar4;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x98),uVar4);
  if (unaff_x20 == (long *)0x0) {
    unaff_x20 = (long *)0x0;
  }
  else if (*unaff_x20 != *(long *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var) {
    unaff_x20 = (long *)0x0;
  }
  iVar1 = *(int *)(unaff_x19 + 0x38);
  if (iVar1 == 1) {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x68);
    uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_MultiplayerModels_UpdateBuildNameRequest_var);
    FUN_063aaff8(uVar4,0xc9,uVar7,0,0,0,0);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar4;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x58),uVar4);
    uVar4 = FUN_06931fb4(&UnityEngine_UIElements_StartDragArgs_var);
    return uVar4;
  }
  if (iVar1 == 3) {
    if (unaff_x20 == (long *)0x0) {
LAB_063681b4:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(long *)(unaff_x19 + 0xf0) = unaff_x20[0x5c];
    thunk_FUN_02f411dc();
    uVar7 = *(undefined8 *)(unaff_x19 + 0x70);
    uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_ClientModels_UpdateCharacterDataRequest_var);
    FUN_0633d2ac(uVar4,uVar7,0);
    puVar5 = (undefined8 *)(unaff_x19 + 0xe8);
    *puVar5 = uVar4;
    thunk_FUN_02f411dc(puVar5,uVar4);
    uVar4 = 0;
    if (*(int *)(unaff_x19 + 0x38) == 1) {
      uVar4 = *puVar5;
    }
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_063681b4;
    uVar2 = *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x48);
    uVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                PlayFab_ClientModels_UpdateCharacterStatisticsResult_var);
    FUN_0633d340(uVar7,uVar9,uVar4,uVar2,0);
    puVar5 = (undefined8 *)(unaff_x19 + 0xe0);
    *puVar5 = uVar7;
  }
  else {
    if (iVar1 != 2) goto LAB_06368194;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x70);
    uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_ClientModels_UpdateCharacterDataResult_var);
    FUN_0633e73c(uVar4,uVar7,0);
    puVar5 = (undefined8 *)(unaff_x19 + 0xd0);
    *puVar5 = uVar4;
    thunk_FUN_02f411dc(puVar5,uVar4);
    uVar4 = 0;
    if (*(int *)(unaff_x19 + 0x38) == 1) {
      uVar4 = *puVar5;
    }
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_063681b4;
    uVar2 = *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x48);
    uVar7 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_EconomyModels_UpdateDraftItemRequest_var);
    FUN_0633e7d0(uVar7,uVar9,uVar4,uVar2,0);
    puVar5 = (undefined8 *)(unaff_x19 + 200);
    *puVar5 = uVar7;
  }
  thunk_FUN_02f411dc(puVar5,uVar7);
LAB_06368194:
  *(undefined1 *)(unaff_x19 + 0x50) = 0;
  return 1;
}


