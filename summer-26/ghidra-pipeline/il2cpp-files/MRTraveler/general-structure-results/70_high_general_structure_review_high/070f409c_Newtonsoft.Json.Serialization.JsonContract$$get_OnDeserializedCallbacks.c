/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnDeserializedCallbacks
ENTRY_POINT: 070f409c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonContract__get_OnDeserializedCallbacks(long param_1)

{
  ulong uVar1;
  int in_w9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  
  while( true ) {
    if (in_w9 == 0) {
      thunk_FUN_03cd7500(param_1);
    }
    uVar1 = FUN_070f62b8();
    if ((uVar1 & 1) != 0) break;
    unaff_x25 = unaff_x25 + 1;
    if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)unaff_x25) {
      return 0;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x25)
    goto Newtonsoft_Json_Serialization_JsonContract__get_OnErrorCallbacks;
    unaff_x23 = FUN_0709a744();
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x24);
    }
    uVar1 = FUN_070f62b8();
    if ((uVar1 & 1) != 0) break;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x25)
    goto Newtonsoft_Json_Serialization_JsonContract__get_OnErrorCallbacks;
    unaff_x23 = FUN_0709a884();
    param_1 = *unaff_x24;
    in_w9 = *(int *)(param_1 + 0xe0);
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  *(int *)(unaff_x20 + 0x10) = *(int *)(unaff_x20 + 0x10) + *(int *)(unaff_x23 + 0x10) + -1;
  if ((uint)unaff_x25 < *(uint *)(unaff_x22 + 0x18)) {
    *unaff_x19 = *(undefined4 *)(unaff_x22 + 0x20 + unaff_x25 * 4);
    return 1;
  }
Newtonsoft_Json_Serialization_JsonContract__get_OnErrorCallbacks:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


