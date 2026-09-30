/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteProperty
ENTRY_POINT: 0718a134
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteProperty(void)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *unaff_x19;
  uint unaff_w20;
  undefined8 in_stack_00000008;
  
  thunk_FUN_03db619c();
                    /* try { // try from 0718a14c to 0728a1bf has its CatchHandler @ 0718a14c
                       catch() { ... } // from try @ 0718a14c with catch @ 0718a14c
                       catch() { ... } // from try @ 0718a280 with catch @ 0718a14c
                       catch() { ... } // from try @ 0718a2c4 with catch @ 0718a14c
                       catch() { ... } // from try @ 0718a318 with catch @ 0718a14c
                       catch() { ... } // from try @ 0718a344 with catch @ 0718a14c
                       catch() { ... } // from try @ 0718a3b8 with catch @ 0718a14c */
  uVar2 = FUN_0717518c();
  if ((uVar2 & 1) == 0) {
LAB_0718a17c:
    uVar3 = 0;
  }
  else {
    cVar1 = (char)((ulong)in_stack_00000008 >> 0x20);
    if ((unaff_w20 >> 9 & 1) == 0) {
      if (in_stack_00000008._4_4_ != (int)cVar1) goto LAB_0718a17c;
    }
    else if (0xff < in_stack_00000008._4_4_) goto LAB_0718a17c;
    uVar3 = 1;
    *unaff_x19 = cVar1;
  }
  return uVar3;
}


