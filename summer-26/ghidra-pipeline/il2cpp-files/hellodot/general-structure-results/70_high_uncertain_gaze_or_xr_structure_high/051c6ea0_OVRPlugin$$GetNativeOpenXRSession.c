/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 051c6ea0
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetNativeOpenXRSession(long *param_1,undefined8 param_2,long param_3)

{
  long unaff_x21;
  long lVar1;
  long *unaff_x22;
  
  do {
    lVar1 = unaff_x21;
    if (*param_1 != param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(param_1);
    }
    do {
      unaff_x21 = FUN_02c8e40c();
      if (lVar1 == unaff_x21) {
        return;
      }
      param_1 = (long *)FUN_04f76b7c(unaff_x21);
      lVar1 = unaff_x21;
    } while (param_1 == (long *)0x0);
    param_3 = *unaff_x22;
  } while( true );
}


