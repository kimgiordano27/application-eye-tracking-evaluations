/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MaxDepth
ENTRY_POINT: 059343a4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x059343c8) */

void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MaxDepth(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03313794();
  }
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032c82b0();
  }
  plVar1 = (long *)thunk_FUN_032a56a0(*unaff_x22);
  FUN_059344ac(plVar1,unaff_w21);
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  plVar3 = (long *)FUN_032d5cb0(lVar2);
  *plVar3 = (long)plVar1;
  uVar4 = FUN_032d5cb0(*unaff_x22);
  thunk_FUN_0333a630(uVar4,plVar1);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


