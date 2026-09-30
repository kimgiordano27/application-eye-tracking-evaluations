/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 04dfb5a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  
  uVar1 = FUN_02f08824(param_3);
  if ((uVar1 & 1) == 0) {
    if (unaff_x20 == 0) {
      uVar2 = thunk_FUN_02f523a8(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar2,0);
    }
  }
  else if (unaff_w21 == 0) {
    *(code **)(unaff_x19 + 0x18) = FUN_02b91d50;
    goto LAB_04dfb5dc;
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
LAB_04dfb5dc:
  *(code **)(unaff_x19 + 0x38) = FUN_02b91ce4;
  return;
}


