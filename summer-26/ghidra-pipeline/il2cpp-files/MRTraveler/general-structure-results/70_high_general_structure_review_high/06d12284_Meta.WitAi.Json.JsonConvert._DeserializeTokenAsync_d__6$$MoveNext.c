/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<DeserializeTokenAsync>d__6$$MoveNext
ENTRY_POINT: 06d12284
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


void Meta_WitAi_Json_JsonConvert_<DeserializeTokenAsync>d__6__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
code_r0x06d122b4:
      (*(code *)*puVar1)();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d91ca0(in_stack_00000008);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb28();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_03cf1348();
      goto code_r0x06d122b4;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


