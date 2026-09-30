/*
FUNCTION_NAME: Unity.XR.OpenVR.OpenVRHMD$$set_rightEyeAngularVelocity
ENTRY_POINT: 030a7950
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


undefined8 Unity_XR_OpenVR_OpenVRHMD__set_rightEyeAngularVelocity(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  undefined8 unaff_x21;
  long lVar20;
  undefined8 unaff_x22;
  long *unaff_x23;
  undefined8 uVar21;
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
  
  if (param_1 == 0) goto LAB_030a8684;
  if ((int)*(long *)(param_1 + 0x18) == 1) {
    plVar19 = *(long **)(param_1 + 0x20);
FUN_030a79e8:
    uVar6 = FUN_02ff0c50(plVar19,0,0);
    if ((uVar6 & 1) == 0) goto Unity_XR_OpenVR_OpenVRControllerWMR__get_gripPressed;
    if ((plVar19 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar19 + 0x238))(plVar19,*(undefined8 *)(*plVar19 + 0x240)),
       lVar7 == 0)) goto LAB_030a8684;
    uVar6 = FUN_03086158(lVar7,0);
    if ((uVar6 & 1) == 0) {
      lVar7 = (**(code **)(*plVar19 + 0x238))(plVar19,*(undefined8 *)(*plVar19 + 0x240));
      lVar20 = *(long *)(PTR_DAT_03cb5cf0 + 0xa0);
      if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(*(long *)(PTR_DAT_03cb5cf0 + 0xe0));
      }
      lVar20 = FUN_03082e30(lVar20 + 0x20,0);
      if (lVar7 == lVar20) goto LAB_030a7a74;
    }
    else {
LAB_030a7a74:
      uVar3 = in_stack_00000058._4_4_ - (uint)(unaff_w26 == 0);
      if (0 < (int)uVar3) {
        lVar7 = FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cb7b90,uVar3);
        puVar12 = PTR_DAT_03cba628;
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
          uVar6 = (ulong)uVar23;
          lVar20 = *(long *)(unaff_x24 + uVar6 * 8 + 0x20);
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          uVar21 = *(undefined8 *)puVar12;
          lVar8 = thunk_FUN_01c8fb4c(lVar20,uVar21);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cf54(lVar20,uVar21);
          }
          lVar8 = *(long *)puVar12;
          plVar9 = (long *)thunk_FUN_01c8fb4c(lVar20,lVar8);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cf54(lVar20,lVar8);
          }
          lVar20 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar15 != 0) {
            piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar8) {
                puVar10 = (undefined8 *)(lVar20 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                goto LAB_030a7b50;
              }
              uVar15 = uVar15 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_01c8cb54(plVar9,lVar8,7);
LAB_030a7b50:
          uVar5 = (*(code *)*puVar10)(plVar9,0,puVar10[1]);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbdc();
          }
          uVar23 = uVar23 + 1;
          *(undefined4 *)(lVar7 + uVar6 * 4 + 0x20) = uVar5;
        } while (uVar23 != uVar3);
        plVar19 = (long *)(**(code **)(*plVar19 + 0x2a8))
                                    (plVar19,unaff_x22,*(undefined8 *)(*plVar19 + 0x2b0));
        if (plVar19 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)(PTR_DAT_03cb5cf0 + 0xa0) + 0x130);
          if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)(PTR_DAT_03cb5cf0 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cf54();
          }
          if (unaff_w26 != 0) {
            uVar21 = thunk_FUN_01c6b13c(plVar19,lVar7,0);
            return uVar21;
          }
          if (uVar3 < *(uint *)(unaff_x24 + 0x18)) {
            thunk_FUN_01c6b2c4(plVar19,*(undefined8 *)(unaff_x24 + (ulong)uVar3 * 8 + 0x20),lVar7,0)
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
      puVar12 = PTR_DAT_03cc1ec8;
      if (in_stack_00000058._4_4_ == 1) {
        if (unaff_x24 != 0) {
          if (*(int *)(unaff_x24 + 0x18) != 0) {
            (**(code **)(*plVar19 + 0x2c8))
                      (plVar19,unaff_x22,*(undefined8 *)(unaff_x24 + 0x20),unaff_w25);
            return 0;
          }
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
        }
        goto LAB_030a8684;
      }
    }
    else {
      puVar12 = PTR_DAT_03cc1ed0;
      if (in_stack_00000058._4_4_ == 0) {
                    /* WARNING: Could not recover jumptable at 0x030a845c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar21 = (**(code **)(*plVar19 + 0x2a8))
                           (plVar19,unaff_x22,*(undefined8 *)(*plVar19 + 0x2b0));
        return uVar21;
      }
    }
Unity_XR_OpenVR_OpenVROculusTouchController__set_gripPressed:
    uVar21 = thunk_FUN_01cb9718(puVar12);
    thunk_FUN_01cb9718(PTR_DAT_03cb63c8);
    uVar13 = thunk_FUN_01c8fc48();
    uVar14 = thunk_FUN_01cb9718(PTR_DAT_03cc1ed8);
    FUN_02f87094(uVar13,uVar21,uVar14,0);
    goto LAB_030a8800;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    if (unaff_w26 == 0) {
      if (unaff_x24 == 0) goto LAB_030a8684;
      if (*(int *)(unaff_x24 + 0x18) == 0)
      goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
    }
    else if (*(int *)(*(long *)PTR_DAT_03cc1968 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    if (unaff_x23 == (long *)0x0) goto LAB_030a8684;
    plVar19 = (long *)(**(code **)(*unaff_x23 + 0x178))();
    goto FUN_030a79e8;
  }
  uVar6 = FUN_02ff0c50(0,0,0);
  if ((uVar6 & 1) != 0) goto LAB_030a8684;
Unity_XR_OpenVR_OpenVRControllerWMR__get_gripPressed:
  if ((unaff_w25 & 0xfff100) == 0) {
    uVar21 = (**(code **)(*in_stack_00000048 + 0x2c8))
                       (in_stack_00000048,*(undefined8 *)(*in_stack_00000048 + 0x2d0));
    thunk_FUN_01cb9718(PTR_DAT_03cc1980);
    uVar13 = thunk_FUN_01c8fc48();
    FUN_0308d7a8(uVar13,uVar21);
    goto LAB_030a8800;
  }
  uVar23 = unaff_w25 >> 0xc & 1;
  uVar3 = unaff_w25 & 0x2000;
  if (uVar23 != 0 || uVar3 != 0) {
    puVar12 = PTR_DAT_03cc1ec0;
    uVar2 = uVar3;
    if ((unaff_w25 >> 0xc & 1) == 0) {
      puVar12 = PTR_DAT_03cc1e68;
      uVar2 = unaff_w25 >> 8 & 1;
    }
    if (uVar2 != 0) goto Unity_XR_OpenVR_OpenVROculusTouchController__set_gripPressed;
  }
  if ((unaff_w25 >> 8 & 1) == 0) {
    plVar19 = (long *)0x0;
    plVar9 = (long *)0x0;
  }
  else {
    uVar21 = (**(code **)(*in_stack_00000048 + 0x698))
                       (in_stack_00000048,unaff_x21,8,unaff_w25,
                        *(undefined8 *)(*in_stack_00000048 + 0x6a0));
    lVar7 = thunk_FUN_01c8fb4c(uVar21,*(undefined8 *)PTR_DAT_03cbcd10);
    puVar4 = PTR_DAT_03cb7068;
    puVar12 = PTR_DAT_03cb63d8;
    if (lVar7 == 0) goto LAB_030a8684;
    if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
      plVar19 = (long *)0x0;
      lVar20 = 0;
    }
    else {
      lVar20 = 0;
      uVar6 = 0;
      uVar15 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      plVar9 = (long *)0x0;
      do {
        if (uVar15 <= uVar6) goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
        plVar22 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
        uVar21 = FUN_01c5ca18(*(undefined8 *)puVar4,in_stack_00000058._4_4_);
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c(*(long *)puVar12);
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
        uVar15 = FUN_030a29c8(plVar22,unaff_w25,3,uVar21);
        plVar19 = plVar9;
        if (((uVar15 & 1) != 0) &&
           (uVar15 = FUN_02ff24d8(plVar9,0,0), plVar19 = plVar22, (uVar15 & 1) == 0)) {
          if (lVar20 == 0) {
            lVar20 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_DAT_03cbb608);
            FUN_02b9e774(lVar20,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_03cc1e38);
            if (lVar20 == 0) goto LAB_030a8684;
            lVar8 = *(long *)(lVar20 + 0x10);
            lVar17 = *(long *)PTR_DAT_03cbb5f0;
            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_030a8684;
            uVar2 = *(uint *)(lVar20 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar20 + 0x18) = uVar2 + 1;
              plVar19 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
              *plVar19 = (long)plVar9;
              thunk_FUN_01cc8040(plVar19,plVar9);
            }
            else {
              FUN_02b9ef5c(lVar20,plVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar8 = *(long *)(lVar20 + 0x10);
          lVar17 = *(long *)PTR_DAT_03cbb5f0;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_030a8684;
          uVar2 = *(uint *)(lVar20 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar20 + 0x18) = uVar2 + 1;
            puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *puVar10 = plVar22;
            thunk_FUN_01cc8040(puVar10,plVar22);
            plVar19 = plVar9;
          }
          else {
            FUN_02b9ef5c(lVar20,plVar22,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            plVar19 = plVar9;
          }
        }
        uVar15 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar6 = uVar6 + 1;
        plVar9 = plVar19;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    if (lVar20 == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cbcd10,*(undefined4 *)(lVar20 + 0x18));
      FUN_02b9f424(lVar20,plVar9,*(undefined8 *)PTR_DAT_03cc1e30);
    }
  }
  uVar6 = FUN_02ff24d8(plVar19,0,0);
  if ((uVar6 & 1) == 0) {
    uVar23 = 0;
  }
  if (uVar23 != 0 || (unaff_w25 >> 0xd & 1) != 0) {
    uVar21 = (**(code **)(*in_stack_00000048 + 0x698))
                       (in_stack_00000048,unaff_x21,0x10,unaff_w25,
                        *(undefined8 *)(*in_stack_00000048 + 0x6a0));
    lVar7 = thunk_FUN_01c8fb4c(uVar21,*(undefined8 *)PTR_DAT_03cbcd18);
    if (lVar7 == 0) goto LAB_030a8684;
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      lVar20 = 0;
      uVar6 = 0;
      uVar15 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      plVar22 = plVar19;
      do {
        if (uVar3 == 0) {
          if (uVar15 <= uVar6)
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
          plVar19 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
          if (plVar19 == (long *)0x0) goto LAB_030a8684;
          pcVar16 = *(code **)(*plVar19 + 0x268);
          uVar21 = *(undefined8 *)(*plVar19 + 0x270);
        }
        else {
          if (uVar15 <= uVar6)
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
          plVar19 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
          if (plVar19 == (long *)0x0) goto LAB_030a8684;
          pcVar16 = *(code **)(*plVar19 + 0x278);
          uVar21 = *(undefined8 *)(*plVar19 + 0x280);
        }
        plVar11 = (long *)(*pcVar16)(plVar19,1,uVar21);
        uVar15 = FUN_02ff24d8(plVar11,0,0);
        plVar19 = plVar22;
        if ((uVar15 & 1) == 0) {
          uVar21 = FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cb7068,in_stack_00000058._4_4_);
          if (*(int *)(*(long *)PTR_DAT_03cb63d8 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c(*(long *)PTR_DAT_03cb63d8);
          }
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_03cbb4d0 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03cbb4d0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5cf54(plVar11);
            }
          }
          uVar15 = FUN_030a29c8(plVar11,unaff_w25,3,uVar21);
          if (((uVar15 & 1) != 0) &&
             (uVar15 = FUN_02ff24d8(plVar22,0,0), plVar19 = plVar11, (uVar15 & 1) == 0)) {
            if (lVar20 == 0) {
              lVar20 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_DAT_03cbb608);
              FUN_02b9e774(lVar20,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_03cc1e38);
              if (lVar20 == 0) goto LAB_030a8684;
              lVar8 = *(long *)(lVar20 + 0x10);
              lVar17 = *(long *)PTR_DAT_03cbb5f0;
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_030a8684;
              uVar23 = *(uint *)(lVar20 + 0x18);
              if (uVar23 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar20 + 0x18) = uVar23 + 1;
                plVar19 = (long *)(lVar8 + (long)(int)uVar23 * 8 + 0x20);
                *plVar19 = (long)plVar22;
                thunk_FUN_01cc8040(plVar19,plVar22);
              }
              else {
                FUN_02b9ef5c(lVar20,plVar22,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar8 = *(long *)(lVar20 + 0x10);
            lVar17 = *(long *)PTR_DAT_03cbb5f0;
            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_030a8684;
            uVar23 = *(uint *)(lVar20 + 0x18);
            if (uVar23 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar20 + 0x18) = uVar23 + 1;
              plVar19 = (long *)(lVar8 + (long)(int)uVar23 * 8 + 0x20);
              *plVar19 = (long)plVar11;
              thunk_FUN_01cc8040(plVar19,plVar11);
              plVar19 = plVar22;
            }
            else {
              FUN_02b9ef5c(lVar20,plVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              plVar19 = plVar22;
            }
          }
        }
        uVar15 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar6 = uVar6 + 1;
        plVar22 = plVar19;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
      if (lVar20 != 0) {
        plVar9 = (long *)FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cbcd10,*(undefined4 *)(lVar20 + 0x18)
                                     );
        FUN_02b9f424(lVar20,plVar9,*(undefined8 *)PTR_DAT_03cc1e30);
      }
    }
  }
  uVar6 = FUN_02ff249c(plVar19,0,0);
  if ((uVar6 & 1) != 0) {
    if ((plVar9 == (long *)0x0) && (in_stack_00000058._4_4_ == 0)) {
      if ((plVar19 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar19 + 0x378))(plVar19,*(undefined8 *)(*plVar19 + 0x380)),
         lVar7 == 0)) goto LAB_030a8684;
      if ((*(long *)(lVar7 + 0x18) == 0) && ((unaff_w25 >> 0x12 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x030a8270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar21 = (**(code **)(*plVar19 + 0x308))
                           (plVar19,unaff_x22,unaff_w25,unaff_x23,unaff_x24,unaff_x28,
                            *(undefined8 *)(*plVar19 + 0x310));
        return uVar21;
      }
LAB_030a8278:
      plVar9 = (long *)FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cbcd10,1);
      if (plVar9 == (long *)0x0) goto LAB_030a8684;
      if ((plVar19 != (long *)0x0) &&
         (lVar7 = thunk_FUN_01c8fb4c(plVar19,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
        uVar21 = thunk_FUN_01c9d12c();
                    /* WARNING: Subroutine does not return */
        FUN_01c5ca98(uVar21,0);
      }
      if ((int)plVar9[3] == 0) {
Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton:
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbdc();
      }
      plVar9[4] = (long)plVar19;
      thunk_FUN_01cc8040(plVar9 + 4,plVar19);
    }
    else if (plVar9 == (long *)0x0) goto LAB_030a8278;
    if (unaff_x24 == 0) {
      lVar20 = *(long *)PTR_DAT_03cb7a78;
      lVar7 = *(long *)(lVar20 + 0x38);
      if (lVar7 == 0) {
        FUN_01c8c87c(lVar20);
        lVar7 = *(long *)(lVar20 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c8c820();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      lVar7 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
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
    plVar19 = (long *)(**(code **)(*unaff_x23 + 0x188))
                                (unaff_x23,unaff_w25,plVar9,&stack0x00000078,in_stack_00000040,
                                 unaff_x28,in_stack_00000050,&stack0x00000070);
    uVar6 = FUN_02ff209c(plVar19,0,0);
    if ((uVar6 & 1) == 0) {
      if (plVar19 != (long *)0x0) {
        lVar7 = *plVar19;
        bVar1 = *(byte *)(*(long *)PTR_DAT_03cbab58 + 0x130);
        if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cbab58))
        {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cf54(plVar19);
        }
        uVar21 = (**(code **)(lVar7 + 0x308))
                           (plVar19,unaff_x22,unaff_w25,unaff_x23,in_stack_00000078,unaff_x28,
                            *(undefined8 *)(lVar7 + 0x310));
        if (in_stack_00000070 != 0) {
          if (unaff_x23 == (long *)0x0) goto LAB_030a8684;
          (**(code **)(*unaff_x23 + 0x1a8))
                    (unaff_x23,&stack0x00000078,in_stack_00000070,
                     *(undefined8 *)(*unaff_x23 + 0x1b0));
        }
        return uVar21;
      }
LAB_030a8684:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
  }
  uVar21 = (**(code **)(*in_stack_00000048 + 0x2c8))
                     (in_stack_00000048,*(undefined8 *)(*in_stack_00000048 + 0x2d0));
  thunk_FUN_01cb9718(PTR_DAT_03cb63e8);
  uVar13 = thunk_FUN_01c8fc48();
  FUN_03070148(uVar13,uVar21,unaff_x21,0);
LAB_030a8800:
  uVar21 = thunk_FUN_01cb9718(PTR_DAT_03cc1ea0);
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar13,uVar21);
}


