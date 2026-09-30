/*
FUNCTION_NAME: FUN_035d1694
ENTRY_POINT: 035d1694
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x035d1930) */

undefined8 FUN_035d1694(long param_1,int param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int local_38;
  char local_34 [4];
  
  if ((DAT_048336cf & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__)
    ;
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_ProxyElement__ctor__);
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass45_0_<DOShakeCharOffset>b__1__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__
                      );
    DAT_048336cf = 1;
  }
  local_34[0] = '\0';
  FUN_035d1618(param_1);
  puVar2 = Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__;
  if (param_2 < -1) {
    local_38 = param_2;
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar6 = thunk_FUN_01f113fc(uVar6,&local_38);
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_ProxyElement__ctor__);
    FUN_01bc4c70();
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass41_0_<DOPunchCharRotation>b__0__
                      );
    uVar8 = FUN_035d10e4();
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass41_0_<DOPunchCharRotation>b__1__
                              );
    FUN_034f48f0(uVar4,uVar5,uVar6,uVar8,0);
    uVar6 = thunk_FUN_01efb3a4(
                              Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass46_0_<DOShakeCharRotation>b__0__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar6);
  }
  if (*(int *)(*(long *)Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if ((param_3 != 0) && (iVar1 = *(int *)(param_3 + 0x20), thunk_FUN_01f3e6f0(), 1 < iVar1)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_0241ffa8(param_3,*(undefined8 *)
                                  Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass45_0_<DOShakeCharOffset>b__1__
                        );
    return uVar6;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  local_34[0] = '\0';
  FUN_035ce230(uVar6,local_34);
  iVar1 = *(int *)(param_1 + 0x10);
  thunk_FUN_01f3e6f0();
  puVar3 = Method_System_Net_Configuration_ProxyElement__ctor__;
  if (iVar1 < 1) {
    if (param_2 == 0) {
      lVar7 = *(long *)Method_System_Net_Configuration_ProxyElement__ctor__;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)puVar3;
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    }
    else {
      uVar8 = FUN_035d1aec(param_1);
      if (param_2 == -1) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (param_3 == 0) goto LAB_035d1874;
      }
      uVar8 = FUN_035d1b9c(param_1,uVar8,param_2,param_3);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    thunk_FUN_01f3e6f0();
    thunk_FUN_01f3e6f0();
    lVar7 = *(long *)(param_1 + 0x28);
    *(int *)(param_1 + 0x10) = iVar1 + -1;
    thunk_FUN_01f3e6f0();
    if ((lVar7 != 0) && (iVar1 = *(int *)(param_1 + 0x10), thunk_FUN_01f3e6f0(), iVar1 == 0)) {
      lVar7 = *(long *)(param_1 + 0x28);
      thunk_FUN_01f3e6f0();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_035d1a84(lVar7);
    }
    puVar2 = Method_System_Net_Configuration_ProxyElement__ctor__;
    lVar7 = *(long *)Method_System_Net_Configuration_ProxyElement__ctor__;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar7 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar7 + 0xb8);
  }
LAB_035d1874:
  if (local_34[0] != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar6);
  }
  return uVar8;
}


