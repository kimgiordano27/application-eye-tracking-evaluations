/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceLoopHandling
ENTRY_POINT: 07098070
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_JsonSerializerSettings__get_ReferenceLoopHandling(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long lVar5;
  uint unaff_w22;
  undefined8 uVar6;
  long unaff_x24;
  long unaff_x29;
  undefined1 auVar7 [16];
  
  puVar1 = PTR_DAT_08ea28d8;
  if (0x7fffffff80000000 < ((ulong)unaff_w22 << 0x20) + 0x4000000000000000) {
    FUN_03c8fb40();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc();
  }
  auVar7 = FUN_05a7cd18(param_1,unaff_w22 << 1,*(undefined8 *)PTR_DAT_08ea1330);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_0941be44 == '\0') {
    FUN_03c8f898(PTR_DAT_08ea28d8);
    DAT_0941be44 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar3 = *(long *)puVar1;
  }
  uVar6 = **(undefined8 **)(lVar3 + 0xb8);
  if (DAT_0941be45 == '\0') {
    FUN_03c8f898(PTR_DAT_08ea28d8);
    FUN_03c8f898(PTR_DAT_08ea0f58);
    FUN_03c8f898(PTR_DAT_08e9c770);
    DAT_0941be45 = '\x01';
  }
  uVar4 = FUN_0470d554(auVar7._0_8_,auVar7._8_8_,*(undefined8 *)PTR_DAT_08ea0f58);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar1);
  }
  uVar2 = FUN_07100c50(uVar4,auVar7._8_8_ & 0xffffffff,uVar6,0);
  if (unaff_x19 != 0) {
    if (*(int *)(*(long *)PTR_DAT_08e83758 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar5 = *(long *)PTR_DAT_08e83750;
    lVar3 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar3 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    if ((long *)**(long **)(lVar3 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    (**(code **)(*(long *)**(long **)(lVar3 + 0xb8) + 0x188))();
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


