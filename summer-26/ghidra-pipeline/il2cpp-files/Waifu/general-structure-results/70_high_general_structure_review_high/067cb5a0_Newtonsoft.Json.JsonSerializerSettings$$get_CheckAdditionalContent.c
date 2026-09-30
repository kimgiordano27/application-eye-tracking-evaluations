/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_CheckAdditionalContent
ENTRY_POINT: 067cb5a0
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


long Newtonsoft_Json_JsonSerializerSettings__get_CheckAdditionalContent(void)

{
  long lVar1;
  
                    /* try { // try from 067cb5a4 to 068cb5ab has its CatchHandler @ 067cb658 */
  if ((DAT_086e09be & 1) == 0) {
                    /* try { // try from 067cb5ac to 068cb5b3 has its CatchHandler @ 067cb64c */
                    /* try { // try from 067cb5b4 to 068cb5bb has its CatchHandler @ 067cafb8 */
                    /* try { // try from 067cb5bc to 068cb5c3 has its CatchHandler @ 067cb648 */
    FUN_0335b6c8(&DAT_083cc118,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083c7838,1);
    DataMemoryBarrier(2,3);
    DAT_086e09be = 1;
  }
  lVar1 = FUN_03398188(DAT_083c7838,1);
  if (*(int *)(DAT_083cc118 + 0xe0) == 0) {
    FUN_033b9870(DAT_083cc118);
  }
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined4 *)(lVar1 + 0x20) = **(undefined4 **)(DAT_083cc118 + 0xb8);
      return lVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


