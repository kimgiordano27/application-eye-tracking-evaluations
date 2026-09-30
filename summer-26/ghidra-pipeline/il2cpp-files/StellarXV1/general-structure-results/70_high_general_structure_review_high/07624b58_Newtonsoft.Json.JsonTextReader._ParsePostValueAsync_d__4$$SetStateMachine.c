/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$SetStateMachine
ENTRY_POINT: 07624b58
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


void Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__SetStateMachine(void)

{
  undefined8 uVar1;
  long lVar2;
  int unaff_w19;
  long unaff_x20;
  long lVar3;
  
  if (unaff_w19 == 0) {
    lVar3 = *(long *)PTR_DAT_092d03b8;
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      FUN_040b1b28(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
  }
  else {
    uVar1 = FUN_04077674(*(undefined8 *)PTR_DAT_09285880,unaff_w19);
  }
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
    thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x28));
    *(undefined4 *)(unaff_x20 + 0x30) = 0;
    *(int *)(unaff_x20 + 0x3c) = unaff_w19;
    *(undefined4 *)(unaff_x20 + 0x40) = 0x1010101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


