/*
FUNCTION_NAME: FUN_035a7814
ENTRY_POINT: 035a7814
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


uint FUN_035a7814(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  
  if ((DAT_04833517 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u64__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhs_s32__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04833517 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                              );
    FUN_034efd20(uVar7,uVar8,0);
    uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubhn_high_s64__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar8);
  }
  plVar4 = (long *)thunk_FUN_01ecaf38(param_2,0);
  puVar9 = Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar1 = *(byte *)(*(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__ + 0x130);
  if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__)) {
LAB_035a7940:
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(plVar4);
  }
  uVar5 = (**(code **)(*plVar4 + 0x5c8))(plVar4,*(undefined8 *)(*plVar4 + 0x5d0));
  if ((uVar5 & 1) == 0) {
    lVar10 = *(long *)puVar9;
LAB_035a794c:
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar10);
      lVar10 = *(long *)puVar9;
    }
    puVar2 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
    if (*(long **)(*(long *)(lVar10 + 0xb8) + 0x18) == plVar4) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0359e844(param_1);
      uVar3 = FUN_023e6720(uVar7,param_2,
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhs_s32__);
LAB_035a7a44:
      return ~uVar3 >> 0x1f;
    }
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_0358256c(plVar4,0);
    if ((uVar5 & 1) == 0) {
      lVar10 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqsubd_u64__);
      if (**(char **)(lVar10 + 0xb8) == '\0') {
        uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_s64__);
        uVar7 = FUN_035ac8e0(uVar7,0);
        thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
        uVar8 = thunk_FUN_01f117cc();
        FUN_0356adc8(uVar8,uVar7,0);
        goto LAB_035a7d14;
      }
      uVar7 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar7 = FUN_01f08890(uVar7,2);
      FUN_01bc50c0(plVar4);
      uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      FUN_01bc50c0(uVar7);
      FUN_01bc56ec(uVar7,uVar8);
      FUN_01bc5408(uVar7,0,uVar8);
      uVar8 = (**(code **)(*param_1 + 0x8d8))(param_1,*(undefined8 *)(*param_1 + 0x8e0));
      FUN_01bc50c0(uVar7);
      FUN_01bc56ec(uVar7,uVar8);
      FUN_01bc5408(uVar7,1,uVar8);
      puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u16__;
      goto LAB_035a7ce0;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar6 = (long *)FUN_01f29ad4(param_1);
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar9);
    }
    puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u64__;
    if (plVar6 == plVar4) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0359e718(param_1);
      uVar8 = FUN_0359d2e0(param_2);
      uVar3 = FUN_02281020(uVar7,uVar8,*(undefined8 *)puVar9);
      goto LAB_035a7a44;
    }
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    uVar7 = FUN_01f08890(uVar7,2);
    FUN_01bc50c0(plVar4);
    uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    FUN_01bc50c0(uVar7);
    FUN_01bc56ec(uVar7,uVar8);
    FUN_01bc5408(uVar7,0,uVar8);
    FUN_01bc50c0(plVar6);
    uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    FUN_01bc50c0(uVar7);
    FUN_01bc56ec(uVar7,uVar8);
    FUN_01bc5408(uVar7,1,uVar8);
    uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u16__);
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x8c8))(plVar4,param_1,*(undefined8 *)(*plVar4 + 0x8d0));
    if ((uVar5 & 1) != 0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x8d8))(plVar4,*(undefined8 *)(*plVar4 + 0x8e0));
      lVar10 = *(long *)puVar9;
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
            lVar10)) goto LAB_035a7940;
      }
      goto LAB_035a794c;
    }
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    uVar7 = FUN_01f08890(uVar7,2);
    FUN_01bc50c0(plVar4);
    uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    FUN_01bc50c0(uVar7);
    FUN_01bc56ec(uVar7,uVar8);
    FUN_01bc5408(uVar7,0,uVar8);
    uVar8 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    FUN_01bc50c0(uVar7);
    FUN_01bc56ec(uVar7,uVar8);
    FUN_01bc5408(uVar7,1,uVar8);
    puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u32__;
LAB_035a7ce0:
    uVar8 = thunk_FUN_01efb3a4(puVar9);
  }
  uVar7 = FUN_035ae81c(uVar8,uVar7,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar8 = thunk_FUN_01f117cc();
  FUN_034f6754(uVar8,uVar7,0);
LAB_035a7d14:
  uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubhn_high_s64__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar7);
}


