/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$ExtractMatchInfoFromSessionId
ENTRY_POINT: 07761b20
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__ExtractMatchInfoFromSessionId(void)

{
  long lVar1;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  int iVar2;
  undefined8 *unaff_x22;
  int iVar3;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x21 + 0x2c5) = 1;
  lVar1 = thunk_FUN_0448520c(*unaff_x22);
  FUN_09503c1c(lVar1,unaff_w20,unaff_w19,0);
  if (0 < unaff_w20) {
    iVar2 = 0;
    do {
      if (0 < unaff_w19) {
        if (lVar1 == 0) goto LAB_07761bcc;
        iVar3 = 0;
        do {
          FUN_09503e58(lVar1,iVar2,iVar3,0);
          iVar3 = iVar3 + 1;
        } while (unaff_w19 != iVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != unaff_w20);
  }
  if (lVar1 != 0) {
    FUN_0950456c(lVar1,0);
    return lVar1;
  }
LAB_07761bcc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


