/*
FUNCTION_NAME: FUN_07502774
ENTRY_POINT: 07502774
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


undefined8 FUN_07502774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__;
  if ((DAT_07ef4a87 & 1) == 0) {
    FUN_03642964(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Success__
                );
    FUN_03642964(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Value__
                );
    FUN_03642964(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Success__);
    FUN_03642964(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__);
    DAT_07ef4a87 = 1;
  }
  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar4,0);
  puVar3 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Success__;
  puVar2 = 
  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Value__
  ;
  puVar1 = 
  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Success__
  ;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = param_1;
    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x18),param_1);
    *(undefined8 *)(lVar4 + 0x10) = param_3;
    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x10),param_3);
    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
    FUN_04159c38(uVar5,lVar4,*(undefined8 *)puVar3,0);
    uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
    FUN_07525ce0(uVar6,uVar5,param_2,0);
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


