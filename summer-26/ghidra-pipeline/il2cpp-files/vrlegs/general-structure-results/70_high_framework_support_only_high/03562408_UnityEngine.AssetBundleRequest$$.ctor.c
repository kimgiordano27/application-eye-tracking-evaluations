/*
FUNCTION_NAME: UnityEngine.AssetBundleRequest$$.ctor
ENTRY_POINT: 03562408
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_AssetBundleRequest___ctor(void)

{
  ulong uVar1;
  int in_w8;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_035a25a0();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x3a0);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar1 = FUN_036cee6c(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x3a0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_036d441c(uVar2,0);
  }
  puVar3 = (undefined8 *)(unaff_x19 + 0xa8);
  uVar2 = *puVar3;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar1 = FUN_036cee6c(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *puVar3;
    if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03594528(uVar2,0);
    *puVar3 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,0);
  }
  *(undefined1 *)(unaff_x19 + 0x79c) = 0;
  return;
}


