/*
FUNCTION_NAME: FUN_035a7d2c
ENTRY_POINT: 035a7d2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


undefined8 FUN_035a7d2c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_04833518 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u64__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04833518 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                              );
    FUN_034efd20(uVar6,uVar7,0);
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubhn_s16__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar7);
  }
  plVar4 = (long *)thunk_FUN_01ecaf38(param_2,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x5c8))(plVar4,*(undefined8 *)(*plVar4 + 0x5d0));
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_0358256c(plVar4,0);
      if ((uVar5 & 1) == 0) {
        uVar6 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u8__);
        uVar6 = FUN_035ac8e0(uVar6,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar7 = thunk_FUN_01f117cc();
        uVar9 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                                  );
        FUN_034efd98(uVar7,uVar6,uVar9,0);
        uVar6 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubhn_s16__);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,uVar6);
      }
    }
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u64__;
    puVar1 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_0359e718(param_1);
    uVar7 = FUN_0359d2e0(param_2);
    uVar3 = FUN_02281020(uVar6,uVar7,*(undefined8 *)puVar2);
    if ((int)uVar3 < 0) {
      uVar6 = 0;
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = FUN_0359e844(param_1);
      if (lVar8 == 0) goto LAB_035a7e60;
      if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar6 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8 + 0x20);
    }
    return uVar6;
  }
LAB_035a7e60:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


