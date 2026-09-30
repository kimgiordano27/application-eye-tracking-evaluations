/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ClearErrorContext
ENTRY_POINT: 055cd2a8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext(void)

{
  int in_w8;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *in_stack_00000018;
  undefined4 *in_stack_00000048;
  
  if (in_w8 < 0) {
    if (*(long *)(*in_stack_00000018 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_0566da8c(*(long *)(*in_stack_00000018 + 0x30),0);
  }
  if (unaff_x19 == 0) {
    if ((unaff_w20 < 0x14) && ((1 << (ulong)(unaff_w20 & 0x1f) & 0x81001U) != 0)) {
      *in_stack_00000048 = 0xfffffffe;
      *(undefined8 *)(in_stack_00000048 + 0xc) = 0;
      thunk_FUN_02ee2be8(in_stack_00000048 + 0xc,0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0552c984(in_stack_00000048 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccbc();
}


