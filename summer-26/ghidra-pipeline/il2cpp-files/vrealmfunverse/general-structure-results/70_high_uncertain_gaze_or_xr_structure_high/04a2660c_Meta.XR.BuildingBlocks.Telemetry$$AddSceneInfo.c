/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 04a2660c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x19;
  
  if (0 < (int)param_3) {
    FUN_04d9e084(*(undefined8 *)(unaff_x19 + 0x18),0,param_3,0);
    lVar1 = *(long *)(unaff_x19 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_04d9e084(lVar1,0,*(undefined4 *)(lVar1 + 0x18),0);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  }
  *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
  return;
}


