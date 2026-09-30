/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 03390b94
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionExiting(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = thunk_FUN_01dd295c(*(undefined8 *)(param_1 + 0x240));
  uVar2 = thunk_FUN_01dd295c(StringLiteral_5617);
  uVar3 = thunk_FUN_01dd295c(StringLiteral_4728);
  uVar1 = FUN_0326b5e0(uVar1,uVar2,uVar3,0);
  thunk_FUN_01dd295c(StringLiteral_1867);
  uVar2 = thunk_FUN_01de27b8();
  FUN_03390c08(uVar2,uVar1);
  uVar1 = thunk_FUN_01dd295c(StringLiteral_8303);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar2,uVar1);
}


