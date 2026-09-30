/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.BuildingBlock$$get_InstanceId
ENTRY_POINT: 0726df3c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_BuildingBlocks_BuildingBlock__get_InstanceId
              (long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_4 != 0) {
    if ((*(long *)(param_1 + 0x98) == 0) || (*(int *)(param_1 + 0xa0) <= *(int *)(param_1 + 0xa4)))
    {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0726dfd0(param_1,param_2,param_3,param_4);
      if (param_4 - iVar1 == 0) {
        return param_4;
      }
      param_3 = iVar1 + param_3;
      param_4 = param_4 - iVar1;
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      iVar2 = FUN_0726e084(param_1,param_2,param_3,param_4);
      iVar1 = iVar2 + iVar1;
    }
  }
  return iVar1;
}


