/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-Guid>$$System.Collections.IDictionary.Contains
ENTRY_POINT: 02a61b50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 173
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02a61e58) */

void System_Collections_Generic_Dictionary<object,_Guid>__System_Collections_IDictionary_Contains
               (undefined8 param_1,long param_2,uint param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x23;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((*(byte *)(unaff_x23 + 0xf32) & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    *(undefined1 *)(unaff_x23 + 0xf32) = 1;
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar9,uVar7,0);
  }
  else if ((int)param_3 < 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar9 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    uVar8 = thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<float,_string>__);
    FUN_034f3578(uVar9,uVar7,uVar8,0);
  }
  else {
    FUN_02a61f74(param_1,&stack0x00000018,(long)&stack0x00000008 + 4,&stack0x00000010,
                 &stack0x00000008,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x50));
    uVar11 = in_stack_00000008;
    uVar3 = in_stack_00000008._4_4_;
    lVar4 = FUN_02a61a00(in_stack_00000018,in_stack_00000008._4_4_,in_stack_00000010,
                         in_stack_00000008 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x60));
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((long)(ulong)param_3 <= *(int *)(param_2 + 0x18) - lVar4) {
      plVar5 = (long *)FUN_02a62220(param_1,in_stack_00000018,uVar3,in_stack_00000010,
                                    uVar11 & 0xffffffff,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar4 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02a61c70;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02a61c70:
        uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar4 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 == 0) goto LAB_02a61d54;
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_02a61d3c;
        }
        lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44(lVar4);
        }
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar4) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02a61ce8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar4,0);
LAB_02a61ce8:
        uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (*(uint *)(param_2 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(param_2 + (long)(int)param_3 * 8 + 0x20) = uVar7;
        param_3 = param_3 + 1;
        thunk_FUN_01f51358();
      } while( true );
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<SplineInstantiate,_int>__);
    FUN_034f6754(uVar9,uVar7,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar9,param_4);
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_02a61d3c:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02a61d70;
    }
  }
LAB_02a61d54:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_02a61d70:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


