/*
FUNCTION_NAME: FUN_0271ea6c
ENTRY_POINT: 0271ea6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0271ea6c(long param_1,long *param_2,uint param_3,long param_4)

{
  ulong uVar1;
  void *__src;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *__dest;
  undefined8 *__dest_00;
  void *__dest_01;
  ulong __n;
  long alStack_b0 [3];
  void *local_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  long local_68;
  
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  lVar11 = *(long *)(param_4 + 0x20);
  lVar8 = *(long *)(lVar11 + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar8 + 0x78) + 0xfc);
  local_88 = (ulong)*(uint *)(*(long *)(lVar8 + 0x58) + 0xfc);
  local_90 = (ulong)*(uint *)(*(long *)(lVar8 + 0x68) + 0xfc);
  __dest = (undefined8 *)((long)alStack_b0 - (local_88 + 0xf & 0x1fffffff0));
  __dest_00 = (undefined8 *)((long)__dest - (local_90 + 0xf & 0x1fffffff0));
  uVar10 = __n + 0xf & 0x1fffffff0;
  __dest_01 = (void *)((long)__dest_00 - uVar10);
  local_98 = (void *)((long)__dest_01 - uVar10);
  local_80 = param_4;
  memset(local_98,0,__n);
  if (param_2 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar5,uVar6,0);
  }
  else {
    if (((int)param_3 < 0) || ((int)param_2[3] < (int)param_3)) {
      local_78 = (undefined8 *)CONCAT44(local_78._4_4_,param_3);
      uVar6 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar6 = thunk_FUN_01f113fc(uVar6,&local_78);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      uVar3 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt16__);
      uVar4 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
                                );
      FUN_034f48f0(uVar5,uVar3,uVar6,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,local_80);
    }
    alStack_b0[1] = lVar12;
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x160))(param_1);
    if (iVar2 <= (int)((int)param_2[3] - param_3)) {
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x160))
                        (param_1);
      if (0 < iVar2) {
        alStack_b0[2] = (long)param_3;
        uVar10 = 0;
        lVar12 = alStack_b0[2] << 0x20;
        do {
          plVar9 = *(long **)(param_1 + 0x10);
          if (plVar9 == (long *)0x0) {
LAB_0271ed40:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(plVar9 + 3) <= uVar10) goto LAB_0271ed3c;
          memcpy(__dest,(void *)((long)plVar9 + uVar10 * *(uint *)(*plVar9 + 0x104) + 0x20),local_88
                );
          plVar9 = *(long **)(param_1 + 0x18);
          if (plVar9 == (long *)0x0) goto LAB_0271ed40;
          if (*(uint *)(plVar9 + 3) <= uVar10) {
LAB_0271ed3c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          memcpy(__dest_00,(void *)((long)plVar9 + uVar10 * *(uint *)(*plVar9 + 0x104) + 0x20),
                 local_90);
          __src = local_98;
          lVar8 = *(long *)(*(long *)(local_80 + 0x20) + 0xc0);
          local_78 = __dest;
          if (-1 < *(int *)(*(long *)(lVar8 + 0x58) + 0x28)) {
            local_78 = (undefined8 *)*__dest;
          }
          puVar7 = *(undefined8 **)(lVar8 + 0x168);
          puStack_70 = __dest_00;
          if (-1 < *(int *)(*(long *)(lVar8 + 0x68) + 0x28)) {
            puStack_70 = (undefined8 *)*__dest_00;
          }
          (*(code *)puVar7[2])(*puVar7,puVar7,local_98,&local_78);
          memcpy(__dest_01,__src,__n);
          uVar1 = alStack_b0[2] + uVar10;
          if (*(uint *)(param_2 + 3) <= uVar1) goto LAB_0271ed3c;
          memcpy((void *)((long)param_2 +
                         (lVar12 >> 0x20) * (ulong)*(uint *)(*param_2 + 0x104) + 0x20),__dest_01,__n
                );
          lVar8 = *(long *)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x78);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44();
          }
          if (*(uint *)(param_2 + 3) <= uVar1) goto LAB_0271ed3c;
          FUN_01f087b0(lVar8,(long)param_2 +
                             (lVar12 >> 0x20) * (ulong)*(uint *)(*param_2 + 0x104) + 0x20,__dest_01)
          ;
          uVar10 = uVar10 + 1;
          iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x160))
                            (param_1);
          lVar12 = lVar12 + 0x100000000;
        } while ((long)uVar10 < (long)iVar2);
      }
      if (*(long *)(alStack_b0[1] + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt32__);
    FUN_034f6754(uVar5,uVar6,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,local_80);
}


