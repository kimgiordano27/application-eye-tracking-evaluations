/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameAssemblyFormatHandling
ENTRY_POINT: 0170ecbc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializerSettings__set_TypeNameAssemblyFormatHandling(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  undefined8 uVar8;
  long *unaff_x21;
  
  puVar2 = Method_System_Linq_Enumerable_FirstOrDefault<WitConfigurationAssetData>__;
  lVar5 = *unaff_x19;
  bVar1 = *(byte *)(**(long **)(in_x9 + 0x758) + 300);
  if (((bVar1 <= *(byte *)(lVar5 + 300)) &&
      (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == **(long **)(in_x9 + 0x758))) &&
     ((char)unaff_x19[0x19] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0170ee08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x238))();
    return;
  }
  plVar4 = unaff_x19;
  if (lVar5 != *unaff_x21) {
    plVar4 = (long *)0x0;
  }
  if (plVar4 == (long *)0x0) {
    uVar8 = *(undefined8 *)PTR_DAT_033ed3b8;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01780344(uVar8,0);
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto Newtonsoft_Json_JsonSerializerSettings__get_EqualityComparer;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724();
Newtonsoft_Json_JsonSerializerSettings__get_EqualityComparer:
    plVar4 = (long *)(*(code *)*puVar3)();
    lVar5 = *unaff_x21;
    if ((plVar4 == (long *)0x0) || (*plVar4 != lVar5)) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
      }
      FUN_0170eb40();
      return;
    }
  }
  return;
}


