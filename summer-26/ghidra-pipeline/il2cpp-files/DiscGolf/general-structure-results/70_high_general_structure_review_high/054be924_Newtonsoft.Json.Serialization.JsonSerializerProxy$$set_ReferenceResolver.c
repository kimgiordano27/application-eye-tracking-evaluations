/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ReferenceResolver
ENTRY_POINT: 054be924
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ReferenceResolver(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_06a21b38;
  puVar4 = PTR_DAT_06a18a98;
  puVar3 = PTR_DAT_06a0f540;
  puVar2 = PTR_DAT_069ffab0;
  if ((DAT_06dbad1b & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ffab0);
    FUN_02d965b8(PTR_DAT_06a18a98);
    FUN_02d965b8(PTR_DAT_06a0f540);
    FUN_02d965b8(PTR_DAT_06a21b38);
    DAT_06dbad1b = 1;
  }
  uVar7 = FUN_02d966a4(*(undefined8 *)puVar2,8);
  FUN_05411dc0(uVar7,*(undefined8 *)puVar5,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
  *puVar8 = uVar7;
  LeanTween__value(puVar8,uVar7);
  uVar7 = FUN_02d966a4(*(undefined8 *)puVar2,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
  *puVar8 = uVar7;
  LeanTween__value(puVar8,uVar7);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_02d9f018();
  *(undefined2 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar6;
  uVar6 = FUN_02d9f018();
  *(undefined2 *)(*(long *)(*(long *)puVar3 + 0xb8) + 10) = uVar6;
  uVar6 = FUN_02d9f018();
  *(undefined2 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar6;
  uVar6 = FUN_02d9f020();
  *(undefined2 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc) = uVar6;
  uVar7 = FUN_054be888();
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar7;
  LeanTween__value(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar7);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar7 = FUN_054484f0(*(long *)(*(long *)puVar3 + 0xb8) + 10,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  *puVar8 = uVar7;
  LeanTween__value(puVar8,uVar7);
  lVar9 = FUN_02d966a4(*(undefined8 *)puVar2,3);
  if (lVar9 != 0) {
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 != 0) {
      lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
      *(undefined2 *)(lVar9 + 0x20) = *(undefined2 *)(lVar10 + 10);
      if ((uVar1 != 1) && (*(undefined2 *)(lVar9 + 0x22) = *(undefined2 *)(lVar10 + 8), 2 < uVar1))
      {
        *(long *)(lVar10 + 0x20) = lVar9;
        *(undefined2 *)(lVar9 + 0x24) = *(undefined2 *)(lVar10 + 0x18);
        LeanTween__value();
        lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
        *(bool *)(lVar9 + 0x28) = *(short *)(lVar9 + 10) == *(short *)(lVar9 + 0x18);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


