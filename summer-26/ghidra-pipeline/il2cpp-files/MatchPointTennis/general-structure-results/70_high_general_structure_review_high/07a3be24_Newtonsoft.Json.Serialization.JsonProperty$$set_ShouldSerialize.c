/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$set_ShouldSerialize
ENTRY_POINT: 07a3be24
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


void Newtonsoft_Json_Serialization_JsonProperty__set_ShouldSerialize(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 unaff_w19;
  undefined4 uVar4;
  long unaff_x21;
  
  FUN_079b92f4(param_1,0);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_07a4fbac(0x30,0);
  }
  if (DAT_0a51d028 == '\0') {
    FUN_04447ba8(PTR_DAT_09f28738);
    DAT_0a51d028 = '\x01';
  }
  puVar1 = PTR_DAT_09f40bf0;
  if (unaff_x21 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_078b1c78();
    uVar4 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  uVar3 = FUN_079b8cc0();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)puVar1);
  }
  FUN_07a3ac44(uVar2,uVar4,unaff_w19,uVar3);
  return;
}


