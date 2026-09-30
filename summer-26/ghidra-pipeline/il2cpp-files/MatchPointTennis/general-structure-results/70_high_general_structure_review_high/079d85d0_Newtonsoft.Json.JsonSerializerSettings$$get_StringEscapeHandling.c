/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_StringEscapeHandling
ENTRY_POINT: 079d85d0
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


void Newtonsoft_Json_JsonSerializerSettings__get_StringEscapeHandling(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  code *in_x9;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  undefined8 *unaff_x23;
  long unaff_x25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    iVar2 = (*in_x9)();
    lVar1 = unaff_x25 + 1;
    if ((long)iVar2 <= unaff_x25 + -3) {
      return;
    }
    lVar3 = unaff_x20[2];
    if (lVar3 == 0) break;
    if ((ulong)*(uint *)(lVar3 + 0x18) <= unaff_x25 - 3U) {
LAB_079d8600:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar4 = unaff_x20[3];
    if (lVar4 == 0) break;
    if ((ulong)*(uint *)(lVar4 + 0x18) <= unaff_x25 - 3U) goto LAB_079d8600;
    in_stack_00000010 = *(undefined8 *)(lVar3 + lVar1 * 8);
    uVar5 = *(undefined8 *)(lVar4 + lVar1 * 8);
    thunk_FUN_044bb4b4(&stack0x00000010);
    in_stack_00000018 = uVar5;
    thunk_FUN_044bb4b4();
    thunk_FUN_04484e3c(*unaff_x23);
    FUN_07a60d64();
    in_x9 = *(code **)(*unaff_x20 + 0x2a8);
    unaff_x25 = lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


