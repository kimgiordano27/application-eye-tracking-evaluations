/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$PopulateInternal
ENTRY_POINT: 04d52444
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__PopulateInternal(void)

{
  byte bVar1;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_02b3c81c(PTR_DAT_06332a68);
  *(undefined1 *)(unaff_x20 + 0x706) = 1;
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06332a68 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06332a68)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44();
    }
    if (unaff_x19[8] != 0) {
      FUN_04cf66ec();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


