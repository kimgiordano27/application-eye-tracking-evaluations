/*
FUNCTION_NAME: FUN_0562a720
ENTRY_POINT: 0562a720
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_12
*/


long FUN_0562a720(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar1 = System_Func<Length,_Length,_bool>_TypeInfo;
  if ((DAT_06dbbab5 & 1) == 0) {
    FUN_02d965b8(System_Func<MemberInfo,_DebugMember,_bool>_TypeInfo);
    FUN_02d965b8(System_Func<MemberInfo,_MemberInfo,_bool>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0ffb8);
    FUN_02d965b8(
                System_Func<QueryLobbiesRequest,_Configuration,_Task<Response<QueryResponse>>>_TypeInfo
                );
    FUN_02d965b8(System_Func<QuickJoinLobbyRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo);
    FUN_02d965b8(System_Func<ReconnectRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo);
    FUN_02d965b8(System_Func<RemovePlayerRequest,_Configuration,_Task<Response>>_TypeInfo);
    FUN_02d965b8(
                System_Func<RequestTokensRequest,_Configuration,_Task<Response<Dictionary<string,_TokenData>>>>_TypeInfo
                );
    FUN_02d965b8(System_Func<Rotate,_Rotate,_bool>_TypeInfo);
    FUN_02d965b8(System_Func<Scale,_Scale,_bool>_TypeInfo);
    FUN_02d965b8(System_Func<float,_float,_bool>_TypeInfo);
    FUN_02d965b8(System_Func<Length,_Length,_bool>_TypeInfo);
    DAT_06dbbab5 = 1;
  }
  lVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_0552aca4(lVar4,0);
  puVar1 = System_Func<ReconnectRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = param_1;
    *(undefined4 *)(lVar4 + 0x10) = param_6;
    LeanTween__value((undefined8 *)(lVar4 + 0x18),param_1);
    lVar5 = System_Collections_ObjectModel_ReadOnlyCollection<KeyValuePair<TrackableId,_object>>__System_Collections_IList_set_Item
                      (param_1,param_2,param_3,*(undefined8 *)puVar1);
    if (lVar5 != 0) {
      uVar6 = FUN_055f0190(lVar5,0);
      if ((uVar6 & 1) == 0) {
        return lVar5;
      }
      (**(code **)(*param_1 + 0x198))(&local_74,param_1,lVar5,*(undefined8 *)(*param_1 + 0x1a0));
      uVar7 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<MemberInfo,_MemberInfo,_bool>_TypeInfo);
      FUN_03b7820c(uVar7,lVar4,*(undefined8 *)System_Func<Scale,_Scale,_bool>_TypeInfo,0);
      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<MemberInfo,_DebugMember,_bool>_TypeInfo)
      ;
      FUN_03b6fe3c(uVar8,lVar4,*(undefined8 *)System_Func<float,_float,_bool>_TypeInfo,0);
      lVar9 = System_Collections_ObjectModel_ReadOnlyCollection<NativeArray<ConvertMeshJobData>>__get_Count
                        (param_1,local_64,uVar7,uVar8,
                         *(undefined8 *)
                          System_Func<QuickJoinLobbyRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo
                        );
      uVar2 = FUN_044266a8(param_1,*(undefined8 *)System_Func<Rotate,_Rotate,_bool>_TypeInfo);
      uVar3 = FUN_044266c4(param_1,*(undefined8 *)
                                    System_Func<RequestTokensRequest,_Configuration,_Task<Response<Dictionary<string,_TokenData>>>>_TypeInfo
                          );
      if (lVar9 != 0) {
        uStack_88 = param_4[1];
        local_90 = *param_4;
        local_80 = *(undefined4 *)(param_4 + 2);
        uStack_a8 = param_5[1];
        local_b0 = *param_5;
        local_a0 = *(undefined4 *)(param_5 + 2);
        lVar4 = FUN_0562aa34(lVar9,CONCAT44(local_70,local_74),CONCAT44(local_68,local_6c),uVar2,
                             uVar3,&local_90,&local_b0,*(undefined4 *)(lVar4 + 0x10));
        if (lVar4 != 0) {
          uVar6 = FUN_055f0190(lVar4,0);
          if ((uVar6 & 1) != 0) {
            FUN_04427000(param_1,&local_74,lVar5,lVar9,lVar4,
                         *(undefined8 *)
                          System_Func<QueryLobbiesRequest,_Configuration,_Task<Response<QueryResponse>>>_TypeInfo
                        );
            return lVar5;
          }
          FUN_04427388(param_1,lVar5,
                       *(undefined8 *)
                        System_Func<RemovePlayerRequest,_Configuration,_Task<Response>>_TypeInfo);
          puVar1 = PTR_DAT_06a0ffb8;
          lVar4 = *(long *)PTR_DAT_06a0ffb8;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar4 = *(long *)puVar1;
          }
          return **(long **)(lVar4 + 0xb8);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


