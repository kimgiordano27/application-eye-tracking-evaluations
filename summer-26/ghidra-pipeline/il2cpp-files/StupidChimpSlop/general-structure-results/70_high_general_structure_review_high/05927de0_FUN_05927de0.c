/*
FUNCTION_NAME: FUN_05927de0
ENTRY_POINT: 05927de0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


void FUN_05927de0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_DAT_066462d0;
  if ((DAT_06a5621d & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_066462d0);
    DAT_06a5621d = 1;
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar1 = FUN_05ee2f7c(param_2,0,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_04e7faf0(param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_04e7faf0(param_4,0);
      if ((uVar1 & 1) == 0) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar2 = FUN_059150ec(param_2,param_3,0,0);
        if (lVar2 == 0) {
          uVar3 = thunk_FUN_02db45e8(
                                    Method_Cysharp_Threading_Tasks_TaskPool<UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource>_TryPush__
                                    );
          uVar3 = FUN_04e80fdc(uVar3,param_3,param_2,0);
          thunk_FUN_02db45e8(PTR_DAT_06649f68);
          uVar4 = thunk_FUN_02d8a638();
          puVar6 = Method_Cysharp_Threading_Tasks_TaskPool<UniTask_YieldPromise>_TryPush__;
        }
        else {
          lVar2 = Unity_Mathematics_math__transpose(lVar2,param_4,0,0);
          if (lVar2 != 0) {
            FUN_05927c5c(param_1,param_2,lVar2);
            return;
          }
          uVar3 = thunk_FUN_02db45e8(
                                    Method_Cysharp_Threading_Tasks_TaskPool<UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource>_get_Size__
                                    );
          uVar3 = FUN_04e81020(uVar3,param_4,param_3,param_2,0);
          thunk_FUN_02db45e8(PTR_DAT_06649f68);
          uVar4 = thunk_FUN_02d8a638();
          puVar6 = Method_Cysharp_Threading_Tasks_TaskPool<UniTask_YieldPromise>_get_Size__;
        }
        uVar5 = thunk_FUN_02db45e8(puVar6);
        FUN_04f68234(uVar4,uVar3,uVar5,0);
        uVar3 = thunk_FUN_02db45e8(
                                  Method_Cysharp_Threading_Tasks_TaskPool<UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource>_TryPop__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar4,uVar3);
      }
      thunk_FUN_02db45e8(PTR_DAT_0664a210);
      uVar3 = thunk_FUN_02d8a638();
      puVar6 = Method_Cysharp_Threading_Tasks_TaskPool<UniTask_YieldPromise>_get_Size__;
    }
    else {
      thunk_FUN_02db45e8(PTR_DAT_0664a210);
      uVar3 = thunk_FUN_02d8a638();
      puVar6 = Method_Cysharp_Threading_Tasks_TaskPool<UniTask_YieldPromise>_TryPush__;
    }
  }
  else {
    thunk_FUN_02db45e8(PTR_DAT_0664a210);
    uVar3 = thunk_FUN_02d8a638();
    puVar6 = PTR_DAT_0664ad68;
  }
  uVar4 = thunk_FUN_02db45e8(puVar6);
  FUN_04f681bc(uVar3,uVar4,0);
  uVar4 = thunk_FUN_02db45e8(
                            Method_Cysharp_Threading_Tasks_TaskPool<UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource>_TryPop__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar3,uVar4);
}


