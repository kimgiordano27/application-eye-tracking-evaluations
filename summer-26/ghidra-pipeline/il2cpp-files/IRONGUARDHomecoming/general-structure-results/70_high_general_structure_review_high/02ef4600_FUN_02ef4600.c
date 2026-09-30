/*
FUNCTION_NAME: FUN_02ef4600
ENTRY_POINT: 02ef4600
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


void FUN_02ef4600(long param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int local_28;
  int local_24;
  undefined *puVar3;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar5,uVar6,0);
  }
  else {
    if (param_3 < 0) {
      local_24 = param_3;
      uVar6 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar6 = thunk_FUN_01f113fc(uVar6,&local_24);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      puVar3 = Method_System_Decimal_ToUInt16__;
    }
    else {
      if (-1 < param_4) {
        if ((param_3 <= *(int *)(param_2 + 0x18)) && (param_4 <= *(int *)(param_2 + 0x18) - param_3)
           ) {
          if ((0 < param_4) && (iVar10 = *(int *)(param_1 + 0x24), 0 < iVar10)) {
            lVar7 = 0;
            uVar8 = 0;
            iVar9 = 0;
            do {
              lVar12 = *(long *)(param_1 + 0x18);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(lVar12 + 0x18) <= uVar8) {
LAB_02ef46d0:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              if (-1 < *(int *)(lVar12 + lVar7 + 0x20)) {
                if (*(uint *)(param_2 + 0x18) <= (uint)(iVar9 + param_3)) goto LAB_02ef46d0;
                uVar1 = *(undefined4 *)(lVar12 + lVar7 + 0x30);
                lVar11 = param_2 + (long)(iVar9 + param_3) * 0xc;
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar12 + lVar7 + 0x28);
                *(undefined4 *)(lVar11 + 0x28) = uVar1;
                iVar10 = *(int *)(param_1 + 0x24);
                iVar9 = iVar9 + 1;
              }
              if (param_4 <= iVar9) {
                return;
              }
              uVar8 = uVar8 + 1;
              lVar7 = lVar7 + 0x14;
            } while ((long)uVar8 < (long)iVar10);
          }
          return;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar5 = thunk_FUN_01f117cc();
        uVar6 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt32__);
        FUN_034f6754(uVar5,uVar6,0);
        goto 
        System_Collections_Generic_Dictionary_KeyCollection<int,_object>__System_Collections_ICollection_get_IsSynchronized
        ;
      }
      local_28 = param_4;
      uVar6 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar6 = thunk_FUN_01f113fc(uVar6,&local_28);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      puVar3 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
    }
    uVar2 = thunk_FUN_01efb3a4(puVar3);
    uVar4 = thunk_FUN_01efb3a4(
                              Method_System_Dynamic_Utils_ExpressionUtils_ReturnReadOnly<Expression>__
                              );
    FUN_034f48f0(uVar5,uVar2,uVar6,uVar4,0);
  }

  System_Collections_Generic_Dictionary_KeyCollection<int,_object>__System_Collections_ICollection_get_IsSynchronized
  :
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,param_5);
}


