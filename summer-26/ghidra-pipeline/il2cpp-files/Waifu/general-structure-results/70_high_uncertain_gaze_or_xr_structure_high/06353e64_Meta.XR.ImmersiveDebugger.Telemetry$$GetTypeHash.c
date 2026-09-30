/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 06353e64
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_06317848(param_1,0);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0xe0);
    uVar1 = iVar2 + 2;
    if (-1 < iVar2 + 1) {
      uVar1 = iVar2 + 1;
    }
    *(uint *)(lVar3 + 0xe0) = (iVar2 + 1) - (uVar1 & 0xfffffffe);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


