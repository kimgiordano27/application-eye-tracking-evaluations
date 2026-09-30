/*
FUNCTION_NAME: FUN_02818340
ENTRY_POINT: 02818340
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


void FUN_02818340(undefined8 param_1,int param_2,int param_3,long param_4)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  code *pcVar8;
  int local_34;
  undefined *puVar6;
  
  local_34 = param_3;
  if (param_3 < 0) {
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_34);
    puVar6 = Method_System_Text_Encoding_GetChars__;
  }
  else if (param_2 < 0) {
    local_34 = param_2;
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_34);
    puVar6 = Method_System_Text_Encoding_GetEncoding__;
  }
  else {
    lVar7 = *(long *)(param_4 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar3 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
      uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar3 = *(long *)(param_4 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xb0);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    iVar2 = (*pcVar8)(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xb0));
    if (iVar2 < param_2) {
      local_34 = param_2;
      uVar4 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar4 = thunk_FUN_01f113fc(uVar4,&local_34);
      puVar6 = Method_System_Text_Encoding_GetString__;
    }
    else {
      lVar7 = *(long *)(param_4 + 0x20);
      uVar1 = *(ushort *)(lVar7 + 0x135);
      lVar3 = lVar7;
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
        uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
        lVar3 = *(long *)(param_4 + 0x20);
      }
      pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xb0);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      iVar2 = (*pcVar8)(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xb0));
      if (param_3 + param_2 <= iVar2) {
        return;
      }
      uVar4 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar4 = thunk_FUN_01f113fc(uVar4,&local_34);
      puVar6 = Method_System_Text_Encoding_GetString__;
    }
  }
  uVar5 = thunk_FUN_01efb3a4(puVar6);
  uVar4 = FUN_03406290(uVar5,uVar4,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar5 = thunk_FUN_01f117cc();
  FUN_034f7db4(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,param_4);
}


