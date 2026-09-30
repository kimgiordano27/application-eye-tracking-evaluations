/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 04d45208
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long *in_stack_00000028;
  
  if ((*in_stack_00000028 != 0) && (lVar1 = FUN_04d40734(), lVar1 != 0)) {
    FUN_04de299c(lVar1,0);
    if (unaff_x20 == 0) {
      if ((unaff_w21 < 0x1d) && ((1 << (ulong)(unaff_w21 & 0x1f) & 0x10100001U) != 0)) {
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_04caac50(unaff_x19 + 2,0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


