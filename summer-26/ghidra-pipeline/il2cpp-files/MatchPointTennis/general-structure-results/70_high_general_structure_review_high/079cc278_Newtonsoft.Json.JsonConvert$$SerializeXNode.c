/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 079cc278
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x079cc3c0) */

undefined8 Newtonsoft_Json_JsonConvert__SerializeXNode(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 unaff_w20;
  long *unaff_x22;
  char cStack000000000000000c;
  undefined8 in_stack_00000018;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  cStack000000000000000c = '\0';
  FUN_07aa2674(uVar5,&stack0x0000000c,0);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar4);
    lVar4 = *unaff_x22;
  }
  lVar1 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
  if (lVar1 != 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar4);
      lVar1 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
    }
    uVar2 = FUN_0731ca6c(lVar1,unaff_w20,&stack0x00000018,*(undefined8 *)PTR_DAT_09f42530);
    if ((uVar2 & 1) != 0) goto LAB_079cc32c;
    lVar4 = *unaff_x22;
  }
  uVar3 = thunk_FUN_0448520c(lVar4);
  FUN_079cba04(uVar3,unaff_w20,0,1);
  in_stack_00000018 = uVar3;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_079cc07c(uVar3);
LAB_079cc32c:
  uVar3 = in_stack_00000018;
  if (cStack000000000000000c != '\0') {
    thunk_FUN_04455fec(uVar5,0);
  }
  return uVar3;
}


