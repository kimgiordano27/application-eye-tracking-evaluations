/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 0313c74c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo(long param_1,undefined1 param_2 [16])

{
  undefined8 in_x9;
  long unaff_x19;
  uint unaff_w20;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000020 = param_2._0_8_;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (unaff_w20 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)unaff_w20 * 0x18;
    *(undefined8 *)(param_1 + 0x30) = in_x9;
    *(long *)(param_1 + 0x28) = param_2._8_8_;
    *(undefined8 *)(param_1 + 0x20) = uStack0000000000000020;
    thunk_FUN_01e10808((undefined8 *)(param_1 + 0x30),0);
    *(ulong *)(unaff_x19 + 0x18) =
         CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                  (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


