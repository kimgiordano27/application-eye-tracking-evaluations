/*
FUNCTION_NAME: FUN_03544444
ENTRY_POINT: 03544444
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03544444(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint local_44;
  
  if ((DAT_04833126 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    DAT_04833126 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar12 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar12,uVar8,0);
    goto LAB_03544904;
  }
  if ((int)param_3 < 0) {
    local_44 = param_3;
    uVar8 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar8 = thunk_FUN_01f113fc(uVar8,&local_44);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar12 = thunk_FUN_01f117cc();
    uVar11 = thunk_FUN_01efb3a4(
                               Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                               );
    uVar9 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    FUN_034f48f0(uVar12,uVar11,uVar8,uVar9,0);
    uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_lane_u16__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,uVar8);
  }
  iVar5 = thunk_FUN_01eca4a4(param_2,0);
  if (iVar5 == 1) {
    lVar7 = thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                        Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__
                              );
    puVar10 = Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
    if (lVar7 != 0) {
      uVar17 = *(uint *)(param_1 + 0x18);
      if ((int)uVar17 < 1) {
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        iVar5 = 0;
        iVar19 = 0;
        if ((-uVar17 & 0x1f) == 0) goto LAB_035445c4;
        uVar17 = -(-uVar17 & 0x1f);
        uVar18 = 0xffffffff;
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        iVar5 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar5 = uVar17 - 1;
        }
        uVar18 = iVar5 >> 5;
        uVar17 = uVar17 & 0x1f;
        iVar5 = uVar18 + 1;
        iVar19 = iVar5;
        if (uVar17 == 0) {
LAB_035445c4:
          FUN_0358d498(uVar8,0,lVar7,param_3,iVar19,0);
          return;
        }
      }
      FUN_0358d498(uVar8,0,lVar7,param_3,iVar5 + -1,0);
      lVar13 = *(long *)(param_1 + 0x10);
      if (lVar13 != 0) {
        if ((uVar18 < *(uint *)(lVar13 + 0x18)) && (uVar18 + param_3 < *(uint *)(lVar7 + 0x18))) {
          *(uint *)(lVar7 + (long)(int)(uVar18 + param_3) * 4 + 0x20) =
               *(uint *)(lVar13 + (ulong)uVar18 * 4 + 0x20) &
               (-1 << (ulong)(uVar17 & 0x1f) ^ 0xffffffffU);
          return;
        }
LAB_035447d4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
LAB_035447d8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                        Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                              );
    puVar4 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
    if (lVar7 == 0) {
      lVar7 = thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                                );
      if (lVar7 == 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar12 = thunk_FUN_01f117cc();
        puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_lane_u32__;
        goto LAB_035448a8;
      }
      iVar5 = FUN_03582fa8(param_2,0);
      if (*(int *)(param_1 + 0x18) <= (int)(iVar5 - param_3)) {
        uVar8 = *(undefined8 *)puVar4;
        lVar7 = thunk_FUN_01f116d0(param_2,uVar8);
        if (lVar7 != 0) {
          iVar5 = *(int *)(param_1 + 0x18);
          if (iVar5 < 1) {
            return;
          }
          lVar13 = *(long *)(param_1 + 0x10);
          if (lVar13 != 0) {
            uVar17 = *(uint *)(lVar13 + 0x18);
            uVar15 = 0;
            lVar16 = (ulong)param_3 << 0x20;
            while ((uVar18 = (uint)(uVar15 >> 5) & 0x7ffffff, uVar18 < uVar17 &&
                   (param_3 + uVar15 < (ulong)*(uint *)(lVar7 + 0x18)))) {
              lVar1 = lVar16 >> 0x20;
              lVar16 = lVar16 + 0x100000000;
              uVar14 = (uint)uVar15;
              uVar15 = uVar15 + 1;
              *(byte *)(lVar7 + lVar1 + 0x20) =
                   (byte)(*(uint *)(lVar13 + (ulong)uVar18 * 4 + 0x20) >> (ulong)(uVar14 & 0x1f)) &
                   1;
              if ((long)iVar5 <= (long)uVar15) {
                return;
              }
            }
            goto LAB_035447d4;
          }
          goto LAB_035447d8;
        }
        goto LAB_0354491c;
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x18);
      if (iVar5 < 1) {
        iVar19 = 0;
      }
      else {
        iVar19 = iVar5 + 6;
        if (-1 < iVar5 + -1) {
          iVar19 = iVar5 + -1;
        }
        iVar19 = (iVar19 >> 3) + 1;
      }
      iVar6 = FUN_03582fa8(param_2,0);
      if (iVar19 <= (int)(iVar6 - param_3)) {
        uVar8 = *(undefined8 *)puVar10;
        uVar17 = iVar5 % 8;
        lVar7 = thunk_FUN_01f116d0(param_2,uVar8);
        if (lVar7 == 0) {
LAB_0354491c:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(param_2,uVar8);
        }
        uVar18 = iVar19 - (uint)(0 < (int)uVar17);
        if (0 < (int)uVar18) {
          uVar14 = 0;
          uVar15 = 0;
          lVar13 = (ulong)param_3 << 0x20;
          do {
            lVar16 = *(long *)(param_1 + 0x10);
            if (lVar16 == 0) goto LAB_035447d8;
            uVar3 = (uint)(uVar15 >> 2) & 0x3fffffff;
            if ((*(uint *)(lVar16 + 0x18) <= uVar3) ||
               ((ulong)*(uint *)(lVar7 + 0x18) <= param_3 + uVar15)) goto LAB_035447d4;
            uVar2 = uVar14 & 0x18;
            uVar15 = uVar15 + 1;
            lVar1 = lVar13 >> 0x20;
            uVar14 = uVar14 + 8;
            lVar13 = lVar13 + 0x100000000;
            *(char *)(lVar7 + lVar1 + 0x20) =
                 (char)(*(int *)(lVar16 + (ulong)uVar3 * 4 + 0x20) >> uVar2);
          } while (uVar18 != uVar15);
        }
        if ((int)uVar17 < 1) {
          return;
        }
        lVar13 = *(long *)(param_1 + 0x10);
        if (lVar13 != 0) {
          uVar14 = uVar18 + 3;
          if (-1 < (int)uVar18) {
            uVar14 = uVar18;
          }
          if (((uint)((int)uVar14 >> 2) < *(uint *)(lVar13 + 0x18)) &&
             (uVar18 + param_3 < *(uint *)(lVar7 + 0x18))) {
            *(byte *)(lVar7 + (int)(uVar18 + param_3) + 0x20) =
                 (byte)(*(int *)(lVar13 + (long)((int)uVar14 >> 2) * 4 + 0x20) >>
                       ((uVar18 & 3) << 3)) & ((byte)(-1 << (ulong)(uVar17 & 0x1f)) ^ 0xff);
            return;
          }
          goto LAB_035447d4;
        }
        goto LAB_035447d8;
      }
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar12 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                              );
    FUN_034f6754(uVar12,uVar8,0);
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar12 = thunk_FUN_01f117cc();
    puVar10 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_14__;
LAB_035448a8:
    uVar8 = thunk_FUN_01efb3a4(puVar10);
    uVar11 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                               );
    FUN_034efd98(uVar12,uVar8,uVar11,0);
  }
LAB_03544904:
  uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_lane_u16__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar12,uVar8);
}


