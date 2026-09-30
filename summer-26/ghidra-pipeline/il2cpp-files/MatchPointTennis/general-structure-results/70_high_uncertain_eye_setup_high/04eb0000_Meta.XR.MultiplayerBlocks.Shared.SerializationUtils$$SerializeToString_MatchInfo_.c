/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<MatchInfo>
ENTRY_POINT: 04eb0000
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<MatchInfo>(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_04484e3c(*(undefined8 *)(param_1 + 0x50));
  uVar2 = thunk_FUN_044adef4(PTR_DAT_09f26ec8);
  uVar1 = FUN_078ab14c(uVar2,uVar1,0);
  thunk_FUN_044adef4(PTR_DAT_09f20bb0);
  uVar2 = thunk_FUN_0448520c();
  FUN_07a3e070(uVar2,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar2);
}


