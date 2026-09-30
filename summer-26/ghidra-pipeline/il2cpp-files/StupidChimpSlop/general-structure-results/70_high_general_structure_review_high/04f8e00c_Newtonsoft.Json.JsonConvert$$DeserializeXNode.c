/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 04f8e00c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeXNode(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  undefined8 in_stack_00000008;
  
  FUN_04f88690();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((param_1 != 0) &&
     (lVar2 = thunk_FUN_02d8a53c(param_1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar3,0);
  }
  puVar1 = PTR_DAT_06656240;
  if ((int)unaff_x19[3] != 0) {
    unaff_x19[4] = param_1;
    thunk_FUN_02dc1ef0(unaff_x19 + 4,param_1);
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = unaff_x19;
    thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar1 + 0xb8));
    in_stack_00000008 = 0;
    FUN_04fe1648(&stack0x00000008,0x778,1,1,0);
    *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = in_stack_00000008;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


