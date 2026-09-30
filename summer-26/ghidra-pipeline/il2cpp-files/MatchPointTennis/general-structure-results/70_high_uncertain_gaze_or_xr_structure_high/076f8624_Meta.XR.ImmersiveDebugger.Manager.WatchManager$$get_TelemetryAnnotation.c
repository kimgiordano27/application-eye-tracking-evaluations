/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$get_TelemetryAnnotation
ENTRY_POINT: 076f8624
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManager__get_TelemetryAnnotation
               (long param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  
  do {
    param_4 = FUN_044819d0(param_1 + 0x10,param_3,param_4);
    if (unaff_x20 == param_4) {
      return;
    }
    param_3 = (long *)FUN_07a843dc(param_4);
    if (param_3 != (long *)0x0) {
      if (*param_3 != *unaff_x23) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(param_3);
      }
    }
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar1 = *unaff_x22;
    }
    param_1 = *(long *)(lVar1 + 0xb8);
    unaff_x20 = param_4;
  } while( true );
}


