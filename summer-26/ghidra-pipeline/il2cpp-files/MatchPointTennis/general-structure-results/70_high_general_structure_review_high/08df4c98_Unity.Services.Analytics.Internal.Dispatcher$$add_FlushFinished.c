/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$add_FlushFinished
ENTRY_POINT: 08df4c98
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


bool Unity_Services_Analytics_Internal_Dispatcher__add_FlushFinished(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  
  do {
                    /* catch() { ... } // from try @ 08df4b44 with catch @ 08df4c98 */
                    /* catch() { ... } // from try @ 08df4b54 with catch @ 08df4c9c */
                    /* catch() { ... } // from try @ 08df4b34 with catch @ 08df4ca0 */
    uVar2 = FUN_08df4ce8();
                    /* catch() { ... } // from try @ 08df4aa4 with catch @ 08df4ca4 */
                    /* catch() { ... } // from try @ 08df4c60 with catch @ 08df4ca8 */
                    /* catch() { ... } // from try @ 08df4c58 with catch @ 08df4cac */
                    /* catch() { ... } // from try @ 08df4c50 with catch @ 08df4cb0 */
    unaff_w22 = unaff_w22 + (~uVar2 & 1);
                    /* catch() { ... } // from try @ 08df4c54 with catch @ 08df4cb4
                       catch() { ... } // from try @ 08df4c5c with catch @ 08df4cb4 */
    unaff_w21 = unaff_w21 + 1;
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar3 = (int)*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18);
  } while (unaff_w21 < iVar3);
                    /* try { // try from 08df4cd0 to 08ef4cd3 has its CatchHandler @ 08df4cfc */
  bVar1 = unaff_w22 == 0;
                    /* try { // try from 08df4cd4 to 08ef4d0b has its CatchHandler @ 08df4718 */
  if ((unaff_x19 & 1) == 0) {
    bVar1 = unaff_w22 != iVar3;
  }
  return bVar1;
}


