/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<MatchInfo>
ENTRY_POINT: 03a81298
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<MatchInfo>
               (undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x24;
  long unaff_x29;
  
  iVar2 = FUN_060a4b68(param_1,0);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(lVar4 + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
    lVar4 = *(long *)(unaff_x20 + 0x38);
  }
  FUN_02f08988(lVar3,*(undefined8 *)(lVar4 + 0x10));
  if (*(int *)(unaff_x29 + -0x10) < iVar2) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x38);
    lVar3 = *(long *)(lVar4 + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768();
      lVar4 = *(long *)(unaff_x20 + 0x38);
    }
    FUN_02f08988(lVar3,*(undefined8 *)(lVar4 + 0x18));
    iVar2 = FUN_060a5020(*(undefined8 *)(unaff_x29 + -0x10),iVar2,unaff_x29 + -0x18,1,0);
    bVar1 = iVar2 == 0;
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


