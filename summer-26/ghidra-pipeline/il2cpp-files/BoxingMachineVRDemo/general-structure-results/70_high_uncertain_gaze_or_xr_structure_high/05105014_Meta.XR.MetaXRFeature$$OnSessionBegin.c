/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 05105014
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionBegin(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_050924a8();
  uVar2 = thunk_FUN_02dc61f4(PTR_DAT_067803f0);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar1,uVar2);
}


