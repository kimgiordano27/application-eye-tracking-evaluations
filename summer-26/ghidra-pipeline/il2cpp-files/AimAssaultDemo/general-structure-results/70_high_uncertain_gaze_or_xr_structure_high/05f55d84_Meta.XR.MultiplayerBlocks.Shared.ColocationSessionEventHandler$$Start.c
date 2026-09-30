/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Start
ENTRY_POINT: 05f55d84
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Start(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  
  lVar1 = FUN_03775678();
  lVar1 = **(long **)(lVar1 + 0xb8);
  thunk_FUN_03749f34();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678();
    }
    lVar1 = FUN_05f55e28(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18));
    thunk_FUN_03749f34();
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    **(long **)(lVar2 + 0xb8) = lVar1;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    thunk_FUN_037aeb94(*(undefined8 *)(lVar2 + 0xb8),lVar1);
  }
  return lVar1;
}


