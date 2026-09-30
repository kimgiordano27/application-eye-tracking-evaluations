/*
FUNCTION_NAME: FUN_0281851c
ENTRY_POINT: 0281851c
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


void FUN_0281851c(undefined8 param_1,int param_2,int param_3,long param_4)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  code *pcVar9;
  int local_38;
  int local_34;
  undefined *puVar7;
  
  puVar7 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  local_34 = param_2;
  if (param_3 < param_2) {
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_34);
    local_38 = param_3;
    uVar6 = thunk_FUN_01efb3a4(puVar7);
    uVar6 = thunk_FUN_01f113fc(uVar6,&local_38);
    uVar4 = thunk_FUN_01efb3a4(Method_System_Text_Encoding_SerializeEncoding__);
    uVar5 = FUN_0340f2f0(uVar4,uVar5,uVar6,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar6,uVar5,0);
  }
  else {
    if (param_2 < 0) {
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar5 = thunk_FUN_01f113fc(uVar5,&local_34);
      puVar7 = Method_System_Text_Encoding_ThrowBytesOverflow__;
    }
    else {
      lVar8 = *(long *)(param_4 + 0x20);
      uVar1 = *(ushort *)(lVar8 + 0x135);
      lVar3 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
        uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
        lVar3 = *(long *)(param_4 + 0x20);
      }
      pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0xb0);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      iVar2 = (*pcVar9)(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xb0));
                    /* try { // try from 028185a4 to 029186ff has its CatchHandler @ 028185a4
                       catch() { ... } // from try @ 028185a4 with catch @ 028185a4
                       catch() { ... } // from try @ 02818808 with catch @ 028185a4
                       catch() { ... } // from try @ 02818b0c with catch @ 028185a4
                       catch() { ... } // from try @ 02818c50 with catch @ 028185a4
                       catch() { ... } // from try @ 02818c58 with catch @ 028185a4
                       catch() { ... } // from try @ 02818c64 with catch @ 028185a4
                       catch() { ... } // from try @ 02818d34 with catch @ 028185a4
                       catch() { ... } // from try @ 02818dbc with catch @ 028185a4 */
      if (iVar2 < param_2) {
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                  );
        uVar5 = thunk_FUN_01f113fc(uVar5,&local_34);
        puVar7 = Method_System_Text_Encoding_ThrowCharsOverflow__;
      }
      else {
        lVar8 = *(long *)(param_4 + 0x20);
        uVar1 = *(ushort *)(lVar8 + 0x135);
        lVar3 = lVar8;
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_01ecaf44(lVar8);
          uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
          lVar3 = *(long *)(param_4 + 0x20);
        }
        pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0xb0);
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_01ecaf44(lVar3);
        }
        iVar2 = (*pcVar9)(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xb0));
        if (param_3 <= iVar2) {
          return;
        }
        local_34 = param_3;
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                  );
        uVar5 = thunk_FUN_01f113fc(uVar5,&local_34);
        puVar7 = Method_System_Text_Encoding_set_DecoderFallback__;
      }
    }
    uVar6 = thunk_FUN_01efb3a4(puVar7);
    uVar5 = FUN_03406290(uVar6,uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    FUN_034f7db4(uVar6,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_4);
}


