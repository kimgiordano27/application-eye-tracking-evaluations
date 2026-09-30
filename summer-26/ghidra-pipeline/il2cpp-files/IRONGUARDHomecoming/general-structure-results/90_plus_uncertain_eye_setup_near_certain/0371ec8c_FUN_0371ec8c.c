/*
FUNCTION_NAME: FUN_0371ec8c
ENTRY_POINT: 0371ec8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0371f57c) */

void FUN_0371ec8c(long param_1,long param_2,uint param_3,long param_4,long param_5,uint param_6,
                 int *param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 local_c8;
  long lStack_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  
  if ((DAT_048361e6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<sbyte>__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_<OnFindLayoutForDevice>b__0__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_<Render>b__5_0__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_XString_<>c_<Inject>b__1_0__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_XUnit_<>c__DisplayClass0_0_<CompatibleValueInput>b__0__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_X86_Sse4_2_ComputeStringLength<ushort>__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_XUnit_<>c__DisplayClass0_0_<CompatibleValueInput>b__1__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_Release__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_XUnit_<>c__DisplayClass1_0_<CompatibleValueOutput>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_XUnit_<>c__DisplayClass1_0_<CompatibleValueOutput>b__1__
                      );
    DAT_048361e6 = 1;
  }
  local_b0 = 0;
  local_a8 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  if (param_1 == 0) goto LAB_0371f564;
  uVar8 = FUN_04073394(param_1,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  uVar22 = *(undefined8 *)
            Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
  ;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar22 = FUN_03579868(uVar22,0);
  plVar9 = (long *)FUN_04070488(param_1,uVar22,0);
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (plVar9 == (long *)0x0) {
LAB_0371ee40:
    plVar9 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_<Render>b__5_0__
                     + 0x130);
    if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_0371ee40;
    if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_<Render>b__5_0__) {
      plVar9 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_04073094(plVar9,0,0);
  if ((uVar8 & 1) != 0) {
    if ((plVar9 == (long *)0x0) || (lVar10 = FUN_04050f98(plVar9,0), lVar10 == 0))
    goto LAB_0371f564;
    if (*(long *)(lVar10 + 0x18) != 0) {
      if ((int)*(long *)(lVar10 + 0x18) == 0) {
LAB_0371f568:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar10 = *(long *)(lVar10 + 0x28);
      if (lVar10 == 0) goto LAB_0371f564;
      if (*(long *)(lVar10 + 0x18) != 0) {
        if ((int)*(long *)(lVar10 + 0x18) == 0) goto LAB_0371f568;
        if ((*(long *)(lVar10 + 0x20) == 0) ||
           (param_1 = FUN_040703d4(*(long *)(lVar10 + 0x20),0), param_1 == 0)) goto LAB_0371f564;
        param_3 = 0;
      }
    }
  }
  lVar10 = FUN_02336b24(param_1,*(undefined8 *)
                                 Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<sbyte>__
                       );
  lVar11 = FUN_02336b24(param_1,*(undefined8 *)
                                 Method_UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_<OnFindLayoutForDevice>b__0__
                       );
  lVar12 = FUN_02336b24(param_1,*(undefined8 *)
                                 Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                       );
  if ((lVar12 != 0) && (uVar8 = *(ulong *)(lVar12 + 0x18), uVar8 != 0)) {
    if (param_2 == 0) {
      lVar13 = FUN_01f08890(*(undefined8 *)
                             Method_Unity_VisualScripting_XUnit_<>c__DisplayClass0_0_<CompatibleValueInput>b__1__
                            ,uVar8 & 0xffffffff);
    }
    else {
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar7 = FUN_0356bc8c(uVar8 & 0xffffffff,*(undefined4 *)(param_2 + 0x18),0);
      lVar13 = FUN_01f08890(*(undefined8 *)
                             Method_Unity_VisualScripting_XUnit_<>c__DisplayClass0_0_<CompatibleValueInput>b__1__
                            ,iVar7);
      uVar20 = *(uint *)(lVar12 + 0x18);
      uVar8 = (ulong)uVar20;
      if ((int)uVar20 < iVar7) {
        lVar18 = (-(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3) + 0x20;
        lVar23 = (long)iVar7 - (long)(int)uVar20;
        do {
          uVar20 = (uint)uVar8;
          if (*(uint *)(param_2 + 0x18) <= uVar20) goto LAB_0371f568;
          if (lVar13 == 0) goto LAB_0371f564;
          if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_0371f568;
          *(undefined8 *)(lVar13 + lVar18) = *(undefined8 *)(param_2 + lVar18);
          thunk_FUN_01f51358();
          lVar18 = lVar18 + 8;
          lVar23 = lVar23 + -1;
          uVar8 = (ulong)(uVar20 + 1);
        } while (lVar23 != 0);
      }
    }
    param_2 = lVar13;
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar8 = 0;
      uVar17 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      puVar15 = (undefined8 *)(param_2 + 0x20);
      do {
        if (uVar17 <= uVar8) goto LAB_0371f568;
        if (param_2 == 0) goto LAB_0371f564;
        if (*(uint *)(param_2 + 0x18) <= uVar8) goto LAB_0371f568;
        *puVar15 = *(undefined8 *)(lVar12 + 0x20 + uVar8 * 8);
        thunk_FUN_01f51358();
        uVar17 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar8 = uVar8 + 1;
        puVar15 = puVar15 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
  }
  puVar4 = Method_Unity_VisualScripting_XString_<>c_<Inject>b__1_0__;
  if (lVar10 != 0) {
    uVar20 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar20) {
      uVar21 = 0;
      do {
        if (uVar20 <= uVar21) goto LAB_0371f568;
        lVar12 = *(long *)(lVar10 + (long)(int)uVar21 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_0371f564;
        lVar13 = FUN_04050c14(lVar12,0);
        lVar18 = *(long *)puVar2;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar18);
        }
        uVar8 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                          (lVar13,0,0);
        if ((uVar8 & 1) == 0) {
          if ((param_6 & 1) != 0) {
            if (lVar13 == 0) goto LAB_0371f564;
            uVar8 = FUN_04051920(lVar13,0);
            if ((uVar8 & 1) == 0) {
              lVar13 = FUN_040703d4(lVar12,0);
              if (lVar13 != 0) {
                uVar22 = FUN_040766fc(lVar13,0);
                uVar22 = FUN_0340ebc0(*(undefined8 *)
                                       Method_Unity_VisualScripting_XUnit_<>c__DisplayClass1_0_<CompatibleValueOutput>b__0__
                                      ,uVar22,*(undefined8 *)
                                               Method_Unity_VisualScripting_XUnit_<>c__DisplayClass1_0_<CompatibleValueOutput>b__1__
                                      ,0);
                uVar14 = FUN_040703d4(lVar12,0);
                if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                    == 0) {
                  thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
                }
                FUN_0403f3d4(uVar22,uVar14,0);
                *param_7 = *param_7 + 1;
                goto LAB_0371f1f8;
              }
              goto LAB_0371f564;
            }
          }
          local_a8 = 0;
          local_b0 = lVar12;
          thunk_FUN_01f51358(&local_b0,lVar12);
          local_a8 = param_2;
          thunk_FUN_01f51358(&local_a8,param_2);
          if (param_4 == 0) goto LAB_0371f564;
          lVar12 = *(long *)(param_4 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_0371f564;
          uVar20 = *(uint *)(param_4 + 0x18);
          if (uVar20 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar20 * 0x10;
            *(uint *)(param_4 + 0x18) = uVar20 + 1;
            plVar9 = (long *)(lVar12 + 0x20);
            *plVar9 = local_b0;
            *(long *)(lVar12 + 0x28) = local_a8;
            thunk_FUN_01f51358(plVar9,0);
          }
          else {
            FUN_031ee610(param_4,local_b0,local_a8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
LAB_0371f1f8:
        uVar20 = *(uint *)(lVar10 + 0x18);
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < (int)uVar20);
    }
    puVar4 = Method_Unity_VisualScripting_XUnit_<>c__DisplayClass0_0_<CompatibleValueInput>b__0__;
    if (lVar11 != 0) {
      if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
        uVar8 = 0;
        uVar17 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar17 <= uVar8) goto LAB_0371f568;
          local_c8 = *(undefined8 *)(lVar11 + 0x20 + uVar8 * 8);
          lStack_c0 = 0;
          local_b8 = 0;
          thunk_FUN_01f51358(&local_c8);
          lStack_c0 = param_2;
          thunk_FUN_01f51358(&lStack_c0,param_2);
          if (param_5 == 0) goto LAB_0371f564;
          lVar12 = *(long *)puVar4;
          lStack_98 = lStack_c0;
          local_a0 = local_c8;
          local_90 = local_b8;
          lVar10 = *(long *)(param_5 + 0x10);
          *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_0371f564;
          uVar20 = *(uint *)(param_5 + 0x18);
          if (uVar20 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(param_5 + 0x18) = uVar20 + 1;
            lVar10 = lVar10 + (long)(int)uVar20 * 0x18;
            *(undefined8 *)(lVar10 + 0x30) = local_b8;
            *(long *)(lVar10 + 0x28) = lStack_c0;
            *(undefined8 *)(lVar10 + 0x20) = local_c8;
            thunk_FUN_01f51358(lVar10 + 0x20,0);
          }
          else {
            lStack_78 = lStack_c0;
            local_80 = local_c8;
            local_70 = local_b8;
            FUN_031f0f98(param_5,&local_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          uVar17 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
      if ((param_3 & 1) == 0) {
        return;
      }
      lVar10 = FUN_04073258(param_1,0);
      if (lVar10 != 0) {
        plVar9 = (long *)FUN_0407eda0(lVar10,0);
        puVar6 = Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__;
        puVar5 = Method_UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_Release__;
        puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar11 = *plVar9;
          lVar10 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar10) {
                puVar15 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_0371f3a4;
              }
              uVar8 = uVar8 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar8 != 0);
          }
          puVar15 = (undefined8 *)FUN_01ecb238(plVar9,lVar10,0);
LAB_0371f3a4:
          uVar8 = (*(code *)*puVar15)(plVar9,puVar15[1]);
          puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          if ((uVar8 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                               );
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar10 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 == 0) goto LAB_0371f518;
            piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_0371f500;
          }
          lVar11 = *plVar9;
          lVar10 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar10) {
                puVar15 = (undefined8 *)(lVar11 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_0371f404;
              }
              uVar8 = uVar8 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar8 != 0);
          }
          puVar15 = (undefined8 *)FUN_01ecb238(plVar9,lVar10,1);
LAB_0371f404:
          plVar16 = (long *)(*(code *)*puVar15)(plVar9,puVar15[1]);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar16);
          }
          uVar22 = FUN_022c59ec(plVar16,*(undefined8 *)puVar6);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar8 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                            (uVar22,0,0);
          if ((uVar8 & 1) != 0) {
            uVar22 = FUN_040703d4(plVar16,0);
            if (*(int *)(*(long *)
                          Method_Unity_Burst_Intrinsics_X86_Sse4_2_ComputeStringLength<ushort>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_0371ec8c(uVar22,param_2,1,param_4,param_5,param_6 & 1,param_7);
          }
        } while( true );
      }
    }
  }
LAB_0371f564:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar19 = piVar19 + 4;
    if (uVar8 == 0) break;
LAB_0371f500:
    if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
      puVar15 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0371f534;
    }
  }
LAB_0371f518:
  puVar15 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_0371f534:
  (*(code *)*puVar15)(plVar9,puVar15[1]);
  return;
}


