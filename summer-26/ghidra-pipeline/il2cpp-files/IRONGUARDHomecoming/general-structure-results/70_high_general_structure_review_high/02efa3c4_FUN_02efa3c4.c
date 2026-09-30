/*
FUNCTION_NAME: FUN_02efa3c4
ENTRY_POINT: 02efa3c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02efa3c4(long param_1,long *param_2,int param_3,int param_4,long param_5)

{
  uint uVar1;
  int *piVar2;
  void *__src;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong __n;
  undefined1 *__dest;
  ulong uVar10;
  int iVar11;
  undefined1 auStack_80 [8];
  long local_78;
  int local_6c;
  long local_68;
  undefined *puVar5;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x98) + 0xfc);
  __dest = auStack_80 + -(__n + 0xf & 0x1fffffff0);
  if (param_2 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar7,uVar8,0);
  }
  else {
    if (param_3 < 0) {
      local_6c = param_3;
      uVar8 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar8 = thunk_FUN_01f113fc(uVar8,&local_6c);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar7 = thunk_FUN_01f117cc();
      puVar5 = Method_System_Decimal_ToUInt16__;
    }
    else {
      local_78 = lVar3;
      if (-1 < param_4) {
        if ((param_3 <= (int)param_2[3]) && (param_4 <= (int)param_2[3] - param_3)) {
          if ((0 < param_4) && (0 < *(int *)(param_1 + 0x24))) {
            uVar10 = 0;
            iVar11 = 0;
            do {
              plVar9 = *(long **)(param_1 + 0x18);
              if (plVar9 == (long *)0x0) {
LAB_02efa5c4:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(plVar9 + 3) <= uVar10) goto LAB_02efa5c0;
              piVar2 = (int *)thunk_FUN_01ee7388((long)plVar9 +
                                                 uVar10 * *(uint *)(*plVar9 + 0x104) + 0x20,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(*(long *)(param_5 + 0x20) +
                                                                      0xc0) + 0x90) + 0x80));
              if (-1 < *piVar2) {
                plVar9 = *(long **)(param_1 + 0x18);
                if (plVar9 == (long *)0x0) goto LAB_02efa5c4;
                if (*(uint *)(plVar9 + 3) <= uVar10) {
LAB_02efa5c0:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                __src = (void *)thunk_FUN_01ee7388((long)plVar9 +
                                                   uVar10 * *(uint *)(*plVar9 + 0x104) + 0x20,
                                                   *(long *)(*(long *)(*(long *)(*(long *)(param_5 +
                                                                                          0x20) +
                                                                                0xc0) + 0x90) + 0x80
                                                            ) + 0x40);
                memcpy(__dest,__src,__n);
                uVar1 = iVar11 + param_3;
                if (*(uint *)(param_2 + 3) <= uVar1) goto LAB_02efa5c0;
                memcpy((void *)((long)param_2 +
                               (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)uVar1 + 0x20),__dest,
                       __n);
                lVar3 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x98);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_01ecaf44();
                }
                if (*(uint *)(param_2 + 3) <= uVar1) goto LAB_02efa5c0;
                FUN_01f087b0(lVar3,(long)param_2 +
                                   (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)uVar1 + 0x20,
                             __dest);
                iVar11 = iVar11 + 1;
              }
            } while ((iVar11 < param_4) &&
                    (uVar10 = uVar10 + 1, (long)uVar10 < (long)*(int *)(param_1 + 0x24)));
          }
          if (*(long *)(local_78 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar7 = thunk_FUN_01f117cc();
        uVar8 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt32__);
        FUN_034f6754(uVar7,uVar8,0);
        goto LAB_02efa6d8;
      }
      local_6c = param_4;
      uVar8 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar8 = thunk_FUN_01f113fc(uVar8,&local_6c);
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
LAB_02efa6d8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_5);
}


