/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SetupReader
ENTRY_POINT: 05067b38
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializer__SetupReader(void)

{
  short sVar1;
  int iVar2;
  int in_w8;
  int unaff_w19;
  int iVar3;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  
  do {
                    /* catch() { ... } // from try @ 05067900 with catch @ 05067b38 */
                    /* catch() { ... } // from try @ 050678f4 with catch @ 05067b3c */
    if (unaff_w22 < in_w8) {
                    /* catch() { ... } // from try @ 050678d0 with catch @ 05067b40 */
                    /* catch() { ... } // from try @ 050678b0 with catch @ 05067b44 */
                    /* catch() { ... } // from try @ 050678a4 with catch @ 05067b48 */
                    /* catch() { ... } // from try @ 05067864 with catch @ 05067b4c */
      sVar1 = FUN_04f69818();
                    /* catch() { ... } // from try @ 05067830 with catch @ 05067b50 */
                    /* catch() { ... } // from try @ 05067828 with catch @ 05067b54 */
                    /* catch() { ... } // from try @ 05067884 with catch @ 05067b58 */
                    /* catch() { ... } // from try @ 05067854 with catch @ 05067b5c */
                    /* catch() { ... } // from try @ 0506780c with catch @ 05067b60 */
      if ((sVar1 == 0x27) || (sVar1 == 0x5c)) {
        unaff_w19 = unaff_w22;
      }
    }
    do {
      while( true ) {
        iVar3 = unaff_w19;
        unaff_w19 = iVar3 + 1;
        if (*(int *)(unaff_x21 + 0x10) <= unaff_w19) {
                    /* try { // try from 05067b8c to 05167b8f has its CatchHandler @ 05067c00 */
                    /* try { // try from 05067b90 to 05167bef has its CatchHandler @ 05067788 */
          return -1;
        }
        if ((unaff_w23 & 1) == 0) {
          FUN_04f69818();
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          iVar2 = FUN_04f73d7c();
          if (iVar2 != -1) {
            return unaff_w19;
          }
        }
        sVar1 = FUN_04f69818();
        if (sVar1 != 0x27) break;
        unaff_w23 = unaff_w23 ^ 1;
      }
    } while (sVar1 != 0x5c);
    in_w8 = *(int *)(unaff_x21 + 0x10);
    unaff_w22 = iVar3 + 2;
  } while( true );
}


