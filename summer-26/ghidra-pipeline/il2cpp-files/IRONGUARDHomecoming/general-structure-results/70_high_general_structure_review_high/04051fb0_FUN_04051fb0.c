/*
FUNCTION_NAME: FUN_04051fb0
ENTRY_POINT: 04051fb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_04051fb0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  if (DAT_0483da10 == (code *)0x0) {
    DAT_0483da10 = (code *)FUN_01f087c4("UnityEngine.Mesh::get_canAccess()");
  }
  uVar2 = (*DAT_0483da10)(param_1);
  if ((uVar2 & 1) != 0) {
    local_54 = param_7;
    if (param_7 < 0) {
      uVar3 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar3 = thunk_FUN_01f113fc(uVar3,&local_54);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(PTR_DAT_04586ae0);
      puVar7 = PTR_DAT_04586ae8;
    }
    else if (param_8 < 0) {
      local_54 = param_8;
      uVar3 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar3 = thunk_FUN_01f113fc(uVar3,&local_54);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(PTR_DAT_04586af0);
      puVar7 = PTR_DAT_04586af8;
    }
    else if ((param_7 < param_6) || (param_8 == 0)) {
      local_54 = param_8 + param_7;
      if (local_54 <= param_6) {
        iVar1 = 0;
        if (param_5 != 0) {
          iVar1 = param_7;
        }
        if (DAT_0483d9c8 == (code *)0x0) {
          DAT_0483d9c8 = (code *)FUN_01f087c4(
                                             "UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)"
                                             );
        }
                    /* WARNING: Could not recover jumptable at 0x0405209c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_0483d9c8)(param_1,param_2,param_3,param_4,param_5,param_6,iVar1,param_8);
        return;
      }
      uVar3 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar3 = thunk_FUN_01f113fc(uVar3,&local_54);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(PTR_DAT_04586af0);
      puVar7 = PTR_DAT_04586b08;
    }
    else {
      uVar3 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar3 = thunk_FUN_01f113fc(uVar3,&local_54);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(PTR_DAT_04586ae0);
      puVar7 = PTR_DAT_04586b00;
    }
    uVar6 = thunk_FUN_01efb3a4(puVar7);
    FUN_034f48f0(uVar4,uVar5,uVar3,uVar6,0);
    uVar3 = thunk_FUN_01efb3a4(PTR_DAT_04586b10);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar3);
  }
  if (DAT_0483d9b8 == (code *)0x0) {
    DAT_0483d9b8 = (code *)FUN_01f087c4(
                                       "UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)"
                                       );
  }
                    /* WARNING: Could not recover jumptable at 0x040520e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0483d9b8)(param_1,param_2);
  return;
}


