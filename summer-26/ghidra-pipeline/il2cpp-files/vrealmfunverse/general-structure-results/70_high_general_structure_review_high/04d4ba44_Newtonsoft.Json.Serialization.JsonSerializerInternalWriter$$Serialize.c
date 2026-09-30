/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 04d4ba44
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(void)

{
  int iVar1;
  code *in_x9;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x23;
  
  while( true ) {
    iVar1 = (*in_x9)();
    if (iVar1 == 0) break;
    unaff_w19 = unaff_w19 - iVar1;
    unaff_w22 = iVar1 + unaff_w22;
    if (unaff_w19 < 1) break;
    if (*(long **)(unaff_x20 + 0x10) == (long *)0x0) goto LAB_04d4bae4;
    in_x9 = *(code **)(**(long **)(unaff_x20 + 0x10) + 0x338);
  }
  if (unaff_x21 != 0) {
    if (unaff_w22 != *(int *)(unaff_x21 + 0x18)) {
      unaff_x21 = FUN_02b3c908(*unaff_x23,unaff_w22);
      thunk_FUN_02b4c8e4();
    }
    return unaff_x21;
  }
LAB_04d4bae4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


