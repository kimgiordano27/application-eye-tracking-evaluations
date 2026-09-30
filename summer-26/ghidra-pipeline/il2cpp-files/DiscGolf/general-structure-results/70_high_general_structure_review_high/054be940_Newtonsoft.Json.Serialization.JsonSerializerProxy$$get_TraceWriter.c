/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TraceWriter
ENTRY_POINT: 054be940
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TraceWriter(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *plVar8;
  long unaff_x23;
  
  plVar7 = *(long **)(unaff_x20 + 0x540);
  plVar8 = *(long **)(unaff_x22 + 0xa98);
  if ((*(byte *)(unaff_x23 + 0xd1b) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ffab0);
    FUN_02d965b8(PTR_DAT_06a18a98);
    FUN_02d965b8(PTR_DAT_06a0f540);
    FUN_02d965b8(PTR_DAT_06a21b38);
    *(undefined1 *)(unaff_x23 + 0xd1b) = 1;
  }
  uVar3 = FUN_02d966a4(*unaff_x21,8);
  FUN_05411dc0(uVar3,*unaff_x19,0);
  puVar4 = (undefined8 *)(*(long *)(*plVar7 + 0xb8) + 0x30);
  *puVar4 = uVar3;
  LeanTween__value(puVar4,uVar3);
  uVar3 = FUN_02d966a4(*unaff_x21,0);
  puVar4 = (undefined8 *)(*(long *)(*plVar7 + 0xb8) + 0x38);
  *puVar4 = uVar3;
  LeanTween__value(puVar4,uVar3);
  if (*(int *)(*plVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_02d9f018();
  *(undefined2 *)(*(long *)(*plVar7 + 0xb8) + 0x18) = uVar2;
  uVar2 = FUN_02d9f018();
  *(undefined2 *)(*(long *)(*plVar7 + 0xb8) + 10) = uVar2;
  uVar2 = FUN_02d9f018();
  *(undefined2 *)(*(long *)(*plVar7 + 0xb8) + 8) = uVar2;
  uVar2 = FUN_02d9f020();
  *(undefined2 *)(*(long *)(*plVar7 + 0xb8) + 0xc) = uVar2;
  uVar3 = FUN_054be888();
  **(undefined8 **)(*plVar7 + 0xb8) = uVar3;
  LeanTween__value(*(undefined8 *)(*plVar7 + 0xb8),uVar3);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_054484f0(*(long *)(*plVar7 + 0xb8) + 10,0);
  puVar4 = (undefined8 *)(*(long *)(*plVar7 + 0xb8) + 0x10);
  *puVar4 = uVar3;
  LeanTween__value(puVar4,uVar3);
  lVar5 = FUN_02d966a4(*unaff_x21,3);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 != 0) {
      lVar6 = *(long *)(*plVar7 + 0xb8);
      *(undefined2 *)(lVar5 + 0x20) = *(undefined2 *)(lVar6 + 10);
      if ((uVar1 != 1) && (*(undefined2 *)(lVar5 + 0x22) = *(undefined2 *)(lVar6 + 8), 2 < uVar1)) {
        *(long *)(lVar6 + 0x20) = lVar5;
        *(undefined2 *)(lVar5 + 0x24) = *(undefined2 *)(lVar6 + 0x18);
        LeanTween__value();
        lVar5 = *(long *)(*plVar7 + 0xb8);
        *(bool *)(lVar5 + 0x28) = *(short *)(lVar5 + 10) == *(short *)(lVar5 + 0x18);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


