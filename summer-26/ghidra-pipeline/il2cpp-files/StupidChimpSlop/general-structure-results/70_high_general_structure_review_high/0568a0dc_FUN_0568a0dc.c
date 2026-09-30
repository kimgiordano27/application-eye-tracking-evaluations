/*
FUNCTION_NAME: FUN_0568a0dc
ENTRY_POINT: 0568a0dc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void FUN_0568a0dc(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_06a5489a & 1) == 0) {
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<Nullable<float>>_AwaitUnsafeOnCompleted<UniTask_Awaiter,_Sum_<SumAsync>d__28>__
                );
    FUN_02d4dc40(PlayFab_AddonModels_DeleteGoogleRequest_var);
    FUN_02d4dc40(Method_UnityEngine_UIElements_BaseField<Bounds>_get_showMixedValue__);
    FUN_02d4dc40(Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__);
                    /* try { // try from 0568a130 to 0578a157 has its CatchHandler @ 0568a684 */
    DAT_06a5489a = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__;
  local_40 = 0;
  local_38 = 0;
  local_48 = 0;
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    bVar1 = *(byte *)(*(long *)PlayFab_AddonModels_DeleteGoogleRequest_var + 0x130);
    if ((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)PlayFab_AddonModels_DeleteGoogleRequest_var)) {
      uVar3 = (**(code **)(lVar8 + 0x348))(param_2,*(undefined8 *)(lVar8 + 0x350));
                    /* try { // try from 0568a194 to 0578a1bf has its CatchHandler @ 0568a678 */
      uVar4 = thunk_FUN_04e7e884(uVar3,*(undefined8 *)puVar2,0);
      if ((uVar4 & 1) != 0) {
        uVar3 = (**(code **)(*param_2 + 0x378))(param_2,*(undefined8 *)(*param_2 + 0x380));
        uVar4 = thunk_FUN_04e7e884(uVar3,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseField<Bounds>_get_showMixedValue__
                                   ,0);
        if ((uVar4 & 1) != 0) {
          uVar3 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
          if (*(int *)(*(long *)
                        Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<Nullable<float>>_AwaitUnsafeOnCompleted<UniTask_Awaiter,_Sum_<SumAsync>d__28>__
                      + 0xe4) == 0) {
                    /* try { // try from 0568a1f4 to 0578a1ff has its CatchHandler @ 0568a600 */
            thunk_FUN_02dabd98(*(long *)
                                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<Nullable<float>>_AwaitUnsafeOnCompleted<UniTask_Awaiter,_Sum_<SumAsync>d__28>__
                              );
          }
                    /* try { // try from 0568a204 to 0578a213 has its CatchHandler @ 0568a60c */
          FUN_0567155c(uVar3,&local_40,&local_38,&local_48,0);
                    /* try { // try from 0568a214 to 0578a22b has its CatchHandler @ 0568a608 */
          uVar3 = FUN_04e723e0(local_40,local_48,0);
          uVar3 = FUN_056876c4(param_1,uVar3,local_38);
                    /* try { // try from 0568a234 to 0578a237 has its CatchHandler @ 0568a624 */
                    /* try { // try from 0568a238 to 0578a3a3 has its CatchHandler @ 05688d50 */
          uVar5 = (**(code **)(*param_2 + 0x358))(param_2,*(undefined8 *)(*param_2 + 0x360));
          uVar6 = (**(code **)(*param_2 + 0x378))(param_2,*(undefined8 *)(*param_2 + 0x380));
          uVar7 = (**(code **)(*param_2 + 0x348))(param_2,*(undefined8 *)(*param_2 + 0x350));
          FUN_056879dc(param_1,uVar5,uVar6,uVar7,uVar3);
          return;
        }
      }
      uVar3 = (**(code **)(*param_2 + 0x358))(param_2,*(undefined8 *)(*param_2 + 0x360));
      uVar5 = (**(code **)(*param_2 + 0x378))(param_2,*(undefined8 *)(*param_2 + 0x380));
      uVar6 = (**(code **)(*param_2 + 0x348))(param_2,*(undefined8 *)(*param_2 + 0x350));
      uVar7 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
      FUN_056879dc(param_1,uVar3,uVar5,uVar6,uVar7);
      return;
    }
  }
  thunk_FUN_02db45e8(PTR_DAT_066463b8);
  uVar3 = thunk_FUN_02d8a638();
  uVar5 = thunk_FUN_02db45e8(Method_UnityEngine_UIElements_BaseField<Vector2>_get_rawValue__);
  FUN_05002ed0(uVar3,uVar5,0);
  uVar5 = thunk_FUN_02db45e8(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar3,uVar5);
}


