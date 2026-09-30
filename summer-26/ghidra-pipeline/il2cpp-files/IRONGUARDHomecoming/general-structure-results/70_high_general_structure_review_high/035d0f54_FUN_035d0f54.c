/*
FUNCTION_NAME: FUN_035d0f54
ENTRY_POINT: 035d0f54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_035d0f54(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_28;
  int local_24;
  undefined *puVar5;
  
  if ((DAT_048336cc & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__);
    DAT_048336cc = 1;
  }
  FUN_035ac8e8(param_1,0);
  puVar5 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__;
  if ((param_2 < 0) || (param_3 < param_2)) {
    local_24 = param_2;
    uVar1 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar1 = thunk_FUN_01f113fc(uVar1,&local_24);
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_ProxyElement__ctor__);
    FUN_01bc4c70();
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass37_0_<DORotateChar>b__1__
                      );
    uVar2 = FUN_035d10e4();
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar3 = thunk_FUN_01f117cc();
    puVar5 = Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass39_0_<DOScaleChar>b__0__;
  }
  else {
    if (0 < param_3) {
      *(int *)(param_1 + 0x14) = param_3;
      uVar1 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
      FUN_035ac8e8(uVar1,0);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x20),uVar1);
      thunk_FUN_01f3e6f0();
      *(int *)(param_1 + 0x10) = param_2;
      return;
    }
    local_28 = param_3;
    uVar1 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar1 = thunk_FUN_01f113fc(uVar1,&local_28);
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_ProxyElement__ctor__);
    FUN_01bc4c70();
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass39_0_<DOScaleChar>b__1__
                      );
    uVar2 = FUN_035d10e4();
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar3 = thunk_FUN_01f117cc();
    puVar5 = Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass40_0_<DOPunchCharOffset>b__0__;
  }
  uVar4 = thunk_FUN_01efb3a4(puVar5);
  FUN_034f48f0(uVar3,uVar4,uVar1,uVar2,0);
  uVar1 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass40_0_<DOPunchCharOffset>b__1__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar1);
}


