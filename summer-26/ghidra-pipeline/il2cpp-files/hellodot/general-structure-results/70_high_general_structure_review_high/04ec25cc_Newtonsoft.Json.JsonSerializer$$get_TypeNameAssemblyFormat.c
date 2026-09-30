/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_TypeNameAssemblyFormat
ENTRY_POINT: 04ec25cc
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__get_TypeNameAssemblyFormat(long param_1)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  short unaff_w21;
  long *unaff_x23;
  long in_stack_00000008;
  
  if (*(short *)(in_x9 + 10) != unaff_w21) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02cd038c(param_1);
    }
    unaff_x19 = FUN_04dbb06c();
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar2 = FUN_04ec786c(unaff_x19);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar3 = FUN_04ebdab0(unaff_w20);
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    sVar1 = FUN_04db48b0(lVar2,*(int *)(lVar2 + 0x10) + -1,0);
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar5);
      lVar5 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar5 + 0xb8) + 10) != sVar1) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar5);
      }
      if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar4 = FUN_04e945d8(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      lVar2 = FUN_04db00f0(lVar2,uVar4,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar3 = FUN_02ccba1c(lVar2,&stack0x00000008);
  if ((uVar3 & 1) == 0) {
    in_stack_00000008 = lVar2;
  }
  return in_stack_00000008;
}


