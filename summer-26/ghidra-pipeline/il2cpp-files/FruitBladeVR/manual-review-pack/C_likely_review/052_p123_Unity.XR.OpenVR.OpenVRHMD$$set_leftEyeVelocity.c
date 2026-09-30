/*
FUNCTION_NAME: Unity.XR.OpenVR.OpenVRHMD$$set_leftEyeVelocity
ENTRY_POINT: 030a7908
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


undefined8 Unity_XR_OpenVR_OpenVRHMD__set_leftEyeVelocity(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  code *pcVar19;
  long lVar20;
  int *piVar21;
  uint unaff_w19;
  long *plVar22;
  uint unaff_w20;
  long unaff_x21;
  long lVar23;
  undefined8 unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *plVar24;
  uint uVar25;
  undefined8 unaff_x28;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  int iStack000000000000005c;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  
  puVar16 = PTR_DAT_03cc1e60;
  if ((param_1 != 0) ||
     (iVar6 = FUN_01fdd7c4(param_2,0,*(undefined8 *)PTR_DAT_03cc1e28), puVar16 = PTR_DAT_03cc1e80,
     iVar6 != -1)) {
    uVar14 = thunk_FUN_01cb9718(puVar16);
    thunk_FUN_01cb9718(PTR_DAT_03cb63c8);
    uVar15 = thunk_FUN_01c8fc48();
    puVar16 = PTR_DAT_03cc1e88;
LAB_030a86c4:
    uVar17 = thunk_FUN_01cb9718(puVar16);
    FUN_02f87094(uVar15,uVar14,uVar17,0);
    goto LAB_030a8800;
  }
  if (unaff_x24 == 0) {
    iStack000000000000005c = 0;
  }
  else {
    iStack000000000000005c = *(int *)(unaff_x24 + 0x18);
  }
  if (unaff_x23 == (long *)0x0) {
    if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    unaff_x23 = (long *)FUN_03087564(0);
  }
  if ((unaff_w19 >> 9 & 1) != 0) {
    puVar16 = PTR_DAT_03cc1e90;
    if ((unaff_w19 & 0x3d00) == 0) {
      uVar15 = FUN_03094b60();
      return uVar15;
    }
    goto Unity_XR_OpenVR_OpenVROculusTouchController__set_gripPressed;
  }
  uVar25 = unaff_w20 | unaff_w19;
  if ((unaff_w19 & 0xc000) != 0) {
    uVar25 = unaff_w20 | unaff_w19 | 0x2000;
  }
  if (unaff_x21 == 0) {
    thunk_FUN_01cb9718(PTR_DAT_03cb62e0);
    uVar15 = thunk_FUN_01c8fc48();
    puVar16 = PTR_DAT_03cb85f8;
LAB_030a8608:
    uVar14 = thunk_FUN_01cb9718(puVar16);
    FUN_02f8701c(uVar15,uVar14,0);
    uVar14 = thunk_FUN_01cb9718(PTR_DAT_03cc1ea0);
                    /* WARNING: Subroutine does not return */
    FUN_01c5ca98(uVar15,uVar14);
  }
  if ((*(int *)(unaff_x21 + 0x10) == 0) || (uVar8 = System_Number__ParseUInt64(), (uVar8 & 1) != 0))
  {
    lVar9 = FUN_030a884c(unaff_x25);
    unaff_x21 = *(long *)PTR_DAT_03cc1e48;
    if (lVar9 != 0) {
      unaff_x21 = lVar9;
    }
  }
  if ((uVar25 >> 10 & 1) != 0 || (uVar25 & 0x800) != 0) {
    uVar1 = uVar25 & 0x400;
    if (uVar1 == 0) {
      if (unaff_x24 == 0) {
        thunk_FUN_01cb9718(PTR_DAT_03cb62e0);
        uVar15 = thunk_FUN_01c8fc48();
        puVar16 = PTR_DAT_03cc1e98;
        goto LAB_030a8608;
      }
      puVar16 = PTR_DAT_03cc1eb0;
      if ((uVar25 >> 0xc & 1) == 0) {
        uVar2 = uVar25 >> 8;
        puVar16 = PTR_DAT_03cc1e58;
        goto joined_r0x030a791c;
      }
    }
    else {
      puVar16 = PTR_DAT_03cc1ea8;
      if ((uVar25 & 0x800) == 0) {
        uVar2 = uVar25 >> 0xd;
        puVar16 = PTR_DAT_03cc1eb8;
joined_r0x030a791c:
        if ((uVar2 & 1) == 0) {
          uVar15 = (**(code **)(*unaff_x25 + 0x698))
                             (unaff_x25,unaff_x21,4,uVar25,*(undefined8 *)(*unaff_x25 + 0x6a0));
          lVar9 = thunk_FUN_01c8fb4c(uVar15,*(undefined8 *)PTR_DAT_03cbb6d8);
          puVar16 = PTR_DAT_03cc1968;
          if (lVar9 == 0) goto LAB_030a8684;
          if ((int)*(long *)(lVar9 + 0x18) == 1) {
            plVar22 = *(long **)(lVar9 + 0x20);
FUN_030a79e8:
            uVar8 = FUN_02ff0c50(plVar22,0,0);
            if ((uVar8 & 1) != 0) {
              if ((plVar22 == (long *)0x0) ||
                 (lVar9 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240))
                 , lVar9 == 0)) goto LAB_030a8684;
              uVar8 = FUN_03086158(lVar9,0);
              if ((uVar8 & 1) == 0) {
                lVar9 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
                lVar23 = *(long *)(PTR_DAT_03cb5cf0 + 0xa0);
                if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c(*(long *)(PTR_DAT_03cb5cf0 + 0xe0));
                }
                lVar23 = FUN_03082e30(lVar23 + 0x20,0);
                if (lVar9 == lVar23) goto LAB_030a7a74;
              }
              else {
LAB_030a7a74:
                uVar2 = iStack000000000000005c - (uint)(uVar1 == 0);
                if (0 < (int)uVar2) {
                  lVar9 = FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cb7b90,uVar2);
                  puVar16 = PTR_DAT_03cba628;
                  uVar25 = 0;
                  do {
                    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5cbd4();
                    }
                    if (*(uint *)(unaff_x24 + 0x18) <= uVar25) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5cbdc();
                    }
                    uVar8 = (ulong)uVar25;
                    lVar23 = *(long *)(unaff_x24 + uVar8 * 8 + 0x20);
                    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5cbd4();
                    }
                    uVar15 = *(undefined8 *)puVar16;
                    lVar10 = thunk_FUN_01c8fb4c(lVar23,uVar15);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5cf54(lVar23,uVar15);
                    }
                    lVar10 = *(long *)puVar16;
                    plVar11 = (long *)thunk_FUN_01c8fb4c(lVar23,lVar10);
                    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5cf54(lVar23,lVar10);
                    }
                    lVar23 = *plVar11;
                    uVar18 = (ulong)*(ushort *)(lVar23 + 0x12e);
                    if (uVar18 != 0) {
                      piVar21 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == lVar10) {
                          puVar12 = (undefined8 *)(lVar23 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                          goto LAB_030a7b50;
                        }
                        uVar18 = uVar18 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_01c8cb54(plVar11,lVar10,7);
LAB_030a7b50:
                    uVar7 = (*(code *)*puVar12)(plVar11,0,puVar12[1]);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5cbd4();
                    }
                    if (*(uint *)(lVar9 + 0x18) <= uVar25) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5cbdc();
                    }
                    uVar25 = uVar25 + 1;
                    *(undefined4 *)(lVar9 + uVar8 * 4 + 0x20) = uVar7;
                  } while (uVar25 != uVar2);
                  plVar22 = (long *)(**(code **)(*plVar22 + 0x2a8))
                                              (plVar22,unaff_x22,*(undefined8 *)(*plVar22 + 0x2b0));
                  if (plVar22 != (long *)0x0) {
                    bVar3 = *(byte *)(*(long *)(PTR_DAT_03cb5cf0 + 0xa0) + 0x130);
                    if ((*(byte *)(*plVar22 + 0x130) < bVar3) ||
                       (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) !=
                        *(long *)(PTR_DAT_03cb5cf0 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5cf54();
                    }
                    if (uVar1 != 0) {
                      uVar15 = thunk_FUN_01c6b13c(plVar22,lVar9,0);
                      return uVar15;
                    }
                    if (uVar2 < *(uint *)(unaff_x24 + 0x18)) {
                      thunk_FUN_01c6b2c4(plVar22,*(undefined8 *)
                                                  (unaff_x24 + (ulong)uVar2 * 8 + 0x20),lVar9,0);
                      return 0;
                    }
                    goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
                  }
                  if ((uVar1 == 0) && (*(uint *)(unaff_x24 + 0x18) <= uVar2))
                  goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
                  goto LAB_030a8684;
                }
              }
              if (uVar1 == 0) {
                puVar16 = PTR_DAT_03cc1ec8;
                if (iStack000000000000005c == 1) {
                  if (unaff_x24 != 0) {
                    if (*(int *)(unaff_x24 + 0x18) != 0) {
                      (**(code **)(*plVar22 + 0x2c8))
                                (plVar22,unaff_x22,*(undefined8 *)(unaff_x24 + 0x20),uVar25,
                                 unaff_x23);
                      return 0;
                    }
                    goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
                  }
                  goto LAB_030a8684;
                }
              }
              else {
                puVar16 = PTR_DAT_03cc1ed0;
                if (iStack000000000000005c == 0) {
                    /* WARNING: Could not recover jumptable at 0x030a845c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar15 = (**(code **)(*plVar22 + 0x2a8))
                                     (plVar22,unaff_x22,*(undefined8 *)(*plVar22 + 0x2b0));
                  return uVar15;
                }
              }
              goto Unity_XR_OpenVR_OpenVROculusTouchController__set_gripPressed;
            }
          }
          else {
            if (*(long *)(lVar9 + 0x18) != 0) {
              if (uVar1 == 0) {
                if (unaff_x24 == 0) goto LAB_030a8684;
                if (*(int *)(unaff_x24 + 0x18) == 0)
                goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
                puVar12 = (undefined8 *)(unaff_x24 + 0x20);
              }
              else {
                lVar23 = *(long *)PTR_DAT_03cc1968;
                if (*(int *)(lVar23 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                  lVar23 = *(long *)puVar16;
                }
                puVar12 = *(undefined8 **)(lVar23 + 0xb8);
              }
              if (unaff_x23 == (long *)0x0) goto LAB_030a8684;
              plVar22 = (long *)(**(code **)(*unaff_x23 + 0x178))(unaff_x23,uVar25,lVar9,*puVar12);
              goto FUN_030a79e8;
            }
            uVar8 = FUN_02ff0c50(0,0,0);
            if ((uVar8 & 1) != 0) goto LAB_030a8684;
          }
          if ((uVar25 & 0xfff100) == 0) {
            uVar14 = (**(code **)(*unaff_x25 + 0x2c8))
                               (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x2d0));
            thunk_FUN_01cb9718(PTR_DAT_03cc1980);
            uVar15 = thunk_FUN_01c8fc48();
            FUN_0308d7a8(uVar15,uVar14,unaff_x21,0);
            goto LAB_030a8800;
          }
          goto LAB_030a7c10;
        }
      }
    }
Unity_XR_OpenVR_OpenVROculusTouchController__set_gripPressed:
    uVar14 = thunk_FUN_01cb9718(puVar16);
    thunk_FUN_01cb9718(PTR_DAT_03cb63c8);
    uVar15 = thunk_FUN_01c8fc48();
    puVar16 = PTR_DAT_03cc1ed8;
    goto LAB_030a86c4;
  }
LAB_030a7c10:
  uVar2 = uVar25 >> 0xc & 1;
  uVar1 = uVar25 & 0x2000;
  if (uVar2 != 0 || uVar1 != 0) {
    puVar16 = PTR_DAT_03cc1ec0;
    uVar4 = uVar1;
    if ((uVar25 >> 0xc & 1) == 0) {
      puVar16 = PTR_DAT_03cc1e68;
      uVar4 = uVar25 >> 8 & 1;
    }
    if (uVar4 != 0) goto Unity_XR_OpenVR_OpenVROculusTouchController__set_gripPressed;
  }
  if ((uVar25 >> 8 & 1) == 0) {
    plVar22 = (long *)0x0;
    plVar11 = (long *)0x0;
  }
  else {
    uVar15 = (**(code **)(*unaff_x25 + 0x698))
                       (unaff_x25,unaff_x21,8,uVar25,*(undefined8 *)(*unaff_x25 + 0x6a0));
    lVar9 = thunk_FUN_01c8fb4c(uVar15,*(undefined8 *)PTR_DAT_03cbcd10);
    puVar5 = PTR_DAT_03cb7068;
    puVar16 = PTR_DAT_03cb63d8;
    if (lVar9 == 0) goto LAB_030a8684;
    if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
      plVar22 = (long *)0x0;
      lVar23 = 0;
    }
    else {
      lVar23 = 0;
      uVar8 = 0;
      uVar18 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      plVar11 = (long *)0x0;
      do {
        if (uVar18 <= uVar8) goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
        plVar24 = *(long **)(lVar9 + 0x20 + uVar8 * 8);
        uVar15 = FUN_01c5ca18(*(undefined8 *)puVar5,iStack000000000000005c);
        if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c(*(long *)puVar16);
        }
        if (plVar24 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_03cbb4d0 + 0x130);
          if ((*(byte *)(*plVar24 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_03cbb4d0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cf54(plVar24);
          }
        }
        uVar18 = FUN_030a29c8(plVar24,uVar25,3,uVar15);
        plVar22 = plVar11;
        if (((uVar18 & 1) != 0) &&
           (uVar18 = FUN_02ff24d8(plVar11,0,0), plVar22 = plVar24, (uVar18 & 1) == 0)) {
          if (lVar23 == 0) {
            lVar23 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_DAT_03cbb608);
            FUN_02b9e774(lVar23,*(undefined4 *)(lVar9 + 0x18),*(undefined8 *)PTR_DAT_03cc1e38);
            if (lVar23 == 0) goto LAB_030a8684;
            lVar10 = *(long *)(lVar23 + 0x10);
            lVar20 = *(long *)PTR_DAT_03cbb5f0;
            *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_030a8684;
            uVar4 = *(uint *)(lVar23 + 0x18);
            if (uVar4 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar23 + 0x18) = uVar4 + 1;
              plVar22 = (long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
              *plVar22 = (long)plVar11;
              thunk_FUN_01cc8040(plVar22,plVar11);
            }
            else {
              FUN_02b9ef5c(lVar23,plVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar10 = *(long *)(lVar23 + 0x10);
          lVar20 = *(long *)PTR_DAT_03cbb5f0;
          *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_030a8684;
          uVar4 = *(uint *)(lVar23 + 0x18);
          if (uVar4 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar23 + 0x18) = uVar4 + 1;
            puVar12 = (undefined8 *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
            *puVar12 = plVar24;
            thunk_FUN_01cc8040(puVar12,plVar24);
            plVar22 = plVar11;
          }
          else {
            FUN_02b9ef5c(lVar23,plVar24,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            plVar22 = plVar11;
          }
        }
        uVar18 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar8 = uVar8 + 1;
        plVar11 = plVar22;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    if (lVar23 == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cbcd10,*(undefined4 *)(lVar23 + 0x18))
      ;
      FUN_02b9f424(lVar23,plVar11,*(undefined8 *)PTR_DAT_03cc1e30);
    }
  }
  uVar8 = FUN_02ff24d8(plVar22,0,0);
  if ((uVar8 & 1) == 0) {
    uVar2 = 0;
  }
  if (uVar2 != 0 || (uVar25 >> 0xd & 1) != 0) {
    uVar15 = (**(code **)(*unaff_x25 + 0x698))
                       (unaff_x25,unaff_x21,0x10,uVar25,*(undefined8 *)(*unaff_x25 + 0x6a0));
    lVar9 = thunk_FUN_01c8fb4c(uVar15,*(undefined8 *)PTR_DAT_03cbcd18);
    if (lVar9 == 0) goto LAB_030a8684;
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      lVar23 = 0;
      uVar8 = 0;
      uVar18 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      plVar24 = plVar22;
      do {
        if (uVar1 == 0) {
          if (uVar18 <= uVar8)
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
          plVar22 = *(long **)(lVar9 + 0x20 + uVar8 * 8);
          if (plVar22 == (long *)0x0) goto LAB_030a8684;
          pcVar19 = *(code **)(*plVar22 + 0x268);
          uVar15 = *(undefined8 *)(*plVar22 + 0x270);
        }
        else {
          if (uVar18 <= uVar8)
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton;
          plVar22 = *(long **)(lVar9 + 0x20 + uVar8 * 8);
          if (plVar22 == (long *)0x0) goto LAB_030a8684;
          pcVar19 = *(code **)(*plVar22 + 0x278);
          uVar15 = *(undefined8 *)(*plVar22 + 0x280);
        }
        plVar13 = (long *)(*pcVar19)(plVar22,1,uVar15);
        uVar18 = FUN_02ff24d8(plVar13,0,0);
        plVar22 = plVar24;
        if ((uVar18 & 1) == 0) {
          uVar15 = FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cb7068,iStack000000000000005c);
          if (*(int *)(*(long *)PTR_DAT_03cb63d8 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c(*(long *)PTR_DAT_03cb63d8);
          }
          if (plVar13 != (long *)0x0) {
            bVar3 = *(byte *)(*(long *)PTR_DAT_03cbb4d0 + 0x130);
            if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) !=
                *(long *)PTR_DAT_03cbb4d0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5cf54(plVar13);
            }
          }
          uVar18 = FUN_030a29c8(plVar13,uVar25,3,uVar15);
          if (((uVar18 & 1) != 0) &&
             (uVar18 = FUN_02ff24d8(plVar24,0,0), plVar22 = plVar13, (uVar18 & 1) == 0)) {
            if (lVar23 == 0) {
              lVar23 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_DAT_03cbb608);
              FUN_02b9e774(lVar23,*(undefined4 *)(lVar9 + 0x18),*(undefined8 *)PTR_DAT_03cc1e38);
              if (lVar23 == 0) goto LAB_030a8684;
              lVar10 = *(long *)(lVar23 + 0x10);
              lVar20 = *(long *)PTR_DAT_03cbb5f0;
              *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_030a8684;
              uVar2 = *(uint *)(lVar23 + 0x18);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar23 + 0x18) = uVar2 + 1;
                plVar22 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                *plVar22 = (long)plVar24;
                thunk_FUN_01cc8040(plVar22,plVar24);
              }
              else {
                FUN_02b9ef5c(lVar23,plVar24,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar10 = *(long *)(lVar23 + 0x10);
            lVar20 = *(long *)PTR_DAT_03cbb5f0;
            *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_030a8684;
            uVar2 = *(uint *)(lVar23 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar23 + 0x18) = uVar2 + 1;
              plVar22 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
              *plVar22 = (long)plVar13;
              thunk_FUN_01cc8040(plVar22,plVar13);
              plVar22 = plVar24;
            }
            else {
              FUN_02b9ef5c(lVar23,plVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              plVar22 = plVar24;
            }
          }
        }
        uVar18 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar8 = uVar8 + 1;
        plVar24 = plVar22;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar9 + 0x18));
      if (lVar23 != 0) {
        plVar11 = (long *)FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cbcd10,
                                       *(undefined4 *)(lVar23 + 0x18));
        FUN_02b9f424(lVar23,plVar11,*(undefined8 *)PTR_DAT_03cc1e30);
      }
    }
  }
  uVar8 = FUN_02ff249c(plVar22,0,0);
  if ((uVar8 & 1) != 0) {
    if ((plVar11 == (long *)0x0) && (iStack000000000000005c == 0)) {
      if ((plVar22 == (long *)0x0) ||
         (lVar9 = (**(code **)(*plVar22 + 0x378))(plVar22,*(undefined8 *)(*plVar22 + 0x380)),
         lVar9 == 0)) goto LAB_030a8684;
      if ((*(long *)(lVar9 + 0x18) == 0) && ((uVar25 >> 0x12 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x030a8270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar15 = (**(code **)(*plVar22 + 0x308))
                           (plVar22,unaff_x22,uVar25,unaff_x23,unaff_x24,unaff_x28,
                            *(undefined8 *)(*plVar22 + 0x310));
        return uVar15;
      }
LAB_030a8278:
      plVar11 = (long *)FUN_01c5ca18(*(undefined8 *)PTR_DAT_03cbcd10,1);
      if (plVar11 == (long *)0x0) goto LAB_030a8684;
      if ((plVar22 != (long *)0x0) &&
         (lVar9 = thunk_FUN_01c8fb4c(plVar22,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
        uVar15 = thunk_FUN_01c9d12c();
                    /* WARNING: Subroutine does not return */
        FUN_01c5ca98(uVar15,0);
      }
      if ((int)plVar11[3] == 0) {
Unity_XR_OpenVR_OpenVROculusTouchController__set_secondaryButton:
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbdc();
      }
      plVar11[4] = (long)plVar22;
      thunk_FUN_01cc8040(plVar11 + 4,plVar22);
    }
    else if (plVar11 == (long *)0x0) goto LAB_030a8278;
    if (unaff_x24 == 0) {
      lVar23 = *(long *)PTR_DAT_03cb7a78;
      lVar9 = *(long *)(lVar23 + 0x38);
      if (lVar9 == 0) {
        FUN_01c8c87c(lVar23);
        lVar9 = *(long *)(lVar23 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01c8c820();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      lVar9 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01c8c820();
      }
      in_stack_00000078 = **(undefined8 **)(lVar9 + 0xb8);
    }
    in_stack_00000070 = 0;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    plVar22 = (long *)(**(code **)(*unaff_x23 + 0x188))
                                (unaff_x23,uVar25,plVar11,&stack0x00000078,in_stack_00000040,
                                 unaff_x28,in_stack_00000050,&stack0x00000070);
    uVar8 = FUN_02ff209c(plVar22,0,0);
    if ((uVar8 & 1) == 0) {
      if (plVar22 != (long *)0x0) {
        lVar9 = *plVar22;
        bVar3 = *(byte *)(*(long *)PTR_DAT_03cbab58 + 0x130);
        if ((*(byte *)(lVar9 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03cbab58))
        {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cf54(plVar22);
        }
        uVar15 = (**(code **)(lVar9 + 0x308))
                           (plVar22,unaff_x22,uVar25,unaff_x23,in_stack_00000078,unaff_x28,
                            *(undefined8 *)(lVar9 + 0x310));
        if (in_stack_00000070 != 0) {
          if (unaff_x23 == (long *)0x0) goto LAB_030a8684;
          (**(code **)(*unaff_x23 + 0x1a8))
                    (unaff_x23,&stack0x00000078,in_stack_00000070,
                     *(undefined8 *)(*unaff_x23 + 0x1b0));
        }
        return uVar15;
      }
LAB_030a8684:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
  }
  uVar14 = (**(code **)(*unaff_x25 + 0x2c8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x2d0));
  thunk_FUN_01cb9718(PTR_DAT_03cb63e8);
  uVar15 = thunk_FUN_01c8fc48();
  FUN_03070148(uVar15,uVar14,unaff_x21,0);
LAB_030a8800:
  uVar14 = thunk_FUN_01cb9718(PTR_DAT_03cc1ea0);
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar15,uVar14);
}


