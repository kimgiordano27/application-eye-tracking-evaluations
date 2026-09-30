/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.Body$$add_WhenBodyUpdated
ENTRY_POINT: 035d16e4
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

undefined8 Oculus_Interaction_Body_Input_Body__add_WhenBodyUpdated(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 uVar6;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long lVar7;
  undefined8 uVar8;
  undefined4 in_stack_00000008;
  char cStack000000000000000c;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x830));
  *(undefined1 *)(unaff_x19 + 0x6cf) = 1;
  cStack000000000000000c = 0;
  FUN_035d1618();
  puVar2 = Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__;
  if (unaff_w22 < -1) {
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar6 = thunk_FUN_01f113fc(uVar6,&stack0x00000008);
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
  if ((unaff_x21 != 0) && (iVar1 = *(int *)(unaff_x21 + 0x20), thunk_FUN_01f3e6f0(), 1 < iVar1)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_0241ffa8();
    return uVar6;
                    /* try { // try from 035d176c to 036d176f has its CatchHandler @ 035d17d4 */
  }
                    /* try { // try from 035d1770 to 036d1777 has its CatchHandler @ 035d17e0 */
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  cStack000000000000000c = '\0';
  FUN_035ce230(uVar6,&stack0x0000000c);
  iVar1 = *(int *)(unaff_x20 + 0x10);
  thunk_FUN_01f3e6f0();
  puVar3 = Method_System_Net_Configuration_ProxyElement__ctor__;
  if (iVar1 < 1) {
    if (unaff_w22 == 0) {
      lVar7 = *(long *)Method_System_Net_Configuration_ProxyElement__ctor__;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)puVar3;
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    }
    else {
      uVar8 = FUN_035d1aec();
      if (unaff_w22 == -1) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (unaff_x21 == 0) goto LAB_035d1874;
      }
      uVar8 = FUN_035d1b9c();
    }
  }
  else {
    iVar1 = *(int *)(unaff_x20 + 0x10);
    thunk_FUN_01f3e6f0();
    thunk_FUN_01f3e6f0();
    lVar7 = *(long *)(unaff_x20 + 0x28);
    *(int *)(unaff_x20 + 0x10) = iVar1 + -1;
    thunk_FUN_01f3e6f0();
    if ((lVar7 != 0) && (iVar1 = *(int *)(unaff_x20 + 0x10), thunk_FUN_01f3e6f0(), iVar1 == 0)) {
      lVar7 = *(long *)(unaff_x20 + 0x28);
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
  if (cStack000000000000000c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar6);
  }
  return uVar8;
}


