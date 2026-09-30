/*
FUNCTION_NAME: FUN_06afbd0c
ENTRY_POINT: 06afbd0c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06afbd0c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_06f98fe0;
  if ((DAT_073ab373 & 1) == 0) {
    FUN_02fe925c(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f98fe0);
    DAT_073ab373 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_128_0_TypeInfo;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_03b6a9c8(uVar4,*(undefined8 *)puVar2);
  plVar5 = (long *)(param_1 + 0x28);
  FUN_03b6a9c8(*plVar5,*(undefined8 *)puVar2);
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_03048534((undefined8 *)(param_1 + 0x20),param_2);
  if (param_2 != 0) {
    plVar3 = (long *)(param_2 + 0x28);
    *(long *)(param_1 + 0x28) = *plVar3;
    thunk_FUN_03048534(plVar5);
    *plVar3 = param_1;
    thunk_FUN_03048534(plVar3,param_1);
  }
  if (*plVar5 != 0) {
    plVar5 = (long *)(*plVar5 + 0x20);
    *plVar5 = param_1;
    thunk_FUN_03048534(plVar5,param_1);
    return;
  }
  return;
}


