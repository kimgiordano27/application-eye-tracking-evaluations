/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ContractResolver
ENTRY_POINT: 054be9d4
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ContractResolver(undefined8 param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  LeanTween__value(param_1);
                    /* try { // try from 054be9e0 to 055be9eb has its CatchHandler @ 054bec24 */
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_02d9f018();
  *(undefined2 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = uVar2;
  uVar2 = FUN_02d9f018();
  *(undefined2 *)(*(long *)(*unaff_x20 + 0xb8) + 10) = uVar2;
  uVar2 = FUN_02d9f018();
  *(undefined2 *)(*(long *)(*unaff_x20 + 0xb8) + 8) = uVar2;
  uVar2 = FUN_02d9f020();
  *(undefined2 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc) = uVar2;
  uVar3 = FUN_054be888();
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar3;
  LeanTween__value(*(undefined8 *)(*unaff_x20 + 0xb8),uVar3);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_054484f0(*(long *)(*unaff_x20 + 0xb8) + 10,0);
  puVar6 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  *puVar6 = uVar3;
  LeanTween__value(puVar6,uVar3);
  lVar4 = FUN_02d966a4(*unaff_x21,3);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 != 0) {
      lVar5 = *(long *)(*unaff_x20 + 0xb8);
      *(undefined2 *)(lVar4 + 0x20) = *(undefined2 *)(lVar5 + 10);
      if ((uVar1 != 1) && (*(undefined2 *)(lVar4 + 0x22) = *(undefined2 *)(lVar5 + 8), 2 < uVar1)) {
        *(long *)(lVar5 + 0x20) = lVar4;
        *(undefined2 *)(lVar4 + 0x24) = *(undefined2 *)(lVar5 + 0x18);
        LeanTween__value();
        lVar4 = *(long *)(*unaff_x20 + 0xb8);
        *(bool *)(lVar4 + 0x28) = *(short *)(lVar4 + 10) == *(short *)(lVar4 + 0x18);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


