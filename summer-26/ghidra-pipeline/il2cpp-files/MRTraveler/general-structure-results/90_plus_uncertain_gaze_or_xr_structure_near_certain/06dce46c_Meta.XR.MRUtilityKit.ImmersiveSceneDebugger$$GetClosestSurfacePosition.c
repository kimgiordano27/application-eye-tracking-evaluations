/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSurfacePosition
ENTRY_POINT: 06dce46c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSurfacePosition(void)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  cVar1 = *(char *)(unaff_x21 + 0x52);
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar2 = FUN_03c8f994();
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 == 0) {
      uVar3 = thunk_FUN_03d0d928(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar3,0);
    }
  }
  else if (cVar1 == '\0') {
    *(code **)(unaff_x19 + 0x18) = FUN_03bbed6c;
    goto LAB_06dce4a8;
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
LAB_06dce4a8:
  *(code **)(unaff_x19 + 0x38) = FUN_03bbed24;
  return;
}


