/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<TicketResponse>
ENTRY_POINT: 04cd9730
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject<TicketResponse>
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
                    /* try { // try from 04cd9738 to 04dd9747 has its CatchHandler @ 04cd978c */
  plVar3 = *(long **)(param_3 + 0x38);
  if (plVar3 == (long *)0x0) {
                    /* try { // try from 04cd9750 to 04dd975b has its CatchHandler @ 04cd97a4 */
    FUN_04482014(param_3);
    plVar3 = *(long **)(param_3 + 0x38);
  }
  if ((*(byte *)(*plVar3 + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  lVar1 = thunk_FUN_0448520c();
                    /* try { // try from 04cd9774 to 04dd9777 has its CatchHandler @ 04cd9798 */
                    /* try { // try from 04cd9778 to 04dd977b has its CatchHandler @ 04cd9794 */
  FUN_05ca8688(lVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
                    /* catch() { ... } // from try @ 04cd96a8 with catch @ 04cd977c
                       try { // try from 04cd977c to 04dd97c3 has its CatchHandler @ 04cd95e0 */
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 04cd96dc with catch @ 04cd9780 */
                    /* catch() { ... } // from try @ 04cd968c with catch @ 04cd9784 */
    *(undefined8 *)(lVar1 + 0x10) = param_2;
                    /* catch() { ... } // from try @ 04cd96f0 with catch @ 04cd9788 */
                    /* catch() { ... } // from try @ 04cd9738 with catch @ 04cd978c */
    thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x10),param_2);
                    /* catch() { ... } // from try @ 04cd9728 with catch @ 04cd9790 */
                    /* catch() { ... } // from try @ 04cd96c4 with catch @ 04cd9794
                       catch() { ... } // from try @ 04cd9778 with catch @ 04cd9794 */
    *(undefined8 *)(lVar1 + 0x18) = param_1;
                    /* catch() { ... } // from try @ 04cd967c with catch @ 04cd9798
                       catch() { ... } // from try @ 04cd9774 with catch @ 04cd9798 */
                    /* catch() { ... } // from try @ 04cd9670 with catch @ 04cd979c */
    thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x18),param_1);
                    /* catch() { ... } // from try @ 04cd9638 with catch @ 04cd97a0 */
                    /* catch() { ... } // from try @ 04cd9750 with catch @ 04cd97a4 */
                    /* catch() { ... } // from try @ 04cd9654 with catch @ 04cd97a8 */
                    /* catch() { ... } // from try @ 04cd962c with catch @ 04cd97ac */
    if ((*(byte *)(*(long *)(*(long *)(param_3 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar2 = thunk_FUN_0448520c();
                    /* try { // try from 04cd97c4 to 04dd97db has its CatchHandler @ 04cd981c */
    FUN_05557410(uVar2,lVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x30));
                    /* try { // try from 04cd97dc to 04dd980b has its CatchHandler @ 04cd95e0 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


