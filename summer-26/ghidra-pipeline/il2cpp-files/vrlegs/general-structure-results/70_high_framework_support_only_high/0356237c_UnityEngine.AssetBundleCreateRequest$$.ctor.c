/*
FUNCTION_NAME: UnityEngine.AssetBundleCreateRequest$$.ctor
ENTRY_POINT: 0356237c
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


void UnityEngine_AssetBundleCreateRequest___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_03d06248;
  if ((DAT_0412df82 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d06248);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Sizef_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_82_0_TypeInfo);
    DAT_0412df82 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_82_0_TypeInfo;
  uVar4 = *(undefined8 *)(param_1 + 0x728);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar1 = PTR_DAT_03cbdf88;
  FUN_037b4b30(uVar4,param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_035a25a0(param_1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x3a0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036cee6c(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x3a0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_036d441c(uVar4,0);
  }
  puVar5 = (undefined8 *)(param_1 + 0xa8);
  uVar4 = *puVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036cee6c(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = *puVar5;
    if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03594528(uVar4,0);
    *puVar5 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,0);
  }
  *(undefined1 *)(param_1 + 0x79c) = 0;
  return;
}


