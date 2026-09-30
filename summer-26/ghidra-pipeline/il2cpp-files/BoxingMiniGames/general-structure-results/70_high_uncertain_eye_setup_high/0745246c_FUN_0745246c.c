/*
FUNCTION_NAME: FUN_0745246c
ENTRY_POINT: 0745246c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0745246c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = 
  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Item__
  ;
  if ((DAT_07ef3bc0 & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>__ctor__);
    FUN_03642964(
                Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Item__
                );
    FUN_03642964(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__);
    FUN_03642964(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__);
    DAT_07ef3bc0 = 1;
  }
  puVar2 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>__ctor__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar3 = FUN_05b4ed44(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x9c) = param_1;
    *(undefined4 *)(lVar3 + 0xa0) = param_2;
    *(undefined4 *)(lVar3 + 0xa4) = param_3;
    *(undefined4 *)(lVar3 + 0x68) = param_4;
    *(undefined4 *)(lVar3 + 0x6c) = param_5;
    *(undefined4 *)(lVar3 + 100) = param_6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


