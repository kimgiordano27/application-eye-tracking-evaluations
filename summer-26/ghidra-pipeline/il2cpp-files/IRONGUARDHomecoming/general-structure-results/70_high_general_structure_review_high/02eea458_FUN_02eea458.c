/*
FUNCTION_NAME: FUN_02eea458
ENTRY_POINT: 02eea458
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02eea458(long param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int local_48;
  int local_44;
  undefined *puVar2;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar4,uVar5,0);
  }
  else {
    if (param_3 < 0) {
      local_44 = param_3;
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar5 = thunk_FUN_01f113fc(uVar5,&local_44);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      puVar2 = Method_System_Decimal_ToUInt16__;
    }
    else {
      if (-1 < param_4) {
        if ((param_3 <= *(int *)(param_2 + 0x18)) && (param_4 <= *(int *)(param_2 + 0x18) - param_3)
           ) {
          if ((0 < param_4) && (iVar6 = *(int *)(param_1 + 0x24), 0 < iVar6)) {
            lVar8 = 0;
            uVar9 = 0;
            iVar10 = 0;
            do {
              lVar7 = *(long *)(param_1 + 0x18);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(lVar7 + 0x18) <= uVar9) {
LAB_02eea538:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              if (-1 < *(int *)(lVar7 + lVar8 + 0x20)) {
                if (*(uint *)(param_2 + 0x18) <= (uint)(iVar10 + param_3)) goto LAB_02eea538;
                *(undefined8 *)(param_2 + (long)(iVar10 + param_3) * 8 + 0x20) =
                     *(undefined8 *)(lVar7 + lVar8 + 0x28);
                thunk_FUN_01f51358();
                iVar6 = *(int *)(param_1 + 0x24);
                iVar10 = iVar10 + 1;
              }
              if (param_4 <= iVar10) {
                return;
              }
              uVar9 = uVar9 + 1;
              lVar8 = lVar8 + 0x10;
            } while ((long)uVar9 < (long)iVar6);
          }
          return;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar4 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt32__);
        FUN_034f6754(uVar4,uVar5,0);
        goto LAB_02eea660;
      }
      local_48 = param_4;
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar5 = thunk_FUN_01f113fc(uVar5,&local_48);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      puVar2 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
    }
    uVar1 = thunk_FUN_01efb3a4(puVar2);
    uVar3 = thunk_FUN_01efb3a4(
                              Method_System_Dynamic_Utils_ExpressionUtils_ReturnReadOnly<Expression>__
                              );
    FUN_034f48f0(uVar4,uVar1,uVar5,uVar3,0);
  }
LAB_02eea660:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,param_5);
}


