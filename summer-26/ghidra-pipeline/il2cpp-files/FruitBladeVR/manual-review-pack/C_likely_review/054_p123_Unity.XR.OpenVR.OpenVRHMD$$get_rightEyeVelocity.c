/*
FUNCTION_NAME: Unity.XR.OpenVR.OpenVRHMD$$get_rightEyeVelocity
ENTRY_POINT: 030a7930
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_2
*/


undefined8 Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity(long *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  int *piVar19;
  long *plVar20;
  undefined8 unaff_x21;
  long lVar21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  long *plVar22;
  uint uVar23;
  undefined8 unaff_x28;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  
  uVar6 = (**(code **)(*param_1 + 0x698))();
  lVar7 = thunk_FUN_01c8fb4c(uVar6,*(undefined8 *)PTR_DAT_03cbb6d8);
  if (lVar7 == 0) goto LAB_030a8684;
  if ((int)*(long *)(lVar7 + 0x18) == 1) {
    plVar20 = *(long **)(lVar7 + 0x20);
FUN_030a79e8:
    uVar8 = FUN_02ff0c50(plVar20,0,0);
    if ((uVar8 & 1) == 0) goto Unity_XR_OpenVR_OpenVRControllerWMR__get_gripPressed;
    if ((plVar20 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar20 + 0x238))(plVar20,*(undefined8 *)(*plVar20 + 0x240)),
       lVar7 == 0)) goto LAB_030a8684;
    uVar8 = FUN_03086158(lVar7,0);
    if ((uVar8 & 1) == 0) {
      lVar7 = (**(code **)(*plVar20 + 0x238))(plVar20,*(undefined8 *)(*plVar20 + 0x240));
      lVar21 = *(long *)(PTR_DAT_03cb5cf0 + 0xa0);
      if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(*(long *)(PTR_DAT_03cb5cf0 + 0xe0));
      }
      lVar21 = FUN_03082e30(lVar21 + 0x20,0);
      if (lVar7 == lVar21) goto LAB_030a7a74;
    }
    else {
LAB_030a7a74:
      uVar3 = in_stack_00000058._4_4_ - (uint)(unaff_w26 == 0);
      if (0 < (int)uVar3) {
        lVar7 = FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cb7b90,uVar3);
        puVar13 = PTR_DAT_03cba628;
        uVar23 = 0;
        do {
          if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          if (*(uint *)(unaff_x24 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbdc();
          }
          uVar8 = (ulong)uVar23;
          lVar21 = *(long *)(unaff_x24 + uVar8 * 8 + 0x20);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          uVar6 = *(undefined8 *)puVar13;
          lVar9 = thunk_FUN_01c8fb4c(lVar21,uVar6);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cf54(lVar21,uVar6);
          }
          lVar9 = *(long *)puVar13;
          plVar10 = (long *)thunk_FUN_01c8fb4c(lVar21,lVar9);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cf54(lVar21,lVar9);
          }
          lVar21 = *plVar10;
          uVar16 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar16 != 0) {
            piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar9) {
                puVar11 = (undefined8 *)(lVar21 + (long)(*piVar19 + 7) * 0x10 + 0x138);
                goto LAB_030a7b50;
              }
              uVar16 = uVar16 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar16 != 0);
          }
          puVar11 = (undefined8 *)FUN_01c8cb54(plVar10,lVar9,7);
LAB_030a7b50:
          uVar5 = (*(code *)*puVar11)(plVar10,0,puVar11[1]);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbdc();
          }
          uVar23 = uVar23 + 1;
          *(undefined4 *)(lVar7 + uVar8 * 4 + 0x20) = uVar5;
        } while (uVar23 != uVar3);
        plVar20 = (long *)(**(code **)(*plVar20 + 0x2a8))
                                    (plVar20,unaff_x22,*(undefined8 *)(*plVar20 + 0x2b0));
        if (plVar20 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)(PTR_DAT_03cb5cf0 + 0xa0) + 0x130);
          if ((*(byte *)(*plVar20 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)(PTR_DAT_03cb5cf0 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cf54();
          }
          if (unaff_w26 != 0) {
            uVar6 = thunk_FUN_01c6b13c(plVar20,lVar7,0);
            return uVar6;
          }
          if (uVar3 < *(uint *)(unaff_x24 + 0x18)) {
            thunk_FUN_01c6b2c4(plVar20,*(undefined8 *)(unaff_x24 + (ulong)uVar3 * 8 + 0x20),lVar7,0)
            ;
            return 0;
          }
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
        }
        if ((unaff_w26 == 0) && (*(uint *)(unaff_x24 + 0x18) <= uVar3))
        goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
        goto LAB_030a8684;
      }
    }
    if (unaff_w26 == 0) {
      puVar13 = PTR_DAT_03cc1ec8;
      if (in_stack_00000058._4_4_ == 1) {
        if (unaff_x24 != 0) {
          if (*(int *)(unaff_x24 + 0x18) != 0) {
            (**(code **)(*plVar20 + 0x2c8))
                      (plVar20,unaff_x22,*(undefined8 *)(unaff_x24 + 0x20),unaff_w25);
            return 0;
          }
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
        }
        goto LAB_030a8684;
      }
    }
    else {
      puVar13 = PTR_DAT_03cc1ed0;
      if (in_stack_00000058._4_4_ == 0) {
                    /* WARNING: Could not recover jumptable at 0x030a845c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*plVar20 + 0x2a8))(plVar20,unaff_x22,*(undefined8 *)(*plVar20 + 0x2b0))
        ;
        return uVar6;
      }
    }
Unity_XR_OpenVR_OpenVROculusTouchController__set_gripPressed:
    uVar6 = thunk_FUN_01cb9718(puVar13);
    thunk_FUN_01cb9718(PTR_DAT_03cb63c8);
    uVar14 = thunk_FUN_01c8fc48();
    uVar15 = thunk_FUN_01cb9718(PTR_DAT_03cc1ed8);
    FUN_02f87094(uVar14,uVar6,uVar15,0);
    goto LAB_030a8800;
  }
  if (*(long *)(lVar7 + 0x18) != 0) {
    if (unaff_w26 == 0) {
      if (unaff_x24 == 0) goto LAB_030a8684;
      if (*(int *)(unaff_x24 + 0x18) == 0)
      goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
    }
    else if (*(int *)(*(long *)PTR_DAT_03cc1968 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    if (unaff_x23 == (long *)0x0) goto LAB_030a8684;
    plVar20 = (long *)(**(code **)(*unaff_x23 + 0x178))();
    goto FUN_030a79e8;
  }
  uVar8 = FUN_02ff0c50(0,0,0);
  if ((uVar8 & 1) != 0) goto LAB_030a8684;
Unity_XR_OpenVR_OpenVRControllerWMR__get_gripPressed:
  if ((unaff_w25 & 0xfff100) == 0) {
    uVar6 = (**(code **)(*in_stack_00000048 + 0x2c8))
                      (in_stack_00000048,*(undefined8 *)(*in_stack_00000048 + 0x2d0));
    thunk_FUN_01cb9718(PTR_DAT_03cc1980);
    uVar14 = thunk_FUN_01c8fc48();
    FUN_0308d7a8(uVar14,uVar6);
    goto LAB_030a8800;
  }
  uVar23 = unaff_w25 >> 0xc & 1;
  uVar3 = unaff_w25 & 0x2000;
  if (uVar23 != 0 || uVar3 != 0) {
    puVar13 = PTR_DAT_03cc1ec0;
    uVar2 = uVar3;
    if ((unaff_w25 >> 0xc & 1) == 0) {
      puVar13 = PTR_DAT_03cc1e68;
      uVar2 = unaff_w25 >> 8 & 1;
    }
    if (uVar2 != 0) goto Unity_XR_OpenVR_OpenVROculusTouchController__set_gripPressed;
  }
  if ((unaff_w25 >> 8 & 1) == 0) {
    plVar20 = (long *)0x0;
    plVar10 = (long *)0x0;
  }
  else {
    uVar6 = (**(code **)(*in_stack_00000048 + 0x698))
                      (in_stack_00000048,unaff_x21,8,unaff_w25,
                       *(undefined8 *)(*in_stack_00000048 + 0x6a0));
    lVar7 = thunk_FUN_01c8fb4c(uVar6,*(undefined8 *)PTR_DAT_03cbcd10);
    puVar4 = PTR_DAT_03cb7068;
    puVar13 = PTR_DAT_03cb63d8;
    if (lVar7 == 0) goto LAB_030a8684;
    if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
      plVar20 = (long *)0x0;
      lVar21 = 0;
    }
    else {
      lVar21 = 0;
      uVar8 = 0;
      uVar16 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      plVar10 = (long *)0x0;
      do {
        if (uVar16 <= uVar8) goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
        plVar22 = *(long **)(lVar7 + 0x20 + uVar8 * 8);
        uVar6 = FUN_01c5ca18(*(undefined8 *)puVar4,in_stack_00000058._4_4_);
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c(*(long *)puVar13);
        }
        if (plVar22 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_03cbb4d0 + 0x130);
          if ((*(byte *)(*plVar22 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_03cbb4d0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cf54(plVar22);
          }
        }
        uVar16 = FUN_030a29c8(plVar22,unaff_w25,3,uVar6);
        plVar20 = plVar10;
        if (((uVar16 & 1) != 0) &&
           (uVar16 = FUN_02ff24d8(plVar10,0,0), plVar20 = plVar22, (uVar16 & 1) == 0)) {
          if (lVar21 == 0) {
            lVar21 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_DAT_03cbb608);
            FUN_02b9e774(lVar21,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_03cc1e38);
            if (lVar21 == 0) goto LAB_030a8684;
            lVar9 = *(long *)(lVar21 + 0x10);
            lVar18 = *(long *)PTR_DAT_03cbb5f0;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_030a8684;
            uVar2 = *(uint *)(lVar21 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar21 + 0x18) = uVar2 + 1;
              plVar20 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *plVar20 = (long)plVar10;
              thunk_FUN_01cc8040(plVar20,plVar10);
            }
            else {
              FUN_02b9ef5c(lVar21,plVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar9 = *(long *)(lVar21 + 0x10);
          lVar18 = *(long *)PTR_DAT_03cbb5f0;
          *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_030a8684;
          uVar2 = *(uint *)(lVar21 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar21 + 0x18) = uVar2 + 1;
            puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
            *puVar11 = plVar22;
            thunk_FUN_01cc8040(puVar11,plVar22);
            plVar20 = plVar10;
          }
          else {
            FUN_02b9ef5c(lVar21,plVar22,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            plVar20 = plVar10;
          }
        }
        uVar16 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
        plVar10 = plVar20;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    if (lVar21 == 0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cbcd10,*(undefined4 *)(lVar21 + 0x18))
      ;
      FUN_02b9f424(lVar21,plVar10,*(undefined8 *)PTR_DAT_03cc1e30);
    }
  }
  uVar8 = FUN_02ff24d8(plVar20,0,0);
  if ((uVar8 & 1) == 0) {
    uVar23 = 0;
  }
  if (uVar23 != 0 || (unaff_w25 >> 0xd & 1) != 0) {
    uVar6 = (**(code **)(*in_stack_00000048 + 0x698))
                      (in_stack_00000048,unaff_x21,0x10,unaff_w25,
                       *(undefined8 *)(*in_stack_00000048 + 0x6a0));
    lVar7 = thunk_FUN_01c8fb4c(uVar6,*(undefined8 *)PTR_DAT_03cbcd18);
    if (lVar7 == 0) goto LAB_030a8684;
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      lVar21 = 0;
      uVar8 = 0;
      uVar16 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      plVar22 = plVar20;
      do {
        if (uVar3 == 0) {
          if (uVar16 <= uVar8)
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
          plVar20 = *(long **)(lVar7 + 0x20 + uVar8 * 8);
          if (plVar20 == (long *)0x0) goto LAB_030a8684;
          pcVar17 = *(code **)(*plVar20 + 0x268);
          uVar6 = *(undefined8 *)(*plVar20 + 0x270);
        }
        else {
          if (uVar16 <= uVar8)
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
          plVar20 = *(long **)(lVar7 + 0x20 + uVar8 * 8);
          if (plVar20 == (long *)0x0) goto LAB_030a8684;
          pcVar17 = *(code **)(*plVar20 + 0x278);
          uVar6 = *(undefined8 *)(*plVar20 + 0x280);
        }
        plVar12 = (long *)(*pcVar17)(plVar20,1,uVar6);
        uVar16 = FUN_02ff24d8(plVar12,0,0);
        plVar20 = plVar22;
        if ((uVar16 & 1) == 0) {
          uVar6 = FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cb7068,in_stack_00000058._4_4_);
          if (*(int *)(*(long *)PTR_DAT_03cb63d8 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c(*(long *)PTR_DAT_03cb63d8);
          }
          if (plVar12 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_03cbb4d0 + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03cbb4d0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5cf54(plVar12);
            }
          }
          uVar16 = FUN_030a29c8(plVar12,unaff_w25,3,uVar6);
          if (((uVar16 & 1) != 0) &&
             (uVar16 = FUN_02ff24d8(plVar22,0,0), plVar20 = plVar12, (uVar16 & 1) == 0)) {
            if (lVar21 == 0) {
              lVar21 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_DAT_03cbb608);
              FUN_02b9e774(lVar21,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_03cc1e38);
              if (lVar21 == 0) goto LAB_030a8684;
              lVar9 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_03cbb5f0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_030a8684;
              uVar23 = *(uint *)(lVar21 + 0x18);
              if (uVar23 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar23 + 1;
                plVar20 = (long *)(lVar9 + (long)(int)uVar23 * 8 + 0x20);
                *plVar20 = (long)plVar22;
                thunk_FUN_01cc8040(plVar20,plVar22);
              }
              else {
                FUN_02b9ef5c(lVar21,plVar22,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar9 = *(long *)(lVar21 + 0x10);
            lVar18 = *(long *)PTR_DAT_03cbb5f0;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_030a8684;
            uVar23 = *(uint *)(lVar21 + 0x18);
            if (uVar23 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar21 + 0x18) = uVar23 + 1;
              plVar20 = (long *)(lVar9 + (long)(int)uVar23 * 8 + 0x20);
              *plVar20 = (long)plVar12;
              thunk_FUN_01cc8040(plVar20,plVar12);
              plVar20 = plVar22;
            }
            else {
              FUN_02b9ef5c(lVar21,plVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              plVar20 = plVar22;
            }
          }
        }
        uVar16 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
        plVar22 = plVar20;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
      if (lVar21 != 0) {
        plVar10 = (long *)FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cbcd10,
                                       *(undefined4 *)(lVar21 + 0x18));
        FUN_02b9f424(lVar21,plVar10,*(undefined8 *)PTR_DAT_03cc1e30);
      }
    }
  }
  uVar8 = FUN_02ff249c(plVar20,0,0);
  if ((uVar8 & 1) != 0) {
    if ((plVar10 == (long *)0x0) && (in_stack_00000058._4_4_ == 0)) {
      if ((plVar20 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar20 + 0x378))(plVar20,*(undefined8 *)(*plVar20 + 0x380)),
         lVar7 == 0)) goto LAB_030a8684;
      if ((*(long *)(lVar7 + 0x18) == 0) && ((unaff_w25 >> 0x12 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x030a8270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*plVar20 + 0x308))
                          (plVar20,unaff_x22,unaff_w25,unaff_x23,unaff_x24,unaff_x28,
                           *(undefined8 *)(*plVar20 + 0x310));
        return uVar6;
      }
LAB_030a8278:
      plVar10 = (long *)FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cbcd10,1);
      if (plVar10 == (long *)0x0) goto LAB_030a8684;
      if ((plVar20 != (long *)0x0) &&
         (lVar7 = thunk_FUN_01c8fb4c(plVar20,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
        uVar6 = thunk_FUN_01c9d12c();
                    /* WARNING: Subroutine does not return */
        FUN_01c5ca98(uVar6,0);
      }
      if ((int)plVar10[3] == 0) {
Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton:
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbdc();
      }
      plVar10[4] = (long)plVar20;
      thunk_FUN_01cc8040(plVar10 + 4,plVar20);
    }
    else if (plVar10 == (long *)0x0) goto LAB_030a8278;
    if (unaff_x24 == 0) {
      lVar21 = *(long *)PTR_DAT_03cb7a78;
      lVar7 = *(long *)(lVar21 + 0x38);
      if (lVar7 == 0) {
        FUN_01c8c87c(lVar21);
        lVar7 = *(long *)(lVar21 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c8c820();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      lVar7 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c8c820();
      }
      in_stack_00000078 = **(undefined8 **)(lVar7 + 0xb8);
    }
    in_stack_00000070 = 0;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    plVar20 = (long *)(**(code **)(*unaff_x23 + 0x188))
                                (unaff_x23,unaff_w25,plVar10,&stack0x00000078,in_stack_00000040,
                                 unaff_x28,in_stack_00000050,&stack0x00000070);
    uVar8 = FUN_02ff209c(plVar20,0,0);
    if ((uVar8 & 1) == 0) {
      if (plVar20 != (long *)0x0) {
        lVar7 = *plVar20;
        bVar1 = *(byte *)(*(long *)PTR_DAT_03cbab58 + 0x130);
        if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cbab58))
        {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cf54(plVar20);
        }
        uVar6 = (**(code **)(lVar7 + 0x308))
                          (plVar20,unaff_x22,unaff_w25,unaff_x23,in_stack_00000078,unaff_x28,
                           *(undefined8 *)(lVar7 + 0x310));
        if (in_stack_00000070 != 0) {
          if (unaff_x23 == (long *)0x0) goto LAB_030a8684;
          (**(code **)(*unaff_x23 + 0x1a8))
                    (unaff_x23,&stack0x00000078,in_stack_00000070,
                     *(undefined8 *)(*unaff_x23 + 0x1b0));
        }
        return uVar6;
      }
LAB_030a8684:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
  }
  uVar6 = (**(code **)(*in_stack_00000048 + 0x2c8))
                    (in_stack_00000048,*(undefined8 *)(*in_stack_00000048 + 0x2d0));
  thunk_FUN_01cb9718(PTR_DAT_03cb63e8);
  uVar14 = thunk_FUN_01c8fc48();
  FUN_03070148(uVar14,uVar6,unaff_x21,0);
LAB_030a8800:
  uVar6 = thunk_FUN_01cb9718(PTR_DAT_03cc1ea0);
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar14,uVar6);
}


