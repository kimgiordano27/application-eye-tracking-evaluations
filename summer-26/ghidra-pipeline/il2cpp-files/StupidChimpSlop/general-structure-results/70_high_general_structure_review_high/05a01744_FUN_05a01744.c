/*
FUNCTION_NAME: FUN_05a01744
ENTRY_POINT: 05a01744
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void FUN_05a01744(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_38;
  undefined8 local_28;
  
  puVar1 = Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<ulong>__;
  local_28 = param_3;
  if ((DAT_06a569d7 & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<ulong>__);
    FUN_02d4dc40(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_get_Capacity__);
    FUN_02d4dc40(PTR_DAT_0664ae80);
    DAT_06a569d7 = 1;
  }
  uVar2 = FUN_0327c770(&local_28,*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_02db45e8(PTR_DAT_0664c2b0);
    uVar3 = thunk_FUN_02d8a638();
    FUN_05005520(uVar3,0);
    uVar5 = thunk_FUN_02db45e8(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar3,uVar5);
  }
  uVar2 = FUN_0327c808(&local_28,
                       *(undefined8 *)
                        Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_get_Capacity__);
  if ((uVar2 & 1) == 0) {
    local_38 = local_28;
    uVar3 = thunk_FUN_02db45e8(
                              Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_00000346_PostfixBurstDelegate>__
                              );
    uVar3 = thunk_FUN_02d8a270(uVar3,&local_38);
    uVar5 = thunk_FUN_02db45e8(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                              );
    uVar3 = FUN_04e762a8(uVar5,uVar3,0);
    thunk_FUN_02db45e8(PTR_DAT_06649f68);
    uVar5 = thunk_FUN_02d8a638();
    uVar6 = thunk_FUN_02db45e8(PTR_DAT_0664aee0);
    FUN_04f68234(uVar5,uVar3,uVar6,0);
    uVar3 = thunk_FUN_02db45e8(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar5,uVar3);
  }
  uVar3 = FUN_059f5f74(local_28,0);
  lVar4 = FUN_059fa75c(uVar3,0);
  if ((param_2 != 0) && (*(long *)(param_2 + 0x78) != 0)) {
    uVar2 = *(ulong *)(*(long *)(param_2 + 0x78) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_0664ae80 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_059ef8c4(&local_28,0);
    FUN_05a018fc(param_1,param_2,lVar4 - (uVar2 >> 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


