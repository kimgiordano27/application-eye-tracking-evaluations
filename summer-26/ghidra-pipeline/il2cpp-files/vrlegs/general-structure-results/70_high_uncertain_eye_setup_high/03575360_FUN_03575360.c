/*
FUNCTION_NAME: FUN_03575360
ENTRY_POINT: 03575360
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03575360(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_03cbdf88;
  if ((DAT_0412e00e & 1) == 0) {
    FUN_01ab69ac(IOVRSceneComponent_TypeInfo);
    FUN_01ab69ac(OVRSkeletonRenderer_CapsuleVisualization_TypeInfo);
    FUN_01ab69ac(_Common_Gameplay_Support_Scripts_PortalManager_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(UnityEngine_UIElements_PointerStationaryEvent_<>c_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_PointerUpEvent_<>c_TypeInfo);
    FUN_01ab69ac(Cysharp_Threading_Tasks_PlayerLoopHelper_<>c_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_32_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbf998);
    FUN_01ab69ac(PTR_DAT_03cbf360);
    FUN_01ab69ac(PTR_DAT_03ccfb98);
    DAT_0412e00e = 1;
  }
  *(undefined8 *)(param_1 + 0x278) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x278,0);
  FUN_0357569c(param_1,0);
  uVar6 = *(undefined8 *)(param_1 + 0x138);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036cee6c(uVar6,0,0);
  puVar4 = UnityEngine_UIElements_PointerStationaryEvent_<>c_TypeInfo;
  puVar3 = PTR_DAT_03cbf360;
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x138);
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf360);
    FUN_036e8134(uVar6,param_1,*(undefined8 *)puVar4,0);
    if (lVar7 == 0) goto LAB_03575698;
    FUN_037b74b8(lVar7,uVar6,0);
    lVar7 = *(long *)(param_1 + 0x138);
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
    FUN_036e8134(uVar6,param_1,
                 *(undefined8 *)
                  UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_TypeInfo,0);
    if (lVar7 == 0) goto LAB_03575698;
    FUN_037b74b8(lVar7,uVar6,0);
    uVar6 = *(undefined8 *)(param_1 + 0x150);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_036cee6c(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x150) == 0) goto LAB_03575698;
      lVar7 = *(long *)(*(long *)(param_1 + 0x150) + 0x118);
      uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf998);
      FUN_020d3a10(uVar6,param_1,
                   *(undefined8 *)Cysharp_Threading_Tasks_PlayerLoopHelper_<>c_TypeInfo,0);
      if (lVar7 == 0) goto LAB_03575698;
      FUN_020d4950(lVar7,uVar6,*(undefined8 *)PTR_DAT_03ccfb98);
    }
  }
  if (*(int *)(*(long *)OVRSkeletonRenderer_CapsuleVisualization_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_037aeeb8(param_1,0);
  uVar6 = *(undefined8 *)(param_1 + 600);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036cee6c(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 600) == 0) goto LAB_03575698;
    FUN_0390f424(*(long *)(param_1 + 600),0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x268);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar3 = OVRPlugin_OVRP_1_32_0_TypeInfo;
  puVar1 = (undefined8 *)(param_1 + 0x268);
  uVar5 = FUN_036cee6c(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    uVar6 = *puVar1;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_036d441c(uVar6,0);
  }
  puVar4 = UnityEngine_UIElements_PointerUpEvent_<>c_TypeInfo;
  puVar2 = IOVRSceneComponent_TypeInfo;
  *puVar1 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,0);
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x58);
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_02060754(uVar6,param_1,*(undefined8 *)puVar4,0);
  if (lVar7 != 0) {
    FUN_021c82f4(lVar7,uVar6,
                 *(undefined8 *)_Common_Gameplay_Support_Scripts_PortalManager_<>c_TypeInfo);
    FUN_0391fdb0(param_1,0);
    return;
  }
LAB_03575698:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


