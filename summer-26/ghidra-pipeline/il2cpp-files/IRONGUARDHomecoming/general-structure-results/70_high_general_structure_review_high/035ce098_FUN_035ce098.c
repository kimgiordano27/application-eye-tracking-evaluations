/*
FUNCTION_NAME: FUN_035ce098
ENTRY_POINT: 035ce098
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_035ce098(undefined8 param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_24;
  
  FUN_035ac8e8(param_1,0);
  if (param_3 < 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass36_0_<DOFade>b__0__
                              );
    FUN_034f7db4(uVar1,uVar2,0);
    uVar2 = thunk_FUN_01efb3a4(
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass36_0_<DOFade>b__1__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar1,uVar2);
  }
  if (param_3 < 0x800) {
    FUN_035cdfe8(param_1,param_2 & 1,param_3);
    return;
  }
  local_24 = 0x7ff;
  uVar1 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar1 = thunk_FUN_01f113fc(uVar1,&local_24);
  uVar2 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass37_0_<DOText>b__0__
                            );
  uVar1 = FUN_03406290(uVar2,uVar1,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar2 = thunk_FUN_01f117cc();
  uVar3 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass36_0_<DOFade>b__0__
                            );
  FUN_034f3578(uVar2,uVar3,uVar1,0);
  uVar1 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass36_0_<DOFade>b__1__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar1);
}


