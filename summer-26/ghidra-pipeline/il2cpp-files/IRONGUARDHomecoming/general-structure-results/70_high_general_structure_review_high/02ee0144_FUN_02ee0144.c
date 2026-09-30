/*
FUNCTION_NAME: FUN_02ee0144
ENTRY_POINT: 02ee0144
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02ee0144(long param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined4 *puVar13;
  int local_28;
  int local_24;
  undefined *puVar5;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar7,uVar8,0);
  }
  else {
    if (param_3 < 0) {
      local_24 = param_3;
      uVar8 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar8 = thunk_FUN_01f113fc(uVar8,&local_24);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar7 = thunk_FUN_01f117cc();
      puVar5 = Method_System_Decimal_ToUInt16__;
    }
    else {
      if (-1 < param_4) {
        uVar2 = *(uint *)(param_2 + 0x18);
        if ((param_3 <= (int)uVar2) && (param_4 <= (int)(uVar2 - param_3))) {
          if ((0 < param_4) && (iVar11 = *(int *)(param_1 + 0x24), 0 < iVar11)) {
            lVar12 = *(long *)(param_1 + 0x18);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar3 = *(uint *)(lVar12 + 0x18);
            uVar9 = 0;
            iVar10 = 0;
            puVar13 = (undefined4 *)(lVar12 + 0x28);
            do {
              if (uVar3 <= uVar9) {
LAB_02ee01f8:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              if (-1 < (int)puVar13[-2]) {
                uVar1 = iVar10 + param_3;
                if (uVar2 <= uVar1) goto LAB_02ee01f8;
                iVar10 = iVar10 + 1;
                *(undefined4 *)(param_2 + (long)(int)uVar1 * 4 + 0x20) = *puVar13;
                iVar11 = *(int *)(param_1 + 0x24);
              }
              if (param_4 <= iVar10) {
                return;
              }
              uVar9 = uVar9 + 1;
              puVar13 = puVar13 + 3;
            } while ((long)uVar9 < (long)iVar11);
          }
          return;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar7 = thunk_FUN_01f117cc();
        uVar8 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt32__);
        FUN_034f6754(uVar7,uVar8,0);
        goto LAB_02ee031c;
      }
      local_28 = param_4;
      uVar8 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar8 = thunk_FUN_01f113fc(uVar8,&local_28);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar7 = thunk_FUN_01f117cc();
      puVar5 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
    }
    uVar4 = thunk_FUN_01efb3a4(puVar5);
    uVar6 = thunk_FUN_01efb3a4(
                              Method_System_Dynamic_Utils_ExpressionUtils_ReturnReadOnly<Expression>__
                              );
    FUN_034f48f0(uVar7,uVar4,uVar8,uVar6,0);
  }
LAB_02ee031c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_5);
}


