/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 07186e20
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(void)

{
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar1;
  
  *(undefined1 *)(unaff_x21 + 0x1d) = in_w8;
  uVar1 = *(undefined8 *)PTR_StringLiteral_50861_091adf38;
  if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_07186ef4(uVar1);
  if (unaff_x19 != 0) {
    FUN_0706db58();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


