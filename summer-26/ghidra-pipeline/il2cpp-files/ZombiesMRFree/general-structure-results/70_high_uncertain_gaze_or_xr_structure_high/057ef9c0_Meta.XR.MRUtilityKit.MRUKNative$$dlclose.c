/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNative$$dlclose
ENTRY_POINT: 057ef9c0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKNative__dlclose(void)

{
  ulong uVar1;
  code *in_x9;
  long unaff_x19;
  ulong unaff_x21;
  
  uVar1 = (*in_x9)();
  if ((unaff_x21 & 1) == 0) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8(uVar1,uVar1 & 0xffffffff);
    }
    FUN_04be780c();
  }
  else {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8(uVar1,uVar1 & 0xffffffff);
    }
    FUN_04be7770();
  }
  return;
}


