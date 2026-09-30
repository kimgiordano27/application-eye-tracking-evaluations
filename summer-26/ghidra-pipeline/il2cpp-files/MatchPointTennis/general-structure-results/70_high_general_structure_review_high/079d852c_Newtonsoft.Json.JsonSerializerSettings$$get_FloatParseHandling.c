/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_FloatParseHandling
ENTRY_POINT: 079d852c
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


void Newtonsoft_Json_JsonSerializerSettings__get_FloatParseHandling(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* catch() { ... } // from try @ 079d8508 with catch @ 079d852c
                       catch() { ... } // from try @ 079d8524 with catch @ 079d852c */
  puVar1 = PTR_DAT_09f283d0;
  lVar6 = 4;
  while (lVar3 = unaff_x20[2], lVar3 != 0) {
    if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar6 - 4U) {
LAB_079d8600:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar4 = unaff_x20[3];
    if (lVar4 == 0) break;
    if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar6 - 4U) goto LAB_079d8600;
    in_stack_00000010 = *(undefined8 *)(lVar3 + lVar6 * 8);
    uVar5 = *(undefined8 *)(lVar4 + lVar6 * 8);
    thunk_FUN_044bb4b4(&stack0x00000010);
    in_stack_00000018 = uVar5;
    thunk_FUN_044bb4b4(&stack0x00000018,uVar5);
    thunk_FUN_04484e3c(*(undefined8 *)puVar1);
    FUN_07a60d64();
    iVar2 = (**(code **)(*unaff_x20 + 0x2a8))();
    lVar3 = lVar6 + -3;
    lVar6 = lVar6 + 1;
    if (iVar2 <= lVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


