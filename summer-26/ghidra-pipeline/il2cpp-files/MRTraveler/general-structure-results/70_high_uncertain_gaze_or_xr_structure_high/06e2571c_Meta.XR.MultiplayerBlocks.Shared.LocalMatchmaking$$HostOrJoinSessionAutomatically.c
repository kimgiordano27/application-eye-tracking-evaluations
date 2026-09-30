/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$HostOrJoinSessionAutomatically
ENTRY_POINT: 06e2571c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__HostOrJoinSessionAutomatically(void)

{
  ulong uVar1;
  uint in_w8;
  long unaff_x20;
  uint *unaff_x21;
  ulong unaff_x22;
  undefined1 auVar2 [16];
  ulong unaff_d8;
  undefined8 in_register_00005108;
  
  do {
    if ((long)(int)in_w8 <= (long)unaff_x22) {
LAB_06e25738:
      auVar2._8_8_ = in_register_00005108;
      auVar2._0_8_ = unaff_d8;
      return auVar2;
    }
    if (in_w8 <= unaff_x22) {
LAB_06e25754:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar1 = FUN_06f73d88(*(undefined8 *)(unaff_x21 + -2));
    if ((uVar1 & 1) != 0) {
      if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x22) goto LAB_06e25754;
      unaff_d8 = (ulong)*unaff_x21;
      in_register_00005108 = 0;
      goto LAB_06e25738;
    }
    in_w8 = *(uint *)(unaff_x20 + 0x18);
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 4;
  } while( true );
}


