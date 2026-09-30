/*
FUNCTION_NAME: FUN_02816318
ENTRY_POINT: 02816318
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02816318(long param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_28;
  int local_24;
  undefined *puVar5;
  
  puVar5 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  local_24 = param_2;
  if (param_3 < param_2) {
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar3 = thunk_FUN_01f113fc(uVar3,&local_24);
    local_28 = param_3;
    uVar4 = thunk_FUN_01efb3a4(puVar5);
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_28);
    uVar2 = thunk_FUN_01efb3a4(Method_System_Text_Encoding_SerializeEncoding__);
    uVar3 = FUN_0340f2f0(uVar2,uVar3,uVar4,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar4,uVar3,0);
  }
  else {
    if (param_2 < 0) {
      uVar3 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar3 = thunk_FUN_01f113fc(uVar3,&local_24);
      puVar5 = Method_System_Text_Encoding_ThrowBytesOverflow__;
    }
    else {
      if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      iVar1 = FUN_03af77c4(*(undefined4 *)(param_1 + 8),0);
      if (iVar1 < param_2) {
        uVar3 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                  );
        uVar3 = thunk_FUN_01f113fc(uVar3,&local_24);
        puVar5 = Method_System_Text_Encoding_ThrowCharsOverflow__;
      }
      else {
        if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        iVar1 = FUN_03af77c4(*(undefined4 *)(param_1 + 8),0);
        if (param_3 <= iVar1) {
          return;
        }
        local_24 = param_3;
        uVar3 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                  );
        uVar3 = thunk_FUN_01f113fc(uVar3,&local_24);
        puVar5 = Method_System_Text_Encoding_set_DecoderFallback__;
      }
    }
    uVar4 = thunk_FUN_01efb3a4(puVar5);
    uVar3 = FUN_03406290(uVar4,uVar3,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_034f7db4(uVar4,uVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,param_4);
}


