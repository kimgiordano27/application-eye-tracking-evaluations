/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 04a92228
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x21;
  long unaff_x24;
  
  FUN_04d8a7b0();
  FUN_04c8b20c();
  FUN_04c8c8f4();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    uVar1 = *(undefined4 *)(unaff_x21 + 0x20);
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    FUN_02b3c908(lVar2,uVar1);
    FUN_04a93778();
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
    if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04d8a7b0(uVar3,0);
    FUN_04c8b20c();
    return;
  }
  return;
}


