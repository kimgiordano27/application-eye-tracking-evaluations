/*
FUNCTION_NAME: FUN_0750513c
ENTRY_POINT: 0750513c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 FUN_0750513c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupMarkerTracker>g__CreateTrackerAsync_5_0>d>__
  ;
  if ((DAT_07ef4aa0 & 1) == 0) {
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__70>__
                );
    FUN_03642964(PTR_DAT_079fdb98);
    FUN_03642964(PTR_DAT_079ffb90);
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__);
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupMarkerTracker>g__CreateTrackerAsync_5_0>d>__
                );
    DAT_07ef4aa0 = 1;
  }
  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_05e5ae34(lVar6,0);
  puVar5 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__;
  puVar4 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__;
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__70>__
  ;
  puVar2 = PTR_DAT_079fdb98;
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x18) = param_2;
    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x18),param_2);
    uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
    FUN_05e5ae34(uVar7,0);
    puVar10 = (undefined8 *)(lVar6 + 0x10);
    *puVar10 = uVar7;
    thunk_FUN_036b7ad0(puVar10,uVar7);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
    FUN_04159c38(uVar7,lVar6,*(undefined8 *)puVar5,0);
    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
    FUN_0750bafc(uVar8,uVar11,uVar12,uVar1,uVar7,0);
    puVar2 = PTR_DAT_079ffb90;
    if (*(long *)(param_1 + 0x18) != 0) {
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
      *puVar9 = uVar8;
      thunk_FUN_036b7ad0(puVar9,uVar8);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *puVar10;
      uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
      FUN_0750480c(uVar7,uVar8,uVar11);
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


