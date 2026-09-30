/*
FUNCTION_NAME: FUN_059f60ac
ENTRY_POINT: 059f60ac
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined4 FUN_059f60ac(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  puVar1 = Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<ulong>__;
  if ((DAT_06a56963 & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<ulong>__);
    DAT_06a56963 = 1;
  }
  local_28 = 0;
  uVar2 = FUN_0327c770(param_1,*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_059f3b4c();
    if (lVar3 != 0) {
      return *(undefined4 *)(lVar3 + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  local_28 = *param_1;
  uVar4 = FUN_059f5dd0(&local_28);
  uVar5 = thunk_FUN_02db45e8(
                            Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveVisualController_ComputeFallBackLine_00000D27_PostfixBurstDelegate>__
                            );
  uVar4 = FUN_04e723e0(uVar5,uVar4,0);
  thunk_FUN_02db45e8(PTR_DAT_066463b8);
  uVar5 = thunk_FUN_02d8a638();
  FUN_05002ed0(uVar5,uVar4,0);
  uVar4 = thunk_FUN_02db45e8(
                            Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24_PostfixBurstDelegate>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar5,uVar4);
}


