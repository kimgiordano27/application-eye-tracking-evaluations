/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_FloatFormatHandling
ENTRY_POINT: 076134f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_FloatFormatHandling(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  
                    /* catch() { ... } // from try @ 07613380 with catch @ 076134f8 */
                    /* catch() { ... } // from try @ 0761348c with catch @ 076134fc */
                    /* catch() { ... } // from try @ 07613458 with catch @ 07613500 */
                    /* catch() { ... } // from try @ 07613454 with catch @ 07613504 */
                    /* catch() { ... } // from try @ 07613450 with catch @ 07613508 */
                    /* catch() { ... } // from try @ 0761344c with catch @ 0761350c */
                    /* try { // try from 07613528 to 0771352b has its CatchHandler @ 07613534 */
  FUN_076135c0();
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar3 = *(uint *)(unaff_x19 + 0x1c);
    if ((unaff_x20 != 0) && (lVar5 = thunk_FUN_040b4e00(), lVar5 == 0)) {
      uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar6,0);
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(long *)(lVar7 + (long)(int)uVar3 * 8 + 0x20) = unaff_x20;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


