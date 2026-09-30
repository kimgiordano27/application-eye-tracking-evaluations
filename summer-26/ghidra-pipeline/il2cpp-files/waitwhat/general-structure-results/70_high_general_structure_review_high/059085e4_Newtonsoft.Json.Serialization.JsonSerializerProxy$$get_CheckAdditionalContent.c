/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_CheckAdditionalContent
ENTRY_POINT: 059085e4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_CheckAdditionalContent(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  undefined4 unaff_w22;
  long unaff_x23;
  undefined8 *puVar4;
  uint unaff_w24;
  uint uVar5;
  long lVar6;
  uint in_stack_00000028;
  
  puVar4 = *(undefined8 **)(unaff_x23 + 0xe68);
  FUN_049f4510();
  uVar1 = in_stack_00000028;
  puVar2 = PTR_DAT_070c9c80;
  puVar3 = (undefined1 *)register0x00000008;
  if ((unaff_w24 & 1) == 0) {
    if (unaff_w21 <= in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 059086d0 to 05a086d3 has its CatchHandler @ 05908898 */
      FUN_03188ce0();
    }
    lVar6 = *(long *)PTR_DAT_070c9c80;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar6 = *(long *)puVar2;
    }
    *(undefined2 *)(unaff_x20 + (long)(int)uVar1 * 2) =
         *(undefined2 *)(*(long *)(lVar6 + 0xb8) + 10);
    puVar3 = (undefined1 *)0x0;
  }
  if (unaff_w24 == 0) {
    puVar3 = (undefined1 *)register0x00000008;
  }
  uVar1 = in_stack_00000028 + (unaff_w24 ^ 1);
  uVar5 = *(uint *)(puVar3 + 8);
  lVar6 = *(long *)PTR_DAT_070fbe70;
  if (uVar5 < uVar1) {
    FUN_05950030(0);
    uVar5 = *(uint *)(puVar3 + 8);
  }
  if ((*(ushort *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_049f4510(&stack0x00000010,unaff_x20 + (long)(int)uVar1 * 2,uVar5 - uVar1,*puVar4);
  *unaff_x19 = unaff_w22;
  return 1;
}


