/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_StringEscapeHandling
ENTRY_POINT: 07613640
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_StringEscapeHandling(void)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  
  FUN_0769cb24();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_0769cb24(*(long *)(unaff_x19 + 0x10),0);
    *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x10));
    iVar1 = 0;
    if (*(int *)(unaff_x19 + 0x20) != unaff_w20) {
      iVar1 = *(int *)(unaff_x19 + 0x20);
    }
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + 1;
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    *(int *)(unaff_x19 + 0x1c) = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


