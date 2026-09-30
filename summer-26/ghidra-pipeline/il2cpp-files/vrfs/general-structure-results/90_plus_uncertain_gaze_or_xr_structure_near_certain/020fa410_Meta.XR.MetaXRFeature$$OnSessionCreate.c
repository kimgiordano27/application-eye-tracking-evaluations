/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionCreate
ENTRY_POINT: 020fa410
PROGRAM: vrfs-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionCreate(long param_1)

{
  int in_w8;
  long lVar1;
  uint unaff_w20;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_016466fc();
    param_1 = *unaff_x22;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xb8) + 0x18);
  if (lVar1 == 0) {
LAB_020fa4a8:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (*(uint *)(lVar1 + 0x18) <= unaff_w20) {
LAB_020fa4a4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  if (unaff_w20 != 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_1 = *unaff_x22;
      lVar1 = *(long *)(*(long *)(param_1 + 0xb8) + 0x18);
      if (lVar1 == 0) goto LAB_020fa4a8;
    }
    if (*(uint *)(lVar1 + 0x18) <= unaff_w20 + 2) goto LAB_020fa4a4;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_020fa4ac();
  return;
}


