/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Formatting
ENTRY_POINT: 07613270
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


long Newtonsoft_Json_JsonSerializerSettings__set_Formatting(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0xde6) & 1) == 0) {
                    /* try { // try from 07613280 to 077132a3 has its CatchHandler @ 076134d0 */
    FUN_04077588(PTR_DAT_092a50c8);
    *(undefined1 *)(unaff_x20 + 0xde6) = 1;
  }
  plVar3 = (long *)(param_1 + 0x30);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a50c8);
    FUN_076bca34(uVar2,0);
                    /* try { // try from 076132bc to 077132c3 has its CatchHandler @ 076134e8 */
    FUN_076ef0f0(plVar3,uVar2,0,0);
    lVar1 = *plVar3;
  }
                    /* try { // try from 076132d4 to 077132eb has its CatchHandler @ 076134e0 */
  return lVar1;
}


