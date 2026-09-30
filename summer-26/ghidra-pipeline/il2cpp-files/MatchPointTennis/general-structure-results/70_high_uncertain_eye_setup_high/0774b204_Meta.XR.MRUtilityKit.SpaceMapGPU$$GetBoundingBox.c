/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$GetBoundingBox
ENTRY_POINT: 0774b204
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__GetBoundingBox(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f31f00);
  FUN_04447ba8(PTR_DAT_09f31f08);
  FUN_04447ba8(PTR_DAT_09f31f10);
  *(undefined1 *)(unaff_x20 + 0x25b) = 1;
  if (*(char *)(unaff_x19 + 0x10) == '\0') {
    *(undefined1 *)(unaff_x19 + 0x10) = 1;
    FUN_07739ca8(unaff_x19 + 0x100,0);
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_05fef3bc((long *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_09f29100);
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_05fef3bc((long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_09f29100);
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_05ff0454((long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_09f31ef0);
    }
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_05f71020((long *)(unaff_x19 + 0x48),*(undefined8 *)PTR_DAT_09f31ef8);
    }
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      FUN_05fed2fc((long *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_09f31ee8);
    }
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      FUN_05fed2fc((long *)(unaff_x19 + 0x68),*(undefined8 *)PTR_DAT_09f31ee8);
    }
    if (*(long *)(unaff_x19 + 0x78) != 0) {
      FUN_05fed2fc((long *)(unaff_x19 + 0x78),*(undefined8 *)PTR_DAT_09f31ee8);
    }
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_05fed2fc((long *)(unaff_x19 + 0x88),*(undefined8 *)PTR_DAT_09f31ee8);
    }
    if (*(long *)(unaff_x19 + 0x98) != 0) {
      FUN_05fed2fc((long *)(unaff_x19 + 0x98),*(undefined8 *)PTR_DAT_09f31ee8);
    }
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      FUN_05fed2fc((long *)(unaff_x19 + 0xa8),*(undefined8 *)PTR_DAT_09f31ee8);
    }
    if (*(long *)(unaff_x19 + 0xb8) != 0) {
      FUN_05fed2fc((long *)(unaff_x19 + 0xb8),*(undefined8 *)PTR_DAT_09f31ee8);
    }
    if (*(long *)(unaff_x19 + 200) != 0) {
      FUN_05fed2fc((long *)(unaff_x19 + 200),*(undefined8 *)PTR_DAT_09f31ee8);
    }
    if (*(long *)(unaff_x19 + 0xd8) != 0) {
      FUN_05fed2fc((long *)(unaff_x19 + 0xd8),*(undefined8 *)PTR_DAT_09f31ee8);
    }
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      FUN_05fed2fc((long *)(unaff_x19 + 0xe8),*(undefined8 *)PTR_DAT_09f31ee8);
      return;
    }
  }
  return;
}


