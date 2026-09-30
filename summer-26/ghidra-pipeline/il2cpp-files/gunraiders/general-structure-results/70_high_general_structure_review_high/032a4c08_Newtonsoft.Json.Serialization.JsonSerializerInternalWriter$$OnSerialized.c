/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 032a4c08
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


/* WARNING: Removing unreachable block (ram,0x032a4ce4) */

undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_24 [4];
  
  if (param_2 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar5 = thunk_FUN_01c496e0();
    uVar3 = thunk_FUN_01c273e8(PTR_DAT_04231c48);
    uVar4 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary<EdgeLookup,_float>_ContainsKey__
                              );
    FUN_03247d68(uVar5,uVar3,uVar4,0);
    uVar3 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>__ctor__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,uVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  local_24[0] = '\0';
  FUN_0333497c(uVar5,local_24,0);
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar1 = (**(code **)(*plVar2 + 1000))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x3f0));
  if (local_24[0] != '\0') {
    thunk_FUN_01c216e8(uVar5,0);
  }
  return uVar1;
}


