/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 02751870
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag
               (long param_1,int param_2,int param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  short *psVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  long lStack0000000000000028;
  
  lVar2 = tpidr_el0;
  lStack0000000000000028 = *(long *)(lVar2 + 0x28);
  uStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  psVar3 = (short *)&stack0x00000020;
  do {
    psVar3 = psVar3 + -1;
    *psVar3 = (short)param_2 + (short)(param_2 / 10) * -10 + 0x30;
    if (param_2 + 9U < 0x13) break;
    param_2 = param_2 / 10;
  } while (&stack0x00000000 < psVar3);
  puVar5 = (undefined1 *)((long)&stack0x00000020 + -(long)psVar3);
  if (2 < param_3 && (param_4 & 1) == 0) {
    param_3 = 2;
  }
  if ((long)puVar5 < 0) {
    puVar5 = &stack0x00000021 + -(long)psVar3;
  }
  uVar4 = (ulong)puVar5 >> 1;
  if (((int)uVar4 < param_3) && (&stack0x00000000 < psVar3)) {
    do {
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      psVar3 = psVar3 + -1;
      *psVar3 = 0x30;
      if (param_3 <= (int)uVar1) break;
    } while (&stack0x00000000 < psVar3);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_025d651c();
  if (*(long *)(lVar2 + 0x28) != lStack0000000000000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


