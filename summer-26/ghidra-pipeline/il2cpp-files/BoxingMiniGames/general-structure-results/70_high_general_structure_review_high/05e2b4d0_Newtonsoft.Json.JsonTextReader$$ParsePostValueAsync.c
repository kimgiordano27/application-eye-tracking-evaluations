/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValueAsync
ENTRY_POINT: 05e2b4d0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonTextReader__ParsePostValueAsync(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 in_w8;
  undefined4 uVar5;
  undefined4 *unaff_x19;
  int iVar6;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  undefined1 auVar7 [16];
  
  *(undefined1 *)(unaff_x25 + 0xd46) = in_w8;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar1 = FUN_05e2587c();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  auVar7 = FUN_05e10150();
  uVar4 = auVar7._8_8_;
  uVar2 = auVar7._0_8_;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x70);
  if (DAT_07ed8f51 == '\0') {
    FUN_03642964(PTR_DAT_079ffcf8);
    DAT_07ed8f51 = '\x01';
    if (uVar1 == 0) goto LAB_05e2b564;
LAB_05e2b534:
    uVar3 = FUN_05c94ef4(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  else {
    if (uVar1 != 0) goto LAB_05e2b534;
LAB_05e2b564:
    uVar3 = 0;
  }
  if (DAT_07ede698 == '\0') {
    FUN_03642964(PTR_DAT_07a0b7b8);
    FUN_03642964(PTR_DAT_07a0b588);
    DAT_07ede698 = '\x01';
  }
  iVar6 = auVar7._8_4_;
  if ((iVar6 == (int)uVar1) &&
     ((iVar6 == 0 ||
      (uVar1 = FUN_05c9e23c(uVar2,uVar4,uVar3,uVar1,*(undefined8 *)PTR_DAT_07a0b7b8),
      (uVar1 & 1) != 0)))) {
    uVar5 = 0x7f800000;
    goto LAB_05e2b710;
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x78);
  if (DAT_07ed8f51 == '\0') {
    FUN_03642964(PTR_DAT_079ffcf8);
    DAT_07ed8f51 = '\x01';
    if (uVar1 == 0) goto LAB_05e2b60c;
LAB_05e2b5dc:
    uVar3 = FUN_05c94ef4(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  else {
    if (uVar1 != 0) goto LAB_05e2b5dc;
LAB_05e2b60c:
    uVar3 = 0;
  }
  if (DAT_07ede698 == '\0') {
    FUN_03642964(PTR_DAT_07a0b7b8);
    FUN_03642964(PTR_DAT_07a0b588);
    DAT_07ede698 = '\x01';
  }
  if ((iVar6 == (int)uVar1) &&
     ((iVar6 == 0 ||
      (uVar1 = FUN_05c9e23c(uVar2,uVar4,uVar3,uVar1,*(undefined8 *)PTR_DAT_07a0b7b8),
      (uVar1 & 1) != 0)))) {
    uVar5 = 0xff800000;
    goto LAB_05e2b710;
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x68);
  if (DAT_07ed8f51 == '\0') {
    FUN_03642964(PTR_DAT_079ffcf8);
    DAT_07ed8f51 = '\x01';
    if (uVar1 == 0) goto LAB_05e2b6b0;
LAB_05e2b680:
    uVar3 = FUN_05c94ef4(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  else {
    if (uVar1 != 0) goto LAB_05e2b680;
LAB_05e2b6b0:
    uVar3 = 0;
  }
  if (DAT_07ede698 == '\0') {
    FUN_03642964(PTR_DAT_07a0b7b8);
    FUN_03642964(PTR_DAT_07a0b588);
    DAT_07ede698 = '\x01';
  }
  if ((iVar6 != (int)uVar1) ||
     ((iVar6 != 0 &&
      (uVar1 = FUN_05c9e23c(uVar2,uVar4,uVar3,uVar1,*(undefined8 *)PTR_DAT_07a0b7b8),
      (uVar1 & 1) == 0)))) {
    return 0;
  }
  uVar5 = 0x7fc00000;
LAB_05e2b710:
  *unaff_x19 = uVar5;
  return 1;
}


