/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ResetReader
ENTRY_POINT: 061e0d84
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__ResetReader(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  long unaff_x21;
  
  puVar1 = PTR_DAT_07d99530;
  if (in_x9 != param_1) {
    unaff_x19 = 0;
  }
                    /* try { // try from 061e0d8c to 062e0dbf has its CatchHandler @ 061e0aec */
  if ((param_3 == 0) || (unaff_x19 == 0)) {
                    /* try { // try from 061e0dc0 to 062e0dcf has its CatchHandler @ 061e0dd0 */
    lVar2 = *(long *)PTR_DAT_07d99530;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
                    /* catch() { ... } // from try @ 061e0d74 with catch @ 061e0dd0
                       catch() { ... } // from try @ 061e0dc0 with catch @ 061e0dd0 */
      lVar2 = *(long *)puVar1;
    }
                    /* try { // try from 061e0dd4 to 062e0dd7 has its CatchHandler @ 061e0de0 */
                    /* try { // try from 061e0dd8 to 062e0de3 has its CatchHandler @ 061e0aec */
    if (**(long **)(lVar2 + 0xb8) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 061e0dd4 with catch @ 061e0de0
                        */
      FUN_061def58();
      return;
    }
  }
  else if (*(long **)(unaff_x21 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x061e0db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(unaff_x21 + 0x10) + 0x1a8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


