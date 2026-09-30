/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$GetPrefabWithClosestSizeToAnchor
ENTRY_POINT: 04c33700
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__GetPrefabWithClosestSizeToAnchor
               (undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  undefined4 unaff_w21;
  
  lVar2 = *(long *)(unaff_x19 + 0x50);
  uVar1 = thunk_FUN_02cea894(*param_1);
  FUN_04c29774(uVar1,unaff_w21,0);
  if (lVar2 != 0) {
    FUN_04c2307c(lVar2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


