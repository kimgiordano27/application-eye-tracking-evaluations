/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateValueInternal
ENTRY_POINT: 050009a8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xffa) = 1;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05014e28(0x30,0);
  }
  if (DAT_06a4dab6 == '\0') {
    FUN_02d4dc40(PTR_DAT_0664e730);
    DAT_06a4dab6 = '\x01';
  }
  puVar1 = PTR_DAT_06656a10;
  if (unaff_x19 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_04e7d3e0();
    uVar4 = *(undefined4 *)(unaff_x19 + 0x10);
  }
  uVar3 = FUN_04f8cd74(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)puVar1);
  }
  FUN_04fffa20(uVar2,uVar4,7,uVar3);
  return;
}


