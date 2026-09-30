/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ObjectCreationHandling
ENTRY_POINT: 070980e8
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


undefined4 Newtonsoft_Json_JsonSerializerSettings__get_ObjectCreationHandling(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x29;
  
  thunk_FUN_03cd7500();
  uVar5 = **(undefined8 **)(*unaff_x23 + 0xb8);
  if (DAT_0941be45 == '\0') {
    FUN_03c8f898(PTR_DAT_08ea28d8);
    FUN_03c8f898(PTR_DAT_08ea0f58);
    FUN_03c8f898(PTR_DAT_08e9c770);
    DAT_0941be45 = '\x01';
  }
  uVar2 = FUN_0470d554();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x23);
  }
  uVar1 = FUN_07100c50(uVar2,unaff_w20,uVar5,0);
  if (unaff_x19 != 0) {
    if (*(int *)(*(long *)PTR_DAT_08e83758 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar4 = *(long *)PTR_DAT_08e83750;
    lVar3 = *(long *)(lVar4 + 0x20);
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
    lVar3 = *(long *)(lVar4 + 0x20);
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
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


