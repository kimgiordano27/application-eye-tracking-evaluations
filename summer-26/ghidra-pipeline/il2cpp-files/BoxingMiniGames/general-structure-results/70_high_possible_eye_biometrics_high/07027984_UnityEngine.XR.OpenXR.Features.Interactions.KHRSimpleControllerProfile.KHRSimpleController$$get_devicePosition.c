/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.KHRSimpleControllerProfile.KHRSimpleController$$get_devicePosition
ENTRY_POINT: 07027984
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_OpenXR_Features_Interactions_KHRSimpleControllerProfile_KHRSimpleController__get_devicePosition
               (void)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int unaff_w20;
  int unaff_w22;
  long lVar17;
  int unaff_w23;
  int unaff_w24;
  byte unaff_w25;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  
  do {
    FUN_07029b78();
    while( true ) {
      if ((in_stack_000000a0._4_4_ == 1) && (FUN_07029260(), unaff_w22 != 0)) {
        FUN_07029620();
      }
      unaff_w22 = unaff_w22 + -1;
      if (unaff_w24 + unaff_w22 == 0) {
        iVar15 = (int)in_stack_00000058;
        if (iVar15 == 0) {
          if (*(char *)(in_stack_00000068 + 4) != '\0') {
            FUN_07029ac8();
          }
        }
        else if (iVar15 == 1) {
          FUN_07029894();
        }
        FUN_06fb9414();
        auVar2._8_8_ = in_stack_000000d0;
        auVar2._0_8_ = in_stack_000000c8;
        auVar19._8_8_ = in_stack_000000e8;
        auVar19._0_8_ = in_stack_000000e0;
        auVar18._8_8_ = in_stack_000000f8;
        auVar18._0_8_ = in_stack_000000f0;
        if ((in_stack_00000110 == 0) ||
           (_in_stack_000000f0 = auVar18, _in_stack_000000e0 = auVar19, _in_stack_000000c8 = auVar2,
           *(long *)(in_stack_00000110 + 0x1a0) == 0)) goto LAB_07028428;
        uVar13 = FUN_06e8636c(*(long *)(in_stack_00000110 + 0x1a0),0);
        if ((uVar13 & 1) != 0) {
          if (unaff_x26 == 0) goto LAB_07028428;
          lVar17 = *(long *)(unaff_x28 + 0x1e8);
          _in_stack_000000f0 = FUN_06fc3a48();
          _in_stack_000000e0 = FUN_06fc3b5c();
          if (lVar17 == 0) goto LAB_07028428;
          UnityEngine_Timeline_InfiniteRuntimeClip__set_enable(lVar17);
        }
        uVar13 = FUN_0701c358();
        if ((uVar13 & 1) == 0) {
          uVar14 = FUN_06fb938c();
          iVar9 = 0;
          iVar16 = 1;
          if (in_stack_000000a0._4_4_ == 2) {
            iVar16 = 2;
          }
          goto LAB_07027c90;
        }
        if (*(long *)(unaff_x28 + 0x2a0) == 0) goto LAB_07028428;
        *(undefined8 *)(*(long *)(unaff_x28 + 0x2a0) + 0x98) = *(undefined8 *)(unaff_x28 + 0x170);
        thunk_FUN_036b7ad0();
        lVar17 = *(long *)(unaff_x28 + 0x2a0);
        if (lVar17 == 0) goto LAB_07028428;
        uVar1 = *(undefined1 *)(unaff_x29 + 0x18);
        *(char *)(lVar17 + 0x17) = (char)unaff_w20;
        *(undefined1 *)(lVar17 + 0x15) = uVar1;
        *(byte *)(lVar17 + 0x16) = unaff_w25 & 1;
        FUN_0703dae8(lVar17,in_stack_00000090,0);
        if (*(long *)(unaff_x28 + 0x2a0) == 0) goto LAB_07028428;
        FUN_0703e1e0();
        auVar3._8_8_ = in_stack_000000d0;
        auVar3._0_8_ = in_stack_000000c8;
        if ((*(long *)(unaff_x28 + 0x2a0) == 0) || (_in_stack_000000c8 = auVar3, unaff_x26 == 0))
        goto LAB_07028428;
        FUN_06fc3e24();
        FUN_06fb9414();
        iVar9 = 0;
        iVar16 = 1;
        if (in_stack_000000a0._4_4_ == 3) {
          iVar16 = 2;
        }
        goto LAB_07027b44;
      }
      if (in_stack_000000a0._4_4_ == 1) {
        iVar15 = unaff_w23;
        if (unaff_w22 != 0) {
          iVar15 = unaff_w23 + 1;
        }
        FUN_07029620();
        FUN_06f5fea8(iVar15,0);
      }
      if (unaff_w20 != 0) break;
      if (*(long *)(unaff_x28 + 0x148) == 0) goto LAB_07028428;
      FUN_07054c88();
    }
  } while( true );
  while( true ) {
    lVar17 = in_stack_00000110;
    if (in_stack_000000a0._4_4_ == 2) {
      auVar18 = FUN_06fc3b5c(unaff_x26,0);
      uVar14 = FUN_07029260(auVar18._0_8_,unaff_x29,lVar17,auVar18._0_8_,auVar18._8_8_);
      if (iVar9 != 0) {
        uVar14 = FUN_07029620(uVar14,unaff_x29,in_stack_00000110,1);
      }
    }
    iVar9 = iVar9 + 1;
    if (iVar16 == iVar9) break;
LAB_07027c90:
    if (in_stack_000000a0._4_4_ == 2) {
      uVar12 = 1;
      if (iVar9 != 0) {
        uVar12 = 2;
      }
      FUN_07029620(uVar14,unaff_x29,in_stack_00000110,uVar12);
      FUN_06f5fea8(uVar12,0);
    }
    auVar6._8_8_ = in_stack_000000d0;
    auVar6._0_8_ = in_stack_000000c8;
    uVar14 = *(undefined8 *)(unaff_x28 + 0x138);
    if (*(char *)(unaff_x28 + 0x374) == '\0') {
      if (unaff_x26 == 0) goto LAB_07028428;
      lVar17 = *(long *)(unaff_x28 + 0x198);
      auVar18 = FUN_06fc3a48(unaff_x26,0);
      auVar19 = FUN_06fc3b5c(unaff_x26,0);
      FUN_06fc3dac(unaff_x26,0);
      FUN_06fc3de4(unaff_x26,0);
      if (lVar17 == 0) goto LAB_07028428;
      uVar14 = FUN_07056584(lVar17,unaff_x29,uVar14,auVar18._0_8_,auVar18._8_8_,auVar19._0_8_,
                            auVar19._8_8_);
      unaff_x28 = in_stack_00000088;
    }
    else {
      _in_stack_000000c8 = auVar6;
      if (unaff_x26 == 0) goto LAB_07028428;
      lVar17 = *(long *)(unaff_x28 + 0x1a0);
      auVar18 = FUN_06fc3a48(unaff_x26,0);
      auVar19 = FUN_06fc4038(unaff_x26,0);
      FUN_06fc3b5c(unaff_x26,0);
      FUN_06fc3dac(unaff_x26,0);
      FUN_06fc3de4(unaff_x26,0);
      if (lVar17 == 0) goto LAB_07028428;
      FUN_0705789c(lVar17,in_stack_00000060,uVar14,auVar18._0_8_,auVar18._8_8_,auVar19._0_8_,
                   auVar19._8_8_);
      uVar14 = FUN_07029d7c(unaff_x28,in_stack_00000060);
      unaff_x26 = in_stack_00000098;
      unaff_x29 = in_stack_00000060;
    }
  }
  goto LAB_07027fcc;
  while( true ) {
    FUN_0705ba68(lVar17);
    if (in_stack_000000a0._4_4_ == 3) {
      FUN_06fc3b5c(in_stack_00000098,0);
      FUN_07029260();
      if (iVar9 != 0) {
        FUN_07029620();
      }
    }
    iVar9 = iVar9 + 1;
    if (iVar16 == iVar9) break;
LAB_07027b44:
    if (in_stack_000000a0._4_4_ == 3) {
      uVar12 = 1;
      if (iVar9 != 0) {
        uVar12 = 2;
      }
      FUN_07029620();
      FUN_06f5fea8(uVar12,0);
    }
    lVar17 = *(long *)(in_stack_00000088 + 0x178);
    FUN_06fc3a48(in_stack_00000098,0);
    FUN_06fc3b5c(in_stack_00000098,0);
    if (lVar17 == 0) goto LAB_07028428;
  }
  if (iVar15 == 2) {
    FUN_07029894(in_stack_00000088);
  }
  else if (*(char *)(unaff_x29 + 0x18) == '\0') {
    FUN_07029a08(in_stack_00000088);
  }
  FUN_06fb938c(in_stack_00000088);
  lVar17 = *(long *)(in_stack_00000088 + 0x188);
  FUN_06fc3a48(in_stack_00000098,0);
  FUN_06fc3b5c(in_stack_00000098,0);
  FUN_06fc3e1c(in_stack_00000098,0);
  if (lVar17 == 0) goto LAB_07028428;
  FUN_07052204(lVar17);
  FUN_06fb938c(in_stack_00000088);
  FUN_06fc3dac(in_stack_00000098,0);
  FUN_06fc3de4(in_stack_00000098,0);
  lVar17 = *(long *)(in_stack_00000088 + 400);
  FUN_06fc3a48(in_stack_00000098,0);
  FUN_06fc3b5c(in_stack_00000098,0);
  if (lVar17 == 0) goto LAB_07028428;
  FUN_07056584(lVar17);
  unaff_x26 = in_stack_00000098;
  unaff_x28 = in_stack_00000088;
LAB_07027fcc:
  if (iVar15 == 3) {
    FUN_070297f8(unaff_x28,unaff_x29,unaff_x26,*(undefined4 *)(in_stack_00000068 + 0xc),300,
                 *(undefined1 *)(in_stack_00000068 + 4));
  }
  else {
    FUN_06fb9414(unaff_x28,unaff_x29,300,0);
  }
  FUN_06fb9414(unaff_x28,unaff_x29,0x15e,0);
  auVar4._8_8_ = in_stack_000000d0;
  auVar4._0_8_ = in_stack_000000c8;
  if ((in_stack_00000110 == 0) ||
     (_in_stack_000000c8 = auVar4, *(long *)(in_stack_00000110 + 0xd8) == 0)) goto LAB_07028428;
  iVar9 = FUN_071745e0(*(long *)(in_stack_00000110 + 0xd8),0);
  auVar5._8_8_ = in_stack_000000d0;
  auVar5._0_8_ = in_stack_000000c8;
  if (iVar9 == 1) {
    if (in_stack_00000110 == 0) goto LAB_07028428;
    if (*(int *)(in_stack_00000110 + 0xe8) != 1) {
      _in_stack_000000c8 = auVar5;
      if (*(long *)(in_stack_00000110 + 0xd8) == 0) goto LAB_07028428;
      FUN_03c37834(*(long *)(in_stack_00000110 + 0xd8),&stack0x000000d8,
                   *(undefined8 *)OVRFaceExpressions_FaceViseme_TypeInfo);
      lVar17 = in_stack_000000d8;
      puVar7 = PTR_DAT_079f4e28;
      if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar13 = FUN_071c0684(lVar17,0,0);
      if ((uVar13 & 1) == 0) {
        uVar14 = FUN_0718b7d0(0);
      }
      else {
        if (in_stack_000000d8 == 0) goto LAB_07028428;
        uVar14 = FUN_07193724(in_stack_000000d8,0);
      }
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar13 = FUN_071c0684(uVar14,0,0);
      if ((uVar13 & 1) != 0) {
        if (unaff_x26 == 0) goto LAB_07028428;
        lVar17 = *(long *)(unaff_x28 + 0x1a8);
        uVar14 = *(undefined8 *)(unaff_x28 + 0x138);
        auVar18 = FUN_06fc3a48(unaff_x26,0);
        auVar19 = FUN_06fc3b5c(unaff_x26,0);
        if (lVar17 == 0) goto LAB_07028428;
        FUN_06fd1bdc(lVar17,unaff_x29,uVar14,in_stack_00000050,auVar18._0_8_,auVar18._8_8_,
                     auVar19._0_8_,auVar19._8_8_);
      }
    }
  }
  if (iVar15 == 4) {
    FUN_07029894(unaff_x28,unaff_x29,unaff_x26,*(undefined1 *)(in_stack_00000068 + 4));
  }
  FUN_06fb9414(unaff_x28,unaff_x29,400,0);
  if (in_stack_00000058 >> 0x20 == 0) {
    if (unaff_x26 == 0) goto LAB_07028428;
    _in_stack_000000c8 = FUN_06fc3a48(unaff_x26,0);
    if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar17 = FUN_0702e180(0);
    if ((lVar17 == 0) || (*(long *)(unaff_x28 + 0x1b8) == 0)) goto LAB_07028428;
    FUN_0704fc84(*(long *)(unaff_x28 + 0x1b8),unaff_x29,*(undefined8 *)(unaff_x28 + 0x138),
                 &stack0x000000b8,&stack0x000000c8,*(undefined4 *)(lVar17 + 0x48),0);
    FUN_06fc3e38(unaff_x26,in_stack_000000b8,in_stack_000000c0,0);
  }
  FUN_06fb9414(unaff_x28,unaff_x29,0x1c2,0);
  if (*(long *)(unaff_x28 + 0x1c0) != 0) {
    lVar17 = *(long *)(unaff_x28 + 0x1c8);
    bVar8 = FUN_06ff6c3c(*(long *)(unaff_x28 + 0x1c0),0);
    if ((lVar17 != 0) && (*(byte *)(lVar17 + 0x152) = (bVar8 ^ 0xff) & 1, unaff_x26 != 0)) {
      lVar17 = *(long *)(unaff_x28 + 0x1c8);
      uVar14 = *(undefined8 *)(unaff_x28 + 0x138);
      auVar18 = FUN_06fc3a48(unaff_x26,0);
      auVar19 = FUN_06fc3b5c(unaff_x26,0);
      FUN_06fc3dac(unaff_x26,0);
      FUN_06fc3de4(unaff_x26,0);
      puVar7 = PTR_DAT_07a006b0;
      if (lVar17 != 0) {
        FUN_07056584(lVar17,unaff_x29,uVar14,auVar18._0_8_,auVar18._8_8_,auVar19._0_8_,auVar19._8_8_
                    );
        if (iVar15 == 5) {
          FUN_070297f8(unaff_x28,unaff_x29,in_stack_00000098,
                       *(undefined4 *)(in_stack_00000068 + 0xc),500,
                       *(undefined1 *)(in_stack_00000068 + 4));
        }
        else {
          FUN_06fb9414(unaff_x28,unaff_x29,500,0);
        }
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar13 = FUN_071ff320(&stack0x00000118,0);
        if ((uVar13 & 1) != 0) {
          lVar17 = *(long *)(unaff_x28 + 0x1d0);
          auVar18 = FUN_06fc3a48(in_stack_00000098,0);
          auVar19 = FUN_06fc3b5c(in_stack_00000098,0);
          if (lVar17 == 0) goto LAB_07028428;
          FUN_06fd4428(lVar17,unaff_x29,auVar18._0_8_,auVar18._8_8_,auVar19._0_8_,auVar19._8_8_,0);
        }
        FUN_070262a8(unaff_x28,unaff_x29,in_stack_00000110,in_stack_00000098);
        if (in_stack_00000110 != 0) {
          uVar10 = FUN_06fc3250(in_stack_00000110,0);
          if (in_stack_00000110 != 0) {
            uVar11 = FUN_06fc3018(in_stack_00000110,0);
            if ((uVar10 & uVar11 & 1) != 0) {
              lVar17 = *(long *)(unaff_x28 + 0x200);
              uVar14 = *(undefined8 *)(unaff_x28 + 0x138);
              uVar12 = FUN_0701c4ac(unaff_x28);
              if (lVar17 == 0) goto LAB_07028428;
              FUN_06fcfac4(lVar17,unaff_x29,uVar14,uVar12,&stack0x000000a8,0);
              FUN_06fc400c(in_stack_00000098,in_stack_000000a8,in_stack_000000b0,0);
            }
            return;
          }
        }
      }
    }
  }
LAB_07028428:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


