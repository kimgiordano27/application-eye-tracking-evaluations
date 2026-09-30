/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 06d743d4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo(long param_1)

{
  ulong uVar1;
  int in_w9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  
  while( true ) {
    if (in_w9 == 0) {
      thunk_FUN_03cd7500(param_1);
    }
    uVar1 = FUN_085dfaac(unaff_x21,unaff_x23,0);
    if ((uVar1 & 1) != 0) break;
    if ((*(long *)(unaff_x19 + 0x1e8) == 0) ||
       (FUN_06a5fcb8(*(long *)(unaff_x19 + 0x1e8),unaff_x21,*unaff_x22), unaff_x21 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_085eb51c(unaff_x21,0);
    unaff_x21 = FUN_085eb090(unaff_x21,0);
    if ((*(byte *)(unaff_x24 + 0x9ac) & 1) == 0) {
      FUN_03c8f898();
      FUN_03c8f898();
      *(undefined1 *)(unaff_x24 + 0x9ac) = unaff_w25;
    }
    unaff_x23 = FUN_085dbb5c();
    param_1 = *unaff_x20;
    in_w9 = *(int *)(param_1 + 0xe0);
  }
  return;
}


