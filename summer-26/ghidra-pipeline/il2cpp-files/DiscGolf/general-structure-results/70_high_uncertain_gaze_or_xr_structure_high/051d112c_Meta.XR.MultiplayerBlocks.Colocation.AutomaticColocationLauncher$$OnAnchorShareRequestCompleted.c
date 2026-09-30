/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 051d112c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
               (ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar1 + 0xb8) = unaff_x20;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  LeanTween__value(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


