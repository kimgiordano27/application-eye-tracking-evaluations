/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 055f9d94
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo
               (undefined8 param_1,undefined1 param_2 [16],long param_3)

{
  ulong uVar1;
  long in_x9;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000028 = param_2._8_8_;
  uStack0000000000000020 = param_2._0_8_;
  while( true ) {
    uStack0000000000000030 = param_1;
    uVar1 = FUN_04ce835c(param_3,&stack0x00000020,*(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x10));
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) break;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    param_1 = unaff_x21[2];
    uStack0000000000000028 = unaff_x21[1];
    uStack0000000000000020 = *unaff_x21;
    param_3 = unaff_x22 + (long)(int)unaff_w19 * (long)unaff_w24 + 0x20;
    in_x9 = *(long *)(unaff_x20 + 0x20);
  }
  return 0xffffffff;
}


