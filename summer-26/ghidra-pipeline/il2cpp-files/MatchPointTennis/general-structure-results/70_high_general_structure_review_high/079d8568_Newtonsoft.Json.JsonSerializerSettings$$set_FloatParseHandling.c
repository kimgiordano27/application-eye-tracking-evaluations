/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_FloatParseHandling
ENTRY_POINT: 079d8568
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


void Newtonsoft_Json_JsonSerializerSettings__set_FloatParseHandling(long param_1)

{
  int iVar1;
  ulong in_x9;
  long in_x10;
  ulong in_x11;
  long *unaff_x20;
  undefined8 uVar2;
  undefined8 *unaff_x23;
  long unaff_x25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (in_x9 < in_x11) {
    in_stack_00000010 = *(undefined8 *)(param_1 + unaff_x25 * 8);
    uVar2 = *(undefined8 *)(in_x10 + unaff_x25 * 8);
    thunk_FUN_044bb4b4(&stack0x00000010);
    in_stack_00000018 = uVar2;
    thunk_FUN_044bb4b4();
    thunk_FUN_04484e3c(*unaff_x23);
    FUN_07a60d64();
    iVar1 = (**(code **)(*unaff_x20 + 0x2a8))();
    if ((long)iVar1 <= unaff_x25 + -3) {
      return;
    }
    param_1 = unaff_x20[2];
    if (param_1 == 0) {
LAB_079d85fc:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_x9 = unaff_x25 - 3;
    if (*(uint *)(param_1 + 0x18) <= in_x9) break;
    in_x10 = unaff_x20[3];
    if (in_x10 == 0) goto LAB_079d85fc;
    unaff_x25 = unaff_x25 + 1;
    in_x11 = (ulong)*(uint *)(in_x10 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


