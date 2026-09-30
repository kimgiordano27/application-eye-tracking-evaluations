/*
FUNCTION_NAME: FUN_00fbf178
ENTRY_POINT: 00fbf178
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_00fbf178(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar1 = Method_System_Collections_Generic_List_Enumerator<XRPass>_get_Current__;
  if ((DAT_03775a87 & 1) == 0) {
    thunk_FUN_00d48444(Method_MedleyMoonController_<>c__DisplayClass8_0_<_BreakMoon>b__0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<Type,_Dictionary<InstanceHandle,_Inspector>>_MoveNext__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataPropertiesToken__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<XRPass>_get_Current__);
    DAT_03775a87 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<Type,_Dictionary<InstanceHandle,_Inspector>>_MoveNext__
  ;
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = param_4;
    System_Runtime_CompilerServices_CallSiteBinder__GetRuleCache<object>(param_3);
    uVar6 = 0;
    if ((param_5 & 1) != 0) {
      uVar6 = FUN_00fbf45c(param_3);
    }
    FUN_00fbed30(param_2,param_3);
    uVar3 = FUN_00fbf644(param_3,*(undefined8 *)(lVar2 + 0x10));
    FUN_00fbf67c(uVar6,param_1,param_2,uVar3,uVar3,*(undefined8 *)(lVar2 + 0x10));
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_MedleyMoonController_<>c__DisplayClass8_0_<_BreakMoon>b__0__;
    if (lVar4 != 0) {
      FUN_012d239c(lVar4,lVar2,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>__ctor__
                   ,0);
      uVar5 = FUN_010d7cf0(uVar6,lVar4,*(undefined8 *)puVar1);
      if ((uVar5 & 1) != 0) {
        return;
      }
      if (*(long *)(param_3 + 0x20) != 0) {
        FUN_00ad4294(*(long *)(param_3 + 0x20),uVar3,
                     *(undefined8 *)
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataPropertiesToken__
                    );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


