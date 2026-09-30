/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
ENTRY_POINT: 074e058c
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken(void)

{
  short sVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long unaff_x20;
  short *unaff_x21;
  long *unaff_x23;
  
  sVar1 = FUN_07363804();
  if ((sVar1 != 0x58) && (sVar1 = FUN_07363804(), sVar1 != 0x78)) {
                    /* try { // try from 074e0624 to 075e062f has its CatchHandler @ 074e0228 */
    sVar1 = *unaff_x21;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 074e061c with catch @ 074e062c
                        */
                    /* try { // try from 074e0630 to 075e07f7 has its CatchHandler @ 074e0630
                       catch() { ... } // from try @ 074e0630 with catch @ 074e0630
                       catch() { ... } // from try @ 074e08f4 with catch @ 074e0630
                       catch() { ... } // from try @ 074e09b0 with catch @ 074e0630
                       catch() { ... } // from try @ 074e0a0c with catch @ 074e0630 */
    if (DAT_0953f498 == '\0') {
      FUN_0403162c(PTR_DAT_08f8ca88);
      DAT_0953f498 = '\x01';
    }
    if (unaff_x20 == 0) {
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      uVar2 = FUN_0736648c();
      uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_074e0160((int)sVar1,uVar2,uVar3);
    return;
  }
                    /* try { // try from 074e05bc to 075e05bf has its CatchHandler @ 074e05e0 */
  sVar1 = *unaff_x21;
                    /* try { // try from 074e05c0 to 075e05c7 has its CatchHandler @ 074e05dc */
  if (DAT_0953f498 == '\0') {
                    /* try { // try from 074e05c8 to 075e05cb has its CatchHandler @ 074e05d8 */
                    /* try { // try from 074e05cc to 075e060b has its CatchHandler @ 074e0228 */
    FUN_0403162c(PTR_DAT_08f8ca88);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e0504 with catch @ 074e05d4
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e05c8 with catch @ 074e05d8
                        */
    DAT_0953f498 = '\x01';
  }
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e05c0 with catch @ 074e05dc
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e05bc with catch @ 074e05e0
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e04e4 with catch @ 074e05e4
                        */
  uVar2 = FUN_0736648c();
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e0518 with catch @ 074e05e8
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e04a0 with catch @ 074e05ec
                        */
  uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e043c with catch @ 074e05f0
                        */
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364(*unaff_x23);
  }
                    /* try { // try from 074e060c to 075e060f has its CatchHandler @ 074e0618 */
                    /* catch() { ... } // from try @ 074e060c with catch @ 074e0618 */
                    /* try { // try from 074e061c to 075e0623 has its CatchHandler @ 074e062c */
  FUN_074e069c(sVar1,uVar2,uVar3);
  return;
}


