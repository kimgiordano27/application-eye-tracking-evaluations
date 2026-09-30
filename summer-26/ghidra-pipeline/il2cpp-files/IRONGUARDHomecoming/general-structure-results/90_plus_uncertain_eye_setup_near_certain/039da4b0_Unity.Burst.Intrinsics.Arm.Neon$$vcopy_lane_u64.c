/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vcopy_lane_u64
ENTRY_POINT: 039da4b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x039da868) */

uint Unity_Burst_Intrinsics_Arm_Neon__vcopy_lane_u64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar11;
  
  puVar2 = StringLiteral_4474;
  if (unaff_x19 == (long *)0x0) goto LAB_039da870;
  lVar5 = (**(code **)(*unaff_x19 + 0x1b8))();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar6 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16(lVar5);
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((uVar6 & 1) != 0) goto LAB_039da4f4;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03582560(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_039da870;
    uVar6 = FUN_0358471c();
    if ((uVar6 & 1) != 0) {
      uVar11 = *(undefined8 *)Method_System_Convert_ToUInt64__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar2);
      }
      uVar6 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16(lVar5,uVar11);
      if ((uVar6 & 1) == 0) {
        uVar11 = *(undefined8 *)
                  Method_System_Linq_Enumerable_Select<int,_AnimationClipTextureBaker_VertInfo>__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar6 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16(lVar5,uVar11);
        if ((uVar6 & 1) == 0) {
          uVar6 = (**(code **)(*unaff_x20 + 0x5c8))();
          if ((uVar6 & 1) != 0) {
            uVar11 = *(undefined8 *)
                      Method_System_Linq_Enumerable_Select<IGraphParentElement,_Guid>__;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar11 = FUN_03579868(uVar11,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar2);
            }
            uVar6 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16(lVar5,uVar11);
            if ((uVar6 & 1) != 0) goto LAB_039da4f4;
          }
          if (lVar5 == 0) {
LAB_039da870:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar6 = FUN_03583944(lVar5,0);
          if ((uVar6 & 1) != 0) {
            plVar7 = (long *)System_Console__SetupStreams();
            if ((plVar7 == (long *)0x0) ||
               (plVar7 = (long *)(**(code **)(*plVar7 + 0x9a8))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x9b0)),
               plVar7 == (long *)0x0)) goto LAB_039da870;
            lVar9 = *plVar7;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_5819) {
                  puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_s64;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)StringLiteral_5819,0);
Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_s64:
            plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
            puVar3 = StringLiteral_5820;
            puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar9 = *plVar7;
              uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                    goto Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_u8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_u8:
              uVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
              if ((uVar4 & 1) == 0) {
                uVar4 = 0;
                break;
              }
              lVar9 = *plVar7;
              uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                    puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_039da7c0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_039da7c0:
              uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar6 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16(lVar5,uVar11);
            } while ((uVar6 & 1) == 0);
            if (plVar7 != (long *)0x0) {
              lVar5 = *plVar7;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_039da858;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar8 = (undefined8 *)
                       FUN_01ecb238(plVar7,*(long *)
                                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                    ,0);
LAB_039da858:
              (*(code *)*puVar8)(plVar7,puVar8[1]);
            }
            goto LAB_039da6cc;
          }
          goto LAB_039da6c8;
        }
      }
LAB_039da4f4:
      uVar4 = 1;
      goto LAB_039da6cc;
    }
  }
LAB_039da6c8:
  uVar4 = 0;
LAB_039da6cc:
  return uVar4 & 1;
}


