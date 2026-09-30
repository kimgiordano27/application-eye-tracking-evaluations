/*
FUNCTION_NAME: FUN_0359f9ac
ENTRY_POINT: 0359f9ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0359f9ac(long *param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long *plVar13;
  
  puVar12 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_048334c0 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048334c0 = 1;
  }
  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_03582560(param_1,0,0);
  if ((uVar4 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    puVar12 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_s32__;
    goto LAB_0359fd60;
  }
  if (param_1 == (long *)0x0) goto LAB_0359fcf4;
  uVar4 = (**(code **)(*param_1 + 0x5c8))(param_1,*(undefined8 *)(*param_1 + 0x5d0));
  puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_s16__;
  if ((uVar4 & 1) == 0) {
LAB_0359fd94:
    uVar8 = thunk_FUN_01efb3a4(puVar10);
    uVar9 = FUN_035ac8e0(uVar8,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar11 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_s32__);
    FUN_034efd98(uVar8,uVar9,uVar11,0);
    goto LAB_0359ff5c;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    puVar12 = Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__;
LAB_0359fd60:
    uVar9 = thunk_FUN_01efb3a4(puVar12);
    FUN_034efd20(uVar8,uVar9,0);
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_n_u16__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar9);
  }
  if (param_3 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    puVar12 = Method_OVRVirtualKeyboardSampleControls_DestroyKeyboard__;
    goto LAB_0359fd60;
  }
  lVar5 = *(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__;
  if (*(byte *)(*param_1 + 0x130) < *(byte *)(lVar5 + 0x130)) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = param_1;
    if (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5) {
      plVar13 = (long *)0x0;
    }
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
  puVar10 = 
  Method_Unity_VisualScripting_Antlr3_Runtime_TokenRewriteStream_ReduceToSingleOperationPerIndex__;
  if (plVar13 == (long *)0x0) goto LAB_0359fd94;
  plVar6 = (long *)thunk_FUN_01ecaf38(param_2,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  plVar7 = (long *)FUN_0359deb8(param_1);
  if (plVar6 == (long *)0x0) goto LAB_0359fcf4;
  uVar4 = (**(code **)(*plVar6 + 0x5c8))(plVar6,*(undefined8 *)(*plVar6 + 0x5d0));
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03583338(plVar6,plVar7,0);
    if ((uVar4 & 1) != 0) {
      uVar8 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar8 = FUN_01f08890(uVar8,2);
      FUN_01bc50c0(plVar6);
      uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      FUN_01bc50c0(uVar8);
      FUN_01bc56ec(uVar8,uVar9);
      FUN_01bc5408(uVar8,0,uVar9);
      FUN_01bc50c0(plVar7);
      uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      FUN_01bc50c0(uVar8);
      FUN_01bc56ec(uVar8,uVar9);
      FUN_01bc5408(uVar8,1,uVar9);
      puVar12 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_n_u32__;
      goto LAB_0359ff28;
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0359deb8(plVar6);
    uVar4 = (**(code **)(*plVar6 + 0x8c8))(plVar6,param_1,*(undefined8 *)(*plVar6 + 0x8d0));
    if ((uVar4 & 1) == 0) {
      uVar8 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar8 = FUN_01f08890(uVar8,2);
      FUN_01bc50c0(plVar6);
      uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      FUN_01bc50c0(uVar8);
      FUN_01bc56ec(uVar8,uVar9);
      FUN_01bc5408(uVar8,0,uVar9);
      FUN_01bc50c0(param_1);
      uVar9 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      FUN_01bc50c0(uVar8);
      FUN_01bc56ec(uVar8,uVar9);
      FUN_01bc5408(uVar8,1,uVar9);
      puVar12 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u32__;
LAB_0359ff28:
      uVar9 = thunk_FUN_01efb3a4(puVar12);
      uVar9 = FUN_035ae81c(uVar9,uVar8,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar8 = thunk_FUN_01f117cc();
      FUN_034f6754(uVar8,uVar9,0);
      goto LAB_0359ff5c;
    }
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2);
    }
    param_2 = (long *)FUN_01f29a44(param_2);
  }
  if (*(int *)(param_3 + 0x10) == 1) {
    uVar3 = FUN_03409f80(param_3,0,0);
    if (uVar3 < 100) {
      if (uVar3 < 0x47) {
        if (uVar3 == 0x44) {
LAB_0359fc9c:
          if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0359fcc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
            return;
          }
LAB_0359fcf4:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (uVar3 == 0x46) {
LAB_0359fbe4:
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0359d0dc(plVar13,param_2);
          return;
        }
      }
      else {
        if (uVar3 == 0x47) {
LAB_0359fcc4:
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0359cef4(plVar13,param_2);
          return;
        }
        if (uVar3 == 0x58) {
LAB_0359fc70:
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0359ca48(param_2);
          return;
        }
      }
    }
    else if (uVar3 < 0x67) {
      if (uVar3 == 100) goto LAB_0359fc9c;
      if (uVar3 == 0x66) goto LAB_0359fbe4;
    }
    else {
      if (uVar3 == 0x67) goto LAB_0359fcc4;
      if (uVar3 == 0x78) goto LAB_0359fc70;
    }
  }
  uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_n_s64__);
  uVar9 = FUN_035ac8e0(uVar8,0);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
  uVar8 = thunk_FUN_01f117cc();
  FUN_03553fd0(uVar8,uVar9,0);
LAB_0359ff5c:
  uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_n_u16__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar9);
}


