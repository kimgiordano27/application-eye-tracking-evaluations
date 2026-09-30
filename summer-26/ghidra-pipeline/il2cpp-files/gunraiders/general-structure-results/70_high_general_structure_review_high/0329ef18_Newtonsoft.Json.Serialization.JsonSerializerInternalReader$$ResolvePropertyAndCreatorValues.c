/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 0329ef18
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
               (void)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  
  FUN_01c5d288(Method_System_Collections_Generic_Dictionary<Edge,_WingedEdge>_Add__);
  *(undefined1 *)(unaff_x21 + 0xcfa) = 1;
  FUN_03313b6c();
  if (unaff_x20 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar5 = thunk_FUN_01c496e0();
    uVar3 = thunk_FUN_01c273e8(OVRControllerTest_TypeInfo);
    FUN_0323fc78(uVar5,uVar3,0);
    uVar3 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary<Edge,_WingedEdge>_Clear__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,uVar3);
  }
  uVar5 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Edge,_WingedEdge>__ctor__;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_032e04b8(uVar5,0);
  plVar2 = (long *)FUN_031e5740();
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    return;
  }
  lVar4 = *(long *)UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass126_0_TypeInfo;
  bVar1 = *(byte *)(lVar4 + 0x130);
  if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
     (*(long *)(*(long *)(*plVar2 + 200) + ((ulong)bVar1 - 1) * 8) == lVar4)) {
    *(long **)(unaff_x19 + 0x10) = plVar2;
    if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + ((ulong)bVar1 - 1) * 8) == lVar4)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


