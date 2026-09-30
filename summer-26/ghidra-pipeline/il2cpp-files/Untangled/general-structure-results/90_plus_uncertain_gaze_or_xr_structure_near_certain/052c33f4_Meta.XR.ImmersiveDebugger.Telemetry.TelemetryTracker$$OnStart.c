/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart
ENTRY_POINT: 052c33f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


float Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnStart
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(long *)(param_5 + 0x70) != 0) {
    lVar1 = FUN_066c67b0(*(long *)(param_5 + 0x70),0);
    if (lVar1 != 0) {
                    /* try { // try from 052c340c to 053c346b has its CatchHandler @ 052c355c */
      FUN_066d320c(lVar1,0);
      fVar2 = (float)FUN_066bd6e0(0);
      fVar4 = param_2;
      fVar5 = param_3;
      fVar6 = param_4;
      fVar3 = (float)FUN_052c3304();
      return (param_2 * fVar5 + param_4 * fVar3 + fVar2 * fVar6) - param_3 * fVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


