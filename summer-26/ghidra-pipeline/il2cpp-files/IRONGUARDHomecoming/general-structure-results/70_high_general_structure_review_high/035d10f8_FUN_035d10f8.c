/*
FUNCTION_NAME: FUN_035d10f8
ENTRY_POINT: 035d10f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x035d14ac) */
/* WARNING: Removing unreachable block (ram,0x035d14b4) */

byte FUN_035d10f8(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  int local_74;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_44 [4];
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  if ((DAT_048336cd & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__)
    ;
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_ProxyElement__ctor__);
    thunk_FUN_01efb3a4(Method_DebugUISample_<Start>b__2_2__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<ChallengeList>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<DestinationList>_OnComplete__);
    DAT_048336cd = 1;
  }
  local_44[0] = '\0';
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_70 = 0;
  FUN_035d1618(param_1);
  puVar2 = Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__;
  if (param_2 < -1) {
    local_74 = param_2;
    uVar13 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               );
    uVar13 = thunk_FUN_01f113fc(uVar13,&local_74);
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_ProxyElement__ctor__);
    FUN_01bc4c70();
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass41_0_<DOPunchCharRotation>b__0__
                      );
    uVar9 = FUN_035d10e4();
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar10 = thunk_FUN_01f117cc();
    uVar11 = thunk_FUN_01efb3a4(
                               Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass41_0_<DOPunchCharRotation>b__1__
                               );
    FUN_034f48f0(uVar10,uVar11,uVar13,uVar9,0);
    uVar13 = thunk_FUN_01efb3a4(
                               Method_DG_Tweening_DOTweenTMPAnimator_<>c__DisplayClass43_0_<DOPunchCharScale>b__0__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar10,uVar13);
  }
  if (*(int *)(*(long *)Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_035cd7fc(&uStack_38);
  if (param_2 == 0) {
    iVar12 = *(int *)(param_1 + 0x10);
    thunk_FUN_01f3e6f0();
    uVar5 = 0;
    if (iVar12 != 0) goto LAB_035d11dc;
  }
  else {
    if (param_2 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = thunk_FUN_01f0a328(0);
    }
LAB_035d11dc:
    puVar3 = Method_System_Net_Configuration_ProxyElement__ctor__;
    local_44[0] = '\0';
    lVar7 = *(long *)Method_System_Net_Configuration_ProxyElement__ctor__;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar7 = *(long *)puVar3;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    puVar2 = Method_DebugUISample_<Start>b__2_2__;
    FUN_035cd1ec(&local_60,&uStack_38,uVar13,param_1);
    local_68[0] = 0;
    while (iVar12 = *(int *)(param_1 + 0x10), thunk_FUN_01f3e6f0(), iVar12 == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_035cee7c(local_68);
      if ((uVar8 & 1) != 0) break;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_035ced7c(local_68);
    }
    FUN_035ce230(*(undefined8 *)(param_1 + 0x20),local_44);
    if (local_44[0] != '\0') {
      iVar12 = *(int *)(param_1 + 0x18);
      thunk_FUN_01f3e6f0();
      thunk_FUN_01f3e6f0();
      *(int *)(param_1 + 0x18) = iVar12 + 1;
    }
    if (*(long *)(param_1 + 0x30) == 0) {
      iVar12 = *(int *)(param_1 + 0x10);
      thunk_FUN_01f3e6f0();
      if (iVar12 != 0) {
        uVar6 = 0;
LAB_035d1304:
        iVar12 = *(int *)(param_1 + 0x10);
        thunk_FUN_01f3e6f0();
        if (0 < iVar12) {
          iVar12 = *(int *)(param_1 + 0x10);
          thunk_FUN_01f3e6f0();
          thunk_FUN_01f3e6f0();
          uVar6 = 1;
          *(int *)(param_1 + 0x10) = iVar12 + -1;
        }
        lVar7 = *(long *)(param_1 + 0x28);
        thunk_FUN_01f3e6f0();
        if ((lVar7 != 0) && (iVar12 = *(int *)(param_1 + 0x10), thunk_FUN_01f3e6f0(), iVar12 == 0))
        {
          lVar7 = *(long *)(param_1 + 0x28);
          thunk_FUN_01f3e6f0();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_035d1a84(lVar7);
        }
        bVar4 = uVar6 != 0;
        lVar7 = 0;
        goto LAB_035d1370;
      }
      if (param_2 != 0) {
        uVar6 = FUN_035d19b8(param_1,param_2,uVar5,param_3);
        uVar6 = uVar6 & 1;
        goto LAB_035d1304;
      }
      lVar7 = 0;
      bVar4 = false;
      iVar12 = 0xf;
    }
    else {
      lVar7 = FUN_035d1694(param_1,param_2,param_3);
      bVar4 = false;
LAB_035d1370:
      iVar12 = 0xc;
    }
    if (local_44[0] != '\0') {
      iVar1 = *(int *)(param_1 + 0x18);
      thunk_FUN_01f3e6f0();
      thunk_FUN_01f3e6f0();
      *(int *)(param_1 + 0x18) = iVar1 + -1;
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                (*(undefined8 *)(param_1 + 0x20));
    }
    FUN_035cf318(&local_60);
    if ((iVar12 == 0xc) || (iVar12 == 0)) {
      if (lVar7 != 0) {
        local_70 = FUN_0277b10c(lVar7,*(undefined8 *)
                                       Method_Oculus_Platform_Request<DestinationList>_OnComplete__)
        ;
        bVar4 = FUN_02774f5c(&local_70,
                             *(undefined8 *)Method_Oculus_Platform_Request<ChallengeList>__ctor__);
      }
      goto LAB_035d13ec;
    }
  }
  bVar4 = 0;
LAB_035d13ec:
  return bVar4 & 1;
}


