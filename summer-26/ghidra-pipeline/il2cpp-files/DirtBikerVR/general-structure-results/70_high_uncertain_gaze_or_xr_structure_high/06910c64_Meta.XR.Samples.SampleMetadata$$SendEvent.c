/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 06910c64
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
                    /* catch() { ... } // from try @ 06910c5c with catch @ 06910c68 */
  FUN_03a8a718(PTR_DAT_084b3d90);
  *(undefined1 *)(unaff_x21 + 0xc02) = 1;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  FUN_0679343c();
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_06910cac();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  return;
}


