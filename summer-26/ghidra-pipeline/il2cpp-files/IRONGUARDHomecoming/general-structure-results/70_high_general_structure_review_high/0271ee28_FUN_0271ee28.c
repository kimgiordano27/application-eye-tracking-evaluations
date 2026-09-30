/*
FUNCTION_NAME: FUN_0271ee28
ENTRY_POINT: 0271ee28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0271ee28(long param_1,long param_2,uint param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *__dest;
  undefined8 *__dest_00;
  void *pvVar16;
  void *__s;
  long local_b0;
  void *local_a8;
  void *local_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  uint local_6c;
  long local_68;
  
  lVar14 = tpidr_el0;
  local_68 = *(long *)(lVar14 + 0x28);
  if ((DAT_04830250 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_04830250 = 1;
  }
  lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  local_80 = (ulong)*(uint *)(*(long *)(lVar11 + 0x58) + 0xfc);
  local_88 = (ulong)*(uint *)(*(long *)(lVar11 + 0x68) + 0xfc);
  local_78 = (ulong)*(uint *)(*(long *)(lVar11 + 0x78) + 0xfc);
  uVar13 = local_80 + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)&local_b0 - uVar13);
  local_a0 = (void *)((long)__dest - uVar13);
  uVar13 = local_88 + 0xf & 0x1fffffff0;
  __dest_00 = (undefined8 *)((long)local_a0 - uVar13);
  local_a8 = (void *)((long)__dest_00 - uVar13);
  __s = (void *)((long)local_a8 - (local_78 + 0xf & 0x1fffffff0));
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar7,uVar5,0);
    goto LAB_0271f4d4;
  }
  iVar2 = thunk_FUN_01eca4a4(param_2,0);
  if (iVar2 == 1) {
    iVar2 = thunk_FUN_01eca460(param_2,0,0);
    if (iVar2 == 0) {
      if (((int)param_3 < 0) || (iVar2 = FUN_03582fa8(param_2,0), iVar2 < (int)param_3)) {
        local_6c = param_3;
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                  );
        uVar5 = thunk_FUN_01f113fc(uVar5,&local_6c);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar7 = thunk_FUN_01f117cc();
        uVar9 = thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                  );
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
                                  );
        FUN_034f48f0(uVar7,uVar9,uVar5,uVar6,0);
        goto LAB_0271f4d4;
      }
      iVar2 = FUN_03582fa8(param_2,0);
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x160))
                        (param_1);
      if ((int)(iVar2 - param_3) < iVar3) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar7 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt32__);
        FUN_034f6754(uVar7,uVar5,0);
        goto LAB_0271f4d4;
      }
      lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158);
      local_b0 = lVar14;
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      plVar4 = (long *)thunk_FUN_01f116d0(param_2,lVar11);
      local_98 = param_4;
      if (plVar4 != (long *)0x0) {
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x160))
                          (param_1);
        if (0 < iVar2) {
          uVar13 = 0;
          lVar14 = (ulong)param_3 << 0x20;
          local_90 = (ulong)param_3;
          do {
            plVar12 = *(long **)(param_1 + 0x10);
            if (plVar12 == (long *)0x0) {
LAB_0271f354:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(uint *)(plVar12 + 3) <= uVar13) goto LAB_0271f350;
            memcpy(__dest,(void *)((long)plVar12 + uVar13 * *(uint *)(*plVar12 + 0x104) + 0x20),
                   local_80);
            plVar12 = *(long **)(param_1 + 0x18);
            if (plVar12 == (long *)0x0) goto LAB_0271f354;
            if (*(uint *)(plVar12 + 3) <= uVar13) {
LAB_0271f350:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            memcpy(__dest_00,(void *)((long)plVar12 + uVar13 * *(uint *)(*plVar12 + 0x104) + 0x20),
                   local_88);
            memset(__s,0,local_78);
            pvVar16 = local_a0;
            lVar15 = *(long *)(param_4 + 0x20);
            lVar11 = *(long *)(lVar15 + 0xc0);
            if (*(int *)(*(long *)(lVar11 + 0x58) + 0x28) < 0) {
              memcpy(local_a0,__dest,local_80);
              lVar11 = *(long *)(lVar15 + 0xc0);
            }
            else {
              pvVar16 = (void *)*__dest;
            }
            pvVar10 = local_a8;
            if (*(int *)(*(long *)(lVar11 + 0x68) + 0x28) < 0) {
              memcpy(local_a8,__dest_00,local_88);
              lVar11 = *(long *)(lVar15 + 0xc0);
              param_4 = local_98;
            }
            else {
              pvVar10 = (void *)*__dest_00;
            }
            FUN_0301e9a8(__s,pvVar16,pvVar10,*(undefined8 *)(lVar11 + 0x168));
            uVar1 = local_90 + uVar13;
            if (*(uint *)(plVar4 + 3) <= uVar1) goto LAB_0271f350;
            memcpy((void *)((long)plVar4 +
                           (lVar14 >> 0x20) * (ulong)*(uint *)(*plVar4 + 0x104) + 0x20),__s,local_78
                  );
            lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_01ecaf44();
            }
            if (*(uint *)(plVar4 + 3) <= uVar1) goto LAB_0271f350;
            FUN_01f087b0(lVar11,(long)plVar4 +
                                (lVar14 >> 0x20) * (ulong)*(uint *)(*plVar4 + 0x104) + 0x20,__s);
            uVar13 = uVar13 + 1;
            iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x160)
                    )(param_1);
            lVar14 = lVar14 + 0x100000000;
          } while ((long)uVar13 < (long)iVar2);
        }
LAB_0271f17c:
        if (*(long *)(local_b0 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      plVar4 = (long *)thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                         );
      if (plVar4 != (long *)0x0) {
        lVar14 = (ulong)param_3 << 0x20;
        local_90 = (ulong)param_3;
        for (uVar13 = 0;
            iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x160)
                    )(param_1), (long)uVar13 < (long)iVar2; uVar13 = uVar13 + 1) {
          plVar12 = *(long **)(param_1 + 0x10);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(plVar12 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          memcpy(__dest,(void *)((long)plVar12 + uVar13 * *(uint *)(*plVar12 + 0x104) + 0x20),
                 local_80);
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(plVar12 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          memcpy(__dest_00,(void *)((long)plVar12 + uVar13 * *(uint *)(*plVar12 + 0x104) + 0x20),
                 local_88);
          memset(__s,0,local_78);
          pvVar16 = local_a0;
          lVar15 = *(long *)(param_4 + 0x20);
          lVar11 = *(long *)(lVar15 + 0xc0);
          if (*(int *)(*(long *)(lVar11 + 0x58) + 0x28) < 0) {
            memcpy(local_a0,__dest,local_80);
            lVar11 = *(long *)(lVar15 + 0xc0);
          }
          else {
            pvVar16 = (void *)*__dest;
          }
          pvVar10 = local_a8;
          if (*(int *)(*(long *)(lVar11 + 0x68) + 0x28) < 0) {
            memcpy(local_a8,__dest_00,local_88);
            lVar11 = *(long *)(lVar15 + 0xc0);
            param_4 = local_98;
          }
          else {
            pvVar10 = (void *)*__dest_00;
          }
          FUN_0301e9a8(__s,pvVar16,pvVar10,*(undefined8 *)(lVar11 + 0x168));
          lVar11 = thunk_FUN_01f113fc(*(undefined8 *)
                                       (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78),__s);
          if ((lVar11 != 0) &&
             (lVar15 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar15 == 0)) {
            uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar5,0);
          }
          if ((ulong)*(uint *)(plVar4 + 3) <= local_90 + uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar12 = (long *)((long)plVar4 + (lVar14 >> 0x1d) + 0x20);
          *plVar12 = lVar11;
          thunk_FUN_01f51358(plVar12,lVar11);
          lVar14 = lVar14 + 0x100000000;
        }
        goto LAB_0271f17c;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      puVar8 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_17__;
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      puVar8 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_15__;
    }
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    puVar8 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_14__;
  }
  uVar5 = thunk_FUN_01efb3a4(puVar8);
  uVar9 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                            );
  FUN_034efd98(uVar7,uVar5,uVar9,0);
LAB_0271f4d4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_4);
}


