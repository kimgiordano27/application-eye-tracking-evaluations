/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 067cac78
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w19;
  long unaff_x20;
  
                    /* try { // try from 067cac88 to 068cac9f has its CatchHandler @ 067caf08 */
  FUN_0335b6c8(&DAT_083cc118,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x9b5) = 1;
  if (unaff_w19 != 0) {
                    /* catch() { ... } // from try @ 067cab7c with catch @ 067caca0
                       try { // try from 067caca0 to 068cad03 has its CatchHandler @ 067ca3f0 */
    if (*(int *)(DAT_083cc118 + 0xe0) == 0) {
      FUN_033b9870();
    }
                    /* catch() { ... } // from try @ 067cab4c with catch @ 067cacb0 */
                    /* catch() { ... } // from try @ 067ca618 with catch @ 067cacbc */
    if (**(int **)(DAT_083cc118 + 0xb8) != unaff_w19) {
                    /* catch() { ... } // from try @ 067ca880 with catch @ 067caccc */
                    /* catch() { ... } // from try @ 067ca720 with catch @ 067cacd0 */
                    /* catch() { ... } // from try @ 067cab98 with catch @ 067cacd4
                       catch() { ... } // from try @ 067caba4 with catch @ 067cacd4 */
      uVar1 = FUN_033d1ba8(&DAT_08439ca8);
                    /* catch() { ... } // from try @ 067cab94 with catch @ 067cacd8 */
                    /* catch() { ... } // from try @ 067cab8c with catch @ 067cacdc */
                    /* catch() { ... } // from try @ 067cab88 with catch @ 067cace0 */
                    /* catch() { ... } // from try @ 067ca600 with catch @ 067cace4 */
      FUN_033d1ba8(&DAT_083c8a18);
                    /* catch() { ... } // from try @ 067ca61c with catch @ 067cace8 */
      uVar2 = thunk_FUN_03398a84();
                    /* catch() { ... } // from try @ 067ca5e4 with catch @ 067cacec */
                    /* catch() { ... } // from try @ 067caaa8 with catch @ 067cacf0 */
                    /* catch() { ... } // from try @ 067ca8b8 with catch @ 067cacf4 */
      uVar3 = FUN_033d1ba8(&DAT_08452438);
                    /* try { // try from 067cad04 to 068cad07 has its CatchHandler @ 067cae40 */
                    /* try { // try from 067cad08 to 068cad27 has its CatchHandler @ 067ca3f0 */
      FUN_06782c1c(uVar2,uVar3,uVar1,0);
      uVar1 = FUN_033d1ba8(&DAT_0840dda8);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar2,uVar1);
    }
  }
                    /* catch() { ... } // from try @ 067ca668 with catch @ 067cacc0 */
                    /* catch() { ... } // from try @ 067cab9c with catch @ 067cacc4 */
                    /* catch() { ... } // from try @ 067ca674 with catch @ 067cacc8 */
  return;
}


