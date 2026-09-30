/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasCreatorParameter
ENTRY_POINT: 054bdf20
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasCreatorParameter
               (undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x22;
  
                    /* catch() { ... } // from try @ 054bdf18 with catch @ 054bdf24 */
  sVar1 = FUN_053674f8(param_1,param_2,0);
                    /* try { // try from 054bdf28 to 055bdf2f has its CatchHandler @ 054bdf38 */
  lVar3 = *unaff_x22;
                    /* try { // try from 054bdf30 to 055bdf3b has its CatchHandler @ 054bdcb8 */
  if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 054bdf28 with catch @ 054bdf38 */
                    /* try { // try from 054bdf3c to 055bdfbb has its CatchHandler @ 054bdf3c
                       catch() { ... } // from try @ 054bdf3c with catch @ 054bdf3c
                       catch() { ... } // from try @ 054be034 with catch @ 054bdf3c
                       catch() { ... } // from try @ 054be078 with catch @ 054bdf3c
                       catch() { ... } // from try @ 054be0bc with catch @ 054bdf3c */
    thunk_FUN_02df485c(lVar3);
    lVar3 = *unaff_x22;
  }
  if (*(short *)(*(long *)(lVar3 + 0xb8) + 0x18) == sVar1) {
    if (2 < *(int *)(unaff_x19 + 0x10)) {
      uVar2 = FUN_053674f8();
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x22);
      }
      FUN_054b4628(uVar2);
    }
  }
  else {
    lVar3 = FUN_054a6674(0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  FUN_0536f444();
  return;
}


