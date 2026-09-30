/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<MatchInfo>
ENTRY_POINT: 03729758
PROGRAM: DiscGolf-libil2cpp.so
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
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  
  uStack000000000000002c = (undefined4)param_4;
  uStack0000000000000030 = (undefined4)((ulong)param_4 >> 0x20);
  uStack0000000000000000 = param_5;
  uStack0000000000000008 = param_1;
  uStack0000000000000010 = param_2;
  uStack0000000000000020 = param_3;
  plVar1 = (long *)thunk_FUN_02da6564();
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(*plVar1 + 0x210));
    FUN_05f1e544(uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


