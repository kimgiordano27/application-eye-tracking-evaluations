/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 05b4edb0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived
                 (void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  
  lVar1 = FUN_0367c9fc();
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    plVar3 = (long *)FUN_04a77868(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x20));
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
      FUN_0744b578(plVar3,1,0);
      (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
      return plVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


