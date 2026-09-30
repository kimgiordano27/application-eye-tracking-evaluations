/*
FUNCTION_NAME: FUN_050af698
ENTRY_POINT: 050af698
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_050af698(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_68 = param_1;
  if ((DAT_066cd6de & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06323518);
    FUN_02b3c81c(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
    FUN_02b3c81c(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo);
    FUN_02b3c81c(RootMotion_FinalIK_OffsetPose_EffectorLink___TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeGroup___TypeInfo);
    FUN_02b3c81c(MS_Internal_Xml_XPath_Operator_Op___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06323540);
    FUN_02b3c81c(PTR_DAT_06323548);
    FUN_02b3c81c(PTR_DAT_06321548);
    FUN_02b3c81c(PTR_DAT_06320b10);
    DAT_066cd6de = 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x20);
  plStack_b8 = &local_68;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4(0);
      }
      uVar4 = FUN_0317392c(lVar8,param_1 + 0x28,
                           *(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
      if ((uVar4 & 1) != 0) {
        local_d0 = 0;
        uStack_c8 = 0;
        FUN_03a1fa14(&local_d0,2,3,1,*(undefined8 *)PTR_DAT_06321548);
        *(undefined8 *)(local_68 + 0x60) = uStack_c8;
        *(undefined8 *)(local_68 + 0x58) = local_d0;
        *(undefined4 *)(local_68 + 0x10) = 0xfffffffd;
        if (*(long *)(local_68 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        local_60 = *(undefined8 *)(*(long *)(local_68 + 0x28) + 0x20);
        uStack_50 = uStack_c8;
        uStack_58 = local_d0;
        auVar9 = FUN_031e43f4(&local_60,0,0,
                              *(undefined8 *)RootMotion_FinalIK_OffsetPose_EffectorLink___TypeInfo);
        *(undefined1 (*) [16])(local_68 + 0x68) = auVar9;
        goto LAB_050af840;
      }
    }
    else {
      if (iVar3 != 1) {
        return 0;
      }
      auVar9 = *(undefined1 (*) [16])(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
LAB_050af840:
      uVar4 = FUN_050af29c(auVar9._0_8_,auVar9._8_8_);
      if ((uVar4 & 1) == 0) {
        *(undefined8 *)(local_68 + 0x18) = 0;
        thunk_FUN_02bb0e9c((undefined8 *)(local_68 + 0x18),0);
        *(undefined4 *)(local_68 + 0x10) = 1;
        return 1;
      }
      iVar3 = **(int **)(local_68 + 0x58);
      iVar2 = (*(int **)(local_68 + 0x58))[1];
      *(undefined8 *)(local_68 + 0x68) = 0;
      *(undefined8 *)(local_68 + 0x70) = 0;
      FUN_050afc3c();
      *(undefined8 *)(local_68 + 0x58) = 0;
      *(undefined8 *)(local_68 + 0x60) = 0;
      if (iVar3 != -1) {
        FUN_03a80e58(&local_78,iVar3,4,1,*(undefined8 *)PTR_DAT_06320b10);
        FUN_03a1fa14(&local_88,iVar2 * 3,4,1,*(undefined8 *)PTR_DAT_06321548);
        auVar9 = FUN_05c64c70(1,0);
        *(undefined1 (*) [16])(local_68 + 0x30) = auVar9;
        if (*(long *)(local_68 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        local_60 = *(undefined8 *)(*(long *)(local_68 + 0x28) + 0x20);
        uStack_50 = uStack_70;
        uStack_58 = local_78;
        uStack_40 = uStack_80;
        local_48 = local_88;
        auVar9 = FUN_031e447c(&local_60,0,0,
                              *(undefined8 *)
                               UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeGroup___TypeInfo
                             );
        uStack_a8 = uStack_70;
        local_b0 = local_78;
        uStack_98 = uStack_80;
        uStack_a0 = local_88;
        uStack_40 = FUN_05c6730c(local_68 + 0x30,0,0);
        uStack_58 = uStack_a8;
        local_60 = local_b0;
        local_48 = uStack_98;
        uStack_50 = uStack_a0;
        auVar9 = FUN_031e4504(&local_60,auVar9._0_8_,auVar9._8_8_,
                              *(undefined8 *)MS_Internal_Xml_XPath_Operator_Op___TypeInfo);
        auVar10 = FUN_03a8123c(&local_78,auVar9._0_8_,auVar9._8_8_,*(undefined8 *)PTR_DAT_06323540);
        auVar9 = FUN_03a1fdbc(&local_88,auVar9._0_8_,auVar9._8_8_,*(undefined8 *)PTR_DAT_06323548);
        auVar9 = FUN_05c35308(auVar10._0_8_,auVar10._8_8_,auVar9._0_8_,auVar9._8_8_,0);
        *(undefined1 (*) [16])(local_68 + 0x40) = auVar9;
        goto LAB_050af9c8;
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
RootMotion_FinalIK_IKSolverFABRIK__OnInitiate:
    uVar6 = 0;
    *(undefined1 *)(lVar8 + 0x20) = 1;
  }
  else {
    if (iVar3 == 2) {
      auVar9 = *(undefined1 (*) [16])(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_050af9c8:
      uVar4 = FUN_050af29c(auVar9._0_8_,auVar9._8_8_);
      if ((uVar4 & 1) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05c64dbc(*(undefined8 *)(local_68 + 0x30),*(undefined8 *)(local_68 + 0x38),
                     *(undefined8 *)(lVar8 + 0x28),0,0);
        if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05c66924(*(long *)(lVar8 + 0x28),0);
        if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05c66864(*(long *)(lVar8 + 0x28),0);
        uVar4 = FUN_0317392c(lVar8,local_68 + 0x50,*(undefined8 *)PTR_DAT_06323518);
        if ((uVar4 & 1) == 0) goto RootMotion_FinalIK_IKSolverFABRIK__OnInitiate;
        if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar4 = FUN_05c91f88(*(long *)(lVar8 + 0x28),0);
        if (*(long *)(local_68 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar5 = FUN_05d197e4(*(long *)(local_68 + 0x50),0);
        uVar1 = 0x100000000;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        auVar9 = FUN_031e4374(uVar1 | uVar4 & 0xffffffff,0,0,
                              *(undefined8 *)
                               OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo);
        *(undefined1 (*) [16])(local_68 + 0x68) = auVar9;
        goto LAB_050afa88;
      }
      *(undefined8 *)(local_68 + 0x18) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(local_68 + 0x18),0);
      uVar7 = 2;
    }
    else {
      if (iVar3 != 3) {
        return 0;
      }
      auVar9 = *(undefined1 (*) [16])(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_050afa88:
      uVar4 = FUN_050af29c(auVar9._0_8_,auVar9._8_8_);
      if ((uVar4 & 1) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(long *)(local_68 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05d196ec(*(long *)(local_68 + 0x50),*(undefined8 *)(lVar8 + 0x28),0);
        *(undefined8 *)(local_68 + 0x68) = 0;
        *(undefined8 *)(local_68 + 0x70) = 0;
        goto RootMotion_FinalIK_IKSolverFABRIK__OnInitiate;
      }
      *(undefined8 *)(local_68 + 0x18) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(local_68 + 0x18),0);
      uVar7 = 3;
    }
    *(undefined4 *)(local_68 + 0x10) = uVar7;
    uVar6 = 1;
  }
  return uVar6;
}


