/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 079cc498
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
  undefined8 uVar2;
  int in_w8;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  char cStack000000000000000c;
  undefined8 in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_044a54b4();
    param_1 = *unaff_x22;
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 8);
  cStack000000000000000c = '\0';
  FUN_07aa2674(uVar4,&stack0x0000000c,0);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar3);
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x30) != 0) {
    if ((*(int *)(lVar3 + 0xe4) == 0) &&
       (thunk_FUN_044a54b4(lVar3), *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar1 = FUN_074444a8();
    if ((uVar1 & 1) != 0) goto LAB_079cc55c;
    lVar3 = *unaff_x22;
  }
  uVar2 = thunk_FUN_0448520c(lVar3);
  FUN_079cbca8();
  in_stack_00000018 = uVar2;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_079cc07c(uVar2);
LAB_079cc55c:
  uVar2 = in_stack_00000018;
  if (cStack000000000000000c != '\0') {
    thunk_FUN_04455fec(uVar4,0);
  }
  return uVar2;
}


