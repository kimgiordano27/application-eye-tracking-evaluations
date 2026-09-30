/*
FUNCTION_NAME: Oculus.Platform.PlatformInternal$$ParseMessageHandle
ENTRY_POINT: 033223dc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Platform_PlatformInternal__ParseMessageHandle(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(**(long **)(param_1 + 0x340) + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar1 = Oculus_Platform_CAPI__ovr_Message_GetParty();
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar2 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_TryGetValue__
                            );
  thunk_FUN_01c273e8(PTR_DAT_04234850);
  uVar2 = FUN_03152fb8(uVar2);
  thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
  uVar3 = thunk_FUN_01c496e0();
  FUN_033144b8(uVar3,uVar2);
  uVar2 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_GetEnumerator__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar3,uVar2);
}


