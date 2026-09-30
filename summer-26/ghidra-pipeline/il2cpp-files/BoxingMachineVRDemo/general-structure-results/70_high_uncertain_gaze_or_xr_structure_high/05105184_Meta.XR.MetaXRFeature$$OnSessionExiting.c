/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 05105184
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


undefined8 Meta_XR_MetaXRFeature__OnSessionExiting(void)

{
  ulong uVar1;
  long *unaff_x20;
  
  __cxa_end_catch();
  (**(code **)(*unaff_x20 + 0x278))();
  thunk_FUN_02dc61f4(PTR_DAT_0677d968);
  thunk_FUN_02d9d438();
  uVar1 = FUN_05102b0c();
  FUN_05102aa8();
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0();
  }
  return 0;
}


