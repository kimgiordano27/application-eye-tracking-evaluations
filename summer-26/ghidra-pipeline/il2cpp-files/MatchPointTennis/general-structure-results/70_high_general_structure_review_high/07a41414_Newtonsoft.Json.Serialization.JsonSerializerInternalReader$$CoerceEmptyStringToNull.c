/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 07a41414
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull(void)

{
  uint uVar1;
  undefined2 uVar2;
  int in_w8;
  long unaff_x19;
  long unaff_x21;
  long lVar3;
  long unaff_x26;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x19 + 0x30);
  if (in_w8 == 0) {
    FUN_04447ba8(PTR_DAT_09f3b670);
    *(undefined1 *)(unaff_x26 + 0x1ab) = 1;
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(lVar3 + 0x10) == 1) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar4 = *(long *)(unaff_x21 + 8);
      uVar2 = FUN_078aee34(lVar3,0,0);
      *(undefined2 *)(lVar4 + (long)(int)uVar1 * 2) = uVar2;
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      goto LAB_07a4148c;
    }
  }
  FUN_078d0e00();
LAB_07a4148c:
  if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a46d3c();
  return;
}


