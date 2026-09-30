/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$ExtractMatchInfoFromSessionId
ENTRY_POINT: 04abae20
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__ExtractMatchInfoFromSessionId(void)

{
  int iVar1;
  undefined8 uVar2;
  int *unaff_x19;
  uint unaff_w21;
  int *piVar3;
  
  uVar2 = FUN_02b3c908();
  iVar1 = unaff_w21 - 1;
  if (iVar1 != 0) {
    FUN_04d9e334(*(undefined8 *)(unaff_x19 + 6),0,uVar2,0,iVar1,0);
  }
  piVar3 = unaff_x19 + 6;
  FUN_04d9e334(*(undefined8 *)piVar3,unaff_w21,uVar2,iVar1,*unaff_x19 + ~unaff_w21,0);
  *(undefined8 *)piVar3 = uVar2;
  thunk_FUN_02bb0e9c(piVar3,uVar2);
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


