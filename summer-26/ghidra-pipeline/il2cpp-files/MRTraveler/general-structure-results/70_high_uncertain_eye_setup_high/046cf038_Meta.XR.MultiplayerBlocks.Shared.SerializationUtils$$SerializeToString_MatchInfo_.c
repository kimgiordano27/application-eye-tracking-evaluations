/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<MatchInfo>
ENTRY_POINT: 046cf038
PROGRAM: MRTraveler-libil2cpp.so
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
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x21;
  
  lVar1 = FUN_03cf1244(param_2);
  if ((*(byte *)(lVar1 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) == lVar1)) {
    thunk_FUN_03d233cc(unaff_x21 + 7,0);
    if (*(int *)(*(long *)PTR_DAT_08e69598 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0701f1e8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fecc();
}


