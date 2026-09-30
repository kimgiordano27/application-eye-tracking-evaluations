/*
FUNCTION_NAME: FUN_02ee5230
ENTRY_POINT: 02ee5230
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


void FUN_02ee5230(long param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int local_48;
  int local_44;
  undefined *puVar4;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar6,uVar7,0);
  }
  else {
    if (param_3 < 0) {
      local_44 = param_3;
      uVar7 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar7 = thunk_FUN_01f113fc(uVar7,&local_44);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      puVar4 = Method_System_Decimal_ToUInt16__;
    }
    else {
      if (-1 < param_4) {
        if ((param_3 <= *(int *)(param_2 + 0x18)) && (param_4 <= *(int *)(param_2 + 0x18) - param_3)
           ) {
          if ((0 < param_4) && (iVar8 = *(int *)(param_1 + 0x24), 0 < iVar8)) {
            lVar10 = 0;
            uVar11 = 0;
            iVar12 = 0;
            do {
              lVar9 = *(long *)(param_1 + 0x18);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_02ee531c:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              if (-1 < *(int *)(lVar9 + lVar10 + 0x20)) {
                if (*(uint *)(param_2 + 0x18) <= (uint)(iVar12 + param_3)) goto LAB_02ee531c;
                uVar7 = *(undefined8 *)(lVar9 + lVar10 + 0x28);
                lVar1 = param_2 + (long)(iVar12 + param_3) * 0x10;
                puVar2 = (undefined8 *)(lVar1 + 0x20);
                *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar9 + lVar10 + 0x30);
                *puVar2 = uVar7;
                thunk_FUN_01f51358(puVar2,0);
                iVar8 = *(int *)(param_1 + 0x24);
                iVar12 = iVar12 + 1;
              }
              if (param_4 <= iVar12) {
                return;
              }
              uVar11 = uVar11 + 1;
              lVar10 = lVar10 + 0x18;
            } while ((long)uVar11 < (long)iVar8);
          }
          return;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar6 = thunk_FUN_01f117cc();
        uVar7 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt32__);
        FUN_034f6754(uVar6,uVar7,0);
        goto LAB_02ee5444;
      }
      local_48 = param_4;
      uVar7 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar7 = thunk_FUN_01f113fc(uVar7,&local_48);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      puVar4 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
    }
    uVar3 = thunk_FUN_01efb3a4(puVar4);
    uVar5 = thunk_FUN_01efb3a4(
                              Method_System_Dynamic_Utils_ExpressionUtils_ReturnReadOnly<Expression>__
                              );
    FUN_034f48f0(uVar6,uVar3,uVar7,uVar5,0);
  }
LAB_02ee5444:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


