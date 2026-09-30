/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 04e29b48
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


ulong Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
                (undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  uint uVar1;
  int in_w8;
  
  if (in_ZR || in_NG != in_OV) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    do {
      uVar1 = (uint)param_4;
      if (*(uint *)(param_2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if ((*(int *)(param_2 + 0x20 +
                   (-(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3)) ==
           (int)param_3) &&
         (*(int *)(param_2 + 0x20 + (long)(int)uVar1 * 8 + 4) == (int)((ulong)param_3 >> 0x20)))
      goto LAB_04e29b98;
      param_4 = (ulong)(uVar1 - 1);
    } while (in_w8 <= (int)(uVar1 - 1));
  }
  param_4 = 0xffffffff;
LAB_04e29b98:
  return param_4 & 0xffffffff;
}


