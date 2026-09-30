/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__17$$MoveNext
ENTRY_POINT: 06e265f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__17__MoveNext
          (void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long in_stack_00000008;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e937b8);
  *(undefined1 *)(unaff_x21 + 0x71) = 1;
  in_stack_00000008 = 0;
  if ((unaff_x19 == 0) ||
     (uVar1 = FUN_06f74e14(*(undefined8 *)(unaff_x19 + 0x18),0), (uVar1 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    if (unaff_x20[6] == 0) {
LAB_06e266b4:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = FUN_0675b410(unaff_x20[6],*(undefined8 *)(unaff_x19 + 0x18),&stack0x00000008,
                         *(undefined8 *)PTR_DAT_08e937b0);
    if (((in_stack_00000008 == 0) || ((uVar1 & 1) == 0)) ||
       (uVar1 = FUN_06e3a6c8(in_stack_00000008), (uVar1 & 1) == 0)) {
      if (unaff_x20[6] == 0) goto LAB_06e266b4;
      FUN_0675cb84(unaff_x20[6],*(undefined8 *)(unaff_x19 + 0x18));
      (**(code **)(*unaff_x20 + 0x238))();
    }
    uVar2 = 1;
  }
  return uVar2;
}


