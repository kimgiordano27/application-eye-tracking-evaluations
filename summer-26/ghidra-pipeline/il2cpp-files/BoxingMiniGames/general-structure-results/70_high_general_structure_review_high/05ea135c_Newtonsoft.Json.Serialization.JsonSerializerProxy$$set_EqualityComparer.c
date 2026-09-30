/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_EqualityComparer
ENTRY_POINT: 05ea135c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_EqualityComparer(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  
  *(undefined1 *)(unaff_x21 + 0x206) = 1;
  if ((-1 < unaff_w19) && (unaff_w19 < *(int *)(unaff_x20 + 0x38))) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar1 = *(undefined4 *)(unaff_x20 + 0x14);
    uVar2 = *(undefined4 *)(unaff_x20 + 0x70);
    uVar3 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a180e8);
    FUN_05ea0d9c(uVar3,uVar4,uVar1,unaff_w19,uVar2);
    return uVar3;
  }
  thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
  uVar3 = thunk_FUN_0367fe20();
  uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a0b630);
  FUN_05d862e8(uVar3,uVar4,0);
  uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a18260);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar3,uVar4);
}


