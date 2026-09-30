/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Context
ENTRY_POINT: 05908564
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0590860c) */
/* WARNING: Removing unreachable block (ram,0x059086d0) */
/* WARNING: Removing unreachable block (ram,0x05908614) */
/* WARNING: Removing unreachable block (ram,0x05908630) */
/* WARNING: Removing unreachable block (ram,0x05908628) */
/* WARNING: Removing unreachable block (ram,0x0590863c) */
/* WARNING: Removing unreachable block (ram,0x05908658) */

undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Context(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int in_w8;
  int in_w9;
  int *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long lVar4;
  uint in_stack_00000008;
  uint in_stack_00000028;
  
  puVar1 = PTR_DAT_070fbe68;
  if (unaff_w21 < in_w9 + in_w8) {
    uVar3 = 0;
  }
  else {
    FUN_049f4510(&stack0x00000020);
    uVar2 = in_stack_00000028;
    lVar4 = *(long *)PTR_DAT_070fbe70;
    if (in_stack_00000008 < in_stack_00000028) {
      FUN_05950030(0);
    }
    if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    FUN_049f4510(&stack0x00000010,unaff_x20 + (long)(int)uVar2 * 2,in_stack_00000008 - uVar2,
                 *(undefined8 *)puVar1);
    *unaff_x19 = in_w9 + in_w8;
    uVar3 = 1;
  }
  return uVar3;
}


