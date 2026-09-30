/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 0329a6ac
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_Dictionary<byte,_CustomType>_Add__);
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(Method_System_Collections_Generic_Dictionary<byte,_CustomType>_ContainsKey__);
    *(undefined1 *)(unaff_x20 + 0xcd1) = 1;
  }
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar2 = *unaff_x21;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x38) == 0) {
    uVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<byte,_CustomType>_ContainsKey__
                              );
    FUN_0329a5f4(uVar3,0,*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<byte,_CustomType>_Add__);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    thunk_FUN_01c4a180(uVar3);
    FUN_01beb28c();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar2 = (**(code **)(*unaff_x19 + 0x1a8))();
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x21);
    }
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + 0x14;
    }
    FUN_01beb28c(lVar1);
    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x38) = unaff_x19;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


