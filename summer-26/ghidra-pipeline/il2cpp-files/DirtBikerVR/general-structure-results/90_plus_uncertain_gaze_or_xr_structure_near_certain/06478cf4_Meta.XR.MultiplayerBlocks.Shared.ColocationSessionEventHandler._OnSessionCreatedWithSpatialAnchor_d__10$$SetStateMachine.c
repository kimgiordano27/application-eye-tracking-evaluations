/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreatedWithSpatialAnchor>d__10$$SetStateMachine
ENTRY_POINT: 06478cf4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreatedWithSpatialAnchor>d__10__SetStateMachine
               (void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar1 = FUN_03ac4090();
  lVar2 = *(long *)(unaff_x22 + 0x20);
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) {
    FUN_06478904(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x30));
  }
  else {
    lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
      lVar2 = *(long *)(unaff_x22 + 0x20);
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) != 0) {
      lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
        lVar2 = *(long *)(unaff_x22 + 0x20);
      }
      if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) != 0) {
        lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03ac4090();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
        if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06478da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
          return;
        }
        goto LAB_06478df8;
      }
    }
    lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    lVar1 = **(long **)(lVar1 + 0xb8);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06478de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
      return;
    }
  }
LAB_06478df8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


