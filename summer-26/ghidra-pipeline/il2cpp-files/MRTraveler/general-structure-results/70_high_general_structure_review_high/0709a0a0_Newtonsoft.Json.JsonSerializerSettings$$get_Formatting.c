/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Formatting
ENTRY_POINT: 0709a0a0
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


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_Formatting(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x20;
  
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    *(undefined1 *)(*(long *)(unaff_x19 + 0x78) + 0x14) = 1;
    *(undefined1 *)(unaff_x19 + 0x140) = 1;
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    thunk_FUN_03cb2ab8();
    **(long **)(*unaff_x20 + 0xb8) = unaff_x19;
    thunk_FUN_03d233cc(*(undefined8 *)(*unaff_x20 + 0xb8));
    lVar1 = *unaff_x20;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar1 = *unaff_x20;
    }
    uVar2 = **(undefined8 **)(lVar1 + 0xb8);
    thunk_FUN_03cb2ab8();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


