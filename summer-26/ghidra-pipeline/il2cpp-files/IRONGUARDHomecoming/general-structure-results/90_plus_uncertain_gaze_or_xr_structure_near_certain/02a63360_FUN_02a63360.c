/*
FUNCTION_NAME: FUN_02a63360
ENTRY_POINT: 02a63360
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 193
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02a63730) */

void FUN_02a63360(undefined8 param_1,long *param_2,uint param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  undefined1 *__src;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_04830f38 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830f38 = 1;
  }
  lVar9 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  uVar13 = (ulong)*(uint *)(*(long *)(lVar9 + 0x88) + 0xfc);
  __src = auStack_90 + -(uVar13 + 0xf & 0x1fffffff0);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar7,uVar8,0);
  }
  else if ((int)param_3 < 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    uVar6 = thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<float,_string>__);
    FUN_034f3578(uVar7,uVar8,uVar6,0);
  }
  else {
    (*(code *)**(undefined8 **)(lVar9 + 0x50))
              (param_1,&uStack_78,(long)&local_88 + 4,&local_80,&local_88);
    lVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x60))
                      (uStack_78,local_88._4_4_,local_80,local_88 & 0xffffffff);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((long)(ulong)param_3 <= (int)param_2[3] - lVar9) {
      plVar4 = (long *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78))
                                 (param_1,uStack_78,local_88._4_4_,local_80,local_88 & 0xffffffff);
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar9 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02a634cc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar3,0);
LAB_02a634cc:
        uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_02a63638;
          lVar9 = *plVar4;
          uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar13 == 0) goto LAB_02a63610;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_02a635f8;
        }
        lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44(lVar9);
        }
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              lVar9 = lVar10 + (long)*piVar12 * 0x10 + 0x138;
              goto LAB_02a63544;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        lVar9 = FUN_01ecb238(plVar4,lVar9,0);
LAB_02a63544:
        lVar9 = *(long *)(lVar9 + 8);
        local_70 = __src;
        (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar4,&local_70,__src);
        if (*(uint *)(param_2 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar10 = (long)(int)param_3;
        memcpy((void *)((long)param_2 + (ulong)*(uint *)(*param_2 + 0x104) * lVar10 + 0x20),__src,
               uVar13);
        lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x88);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44();
        }
        if (*(uint *)(param_2 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        param_3 = param_3 + 1;
        FUN_01f087b0(lVar9,(long)param_2 + (ulong)*(uint *)(*param_2 + 0x104) * lVar10 + 0x20,__src)
        ;
      } while( true );
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<SplineInstantiate,_int>__);
    FUN_034f6754(uVar7,uVar8,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_4);
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar12 = piVar12 + 4;
    if (uVar13 == 0) break;
LAB_02a635f8:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02a6362c;
    }
  }
LAB_02a63610:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_02a6362c:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_02a63638:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


