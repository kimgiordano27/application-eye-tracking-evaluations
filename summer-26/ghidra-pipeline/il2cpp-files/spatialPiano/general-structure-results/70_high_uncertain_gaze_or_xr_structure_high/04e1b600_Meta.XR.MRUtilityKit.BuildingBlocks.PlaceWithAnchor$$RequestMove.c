/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PlaceWithAnchor$$RequestMove
ENTRY_POINT: 04e1b600
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MRUtilityKit_BuildingBlocks_PlaceWithAnchor__RequestMove(void)

{
  ulong uVar1;
  uint unaff_w19;
  void *unaff_x21;
  long unaff_x22;
  uint uVar2;
  int unaff_w24;
  long unaff_x25;
  long *plVar3;
  long unaff_x26;
  int unaff_w27;
  
  plVar3 = *(long **)(unaff_x25 + 0x978);
  while (uVar2 = *(uint *)(unaff_x22 + 0x18), unaff_w19 < uVar2) {
    memcpy(&stack0x00000058,unaff_x21,0x58);
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      uVar2 = *(uint *)(unaff_x22 + 0x18);
    }
    if (uVar2 <= unaff_w19) break;
    memcpy(&stack0x00000000,&stack0x00000058,0x58);
    uVar1 = FUN_061d8828(unaff_x26 + (long)(int)unaff_w19 * (long)unaff_w27);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


