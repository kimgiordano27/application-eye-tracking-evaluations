/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 0906c458
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionBegin(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *in_x9;
  undefined4 *in_x10;
  undefined4 *in_x11;
  long in_x12;
  long unaff_x19;
  
  (**(code **)(in_x12 + 0x2a8))(*param_1,*in_x9,*in_x10,*in_x11);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar2 = FUN_0a178414(*(long *)(unaff_x19 + 0x20),0);
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (iVar1 = FUN_0a18bd78(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
      FUN_0a17ba14(lVar2,0 < iVar1,0);
      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
         (lVar2 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
        FUN_0a17ba14(lVar2,*(char *)(unaff_x19 + 0x68) == '\0',0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


