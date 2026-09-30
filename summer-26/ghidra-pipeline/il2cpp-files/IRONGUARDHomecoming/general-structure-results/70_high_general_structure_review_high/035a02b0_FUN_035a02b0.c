/*
FUNCTION_NAME: FUN_035a02b0
ENTRY_POINT: 035a02b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_035a02b0(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_048334c2 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    DAT_048334c2 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_6__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_0356d270(uVar4,0);
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshrq_n_s32__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar5);
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  iVar1 = FUN_01f29928(param_1,param_2);
  if (iVar1 < 2) {
    return;
  }
  if (iVar1 == 2) {
    plVar2 = (long *)thunk_FUN_01ecaf38(param_1,0);
    FUN_01bc50c0(param_2);
    plVar3 = (long *)thunk_FUN_01ecaf38(param_2,0);
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    uVar4 = FUN_01f08890(uVar4,2);
    FUN_01bc50c0(plVar3);
    uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    FUN_01bc50c0(uVar4);
    FUN_01bc56ec(uVar4,uVar5);
    FUN_01bc5408(uVar4,0,uVar5);
    FUN_01bc50c0(plVar2);
    uVar5 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    FUN_01bc50c0(uVar4);
    FUN_01bc56ec(uVar4,uVar5);
    FUN_01bc5408(uVar4,1,uVar5);
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u32__);
    uVar5 = FUN_035ae81c(uVar5,uVar4,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar4,uVar5,0);
  }
  else {
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_s64__);
    uVar5 = FUN_035ac8e0(uVar4,0);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_0356adc8(uVar4,uVar5,0);
  }
  uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshrq_n_s32__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


