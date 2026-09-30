/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpatialAnchor
ENTRY_POINT: 028f996c
PROGRAM: sharks-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor
               (void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  *(undefined1 *)(unaff_x23 + 0x67f) = 1;
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar1 = *unaff_x22;
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  uVar2 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0),&stack0x00000008)
  ;
                    /* try { // try from 028f99a8 to 029f99cf has its CatchHandler @ 028f9b40 */
  uVar3 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0));
  if (lVar1 != 0) {
    FUN_02b9f22c(lVar1,uVar2,uVar3,0);
                    /* try { // try from 028f99e8 to 029f9a47 has its CatchHandler @ 028f9b44 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


