/*
FUNCTION_NAME: OVR.OpenVR.RenderModel_TextureMap_t_Packed$$.ctor
ENTRY_POINT: 0371ecf8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0371f57c) */

void OVR_OpenVR_RenderModel_TextureMap_t_Packed___ctor(long param_1)

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
  long unaff_x19;
  uint uVar20;
  int *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint uVar21;
  long unaff_x24;
  undefined8 uVar22;
  long lVar23;
  uint unaff_w27;
  ulong in_stack_00000028;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x928));
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_<OnFindLayoutForDevice>b__0__
                    );
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_<Render>b__5_0__
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
  *(undefined1 *)(unaff_x19 + 0x1e6) = 1;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  if (unaff_x24 == 0) goto LAB_0371f564;
  uVar8 = FUN_04073394();
  if ((uVar8 & 1) == 0) {
    return;
  }
  uVar22 = *(undefined8 *)
            Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
  ;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar22,0);
  plVar9 = (long *)FUN_04070488();
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
           (unaff_x24 = FUN_040703d4(*(long *)(lVar10 + 0x20),0), unaff_x24 == 0))
        goto LAB_0371f564;
        unaff_w27 = 0;
      }
    }
  }
  lVar10 = FUN_02336b24(unaff_x24,
                        *(undefined8 *)
                         Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<sbyte>__);
  lVar11 = FUN_02336b24(unaff_x24,
                        *(undefined8 *)
                         Method_UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_<OnFindLayoutForDevice>b__0__
                       );
  lVar12 = FUN_02336b24(unaff_x24,
                        *(undefined8 *)
                         Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__);
  if ((lVar12 != 0) && (uVar8 = *(ulong *)(lVar12 + 0x18), uVar8 != 0)) {
    if (unaff_x23 == 0) {
      lVar13 = FUN_01f08890(*(undefined8 *)
                             Method_Unity_VisualScripting_XUnit_<>c__DisplayClass0_0_<CompatibleValueInput>b__1__
                            ,uVar8 & 0xffffffff);
    }
    else {
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar7 = FUN_0356bc8c(uVar8 & 0xffffffff,*(undefined4 *)(unaff_x23 + 0x18),0);
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
          if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_0371f568;
          if (lVar13 == 0) goto LAB_0371f564;
          if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_0371f568;
          *(undefined8 *)(lVar13 + lVar18) = *(undefined8 *)(unaff_x23 + lVar18);
          thunk_FUN_01f51358();
          lVar18 = lVar18 + 8;
          lVar23 = lVar23 + -1;
          uVar8 = (ulong)(uVar20 + 1);
        } while (lVar23 != 0);
      }
    }
    unaff_x23 = lVar13;
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar8 = 0;
      uVar17 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      puVar15 = (undefined8 *)(unaff_x23 + 0x20);
      do {
        if (uVar17 <= uVar8) goto LAB_0371f568;
        if (unaff_x23 == 0) goto LAB_0371f564;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0371f568;
        *puVar15 = *(undefined8 *)(lVar12 + 0x20 + uVar8 * 8);
        thunk_FUN_01f51358();
        uVar17 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar8 = uVar8 + 1;
        puVar15 = puVar15 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
  }
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
          if ((in_stack_00000028 & 0x100000000) != 0) {
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
                *unaff_x20 = *unaff_x20 + 1;
                goto LAB_0371f1f8;
              }
              goto LAB_0371f564;
            }
          }
          in_stack_00000068 = 0;
          in_stack_00000060 = lVar12;
          thunk_FUN_01f51358(&stack0x00000060,lVar12);
          in_stack_00000068 = unaff_x23;
          thunk_FUN_01f51358(&stack0x00000068,unaff_x23);
          if (unaff_x22 == 0) goto LAB_0371f564;
          lVar12 = *(long *)(unaff_x22 + 0x10);
          *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_0371f564;
          uVar20 = *(uint *)(unaff_x22 + 0x18);
          if (uVar20 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar20 * 0x10;
            *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
            plVar9 = (long *)(lVar12 + 0x20);
            *plVar9 = in_stack_00000060;
            *(long *)(lVar12 + 0x28) = in_stack_00000068;
            thunk_FUN_01f51358(plVar9,0);
          }
          else {
            FUN_031ee610();
          }
        }
LAB_0371f1f8:
        uVar20 = *(uint *)(lVar10 + 0x18);
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < (int)uVar20);
    }
    if (lVar11 != 0) {
      if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
        uVar8 = 0;
        uVar17 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar17 <= uVar8) goto LAB_0371f568;
          in_stack_00000048 = *(undefined8 *)(lVar11 + 0x20 + uVar8 * 8);
          in_stack_00000050 = 0;
          in_stack_00000058 = 0;
          thunk_FUN_01f51358(&stack0x00000048);
          in_stack_00000050 = unaff_x23;
          thunk_FUN_01f51358(&stack0x00000050,unaff_x23);
          if (unaff_x21 == 0) goto LAB_0371f564;
          in_stack_00000078 = in_stack_00000050;
          in_stack_00000070 = in_stack_00000048;
          in_stack_00000080 = in_stack_00000058;
          lVar10 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_0371f564;
          uVar20 = *(uint *)(unaff_x21 + 0x18);
          if (uVar20 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar20 + 1;
            lVar10 = lVar10 + (long)(int)uVar20 * 0x18;
            *(undefined8 *)(lVar10 + 0x30) = in_stack_00000058;
            *(long *)(lVar10 + 0x28) = in_stack_00000050;
            *(undefined8 *)(lVar10 + 0x20) = in_stack_00000048;
            thunk_FUN_01f51358(lVar10 + 0x20,0);
          }
          else {
            in_stack_00000098 = in_stack_00000050;
            in_stack_00000090 = in_stack_00000048;
            in_stack_000000a0 = in_stack_00000058;
            FUN_031f0f98();
          }
          uVar17 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
      if ((unaff_w27 & 1) == 0) {
        return;
      }
      lVar10 = FUN_04073258(unaff_x24,0);
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
            FUN_0371ec8c(uVar22,unaff_x23,1);
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


