/*
FUNCTION_NAME: FUN_03b27ed0
ENTRY_POINT: 03b27ed0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03b27ed0(long param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int local_28;
  uint local_24;
  
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_Drawing_CommandBuilder_Reserve<Color32,_CommandBuilder_PlaneData>__
                              );
    FUN_034efd20(uVar2,uVar3,0);
    uVar3 = thunk_FUN_01efb3a4(StringLiteral_11726);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2,uVar3);
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar5 + 0x18);
    if ((-1 < (int)param_2) && ((int)param_2 < iVar6)) {
      if (param_2 < *(uint *)(lVar5 + 0x18)) {
        uVar7 = (ulong)param_2;
        *(undefined8 *)(lVar5 + uVar7 * 0x58 + 0x60) = *(undefined8 *)(param_3 + 0x40);
        thunk_FUN_01f51358();
        lVar5 = *(long *)(param_1 + 0x30);
        if (lVar5 == 0) {
LAB_03b27fa0:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (param_2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + uVar7 * 0x58 + 0x68) = *(undefined8 *)(param_3 + 0x48);
          thunk_FUN_01f51358();
          lVar5 = *(long *)(param_1 + 0x30);
          if (lVar5 == 0) goto LAB_03b27fa0;
          if (param_2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + uVar7 * 0x58 + 0x70) = *(undefined8 *)(param_3 + 0x50);
            thunk_FUN_01f51358();
            FUN_03b23a04(param_1,0);
            FUN_03b1c6fc(param_1,1);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
  local_24 = param_2;
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar2 = thunk_FUN_01f113fc(uVar2,&local_24);
  local_28 = iVar6;
  uVar3 = thunk_FUN_01efb3a4(puVar1);
  uVar3 = thunk_FUN_01f113fc(uVar3,&local_28);
  uVar4 = thunk_FUN_01efb3a4(StringLiteral_11727);
  uVar2 = FUN_0340f334(uVar4,uVar2,param_1,uVar3,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(StringLiteral_11698);
  FUN_034f3578(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_01efb3a4(StringLiteral_11726);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


