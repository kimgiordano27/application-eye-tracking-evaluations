/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$OnError
ENTRY_POINT: 05e29ed0
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


void Newtonsoft_Json_JsonSerializer__OnError(void)

{
  char cVar1;
  bool in_ZR;
  short sVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long unaff_x20;
  char *unaff_x21;
  long *unaff_x23;
  
  if ((!in_ZR) && (sVar2 = FUN_05c91ffc(), sVar2 != 0x78)) {
    cVar1 = *unaff_x21;
    if (DAT_07ed8f51 == '\0') {
      FUN_03642964(PTR_DAT_079ffcf8);
      DAT_07ed8f51 = '\x01';
    }
    if (unaff_x20 == 0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar3 = FUN_05c94ef4();
      uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_05e13004((int)cVar1,uVar3,uVar4);
    return;
  }
  cVar1 = *unaff_x21;
  if (DAT_07ed8f51 == '\0') {
    FUN_03642964(PTR_DAT_079ffcf8);
    DAT_07ed8f51 = '\x01';
  }
  uVar3 = FUN_05c94ef4();
  uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x23);
  }
  FUN_05e13540(cVar1,uVar3,uVar4);
  return;
}


