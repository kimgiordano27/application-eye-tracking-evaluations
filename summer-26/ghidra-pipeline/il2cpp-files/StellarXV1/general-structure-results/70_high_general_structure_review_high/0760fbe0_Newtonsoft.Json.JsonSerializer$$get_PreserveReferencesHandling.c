/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_PreserveReferencesHandling
ENTRY_POINT: 0760fbe0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_PreserveReferencesHandling(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_09287040);
    *(undefined1 *)(unaff_x20 + 0xdc6) = 1;
  }
  lVar1 = FUN_04077674(*unaff_x23,3);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((unaff_x22 != 0) && (lVar2 = thunk_FUN_040b4e00(), lVar2 == 0)) {
LAB_0760fcb4:
    uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar3,0);
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(long *)(lVar1 + 0x20) = unaff_x22;
    thunk_FUN_040ec700();
    if ((unaff_x21 != 0) && (lVar2 = thunk_FUN_040b4e00(), lVar2 == 0)) goto LAB_0760fcb4;
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
      *(long *)(lVar1 + 0x28) = unaff_x21;
      thunk_FUN_040ec700();
      if ((unaff_x19 != 0) && (lVar2 = thunk_FUN_040b4e00(), lVar2 == 0)) goto LAB_0760fcb4;
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(long *)(lVar1 + 0x30) = unaff_x19;
        thunk_FUN_040ec700((long *)(lVar1 + 0x30));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


