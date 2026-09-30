/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 032a2b64
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  int unaff_w20;
  
  FUN_03313b6c();
  puVar3 = System_ComponentModel_RecommendedAsConfigurableAttribute_TypeInfo;
  puVar2 = PTR_DAT_042305b8;
  puVar1 = PTR_DAT_042305b0;
  if (-1 < unaff_w20) {
    uVar4 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,unaff_w20);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
    uVar4 = FUN_01c5d2fc(*(undefined8 *)puVar2,unaff_w20);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_03295560();
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
    FUN_0329ee50(uVar5,uVar4);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
    return;
  }
  thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
  uVar4 = thunk_FUN_01c496e0();
  uVar5 = thunk_FUN_01c273e8(Method_System_Collections_Generic_Dictionary<FormatUsage,_bool>_Add__);
  uVar6 = thunk_FUN_01c273e8(OVR_OpenVR_IVRApplications_TypeInfo);
  FUN_03243400(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<FormatUsage,_bool>_TryGetValue__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar4,uVar5);
}


