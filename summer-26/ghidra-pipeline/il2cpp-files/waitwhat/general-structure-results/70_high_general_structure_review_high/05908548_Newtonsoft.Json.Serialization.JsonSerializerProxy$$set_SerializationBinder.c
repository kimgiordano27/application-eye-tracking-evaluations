/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_SerializationBinder
ENTRY_POINT: 05908548
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_SerializationBinder(void)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  int unaff_w23;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint in_stack_00000028;
  
  uVar5 = FUN_058e5ac4();
  puVar4 = PTR_DAT_070fbe68;
  bVar2 = (uVar5 & 1) == 0;
  uVar8 = (uint)!bVar2;
  iVar1 = (uint)bVar2 + unaff_w22 + unaff_w23;
  if ((int)unaff_w21 < iVar1) {
    uVar6 = 0;
  }
  else {
    FUN_049f4510(&stack0x00000020);
    uVar9 = in_stack_00000028;
    puVar3 = PTR_DAT_070c9c80;
    puVar7 = (undefined1 *)register0x00000008;
    if (uVar8 == 0) {
      if (unaff_w21 <= in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar10 = *(long *)PTR_DAT_070c9c80;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar10 = *(long *)puVar3;
      }
      *(undefined2 *)(unaff_x20 + (long)(int)uVar9 * 2) =
           *(undefined2 *)(*(long *)(lVar10 + 0xb8) + 10);
      puVar7 = (undefined1 *)0x0;
    }
    if (uVar8 == 0) {
      puVar7 = (undefined1 *)register0x00000008;
    }
    uVar8 = in_stack_00000028 + (uVar8 ^ 1);
    uVar9 = *(uint *)(puVar7 + 8);
    lVar10 = *(long *)PTR_DAT_070fbe70;
    if (uVar9 < uVar8) {
      FUN_05950030(0);
      uVar9 = *(uint *)(puVar7 + 8);
    }
    if ((*(ushort *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    FUN_049f4510(&stack0x00000010,unaff_x20 + (long)(int)uVar8 * 2,uVar9 - uVar8,
                 *(undefined8 *)puVar4);
    *unaff_x19 = iVar1;
    uVar6 = 1;
  }
  return uVar6;
}


