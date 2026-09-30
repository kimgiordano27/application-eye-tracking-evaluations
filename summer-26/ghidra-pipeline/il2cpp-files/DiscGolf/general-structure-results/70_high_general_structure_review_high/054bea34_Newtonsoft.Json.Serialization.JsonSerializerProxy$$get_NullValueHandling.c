/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_NullValueHandling
ENTRY_POINT: 054bea34
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  undefined8 *unaff_x21;
  
  **(undefined8 **)(param_1 + 0xb8) = param_2;
  LeanTween__value(*(undefined8 *)(*unaff_x20 + 0xb8),param_2);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_054484f0(*(long *)(*unaff_x20 + 0xb8) + 10,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  *puVar5 = uVar2;
  LeanTween__value(puVar5,uVar2);
  lVar3 = FUN_02d966a4(*unaff_x21,3);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 != 0) {
      lVar4 = *(long *)(*unaff_x20 + 0xb8);
      *(undefined2 *)(lVar3 + 0x20) = *(undefined2 *)(lVar4 + 10);
      if ((uVar1 != 1) && (*(undefined2 *)(lVar3 + 0x22) = *(undefined2 *)(lVar4 + 8), 2 < uVar1)) {
        *(long *)(lVar4 + 0x20) = lVar3;
        *(undefined2 *)(lVar3 + 0x24) = *(undefined2 *)(lVar4 + 0x18);
        LeanTween__value();
        lVar3 = *(long *)(*unaff_x20 + 0xb8);
        *(bool *)(lVar3 + 0x28) = *(short *)(lVar3 + 10) == *(short *)(lVar3 + 0x18);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


