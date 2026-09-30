/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserialized
ENTRY_POINT: 050d350c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  undefined4 unaff_w20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *plVar4;
  
  plVar4 = *(long **)(unaff_x24 + 0xd90);
  if (in_w8 == 0) {
    FUN_02f08768(PTR_DAT_067ce5b8);
    *(undefined1 *)(unaff_x23 + 0xda0) = 1;
  }
                    /* try { // try from 050d352c to 051d353b has its CatchHandler @ 050d353c */
  uVar2 = FUN_04f6c4a0();
  uVar1 = *(undefined4 *)(unaff_x22 + 0x10);
                    /* catch() { ... } // from try @ 050d34d0 with catch @ 050d353c
                       catch() { ... } // from try @ 050d352c with catch @ 050d353c */
                    /* try { // try from 050d3540 to 051d3543 has its CatchHandler @ 050d354c */
                    /* try { // try from 050d3544 to 051d354f has its CatchHandler @ 050d30a0 */
  uVar3 = FUN_0504574c();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050d3540 with catch @ 050d354c
                        */
  if (*(int *)(*plVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*plVar4);
  }
  FUN_050d240c(uVar2,uVar1,unaff_w20,uVar3);
  return;
}


