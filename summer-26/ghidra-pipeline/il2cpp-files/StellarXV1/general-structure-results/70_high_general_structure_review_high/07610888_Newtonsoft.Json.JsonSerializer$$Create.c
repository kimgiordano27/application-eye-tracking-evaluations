/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 07610888
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Create(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  
  lVar1 = thunk_FUN_040b4efc(*param_1);
  FUN_076bca34(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
    thunk_FUN_040ec700();
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
    thunk_FUN_040ec700();
    if (unaff_x22 != 0) {
      unaff_x24 = (long *)(unaff_x22 + 0x20);
    }
    *unaff_x24 = lVar1;
    thunk_FUN_040ec700(unaff_x24,lVar1);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


