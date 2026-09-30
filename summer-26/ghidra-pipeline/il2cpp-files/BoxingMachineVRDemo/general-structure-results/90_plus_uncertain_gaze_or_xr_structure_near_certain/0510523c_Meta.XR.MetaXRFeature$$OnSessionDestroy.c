/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionDestroy
ENTRY_POINT: 0510523c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MetaXRFeature__OnSessionDestroy
               (long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  
  if (((param_5 == 0) || (lVar1 = *(long *)(param_5 + 0xd0), lVar1 == 0)) &&
     ((param_4 == 0 || (lVar1 = *(long *)(param_4 + 0xa0), lVar1 == 0)))) {
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(long *)(param_2 + 0x70);
      if (lVar1 == 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar1 = FUN_0509de7c(*(long *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x60),0);
        if (lVar1 == 0) {
          lVar1 = *(long *)(param_2 + 0x78);
        }
      }
    }
  }
  return lVar1;
}


