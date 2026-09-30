/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 05934454
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


/* WARNING: Removing unreachable block (ram,0x059344a0) */

void Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(void)

{
  bool in_ZR;
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  if (!in_ZR) {
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_03313794();
    }
                    /* WARNING: Subroutine does not return */
    FUN_033a8ff4();
  }
  plVar3 = (long *)__cxa_begin_catch();
  lVar4 = *plVar3;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03313794();
  }
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032c82b0(lVar4);
  }
  plVar3 = (long *)thunk_FUN_032a56a0(*unaff_x22);
  FUN_059344ac(plVar3,0);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar4 = *unaff_x22;
  }
  plVar1 = (long *)FUN_032d5cb0(lVar4);
  *plVar1 = (long)plVar3;
  uVar2 = FUN_032d5cb0(*unaff_x22);
  thunk_FUN_0333a630(uVar2,plVar3);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


