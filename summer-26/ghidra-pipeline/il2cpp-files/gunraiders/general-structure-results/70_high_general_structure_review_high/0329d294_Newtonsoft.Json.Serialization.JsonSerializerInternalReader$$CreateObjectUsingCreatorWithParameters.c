/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
ENTRY_POINT: 0329d294
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
               (long param_1,long param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_03313b6c(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar2 = thunk_FUN_01c496e0();
    uVar1 = thunk_FUN_01c273e8(Photon_Voice_PhotonAppSettings_TypeInfo);
    FUN_0323fc78(uVar2,uVar1,0);
  }
  else {
    if (-1 < param_3) {
      uVar1 = FUN_01c20a38(param_2,param_3,param_4 & 1);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x78);
      return;
    }
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar2 = thunk_FUN_01c496e0();
    uVar1 = thunk_FUN_01c273e8(AccountLinkingHUD_<WebSearchVerified>d__49_TypeInfo);
    uVar3 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary<DataRow,_DataRowView>_Add__
                              );
    FUN_03243400(uVar2,uVar1,uVar3,0);
  }
  uVar1 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<DataRow,_DataRowView>_ContainsKey__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar1);
}


