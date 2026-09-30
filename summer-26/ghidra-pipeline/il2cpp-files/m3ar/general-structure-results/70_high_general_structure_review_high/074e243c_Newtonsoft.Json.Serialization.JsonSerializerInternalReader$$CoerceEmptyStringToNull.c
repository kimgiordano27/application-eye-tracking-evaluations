/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 074e243c
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 unaff_w19;
  undefined4 uVar3;
  long unaff_x20;
  long unaff_x22;
  long *plVar4;
  
  plVar4 = *(long **)(unaff_x22 + 0x500);
  if (unaff_x20 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
                    /* try { // try from 074e2448 to 075e244b has its CatchHandler @ 074e247c */
                    /* try { // try from 074e244c to 075e244f has its CatchHandler @ 074e2484 */
    uVar1 = FUN_0736648c();
                    /* try { // try from 074e2450 to 075e2453 has its CatchHandler @ 074e2474 */
    uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
                    /* try { // try from 074e2454 to 075e2457 has its CatchHandler @ 074e2484 */
                    /* try { // try from 074e2458 to 075e2463 has its CatchHandler @ 074e2470 */
  }
                    /* try { // try from 074e2464 to 075e24a3 has its CatchHandler @ 074e2058 */
  uVar2 = FUN_07469794(0);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e2458 with catch @ 074e2470
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e2450 with catch @ 074e2474
                        */
  if (*(int *)(*plVar4 + 0xe4) == 0) {
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e23a0 with catch @ 074e2478
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e2448 with catch @ 074e247c
                        */
    thunk_FUN_0408f364(*plVar4);
  }
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e22d8 with catch @ 074e2480
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e244c with catch @ 074e2484
                       catch(type#1 @ 08931438) { ... } // from try @ 074e2454 with catch @ 074e2484
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e233c with catch @ 074e2488
                        */
  FUN_074e13a4(uVar1,uVar3,unaff_w19,uVar2);
  return;
}


