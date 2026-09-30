/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Awake
ENTRY_POINT: 06477ee0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Awake(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x10) != 0) {
    lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
      lVar2 = *(long *)(unaff_x21 + 0x20);
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) != 0) {
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03ac4090();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
      goto joined_r0x06477f60;
    }
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
joined_r0x06477f60:
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* WARNING: Could not recover jumptable at 0x06477f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
  return;
}


