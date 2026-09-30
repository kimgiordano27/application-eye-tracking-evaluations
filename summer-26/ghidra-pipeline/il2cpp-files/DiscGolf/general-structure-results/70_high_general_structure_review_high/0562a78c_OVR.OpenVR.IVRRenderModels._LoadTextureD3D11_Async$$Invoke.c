/*
FUNCTION_NAME: OVR.OpenVR.IVRRenderModels._LoadTextureD3D11_Async$$Invoke
ENTRY_POINT: 0562a78c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long OVR_OpenVR_IVRRenderModels__LoadTextureD3D11_Async__Invoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined4 unaff_w25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  
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
  *(undefined1 *)(unaff_x23 + 0xab5) = 1;
  lVar8 = thunk_FUN_02dd3144(*unaff_x26);
  FUN_0552aca4(lVar8,0);
  if (lVar8 != 0) {
    *(long **)(lVar8 + 0x18) = unaff_x19;
    *(undefined4 *)(lVar8 + 0x10) = unaff_w25;
    LeanTween__value();
    lVar9 = System_Collections_ObjectModel_ReadOnlyCollection<KeyValuePair<TrackableId,_object>>__System_Collections_IList_set_Item
                      ();
    if (lVar9 != 0) {
      uVar10 = FUN_055f0190(lVar9,0);
      if ((uVar10 & 1) == 0) {
        return lVar9;
      }
      (**(code **)(*unaff_x19 + 0x198))((long)&stack0x00000058 + 4);
      uVar5 = in_stack_00000068;
      uVar4 = uStack0000000000000060;
      uVar1 = CONCAT44(uStack0000000000000060,in_stack_00000058._4_4_);
      uVar2 = CONCAT44(in_stack_00000068,uStack0000000000000064);
      uVar11 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<MemberInfo,_MemberInfo,_bool>_TypeInfo)
      ;
      FUN_03b7820c(uVar11,lVar8,*(undefined8 *)System_Func<Scale,_Scale,_bool>_TypeInfo,0);
      uVar11 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<MemberInfo,_DebugMember,_bool>_TypeInfo
                                 );
      FUN_03b6fe3c(uVar11,lVar8,*(undefined8 *)System_Func<float,_float,_bool>_TypeInfo,0);
      lVar12 = System_Collections_ObjectModel_ReadOnlyCollection<NativeArray<ConvertMeshJobData>>__get_Count
                         ();
      uVar6 = FUN_044266a8();
      uVar7 = FUN_044266c4();
      if (lVar12 != 0) {
        in_stack_00000048 = unaff_x20[1];
        in_stack_00000040 = *unaff_x20;
        in_stack_00000050 = *(undefined4 *)(unaff_x20 + 2);
        in_stack_00000028 = unaff_x21[1];
        in_stack_00000020 = *unaff_x21;
        in_stack_00000030 = *(undefined4 *)(unaff_x21 + 2);
        lVar8 = FUN_0562aa34(lVar12,uVar1,uVar2,uVar6,uVar7,&stack0x00000040,&stack0x00000020,
                             *(undefined4 *)(lVar8 + 0x10));
        if (lVar8 != 0) {
          uVar10 = FUN_055f0190(lVar8,0);
          if ((uVar10 & 1) != 0) {
            uStack0000000000000060 = uVar4;
            in_stack_00000068 = uVar5;
            FUN_04427000();
            return lVar9;
          }
          FUN_04427388();
          puVar3 = PTR_DAT_06a0ffb8;
          lVar8 = *(long *)PTR_DAT_06a0ffb8;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar8 = *(long *)puVar3;
          }
          return **(long **)(lVar8 + 0xb8);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


