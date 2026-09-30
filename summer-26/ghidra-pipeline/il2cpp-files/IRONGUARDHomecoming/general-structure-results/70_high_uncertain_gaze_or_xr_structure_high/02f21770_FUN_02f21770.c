/*
FUNCTION_NAME: FUN_02f21770
ENTRY_POINT: 02f21770
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void FUN_02f21770(undefined8 param_1,long param_2,long param_3,int param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_2c;
  int local_28;
  byte local_24 [4];
  
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  local_24[0] = 0;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    puVar1 = Method_Unity_VisualScripting_Comparison_<Definition>b__36_2__;
  }
  else {
    if (param_3 != 0) {
      if (0 < param_4) {
        local_24[0] = System_Collections_ObjectModel_KeyedCollection<Guid,_object>__ContainsItem
                                (param_1,param_2,
                                 *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48)
                                );
        local_24[0] = local_24[0] & 1;
        FUN_04037e20(param_3,local_24,1,0);
        return;
      }
      local_28 = param_4;
      uVar2 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar2 = thunk_FUN_01f113fc(uVar2,&local_28);
      local_2c = 1;
      uVar3 = thunk_FUN_01efb3a4(puVar1);
      uVar3 = thunk_FUN_01f113fc(uVar3,&local_2c);
      uVar4 = thunk_FUN_01efb3a4(
                                Method_Sirenix_Serialization_Utilities_FieldInfoExtensions_DeAliasField__
                                );
      uVar3 = FUN_0340f2f0(uVar4,uVar2,uVar3,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar2 = thunk_FUN_01f117cc();
      uVar4 = thunk_FUN_01efb3a4(
                                Method_System_Linq_Expressions_ExpressionVisitor_VisitAndConvert<ParameterExpression>__
                                );
      FUN_034efd98(uVar2,uVar3,uVar4,0);
      goto LAB_02f218c8;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    puVar1 = Method_System_Reflection_FieldInfo_SetValueDirect__;
  }
  uVar3 = thunk_FUN_01efb3a4(puVar1);
  FUN_034efd20(uVar2,uVar3,0);
LAB_02f218c8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,param_5);
}


