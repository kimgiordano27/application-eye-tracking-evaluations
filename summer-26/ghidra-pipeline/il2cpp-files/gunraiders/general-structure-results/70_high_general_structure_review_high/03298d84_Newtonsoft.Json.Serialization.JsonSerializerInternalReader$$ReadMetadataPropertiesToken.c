/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 03298d84
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken(int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int in_w8;
  undefined8 uVar3;
  
  if (param_1 == in_w8) {
    uVar1 = thunk_FUN_03152714();
    if ((uVar1 & 1) == 0) goto LAB_0329a348;
    uVar3 = 0x42d;
  }
  else {
    if ((param_1 != 0x48335699) || (uVar1 = thunk_FUN_03152714(), (uVar1 & 1) == 0)) {
LAB_0329a348:
      thunk_FUN_01c273e8(
                        Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>_set_Item__
                        );
      uVar3 = FUN_03146988();
      thunk_FUN_01c273e8(PTR_DAT_042300b0);
      uVar2 = thunk_FUN_01c496e0();
      FUN_032d4104(uVar2,uVar3,0);
      uVar3 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary<byte,_CustomType>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar2,uVar3);
    }
    uVar3 = 0x45d;
  }
  uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_042305b0);
  FUN_03296f98(uVar2,uVar3,1,0);
  return uVar2;
}


