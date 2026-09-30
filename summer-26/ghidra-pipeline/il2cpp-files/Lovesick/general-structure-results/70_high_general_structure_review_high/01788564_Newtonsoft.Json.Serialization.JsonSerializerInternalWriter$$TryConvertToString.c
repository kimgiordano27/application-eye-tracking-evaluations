/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 01788564
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x21;
  long *plVar4;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x780);
  plVar4 = *(long **)(unaff_x21 + 0xf98);
  if ((*(byte *)(unaff_x22 + 0xe3c) & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<UIDocument>_Clear__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ec8a8);
    *(undefined1 *)(unaff_x22 + 0xe3c) = 1;
  }
  uVar3 = *puVar2;
  if (*(int *)(*plVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_01780344(uVar3);
  puVar1 = PTR_DAT_033ec8a8;
  if (param_2 != 0) {
    FUN_0166bb38(param_2,uVar3,0);
    FUN_0166bd28(param_2,*(undefined8 *)puVar1,1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


