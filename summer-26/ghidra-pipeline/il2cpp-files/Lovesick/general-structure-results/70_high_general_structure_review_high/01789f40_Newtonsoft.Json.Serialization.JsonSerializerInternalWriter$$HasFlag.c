/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 01789f40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long *unaff_x22;
  
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_01789acc();
  if ((uVar2 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(
                              Method_Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c_<_ctor>b__35_0__
                              );
    uVar6 = thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    FUN_016ec624(uVar4,uVar5,uVar6,0);
    uVar5 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_XmlSqlBinaryReader_NamespaceDecl>_Dispose__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar5);
  }
  FUN_0178a160();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar1 = FUN_01789d70(0);
  if ((int)uVar1 < 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = (**(code **)(*unaff_x19 + 0x278))();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar4 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
  }
  return uVar4;
}


