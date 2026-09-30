/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 04eb9308
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *unaff_x21;
  long lVar5;
  undefined8 uVar6;
  
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a64283 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89a0);
    DAT_06a64283 = '\x01';
  }
  puVar2 = PTR_DAT_065f79f0;
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar4);
    lVar4 = *unaff_x21;
  }
  lVar3 = *(long *)puVar2;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_065dc868;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *(long *)puVar2;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca950);
    FUN_047b3b70(lVar5,uVar6,*(undefined8 *)PTR_DAT_065f7a30,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar5;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a697be == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc868);
    DAT_06a697be = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (lVar4 != 0) {
    FUN_04fb0664(lVar4,lVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


