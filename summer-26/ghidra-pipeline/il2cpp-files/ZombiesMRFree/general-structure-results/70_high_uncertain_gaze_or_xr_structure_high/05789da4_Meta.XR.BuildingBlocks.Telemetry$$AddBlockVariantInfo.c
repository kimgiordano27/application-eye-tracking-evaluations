/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 05789da4
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


uint Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo(void)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  uint unaff_w19;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  
  while( true ) {
    if (in_NG != in_OV) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    uVar1 = (**(code **)(*unaff_x23 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    in_OV = SBORROW4(unaff_w19,unaff_w24);
    in_NG = (int)(unaff_w19 - unaff_w24) < 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


