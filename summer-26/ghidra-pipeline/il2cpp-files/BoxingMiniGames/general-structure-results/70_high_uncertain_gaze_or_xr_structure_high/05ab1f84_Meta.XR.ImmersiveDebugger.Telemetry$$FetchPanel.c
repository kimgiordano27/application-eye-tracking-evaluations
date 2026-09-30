/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$FetchPanel
ENTRY_POINT: 05ab1f84
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_ImmersiveDebugger_Telemetry__FetchPanel(long *param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_05dc2944();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = **(long **)(lVar1 + 0xc0);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc(lVar1);
  }
  if (param_1 != (long *)0x0) {
    if ((*(byte *)(*param_1 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(param_1);
    }
  }
  return param_1;
}


