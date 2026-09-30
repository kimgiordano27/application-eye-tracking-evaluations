/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$SetPostValueState
ENTRY_POINT: 05598bc8
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4 Newtonsoft_Json_JsonReader__SetPostValueState(uint param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  uint unaff_w22;
  long unaff_x24;
  long unaff_x29;
  undefined1 auVar7 [16];
  
  if (unaff_w22 < param_1) {
    FUN_0562295c(0);
  }
  puVar1 = PTR_DAT_06d4f290;
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02eea768();
  }
  lVar5 = *(long *)puVar1;
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02f07e70(PTR_DAT_06d38200);
    if (*(long *)(lVar5 + 0x38) == 0) {
      FUN_02eea7c4(lVar5);
    }
  }
  uVar3 = FUN_03af7c84();
  puVar1 = PTR_DAT_06d4f288;
  if (0x7fffffff80000000 < ((ulong)param_1 << 0x20) + 0x4000000000000000) {
    uVar3 = FUN_02f080d0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar3,lVar5);
  }
  auVar7 = FUN_0462c214(uVar3,param_1 << 1,*(undefined8 *)PTR_DAT_06d1b5b8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (DAT_071c2926 == '\0') {
    FUN_02f07e70(PTR_DAT_06d4f288);
    DAT_071c2926 = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar5 = *(long *)puVar1;
  }
  uVar3 = **(undefined8 **)(lVar5 + 0xb8);
  if (DAT_071c2927 == '\0') {
    FUN_02f07e70(PTR_DAT_06d4f288);
    FUN_02f07e70(PTR_DAT_06d4e1d8);
    FUN_02f07e70(PTR_DAT_06d14b30);
    DAT_071c2927 = '\x01';
  }
  uVar4 = FUN_03af7c78(auVar7._0_8_,auVar7._8_8_,*(undefined8 *)PTR_DAT_06d4e1d8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar1);
  }
  uVar2 = FUN_0560229c(uVar4,auVar7._8_8_ & 0xffffffff,uVar3,0);
  if (unaff_x19 != 0) {
    if (*(int *)(*(long *)PTR_DAT_06d3bca8 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar6 = *(long *)PTR_DAT_06d3bca0;
    lVar5 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar5 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    if ((long *)**(long **)(lVar5 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    (**(code **)(*(long *)**(long **)(lVar5 + 0xb8) + 0x188))();
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


