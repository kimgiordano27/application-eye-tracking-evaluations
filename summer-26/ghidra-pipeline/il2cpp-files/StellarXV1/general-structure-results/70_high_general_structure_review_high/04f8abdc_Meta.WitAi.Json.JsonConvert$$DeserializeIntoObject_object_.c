/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeIntoObject<object>
ENTRY_POINT: 04f8abdc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Meta_WitAi_Json_JsonConvert__DeserializeIntoObject<object>(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
                    /* try { // try from 04f8abdc to 0508ac3f has its CatchHandler @ 04f8abdc
                       catch() { ... } // from try @ 04f8abdc with catch @ 04f8abdc
                       catch() { ... } // from try @ 04f8ac60 with catch @ 04f8abdc
                       catch() { ... } // from try @ 04f8aca0 with catch @ 04f8abdc
                       catch() { ... } // from try @ 04f8acc4 with catch @ 04f8abdc */
  FUN_040b1b28();
  if ((*(ushort *)(**(long **)(unaff_x19 + 0x38) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  lVar1 = thunk_FUN_040b4efc();
  FUN_05ed0044(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
    thunk_FUN_040ec700();
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
    thunk_FUN_040ec700();
                    /* try { // try from 04f8ac40 to 0508ac4f has its CatchHandler @ 04f8ac80 */
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar2 = thunk_FUN_040b4efc();
                    /* try { // try from 04f8ac58 to 0508ac5f has its CatchHandler @ 04f8ac7c */
                    /* try { // try from 04f8ac60 to 0508ac9b has its CatchHandler @ 04f8abdc */
    FUN_05690a38(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04f8ac58 with catch @ 04f8ac7c
                        */
  FUN_04077830();
}


