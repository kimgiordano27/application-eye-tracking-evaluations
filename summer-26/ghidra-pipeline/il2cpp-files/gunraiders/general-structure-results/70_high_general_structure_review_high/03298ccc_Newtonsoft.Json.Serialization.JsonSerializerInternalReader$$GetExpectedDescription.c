/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 03298ccc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  uint in_w8;
  undefined8 uVar3;
  
  if (in_w8 < param_1) {
    if (param_1 == 0x3c49bbe0) {
      uVar1 = thunk_FUN_03152714();
      if ((uVar1 & 1) == 0) goto LAB_0329a348;
      uVar3 = 0x42a;
    }
    else if (param_1 == 0x3c520aa5) {
      uVar1 = thunk_FUN_03152714();
      if ((uVar1 & 1) == 0) goto LAB_0329a348;
      uVar3 = 0x43b;
    }
    else {
      if ((param_1 != 0x3d1e7e08) || (uVar1 = thunk_FUN_03152714(), (uVar1 & 1) == 0))
      goto LAB_0329a348;
      uVar3 = 0x85f;
    }
  }
  else if (param_1 == 0x3c2ba6cc) {
    uVar1 = thunk_FUN_03152714();
    if ((uVar1 & 1) == 0) goto LAB_0329a348;
    uVar3 = 0x46d;
  }
  else {
    if ((param_1 != 0x3c453eb2) || (uVar1 = thunk_FUN_03152714(), (uVar1 & 1) == 0)) {
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
    uVar3 = 0x44a;
  }
  uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_042305b0);
  FUN_03296f98(uVar2,uVar3,1,0);
  return uVar2;
}


