/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ResolveIsReference
ENTRY_POINT: 074c214c
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long in_stack_00000008;
  
  uVar1 = FUN_074c18f8(param_1,unaff_x25 + (unaff_x27 >> 0x1f));
  if ((uVar1 & 1) == 0) {
LAB_074c21a4:
    uVar2 = 0;
  }
  else {
    in_stack_00000008 = in_stack_00000008 - unaff_x25;
    if (in_stack_00000008 < 0) {
      in_stack_00000008 = in_stack_00000008 + 1;
    }
    if (in_stack_00000008 >> 1 < unaff_x27 >> 0x20) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar1 = FUN_074c21c4();
      if ((uVar1 & 1) == 0) goto LAB_074c21a4;
    }
                    /* try { // try from 074c219c to 075c2223 has its CatchHandler @ 074c219c
                       catch() { ... } // from try @ 074c219c with catch @ 074c219c
                       catch() { ... } // from try @ 074c2248 with catch @ 074c219c
                       catch() { ... } // from try @ 074c23b8 with catch @ 074c219c
                       catch() { ... } // from try @ 074c23ec with catch @ 074c219c */
    uVar2 = 1;
  }
  return uVar2;
}


