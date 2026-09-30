/*
FUNCTION_NAME: FUN_05a182f8
ENTRY_POINT: 05a182f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


uint FUN_05a182f8(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  if ((DAT_06bc2061 & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc2061 = 1;
  }
  puVar1 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  uVar2 = param_1 >> 0x18;
  if (uVar2 == 0) {
    if (param_1 < 0x10000) {
      lVar3 = *(long *)
               Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
      ;
      if (param_1 < 0x100) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar3 = *(long *)puVar1;
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
        if (lVar3 == 0) {
LAB_05a18438:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(lVar3 + 0x18) <= param_1) {
LAB_05a1843c:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uVar2 = (uint)*(byte *)(lVar3 + (ulong)param_1 + 0x20);
      }
      else {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar3 = *(long *)puVar1;
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
        if (lVar3 == 0) goto LAB_05a18438;
        if (*(uint *)(lVar3 + 0x18) <= param_1 >> 8) goto LAB_05a1843c;
        uVar2 = *(byte *)(lVar3 + (ulong)(param_1 >> 8) + 0x20) + 8;
      }
    }
    else {
      lVar3 = *(long *)
               Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
      ;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_05a18438;
      if (*(uint *)(lVar3 + 0x18) <= param_1 >> 0x10) goto LAB_05a1843c;
      uVar2 = *(byte *)(lVar3 + (ulong)(param_1 >> 0x10) + 0x20) + 0x10;
    }
  }
  else {
    lVar3 = *(long *)
             Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
    ;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_05a18438;
    if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_05a1843c;
    uVar2 = *(byte *)(lVar3 + (ulong)uVar2 + 0x20) + 0x18;
  }
  return uVar2;
}


