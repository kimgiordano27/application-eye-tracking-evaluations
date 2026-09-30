/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ConstructorHandling
ENTRY_POINT: 0170ed2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializerSettings__set_ConstructorHandling(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  undefined8 uVar7;
  long *unaff_x21;
  
  puVar1 = Method_System_Linq_Enumerable_FirstOrDefault<WitConfigurationAssetData>__;
  uVar7 = *(undefined8 *)PTR_DAT_033ed3b8;
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01780344(uVar7,0);
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto Newtonsoft_Json_JsonSerializerSettings__get_EqualityComparer;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_00d59724();
Newtonsoft_Json_JsonSerializerSettings__get_EqualityComparer:
  plVar3 = (long *)(*(code *)*puVar2)();
  lVar4 = *unaff_x21;
  if ((plVar3 != (long *)0x0) && (*plVar3 == lVar4)) {
    return;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
  }
  FUN_0170eb40();
  return;
}


