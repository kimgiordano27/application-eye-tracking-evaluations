/*
FUNCTION_NAME: FUN_036a40a0
ENTRY_POINT: 036a40a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_036a40a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_54;
  undefined *puVar7;
  
  if (DAT_04132900 == (code *)0x0) {
    DAT_04132900 = (code *)FUN_01ab6968("UnityEngine.Mesh::get_canAccess()");
  }
  uVar2 = (*DAT_04132900)(param_1);
  if ((uVar2 & 1) != 0) {
    local_54 = param_7;
    if (param_7 < 0) {
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
      uVar3 = thunk_FUN_01a89a98(uVar3,&local_54);
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      uVar5 = thunk_FUN_01a6ca08(
                                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<bool>_Start<MobileLogin_<LoadScriptableObjectsAsync>d__29>__
                                );
      puVar7 = 
      Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<bool>_Start<OculusDataManager_<GoToDestination>d__27>__
      ;
    }
    else if (param_8 < 0) {
      local_54 = param_8;
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
      uVar3 = thunk_FUN_01a89a98(uVar3,&local_54);
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      uVar5 = thunk_FUN_01a6ca08(
                                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<bool>_Start<OculusDataManager_<OnGoToScene>d__11>__
                                );
      puVar7 = 
      Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<bool>_Start<PromoCodeManager_<CheckIsNewUser>d__31>__
      ;
    }
    else if ((param_7 < param_6) || (param_8 == 0)) {
      local_54 = param_8 + param_7;
      if (local_54 <= param_6) {
        iVar1 = 0;
        if (param_5 != 0) {
          iVar1 = param_7;
        }
        if (DAT_041327b0 == (code *)0x0) {
          DAT_041327b0 = (code *)FUN_01ab6968(
                                             "UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)"
                                             );
        }
                    /* WARNING: Could not recover jumptable at 0x036a418c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_041327b0)(param_1,param_2,param_3,param_4,param_5,param_6,iVar1,param_8);
        return;
      }
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
      uVar3 = thunk_FUN_01a89a98(uVar3,&local_54);
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      uVar5 = thunk_FUN_01a6ca08(
                                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<bool>_Start<OculusDataManager_<OnGoToScene>d__11>__
                                );
      puVar7 = 
      Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<bool>_Start<RechargeBundleBoard_<BuyCallbackAsync>d__18>__
      ;
    }
    else {
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
      uVar3 = thunk_FUN_01a89a98(uVar3,&local_54);
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      uVar5 = thunk_FUN_01a6ca08(
                                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<bool>_Start<MobileLogin_<LoadScriptableObjectsAsync>d__29>__
                                );
      puVar7 = 
      Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<bool>_Start<RechargeATM_<BuyCallbackAsync>d__17>__
      ;
    }
    uVar6 = thunk_FUN_01a6ca08(puVar7);
    FUN_026af104(uVar4,uVar5,uVar3,uVar6,0);
    uVar3 = thunk_FUN_01a6ca08(
                              Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<bool>_Start<RoomServerPanel_<TryJoinFriendSession>d__24>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,uVar3);
  }
  if (DAT_04132780 == (code *)0x0) {
    DAT_04132780 = (code *)FUN_01ab6968(
                                       "UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)"
                                       );
  }
                    /* WARNING: Could not recover jumptable at 0x036a41d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_04132780)(param_1,param_2);
  return;
}


