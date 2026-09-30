/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteProperty
ENTRY_POINT: 0275187c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteProperty
               (long param_1,int param_2,int param_3,ulong param_4)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  short *psVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long in_x13;
  long unaff_x19;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  long lStack0000000000000028;
  
  uStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  psVar2 = (short *)&stack0x00000020;
  do {
    psVar2 = psVar2 + -1;
    *psVar2 = (short)param_2 + (short)(param_2 / 10) * -10 + 0x30;
    if (param_2 + 9U < 0x13) break;
    param_2 = param_2 / 10;
  } while (&stack0x00000000 < psVar2);
  puVar4 = (undefined1 *)((long)&stack0x00000020 + -(long)psVar2);
  if (in_NG == in_OV && (param_4 & 1) == 0) {
    param_3 = 2;
  }
  if ((long)puVar4 < 0) {
    puVar4 = &stack0x00000021 + -(long)psVar2;
  }
  uVar3 = (ulong)puVar4 >> 1;
  if (((int)uVar3 < param_3) && (&stack0x00000000 < psVar2)) {
    do {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
      psVar2 = psVar2 + -1;
      *psVar2 = 0x30;
      if (param_3 <= (int)uVar1) break;
    } while (&stack0x00000000 < psVar2);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lStack0000000000000028 = in_x13;
  FUN_025d651c();
  if (*(long *)(unaff_x19 + 0x28) != lStack0000000000000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


