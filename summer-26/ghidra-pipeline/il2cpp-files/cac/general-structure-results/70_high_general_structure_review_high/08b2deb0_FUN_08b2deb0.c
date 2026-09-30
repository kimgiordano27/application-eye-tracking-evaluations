/*
FUNCTION_NAME: FUN_08b2deb0
ENTRY_POINT: 08b2deb0
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_08b2deb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_073268dc(param_2,0);
  if ((uVar2 & 1) == 0) {
    if (param_3 != 0) {
      uVar2 = FUN_08b2c6f0(param_1);
      if ((uVar2 & 1) != 0) {
        iVar1 = FUN_08b2dbf0(param_1,param_2,param_3);
        if (iVar1 == 0) {
          return;
        }
        uVar4 = FUN_08b2b880();
        thunk_FUN_03f786f8(PTR_DAT_09111b70);
        uVar5 = thunk_FUN_03f4e68c();
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                  (uVar5,uVar4,0);
        uVar4 = thunk_FUN_03f786f8(System_Text_Json_Serialization_JsonConverter<object>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar5,uVar4);
      }
      thunk_FUN_03f786f8(PTR_DAT_09111b70);
      uVar4 = thunk_FUN_03f4e68c();
      uVar5 = thunk_FUN_03f786f8(System_Text_Json_Serialization_JsonConverter<JsonElement>_TypeInfo)
      ;
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                (uVar4,uVar5,0);
      goto LAB_08b2df88;
    }
    thunk_FUN_03f786f8(PTR_DAT_0910e988);
    uVar4 = thunk_FUN_03f4e68c();
    puVar3 = 
    System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<GrowableArray<int>>_TypeInfo;
  }
  else {
    thunk_FUN_03f786f8(PTR_DAT_0910e988);
    uVar4 = thunk_FUN_03f4e68c();
    puVar3 = 
    System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_object>>_TypeInfo
    ;
  }
  uVar5 = thunk_FUN_03f786f8(puVar3);
  FUN_07419a00(uVar4,uVar5,0);
LAB_08b2df88:
  uVar5 = thunk_FUN_03f786f8(System_Text_Json_Serialization_JsonConverter<object>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar4,uVar5);
}


