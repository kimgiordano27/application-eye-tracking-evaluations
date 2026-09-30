/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$add_Error
ENTRY_POINT: 07096438
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__add_Error(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x28;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x798));
  *(undefined1 *)(unaff_x28 + 0x3fd) = 1;
  if ((*(uint *)(unaff_x25 + 0x10) < unaff_w23) ||
     (*(uint *)(unaff_x25 + 0x10) - unaff_w23 < unaff_w20)) {
    FUN_07122188(0x18,0);
  }
  lVar2 = System_Convert__ToInt16();
  if (*(char *)(unaff_x28 + 0x3fd) == '\0') {
    FUN_03c8f898(PTR_DAT_08e83798);
    *(undefined1 *)(unaff_x28 + 0x3fd) = 1;
  }
  lVar2 = lVar2 + (long)(int)unaff_w23 * 2;
  if ((*(uint *)(unaff_x22 + 0x10) < unaff_w21) ||
     (*(uint *)(unaff_x22 + 0x10) - unaff_w21 < unaff_w19)) {
    FUN_07122188(0x18,0);
  }
  lVar3 = System_Convert__ToInt16();
  lVar3 = lVar3 + (ulong)unaff_w21 * 2;
  if (unaff_w24 == 0x40000000) {
    if (DAT_0941be43 == '\0') {
      FUN_03c8f898(PTR_DAT_08e9bbb0);
      FUN_03c8f898(PTR_DAT_08e9bbb8);
      DAT_0941be43 = '\x01';
    }
    puVar1 = PTR_DAT_08e9bbb0;
    uVar4 = FUN_0470d55c(lVar2,unaff_w20,*(undefined8 *)PTR_DAT_08e9bbb0);
    uVar6 = *(undefined8 *)puVar1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08ea2830 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (DAT_0941be42 == '\0') {
      FUN_03c8f898(PTR_DAT_08ea2830);
      DAT_0941be42 = '\x01';
    }
    puVar1 = PTR_DAT_08ea2830;
    lVar5 = *(long *)PTR_DAT_08ea2830;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar5 = *(long *)puVar1;
    }
    if (**(char **)(lVar5 + 0xb8) == '\0') {
      FUN_07095bc0();
      return;
    }
    if ((unaff_w24 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08e9bb60 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_070959cc(lVar2,unaff_w20,lVar3,unaff_w19);
      return;
    }
    if (DAT_0941be43 == '\0') {
      FUN_03c8f898(PTR_DAT_08e9bbb0);
      FUN_03c8f898(PTR_DAT_08e9bbb8);
      DAT_0941be43 = '\x01';
    }
    puVar1 = PTR_DAT_08e9bbb0;
    uVar4 = FUN_0470d55c(lVar2,unaff_w20,*(undefined8 *)PTR_DAT_08e9bbb0);
    uVar6 = *(undefined8 *)puVar1;
  }
  uVar6 = FUN_0470d55c(lVar3,unaff_w19,uVar6);
  FUN_07114c3c(uVar4,unaff_w20,uVar6,unaff_w19,0);
  return;
}


