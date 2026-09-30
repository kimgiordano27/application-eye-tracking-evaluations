/*
FUNCTION_NAME: FUN_04052244
ENTRY_POINT: 04052244
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_04052244(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,int param_6,int param_7,int param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_54;
  undefined *puVar6;
  
  if (DAT_0483da10 == (code *)0x0) {
    DAT_0483da10 = (code *)FUN_01f087c4("UnityEngine.Mesh::get_canAccess()");
  }
  uVar1 = (*DAT_0483da10)(param_1);
  if ((uVar1 & 1) != 0) {
    local_54 = param_7;
    if (param_7 < 0) {
      uVar2 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar2 = thunk_FUN_01f113fc(uVar2,&local_54);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04586ae0);
      puVar6 = PTR_DAT_04586ae8;
    }
    else if (param_8 < 0) {
      local_54 = param_8;
      uVar2 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar2 = thunk_FUN_01f113fc(uVar2,&local_54);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04586af0);
      puVar6 = PTR_DAT_04586af8;
    }
    else if ((param_7 < param_6) || (param_8 == 0)) {
      local_54 = param_8 + param_7;
      if (local_54 <= param_6) {
        if (DAT_0483d9d0 == (code *)0x0) {
          DAT_0483d9d0 = (code *)FUN_01f087c4(
                                             "UnityEngine.Mesh::SetNativeArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.IntPtr,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)"
                                             );
        }
                    /* WARNING: Could not recover jumptable at 0x04052328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_0483d9d0)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return;
      }
      uVar2 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar2 = thunk_FUN_01f113fc(uVar2,&local_54);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04586af0);
      puVar6 = PTR_DAT_04586b08;
    }
    else {
      uVar2 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar2 = thunk_FUN_01f113fc(uVar2,&local_54);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04586ae0);
      puVar6 = PTR_DAT_04586b00;
    }
    uVar5 = thunk_FUN_01efb3a4(puVar6);
    FUN_034f48f0(uVar3,uVar4,uVar2,uVar5,0);
    uVar2 = thunk_FUN_01efb3a4(PTR_DAT_04586b18);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,uVar2);
  }
  if (DAT_0483d9b8 == (code *)0x0) {
    DAT_0483d9b8 = (code *)FUN_01f087c4(
                                       "UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)"
                                       );
  }
                    /* WARNING: Could not recover jumptable at 0x0405236c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0483d9b8)(param_1,param_2);
  return;
}


