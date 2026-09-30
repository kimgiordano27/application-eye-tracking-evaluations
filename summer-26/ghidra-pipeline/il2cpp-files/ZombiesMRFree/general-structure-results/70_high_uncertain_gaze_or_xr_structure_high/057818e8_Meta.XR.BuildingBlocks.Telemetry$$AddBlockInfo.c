/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 057818e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  ulong uVar1;
  long lVar2;
  code *in_x9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  
  uStack0000000000000088 = param_4._8_8_;
  uStack0000000000000080 = param_4._0_8_;
  uStack0000000000000098 = param_2._8_8_;
  uStack0000000000000090 = param_2._0_8_;
  while( true ) {
    uVar1 = (*in_x9)();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar2 = unaff_x21 + (long)(int)unaff_w19 * (long)unaff_w24;
    uStack0000000000000098 = *(undefined8 *)(lVar2 + 0x28);
    uStack0000000000000090 = *(undefined8 *)(lVar2 + 0x20);
    uStack0000000000000088 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack0000000000000080 = *(undefined8 *)(unaff_x20 + 0x20);
    in_x9 = *(code **)(*unaff_x22 + 0x1b8);
  }
  return 0xffffffff;
}


