/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 0718a784
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


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference(long *param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *unaff_x19;
  long *unaff_x20;
  float fVar4;
  float fVar5;
  
  if (*unaff_x20 != *param_1) {
    thunk_FUN_03d1e194(PTR_DAT_091ab1c0);
    uVar2 = thunk_FUN_03d2ef40();
    uVar3 = thunk_FUN_03d1e194(PTR_DAT_09212e50);
    FUN_070cb7ec(uVar2,uVar3,0);
                    /* try { // try from 0718a83c to 0728aa37 has its CatchHandler @ 0718a83c
                       catch() { ... } // from try @ 0718a83c with catch @ 0718a83c
                       catch() { ... } // from try @ 0718aa80 with catch @ 0718a83c
                       catch() { ... } // from try @ 0718ab60 with catch @ 0718a83c
                       catch() { ... } // from try @ 0718ac9c with catch @ 0718a83c
                       catch() { ... } // from try @ 0718ad18 with catch @ 0718a83c
                       catch() { ... } // from try @ 0718ad74 with catch @ 0718a83c
                       catch() { ... } // from try @ 0718adcc with catch @ 0718a83c
                       catch() { ... } // from try @ 0718adf0 with catch @ 0718a83c
                       catch() { ... } // from try @ 0718ae50 with catch @ 0718a83c
                       catch() { ... } // from try @ 0718aec0 with catch @ 0718a83c
                       catch() { ... } // from try @ 0718aef0 with catch @ 0718a83c
                       catch() { ... } // from try @ 0718af88 with catch @ 0718a83c
                       catch() { ... } // from try @ 0718afbc with catch @ 0718a83c
                       catch() { ... } // from try @ 0718b078 with catch @ 0718a83c */
    uVar3 = thunk_FUN_03d1e194(PTR_DAT_09212e58);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar2,uVar3);
  }
  pfVar1 = (float *)thunk_FUN_03d2f094();
  fVar4 = *pfVar1;
  fVar5 = *unaff_x19;
  if (fVar5 < fVar4) {
    return -1;
  }
  if (fVar5 == fVar4) {
    if (fVar5 == fVar4) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(fVar5)) {
      return -(uint)((uint)ABS(fVar4) < 0x7f800001);
    }
  }
  return 1;
}


