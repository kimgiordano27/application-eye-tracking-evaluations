/*
FUNCTION_NAME: Door$$CheckClosed
ENTRY_POINT: 0184562c
PROGRAM: sharks-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Door__CheckClosed(void)

{
  int iVar1;
  long unaff_x20;
  void *in_stack_00000008;
  void *in_stack_00000018;
  byte in_stack_00000020;
  void *in_stack_00000030;
  
  FUN_017e6ec8(&stack0x00000020,"MONO_REFLECTION_SERIALIZER");
  FUN_017e6ec8(&stack0x00000008,&DAT_009afe43);
  FUN_01847e10(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_017e6ec8(&stack0x00000020,"MONO_XMLSERIALIZER_THS");
  FUN_017e6ec8(&stack0x00000008,&DAT_009bdd43);
  FUN_01847e10(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_0181a548();
  FUN_0181a590(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_0184841c(&stack0x00000020);
  FUN_018457d8(&stack0x00000020);
  iVar1 = FUN_018123fc();
  if (iVar1 == 0) {
    in_stack_00000008 = (void *)((ulong)&stack0x00000020 | 1);
    if ((in_stack_00000020 & 1) != 0) {
      in_stack_00000008 = in_stack_00000030;
    }
    FUN_0181223c(&stack0x00000008,1);
  }
  FUN_018506dc();
  FUN_0185075c();
  FUN_01814990();
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_017f2784(&stack0x00000038);
  return 1;
}


