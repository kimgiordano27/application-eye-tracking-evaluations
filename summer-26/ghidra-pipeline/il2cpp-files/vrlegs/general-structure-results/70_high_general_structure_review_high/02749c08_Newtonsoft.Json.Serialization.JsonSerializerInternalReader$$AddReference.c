/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$AddReference
ENTRY_POINT: 02749c08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_x9;
  long unaff_x19;
  long *unaff_x21;
  
  uVar1 = in_x9 - (param_1 >> 0x3f);
  if (unaff_x19 + uVar1 * -600000000 == 0) {
    if (unaff_x19 + 504000000000U < 0xeab17b6001) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    /* try { // try from 02749c4c to 02849e9b has its CatchHandler @ 02749c4c
                       catch() { ... } // from try @ 02749c4c with catch @ 02749c4c
                       catch() { ... } // from try @ 02749f64 with catch @ 02749c4c
                       catch() { ... } // from try @ 0274a004 with catch @ 02749c4c
                       catch() { ... } // from try @ 0274a00c with catch @ 02749c4c
                       catch() { ... } // from try @ 0274a0bc with catch @ 02749c4c */
        thunk_FUN_01a58e78();
      }
      return uVar1 & 0xffffffff;
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar2 = thunk_FUN_01a89e68();
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbe010);
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfa468);
    FUN_026ade84(uVar2,uVar3,uVar4,0);
  }
  else {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar2 = thunk_FUN_01a89e68();
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfa460);
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cbe010);
    FUN_026a7658(uVar2,uVar3,uVar4,0);
  }
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfa470);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar2,uVar3);
}


