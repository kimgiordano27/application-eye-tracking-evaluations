/*
FUNCTION_NAME: FUN_065872d4
ENTRY_POINT: 065872d4
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_065872d4(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int local_34;
  
  puVar6 = PlayFab_ClientModels_ConfirmPurchaseRequest_TypeInfo;
  puVar5 = UnityEngine_Rendering_Universal_LibTessDotNet_CombineCallback_TypeInfo;
  puVar4 = PTR_DAT_06d04b70;
  puVar3 = PTR_DAT_06d02350;
  if ((DAT_071ce888 & 1) == 0) {
    FUN_02f07e70(PlayFab_ClientModels_ConfirmPurchaseRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_ConfirmPurchaseResult_TypeInfo);
    FUN_02f07e70(
                UnityEngine_XR_OpenXR_Features_ConformanceAutomation_ConformanceAutomationFeature_TypeInfo
                );
    FUN_02f07e70(PTR_DAT_06d02350);
    FUN_02f07e70(UnityEngine_Rendering_Universal_LibTessDotNet_CombineCallback_TypeInfo);
    FUN_02f07e70(System_Runtime_Remoting_ClientIdentity_TypeInfo);
    FUN_02f07e70(Fusion_Photon_Realtime_ConnectionCallbacksContainer_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d04b70);
    DAT_071ce888 = 1;
  }
  FUN_0517ceb4(param_1,*(undefined8 *)puVar6);
  uVar7 = FUN_03bab088(param_1,*(undefined8 *)puVar4,**(undefined8 **)(*(long *)puVar3 + 0xb8),
                       *(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  thunk_FUN_02f411dc((undefined8 *)(param_1 + 0xb0),uVar7);
  lVar8 = *(long *)(param_1 + 0xb8);
  if (lVar8 == 0) {
LAB_065874c8:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar1 = *(int *)(lVar8 + 0x18);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_05624da8(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
  }
  puVar5 = Fusion_Photon_Realtime_ConnectionCallbacksContainer_TypeInfo;
  puVar4 = PlayFab_ClientModels_ConfirmPurchaseResult_TypeInfo;
  puVar3 = System_Runtime_Remoting_ClientIdentity_TypeInfo;
  local_34 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      lVar8 = *(long *)(param_1 + 0xb8);
      uVar7 = FUN_055ff450(&local_34,0);
      uVar7 = FUN_05458458(*(undefined8 *)puVar5,uVar7,0);
      uVar7 = FUN_03bab658(param_1,uVar7,*(undefined8 *)puVar3);
      if (lVar8 == 0) goto LAB_065874c8;
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar10 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_065874c8;
      uVar2 = *(uint *)(lVar8 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar8,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      local_34 = local_34 + 1;
    } while (local_34 < *(int *)(param_1 + 0xa8));
  }
  return;
}


