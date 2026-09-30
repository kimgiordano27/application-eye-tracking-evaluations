/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameAssemblyFormat
ENTRY_POINT: 0170ecb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializerSettings__get_TypeNameAssemblyFormat(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 uVar9;
  long *unaff_x21;
  
  puVar3 = Method_System_Linq_Enumerable_FirstOrDefault<WitConfigurationAssetData>__;
  if (unaff_x19 == (long *)0x0) {
    lVar6 = *unaff_x21;
    iVar1 = *(int *)(lVar6 + 0xe0);
joined_r0x0170ed1c:
    if (iVar1 == 0) {
      thunk_FUN_00d32864(lVar6);
    }
    FUN_0170eb40();
    return;
  }
  lVar6 = *unaff_x19;
  bVar2 = *(byte *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 300);
  if (((bVar2 <= *(byte *)(lVar6 + 300)) &&
      (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) ==
       *(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__)) &&
     ((char)unaff_x19[0x19] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0170ee08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x238))();
    return;
  }
  plVar5 = unaff_x19;
  if (lVar6 != *unaff_x21) {
    plVar5 = (long *)0x0;
  }
  if (plVar5 == (long *)0x0) {
    uVar9 = *(undefined8 *)PTR_DAT_033ed3b8;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01780344(uVar9,0);
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto Newtonsoft_Json_JsonSerializerSettings__get_EqualityComparer;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
Newtonsoft_Json_JsonSerializerSettings__get_EqualityComparer:
    plVar5 = (long *)(*(code *)*puVar4)();
    lVar6 = *unaff_x21;
    if ((plVar5 == (long *)0x0) || (*plVar5 != lVar6)) {
      iVar1 = *(int *)(lVar6 + 0xe0);
      goto joined_r0x0170ed1c;
    }
  }
  return;
}


