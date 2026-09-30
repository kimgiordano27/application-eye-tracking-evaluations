/*
FUNCTION_NAME: WebSocketSharp.Net.HttpListenerRequest$$FlushInput
ENTRY_POINT: 087b2898
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void WebSocketSharp_Net_HttpListenerRequest__FlushInput(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  
  thunk_FUN_03cd7500(param_1);
  FUN_085a437c();
  plVar1 = (long *)FUN_086e9ffc();
  if (plVar1 != (long *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
    if (lVar2 != 0) {
      FUN_08786b68(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


