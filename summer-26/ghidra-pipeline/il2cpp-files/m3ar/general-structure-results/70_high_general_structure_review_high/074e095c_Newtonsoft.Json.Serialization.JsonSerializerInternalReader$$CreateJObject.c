/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJObject
ENTRY_POINT: 074e095c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject
               (short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               ushort *param_5,undefined8 param_6,undefined8 param_7)

{
  short sVar1;
  
  if ((DAT_09546e7f & 1) == 0) {
                    /* try { // try from 074e0994 to 075e0997 has its CatchHandler @ 074e09d4 */
                    /* try { // try from 074e0998 to 075e099b has its CatchHandler @ 074e09c4 */
                    /* try { // try from 074e099c to 075e099f has its CatchHandler @ 074e09d4 */
    FUN_0403162c(PTR_DAT_08f9f500);
                    /* try { // try from 074e09a0 to 075e09ab has its CatchHandler @ 074e09c0 */
    FUN_0403162c(PTR_DAT_08f8ca58);
                    /* try { // try from 074e09ac to 075e09af has its CatchHandler @ 074e09b8 */
                    /* try { // try from 074e09b0 to 075e09f3 has its CatchHandler @ 074e0630 */
    DAT_09546e7f = 1;
  }
  sVar1 = *param_1;
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e09ac with catch @ 074e09b8
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e08dc with catch @ 074e09bc
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e09a0 with catch @ 074e09c0
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e0998 with catch @ 074e09c4
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e08c0 with catch @ 074e09c8
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e08f0 with catch @ 074e09cc
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e07f8 with catch @ 074e09d0
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e0994 with catch @ 074e09d4
                       catch(type#1 @ 08931438) { ... } // from try @ 074e099c with catch @ 074e09d4
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e085c with catch @ 074e09d8
                        */
  if (((sVar1 < 0) && (0 < (int)param_6)) && ((*param_5 | 0x20) == 0x78)) {
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
                    /* try { // try from 074e09f4 to 075e09f7 has its CatchHandler @ 074e0a00 */
                    /* catch() { ... } // from try @ 074e09f4 with catch @ 074e0a00 */
                    /* try { // try from 074e0a04 to 075e0a0b has its CatchHandler @ 074e0a14 */
                    /* try { // try from 074e0a0c to 075e0a17 has its CatchHandler @ 074e0630 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 074e0a04 with catch @ 074e0a14
                        */
    FUN_074e0a6c(sVar1,param_5,param_6,param_7,param_2,param_3,param_4);
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_074e0d5c((int)sVar1,param_5,param_6,param_7,param_2,param_3,param_4);
  return;
}


