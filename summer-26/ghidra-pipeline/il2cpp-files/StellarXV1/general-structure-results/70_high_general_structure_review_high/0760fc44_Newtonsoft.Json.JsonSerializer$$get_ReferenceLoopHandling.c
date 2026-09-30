/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ReferenceLoopHandling
ENTRY_POINT: 0760fc44
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


void Newtonsoft_Json_JsonSerializer__get_ReferenceLoopHandling(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  lVar1 = thunk_FUN_040b4e00();
  if (lVar1 != 0) {
    if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(unaff_x20 + 0x28) = unaff_x21;
      thunk_FUN_040ec700();
      if ((unaff_x19 != 0) && (lVar1 = thunk_FUN_040b4e00(), lVar1 == 0)) goto LAB_0760fcb4;
      if (2 < *(uint *)(unaff_x20 + 0x18)) {
        *(long *)(unaff_x20 + 0x30) = unaff_x19;
        thunk_FUN_040ec700((long *)(unaff_x20 + 0x30));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0760fcb4:
  uVar2 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar2,0);
}


