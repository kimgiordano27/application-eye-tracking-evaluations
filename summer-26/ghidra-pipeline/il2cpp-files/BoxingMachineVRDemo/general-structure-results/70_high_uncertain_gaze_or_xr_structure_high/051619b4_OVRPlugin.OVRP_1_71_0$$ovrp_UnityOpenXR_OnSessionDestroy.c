/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 051619b4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(long param_1)

{
  byte bVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x488));
  *(undefined1 *)(unaff_x20 + 0xe5e) = 1;
  if (*(long **)(unaff_x19 + 0x10) != (long *)0x0) {
    lVar2 = **(long **)(unaff_x19 + 0x10);
    bVar1 = *(byte *)(*(long *)PTR_DAT_06782488 + 0x130);
    if ((*(byte *)(lVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06782488)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
  }
  return;
}


