/*
FUNCTION_NAME: FUN_098f79a8
ENTRY_POINT: 098f79a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_098f79a8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  puVar1 = PTR_DAT_09f25dc0;
  if ((DAT_0a549076 & 1) == 0) {
    FUN_04447ba8(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
    FUN_04447ba8(OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo);
    FUN_04447ba8(
                OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                );
    FUN_04447ba8(System_Predicate<TransferCodingHeaderValue>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f25dc0);
    FUN_04447ba8(
                OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                );
    FUN_04447ba8(System_Nullable<Decimal>_TypeInfo);
    DAT_0a549076 = 1;
  }
  puVar2 = System_Predicate<TransferCodingHeaderValue>_TypeInfo;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uVar5 = FUN_098f7ba8(param_1,param_2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)puVar1);
  }
  lVar6 = FUN_04d3a334(uVar5,*(undefined8 *)puVar2);
  puVar2 = 
  OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
  ;
  puVar1 = OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo;
  if (lVar6 == 0) {
LAB_098f7b28:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(lVar6 + 0x18) != 0) {
    if (param_2 == 0) goto LAB_098f7b28;
    iVar3 = FUN_098e91f8(param_2,0);
    FUN_05bae95c(&local_48,lVar6,*(undefined8 *)puVar2);
    do {
      uVar7 = FUN_0768d020(&local_48,*(undefined8 *)puVar1);
      if ((uVar7 & 1) == 0) {
        FUN_0768d01c(&local_48,*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
        return 0;
      }
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      iVar4 = FUN_098e91f8(local_38,0);
    } while (iVar4 != iVar3);
    FUN_0768d01c(&local_48,*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
  }
  return 1;
}


