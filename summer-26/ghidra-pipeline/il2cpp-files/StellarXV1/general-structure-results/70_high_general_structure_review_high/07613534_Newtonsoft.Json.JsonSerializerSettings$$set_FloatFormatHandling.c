/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_FloatFormatHandling
ENTRY_POINT: 07613534
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_FloatFormatHandling(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
                    /* catch() { ... } // from try @ 07613528 with catch @ 07613534 */
  uVar3 = *(uint *)(unaff_x19 + 0x1c);
                    /* try { // try from 07613538 to 0771353f has its CatchHandler @ 07613548 */
                    /* try { // try from 07613540 to 0771354b has its CatchHandler @ 076130b4 */
                    /* catch() { ... } // from try @ 07613538 with catch @ 07613548 */
  if ((unaff_x20 != 0) && (lVar5 = thunk_FUN_040b4e00(), lVar5 == 0)) {
    uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar6,0);
  }
  if (*(uint *)(unaff_x21 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  *(long *)(unaff_x21 + (long)(int)uVar3 * 8 + 0x20) = unaff_x20;
  thunk_FUN_040ec700();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    iVar1 = *(int *)(unaff_x19 + 0x1c) + 1;
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar1 / iVar2;
    }
    *(int *)(unaff_x19 + 0x1c) = iVar1 - iVar4 * iVar2;
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


