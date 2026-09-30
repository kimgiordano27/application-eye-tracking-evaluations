/*
FUNCTION_NAME: FUN_0358a214
ENTRY_POINT: 0358a214
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong FUN_0358a214(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,uint *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong unaff_x24;
  undefined *unaff_x25;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  code *pcVar23;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_u64__;
  puVar15 = (uint *)&local_70;
  puVar18 = &DAT_04833000;
  uVar16 = (ulong)param_3;
  if ((DAT_04833438 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_u64__);
    thunk_FUN_01efb3a4(Method_Gameplay_Weapon_<Start>b__40_0__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_UnityOnButtonClickMessageListener_<Start>b__0_0__
                      );
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__
                      );
    thunk_FUN_01efb3a4(Method_System_Globalization_DateTimeFormatInfo_GetEraName__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s32__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s64__);
    DAT_04833438 = 1;
  }
  uVar14 = *(ulong *)puVar3;
  uVar13 = 0x2e;
  local_70 = 0;
  local_68 = 0;
  uVar8 = FUN_03579184(param_1,param_2,0x2e);
  puVar5 = Method_Gameplay_Weapon_<Start>b__40_0__;
  if ((int)uVar8 < 0) {
LAB_0358a398:
    if ((param_3 & 1) != 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar13 = thunk_FUN_01f117cc();
      uVar10 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlu_n_s32__);
      uVar11 = thunk_FUN_01efb3a4(Method_System_Globalization_DateTimeFormatInfo_GetEraName__);
      FUN_034efd98(uVar13,uVar10,uVar11,0);
      uVar10 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlu_n_s64__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar13,uVar10);
    }
    return 0;
  }
  uVar19 = (ulong)uVar8;
  uVar17 = (uint)param_2;
  if (uVar17 <= uVar8) goto LAB_0358a65c;
  iVar1 = uVar8 + 1;
  if ((*(byte *)(*(long *)(*(long *)Method_Gameplay_Weapon_<Start>b__40_0__ + 0x20) + 0x135) & 1) ==
      0) {
    FUN_01ecaf44();
  }
  uVar14 = *(ulong *)puVar3;
  unaff_x24 = (ulong)(uVar17 - iVar1);
  puVar18 = (undefined1 *)(param_1 + (long)iVar1 * 2);
  uVar13 = 0x2e;
  iVar9 = FUN_03579184(puVar18,unaff_x24,0x2e);
  unaff_x25 = puVar5;
  if (iVar9 == -1) {
    uVar21 = 0xffffffff;
LAB_0358a3fc:
    uVar20 = 0xffffffff;
  }
  else {
    uVar21 = iVar9 + iVar1;
    uVar20 = uVar21 + 1;
    if (uVar17 < uVar20) goto LAB_0358a65c;
    if ((*(byte *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    uVar14 = *(ulong *)puVar3;
    uVar13 = 0x2e;
    iVar9 = FUN_03579184(param_1 + (long)(int)uVar20 * 2,uVar17 - uVar20,0x2e);
    if (iVar9 == -1) goto LAB_0358a3fc;
    uVar20 = iVar9 + uVar20;
    uVar2 = uVar20 + 1;
    if (uVar17 < uVar2) goto LAB_0358a65c;
    if ((*(byte *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    uVar14 = *(ulong *)puVar3;
    uVar13 = 0x2e;
    iVar9 = FUN_03579184(param_1 + (long)(int)uVar2 * 2,uVar17 - uVar2,0x2e);
    if (iVar9 != -1) goto LAB_0358a398;
  }
  puVar3 = Method_Unity_VisualScripting_UnityOnButtonClickMessageListener_<Start>b__0_0__;
  if (uVar8 <= uVar17) {
    if ((*(byte *)(*(long *)(*(long *)
                              Method_Unity_VisualScripting_UnityOnButtonClickMessageListener_<Start>b__0_0__
                            + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    puVar4 = Method_System_Globalization_DateTimeFormatInfo_GetEraName__;
    uVar14 = (ulong)(param_3 & 1);
    uVar13 = *(undefined8 *)Method_System_Globalization_DateTimeFormatInfo_GetEraName__;
    uVar19 = FUN_0358a660(param_1,uVar8,uVar13);
    if ((uVar19 & 1) != 0) {
      if (uVar21 != 0xffffffff) {
        uVar8 = uVar21 + ~uVar8;
        uVar19 = (ulong)uVar8;
        param_5 = puVar15;
        if (uVar8 <= uVar17 - iVar1) {
          if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
            FUN_01ecaf44();
          }
          uVar13 = *(undefined8 *)puVar4;
          uVar14 = (ulong)(param_3 & 1);
          param_5 = (uint *)((long)&local_68 + 4);
          uVar12 = FUN_0358a660(puVar18,uVar8,uVar13);
          if ((uVar12 & 1) == 0) {
            return 0;
          }
          uVar8 = uVar21 + 1;
          puVar18 = (undefined1 *)(ulong)uVar8;
          if (uVar20 == 0xffffffff) {
            if (uVar21 < uVar17) {
              if ((*(byte *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
                FUN_01ecaf44();
              }
              uVar19 = FUN_0358a660(param_1 + (long)(int)uVar8 * 2,uVar17 - uVar8,
                                    *(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s32__,param_3 & 1
                                    ,&local_68);
              uVar14 = local_68;
              uVar16 = local_70;
              if ((uVar19 & 1) != 0) {
                uVar6 = local_68._4_4_;
                uVar19 = thunk_FUN_01f117cc(*(undefined8 *)
                                             Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__
                                           );
                FUN_03589804(uVar19,uVar16 & 0xffffffff,uVar6,uVar14 & 0xffffffff);
                return uVar19;
              }
              return 0;
            }
          }
          else if (uVar21 < uVar17) {
            uVar21 = uVar20 + ~uVar21;
            uVar19 = (ulong)uVar21;
            if (uVar21 <= uVar17 - uVar8) {
              if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
                FUN_01ecaf44();
              }
              uVar14 = (ulong)(param_3 & 1);
              uVar13 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s32__;
              param_5 = (uint *)&local_68;
              uVar12 = FUN_0358a660(param_1 + (long)(int)uVar8 * 2,uVar21,uVar13);
              if ((uVar12 & 1) == 0) {
                return 0;
              }
              if (uVar20 < uVar17) {
                if ((*(byte *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
                  FUN_01ecaf44();
                }
                uVar19 = FUN_0358a660(param_1 + (long)(int)(uVar20 + 1) * 2,uVar17 - (uVar20 + 1),
                                      *(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s64__,
                                      param_3 & 1,(long)&local_70 + 4);
                uVar14 = local_68;
                uVar16 = local_70;
                if ((uVar19 & 1) != 0) {
                  uVar6 = local_70._4_4_;
                  uVar7 = local_68._4_4_;
                  uVar19 = thunk_FUN_01f117cc(*(undefined8 *)
                                               Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__
                                             );
                  FUN_035896f0(uVar19,uVar16 & 0xffffffff,uVar7,uVar14 & 0xffffffff,uVar6);
                  return uVar19;
                }
                return 0;
              }
            }
          }
        }
        goto LAB_0358a65c;
      }
      if ((*(byte *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      uVar14 = FUN_0358a660(puVar18,unaff_x24,*(undefined8 *)puVar4,param_3 & 1,(long)&local_68 + 4)
      ;
      uVar16 = local_70;
      if ((uVar14 & 1) != 0) {
        uVar6 = local_68._4_4_;
        uVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__
                                   );
        FUN_035898f0(uVar14,uVar16 & 0xffffffff,uVar6);
        return uVar14;
      }
    }
    return 0;
  }
LAB_0358a65c:
  auVar22 = FUN_0358adfc();
  puVar3 = Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
  pcVar23 = FUN_0358a660;
  if ((DAT_04833439 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    DAT_04833439 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar10 = FUN_03532f80(0);
  if ((uVar14 & 1) == 0) {
    uVar16 = FUN_03568eb0(auVar22._0_8_,auVar22._8_8_,7,uVar10,param_5,0,param_7,param_8,pcVar23,
                          unaff_x25,unaff_x24,uVar19,puVar18,param_1,param_2,uVar16);
    if ((uVar16 & 1) == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = (ulong)(~*param_5 >> 0x1f);
    }
  }
  else {
    uVar8 = FUN_03568a48();
    *param_5 = uVar8;
    if ((int)uVar8 < 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar10 = thunk_FUN_01f117cc();
      uVar11 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s8__);
      FUN_034f3578(uVar10,uVar13,uVar11,0);
      uVar13 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlu_n_s8__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar10,uVar13);
    }
    uVar16 = 1;
  }
  return uVar16;
}


