/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 079cc500
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x079cc5dc) */

undefined8 Newtonsoft_Json_JsonConvert__DeserializeXNode(long param_1)

{
  ulong uVar1;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (param_1 != 0) {
    uVar1 = FUN_074444a8();
    if ((uVar1 & 1) == 0) {
      in_stack_00000018 = thunk_FUN_0448520c(*unaff_x22);
      FUN_079cbca8();
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_079cc07c(in_stack_00000018);
    }
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_04455fec();
    }
    return in_stack_00000018;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


