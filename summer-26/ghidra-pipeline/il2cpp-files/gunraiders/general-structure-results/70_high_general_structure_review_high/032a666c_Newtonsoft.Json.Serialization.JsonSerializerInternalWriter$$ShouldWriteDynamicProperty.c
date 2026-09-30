/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteDynamicProperty
ENTRY_POINT: 032a666c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty
               (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(int *)(param_2 + 0x1c) == *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_2 + 0x18) = 0xfffffffe;
    *(undefined8 *)(param_2 + 0x20) = 0;
    return;
  }
  thunk_FUN_01c273e8(PTR_DAT_04237cd0);
  uVar1 = thunk_FUN_01c496e0();
  uVar2 = thunk_FUN_01c273e8(UnityEngine_UIElements_Experimental_PointerOutLinkTagEvent_TypeInfo);
  FUN_032d1aa4(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_Remove__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar1,uVar2);
}


