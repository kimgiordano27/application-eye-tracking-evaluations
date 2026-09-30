/*
FUNCTION_NAME: FUN_0359d5f4
ENTRY_POINT: 0359d5f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_0359d5f4(long *param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  
  puVar10 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_048334b7 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__)
    ;
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshlq_u16__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshlq_u32__);
    DAT_048334b7 = 1;
  }
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03582560(param_1,0,0);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_s32__);
    FUN_034efd20(uVar8,uVar9,0);
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshlq_u64__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar9);
  }
  lVar7 = *(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__;
  if (param_1 == (long *)0x0) {
LAB_0359d6f0:
    plVar17 = (long *)0x0;
  }
  else {
    if (*(byte *)(*param_1 + 0x130) < *(byte *)(lVar7 + 0x130)) goto LAB_0359d6f0;
    plVar17 = param_1;
    if (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7) {
      plVar17 = (long *)0x0;
    }
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar10 = 
  Method_Unity_VisualScripting_Antlr3_Runtime_TokenRewriteStream_ReduceToSingleOperationPerIndex__;
  if (plVar17 != (long *)0x0) {
    if (param_1 == (long *)0x0) {
LAB_0359db7c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = (**(code **)(*param_1 + 0x5c8))(param_1,*(undefined8 *)(*param_1 + 0x5d0));
    puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_s16__;
    if ((uVar6 & 1) != 0) {
      if (param_2 == 0) {
        FUN_0359ddf0(param_4,2,
                     *(undefined8 *)
                      Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__);
      }
      else {
        lVar7 = FUN_03412ab4(param_2,0);
        if (lVar7 == 0) goto LAB_0359db7c;
        if (*(int *)(lVar7 + 0x10) != 0) {
          uVar4 = FUN_03409f80(lVar7,0,0);
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)Method_System_IO_CStreamReader_Read__);
          }
          uVar6 = FUN_034f5e70(uVar4,0);
          if ((((uVar6 & 1) == 0) && (sVar3 = FUN_03409f80(lVar7,0,0), sVar3 != 0x2d)) &&
             (sVar3 = FUN_03409f80(lVar7,0,0),
             puVar10 = 
             Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__,
             sVar3 != 0x2b)) {
            lVar12 = *(long *)
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
            ;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar12 = *(long *)puVar10;
            }
            lVar12 = FUN_03411150(lVar7,**(undefined8 **)(lVar12 + 0xb8),0);
            lVar13 = FUN_0359c8a4(plVar17,1);
            if ((lVar13 == 0) || (lVar12 == 0)) goto LAB_0359db7c;
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (0 < (int)uVar2) {
              lVar1 = *(long *)(lVar13 + 0x10);
              lVar13 = *(long *)(lVar13 + 0x18);
              uVar18 = 0;
              uVar6 = 0;
LAB_0359da48:
              if (uVar18 < uVar2) {
                plVar17 = (long *)(lVar12 + (long)(int)uVar18 * 8 + 0x20);
                if (*plVar17 == 0) goto LAB_0359db7c;
                lVar14 = FUN_03412ab4(*plVar17,0);
                if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_0359db80;
                *plVar17 = lVar14;
                thunk_FUN_01f51358(plVar17,lVar14);
                if (lVar13 == 0) goto LAB_0359db7c;
                if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                  uVar19 = 0;
                  uVar16 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                  do {
                    if ((uVar16 <= uVar19) || (*(uint *)(lVar12 + 0x18) <= uVar18))
                    goto LAB_0359db80;
                    lVar14 = *(long *)(lVar13 + 0x20 + uVar19 * 8);
                    if ((param_3 & 1) == 0) {
                      if (lVar14 == 0) goto LAB_0359db7c;
                      uVar16 = FUN_0340e040(lVar14,*plVar17,0);
                      if ((uVar16 & 1) != 0) goto LAB_0359daf4;
                    }
                    else {
                      iVar5 = FUN_0340d008(lVar14,*plVar17,5,0);
                      if (iVar5 == 0) goto LAB_0359daf4;
                    }
                    uVar16 = (ulong)*(uint *)(lVar13 + 0x18);
                    uVar19 = uVar19 + 1;
                    if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar19) break;
                  } while( true );
                }
                uVar8 = 3;
                puVar15 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshlq_u16__;
                goto LAB_0359d8b0;
              }
LAB_0359db80:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar6 = 0;
LAB_0359db44:
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_0359e488(param_1,uVar6);
            *param_4 = uVar8;
            thunk_FUN_01f51358(param_4);
          }
          else {
            puVar10 = 
            Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_0359deb8(param_1);
            if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__)
              ;
            }
            uVar9 = FUN_03532f80(0);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_034ff068(lVar7,uVar8,uVar9,0);
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_0359df7c(param_1,uVar8);
            *param_4 = uVar8;
            thunk_FUN_01f51358(param_4);
          }
          return 1;
        }
        uVar8 = 1;
        lVar7 = 0;
        puVar15 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshlq_u32__;
LAB_0359d8b0:
        FUN_0359de4c(param_4,uVar8,*puVar15,lVar7);
      }
      return 0;
    }
  }
  uVar8 = thunk_FUN_01efb3a4(puVar10);
  uVar8 = FUN_035ac8e0(uVar8,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar9 = thunk_FUN_01f117cc();
  uVar11 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_s32__);
  FUN_034efd98(uVar9,uVar8,uVar11,0);
  uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshlq_u64__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar9,uVar8);
LAB_0359daf4:
  if (lVar1 == 0) goto LAB_0359db7c;
  if ((uint)uVar19 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar12 + 0x18);
    uVar18 = uVar18 + 1;
    uVar6 = *(ulong *)(lVar1 + 0x20 + uVar19 * 8) | uVar6;
    if ((int)uVar2 <= (int)uVar18) goto LAB_0359db44;
    goto LAB_0359da48;
  }
  goto LAB_0359db80;
}


