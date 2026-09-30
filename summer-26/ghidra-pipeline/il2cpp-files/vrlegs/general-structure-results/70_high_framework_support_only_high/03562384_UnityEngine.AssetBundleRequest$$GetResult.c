/*
FUNCTION_NAME: UnityEngine.AssetBundleRequest$$GetResult
ENTRY_POINT: 03562384
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_AssetBundleRequest__GetResult(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x21;
  
  plVar4 = *(long **)(unaff_x20 + 0x248);
  if ((*(byte *)(unaff_x21 + 0xf82) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d06248);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Sizef_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_82_0_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0xf82) = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_82_0_TypeInfo;
  uVar5 = *(undefined8 *)(param_1 + 0x728);
  if (*(int *)(*plVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar1 = PTR_DAT_03cbdf88;
  FUN_037b4b30(uVar5,param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_035a25a0(param_1,0);
  uVar5 = *(undefined8 *)(param_1 + 0x3a0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036cee6c(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x3a0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_036d441c(uVar5,0);
  }
  puVar6 = (undefined8 *)(param_1 + 0xa8);
  uVar5 = *puVar6;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036cee6c(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    uVar5 = *puVar6;
    if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03594528(uVar5,0);
    *puVar6 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,0);
  }
  *(undefined1 *)(param_1 + 0x79c) = 0;
  return;
}


