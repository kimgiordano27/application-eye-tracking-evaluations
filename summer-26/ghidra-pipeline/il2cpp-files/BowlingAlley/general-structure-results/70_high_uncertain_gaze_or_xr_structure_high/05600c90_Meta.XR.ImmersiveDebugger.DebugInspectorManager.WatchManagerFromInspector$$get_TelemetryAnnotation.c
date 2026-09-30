/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.WatchManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 05600c90
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_DebugInspectorManager_WatchManagerFromInspector__get_TelemetryAnnotation
               (undefined8 param_1,long param_2,short param_3,char param_4,uint param_5)

{
  int in_w8;
  uint in_w9;
  int in_w10;
  int in_w11;
  undefined4 in_register_0000405c;
  long in_x12;
  
  do {
    if (*(char *)(in_x12 + 0x28) == param_4) {
      return param_5;
    }
    do {
      param_5 = param_5 - 1;
      if ((int)param_5 < in_w8) {
        return 0xffffffff;
      }
      if (in_w9 <= param_5) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
    } while ((*(short *)(param_2 + (long)(int)param_5 * (long)in_w11 + 0x20) != param_3) ||
            (*(int *)(param_2 + (long)(int)param_5 * CONCAT44(in_register_0000405c,in_w11) + 0x24)
             != in_w10));
    in_x12 = param_2 + (long)(int)param_5 * CONCAT44(in_register_0000405c,in_w11);
  } while( true );
}


