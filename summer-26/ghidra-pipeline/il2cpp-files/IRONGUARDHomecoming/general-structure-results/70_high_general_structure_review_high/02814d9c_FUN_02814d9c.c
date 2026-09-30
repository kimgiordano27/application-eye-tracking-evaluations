/*
FUNCTION_NAME: FUN_02814d9c
ENTRY_POINT: 02814d9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_02814d9c(long param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_24;
  undefined *puVar4;
  
  local_24 = param_3;
  if (param_3 < 0) {
    uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar2 = thunk_FUN_01f113fc(uVar2,&local_24);
    puVar4 = Method_System_Text_Encoding_GetChars__;
  }
  else if (param_2 < 0) {
    local_24 = param_2;
    uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar2 = thunk_FUN_01f113fc(uVar2,&local_24);
    puVar4 = Method_System_Text_Encoding_GetEncoding__;
  }
  else {
    if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    iVar1 = FUN_03af77c4(*(undefined4 *)(param_1 + 8),0);
    if (iVar1 < param_2) {
      local_24 = param_2;
      uVar2 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar2 = thunk_FUN_01f113fc(uVar2,&local_24);
      puVar4 = Method_System_Text_Encoding_GetString__;
    }
    else {
      if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      iVar1 = FUN_03af77c4(*(undefined4 *)(param_1 + 8),0);
      if (param_3 + param_2 <= iVar1) {
        return;
      }
      uVar2 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar2 = thunk_FUN_01f113fc(uVar2,&local_24);
      puVar4 = Method_System_Text_Encoding_GetString__;
    }
  }
  uVar3 = thunk_FUN_01efb3a4(puVar4);
  uVar2 = FUN_03406290(uVar3,uVar2,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  FUN_034f7db4(uVar3,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,param_4);
}


