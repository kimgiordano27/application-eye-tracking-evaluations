/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Converters
ENTRY_POINT: 054be994
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Converters(undefined8 param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  FUN_05411dc0(param_1,*unaff_x19,0);
                    /* try { // try from 054be9a8 to 055be9ab has its CatchHandler @ 054bec20 */
  puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
  *puVar3 = param_1;
  LeanTween__value(puVar3,param_1);
  uVar4 = FUN_02d966a4(*unaff_x21,0);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x38);
  *puVar3 = uVar4;
  LeanTween__value(puVar3,uVar4);
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
  uVar4 = FUN_054be888();
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar4;
  LeanTween__value(*(undefined8 *)(*unaff_x20 + 0xb8),uVar4);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_054484f0(*(long *)(*unaff_x20 + 0xb8) + 10,0);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  *puVar3 = uVar4;
  LeanTween__value(puVar3,uVar4);
  lVar5 = FUN_02d966a4(*unaff_x21,3);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 != 0) {
      lVar6 = *(long *)(*unaff_x20 + 0xb8);
      *(undefined2 *)(lVar5 + 0x20) = *(undefined2 *)(lVar6 + 10);
      if ((uVar1 != 1) && (*(undefined2 *)(lVar5 + 0x22) = *(undefined2 *)(lVar6 + 8), 2 < uVar1)) {
        *(long *)(lVar6 + 0x20) = lVar5;
        *(undefined2 *)(lVar5 + 0x24) = *(undefined2 *)(lVar6 + 0x18);
        LeanTween__value();
        lVar5 = *(long *)(*unaff_x20 + 0xb8);
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


