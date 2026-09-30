/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 079cc2d0
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


/* WARNING: Removing unreachable block (ram,0x079cc3c0) */

undefined8 Newtonsoft_Json_JsonConvert__SerializeXNode(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 unaff_w20;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (param_1 != 0) {
    uVar1 = FUN_0731ca6c(param_1,unaff_w20,&stack0x00000018,*(undefined8 *)PTR_DAT_09f42530);
    if ((uVar1 & 1) == 0) {
      uVar2 = thunk_FUN_0448520c(*unaff_x22);
      FUN_079cba04(uVar2,unaff_w20,0,1);
      in_stack_00000018 = uVar2;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_079cc07c(uVar2);
    }
    uVar2 = in_stack_00000018;
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_04455fec();
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


