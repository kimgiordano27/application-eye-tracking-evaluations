/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$IsSpecified
ENTRY_POINT: 05ded904
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified(long param_1)

{
  long unaff_x19;
  long *unaff_x21;
  
  *(undefined8 *)(unaff_x19 + 0x38) = **(undefined8 **)(param_1 + 0x30);
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x38));
  if (4 < *(uint *)(unaff_x19 + 0x18)) {
                    /* try { // try from 05ded928 to 05eed92b has its CatchHandler @ 05dedd68 */
                    /* try { // try from 05ded92c to 05eed93f has its CatchHandler @ 05dedd74 */
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)PTR_DAT_075ec020;
    thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x40));
    if (5 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)PTR_DAT_075ec028;
      thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x48));
                    /* try { // try from 05ded96c to 05eed9db has its CatchHandler @ 05dedd54 */
      if (6 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)PTR_DAT_075ec038;
        thunk_FUN_0329bf60();
        *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28) = unaff_x19;
        thunk_FUN_0329bf60();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


