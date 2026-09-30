/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContract
ENTRY_POINT: 05dddae4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long unaff_x21;
  long unaff_x23;
  
  if (*(char *)(unaff_x23 + 0x293) == '\0') {
    FUN_031f20f4(PTR_DAT_075a1470);
    *(undefined1 *)(unaff_x23 + 0x293) = 1;
  }
  if (unaff_x21 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_05c857f0();
    uVar2 = *(undefined4 *)(unaff_x21 + 0x10);
                    /* try { // try from 05dddb00 to 05eddb03 has its CatchHandler @ 05dddb7c */
                    /* try { // try from 05dddb04 to 05eddb6b has its CatchHandler @ 05ddd7bc */
  }
  if (*(int *)(*(long *)PTR_DAT_075ebb80 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* try { // try from 05dddb6c to 05eddb7b has its CatchHandler @ 05dddb7c */
                    /* catch() { ... } // from try @ 05dddb00 with catch @ 05dddb7c
                       catch() { ... } // from try @ 05dddb6c with catch @ 05dddb7c */
                    /* try { // try from 05dddb80 to 05eddb83 has its CatchHandler @ 05dddb8c */
                    /* try { // try from 05dddb84 to 05eddb8f has its CatchHandler @ 05ddd7bc */
  FUN_05dddc3c(uVar1,uVar2);
  return;
}


