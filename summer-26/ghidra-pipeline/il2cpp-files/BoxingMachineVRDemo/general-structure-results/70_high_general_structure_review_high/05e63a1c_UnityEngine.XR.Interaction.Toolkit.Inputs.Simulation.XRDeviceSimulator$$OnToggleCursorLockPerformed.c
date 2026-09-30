/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator$$OnToggleCursorLockPerformed
ENTRY_POINT: 05e63a1c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__OnToggleCursorLockPerformed
               (void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  double dVar13;
  double dVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  long unaff_x19;
  long *unaff_x20;
  long *plVar24;
  long lVar25;
  long *unaff_x28;
  long unaff_x29;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000028;
  
  FUN_02d6084c();
  *(undefined1 *)(unaff_x19 + 0x81d) = 1;
  lVar25 = *unaff_x28;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar15 = FUN_0606a004(lVar25,0,0);
  puVar12 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Clear<InputControl>__;
  puVar11 = PTR_DAT_0676ed58;
  puVar10 = PTR_DAT_06762f38;
  puVar9 = PTR_DAT_06762078;
  puVar8 = PTR_DAT_06762070;
  puVar7 = PTR_DAT_0675ee10;
  puVar6 = PTR_DAT_0675eb88;
  puVar5 = PTR_DAT_0675eb80;
  puVar4 = PTR_DAT_0675e6d8;
  if (((uVar15 & 1) != 0) && (*(char *)(unaff_x29 + 0x10d) == '\0')) {
    return;
  }
  UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_SimulatedHandExpression__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
            ();
  fVar30 = *(float *)(unaff_x29 + 0xf8);
  fVar29 = fVar30 * -0.5;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  sincos((double)fVar29,&stack0x00000028,&stack0x00000018);
  dVar14 = in_stack_00000028;
  dVar13 = in_stack_00000018;
  fVar27 = *(float *)(unaff_x29 + 0xec);
  fVar31 = *(float *)(unaff_x29 + 0xf0);
  lVar25 = FUN_02d60934(*(undefined8 *)puVar7,6);
  FUN_04f2efa4(lVar25,*(undefined8 *)puVar12,0);
  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
  FUN_03b2e3e8(lVar16,*(undefined8 *)puVar9);
  lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar10);
  FUN_03b2bc20(lVar17,*(undefined8 *)puVar11);
  lVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
  FUN_03a37a7c(lVar18,*(undefined8 *)puVar6);
  plVar24 = (long *)PTR_DAT_06762080;
  if (lVar16 != 0) {
    lVar20 = *(long *)(lVar16 + 0x10);
    lVar22 = *(long *)PTR_DAT_06762080;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar20 != 0) {
      uVar3 = *(uint *)(lVar16 + 0x18);
      fVar28 = fVar27 * (float)dVar14;
      fVar27 = fVar27 * (float)dVar13;
      fVar26 = fVar31 * 0.5;
      if (uVar3 < *(uint *)(lVar20 + 0x18)) {
        lVar20 = lVar20 + (long)(int)uVar3 * 0xc;
        *(uint *)(lVar16 + 0x18) = uVar3 + 1;
        *(float *)(lVar20 + 0x20) = fVar28;
        *(float *)(lVar20 + 0x24) = fVar26;
        *(float *)(lVar20 + 0x28) = fVar27;
      }
      else {
        FUN_03b2ec7c(fVar28,fVar26,fVar27,lVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
      lVar20 = *(long *)(lVar16 + 0x10);
      lVar22 = *plVar24;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar20 != 0) {
        uVar3 = *(uint *)(lVar16 + 0x18);
        fVar31 = fVar31 * -0.5;
        if (uVar3 < *(uint *)(lVar20 + 0x18)) {
          lVar20 = lVar20 + (long)(int)uVar3 * 0xc;
          *(uint *)(lVar16 + 0x18) = uVar3 + 1;
          *(float *)(lVar20 + 0x20) = fVar28;
          *(float *)(lVar20 + 0x24) = fVar31;
          *(float *)(lVar20 + 0x28) = fVar27;
        }
        else {
          FUN_03b2ec7c(fVar28,fVar31,fVar27,lVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
        puVar4 = PTR_DAT_06762f20;
        if (lVar17 != 0) {
          lVar20 = *(long *)(lVar17 + 0x10);
          lVar22 = *(long *)PTR_DAT_06762f20;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          uVar19 = DAT_01207ab0;
          if (lVar20 != 0) {
            uVar3 = *(uint *)(lVar17 + 0x18);
            if (uVar3 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar17 + 0x18) = uVar3 + 1;
              *(undefined8 *)(lVar20 + (long)(int)uVar3 * 8 + 0x20) = uVar19;
            }
            else {
              FUN_03b2c488(0,0x3f800000,lVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
            }
            lVar20 = *(long *)(lVar17 + 0x10);
            lVar22 = *(long *)puVar4;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar20 != 0) {
              uVar3 = *(uint *)(lVar17 + 0x18);
              if (uVar3 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar3 + 1;
                *(undefined8 *)(lVar20 + (long)(int)uVar3 * 8 + 0x20) = 0;
              }
              else {
                FUN_03b2c488(0,0,lVar17,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
              puVar5 = PTR_DAT_0675eb90;
              iVar23 = 0;
              do {
                if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                fVar29 = fVar30 * 0.03125 + fVar29;
                sincos((double)fVar29,&stack0x00000010,&stack0x00000008);
                fVar27 = *(float *)(unaff_x29 + 0xec);
                lVar20 = *(long *)(lVar16 + 0x10);
                lVar22 = *plVar24;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar20 == 0) goto LAB_05e64114;
                uVar3 = *(uint *)(lVar16 + 0x18);
                fVar28 = fVar27 * (float)in_stack_00000010;
                fVar27 = fVar27 * (float)in_stack_00000008;
                if (uVar3 < *(uint *)(lVar20 + 0x18)) {
                  lVar20 = lVar20 + (long)(int)uVar3 * 0xc;
                  *(uint *)(lVar16 + 0x18) = uVar3 + 1;
                  *(float *)(lVar20 + 0x20) = fVar28;
                  *(float *)(lVar20 + 0x24) = fVar26;
                  *(float *)(lVar20 + 0x28) = fVar27;
                }
                else {
                  FUN_03b2ec7c(fVar28,fVar26,fVar27,lVar16,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
                lVar20 = *(long *)(lVar16 + 0x10);
                lVar22 = *plVar24;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar20 == 0) goto LAB_05e64114;
                uVar3 = *(uint *)(lVar16 + 0x18);
                if (uVar3 < *(uint *)(lVar20 + 0x18)) {
                  lVar20 = lVar20 + (long)(int)uVar3 * 0xc;
                  *(uint *)(lVar16 + 0x18) = uVar3 + 1;
                  *(float *)(lVar20 + 0x20) = fVar28;
                  *(float *)(lVar20 + 0x24) = fVar31;
                  *(float *)(lVar20 + 0x28) = fVar27;
                }
                else {
                  FUN_03b2ec7c(fVar28,fVar31,fVar27,lVar16,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
                lVar20 = *(long *)(lVar17 + 0x10);
                lVar22 = *(long *)puVar4;
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar20 == 0) goto LAB_05e64114;
                uVar3 = *(uint *)(lVar17 + 0x18);
                iVar1 = iVar23 + 1;
                fVar27 = (float)iVar1 * 0.03125;
                if (uVar3 < *(uint *)(lVar20 + 0x18)) {
                  lVar20 = lVar20 + (long)(int)uVar3 * 8;
                  *(uint *)(lVar17 + 0x18) = uVar3 + 1;
                  *(float *)(lVar20 + 0x20) = fVar27;
                  *(undefined4 *)(lVar20 + 0x24) = 0x3f800000;
                }
                else {
                  FUN_03b2c488(fVar27,0x3f800000,lVar17,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
                lVar20 = *(long *)(lVar17 + 0x10);
                lVar22 = *(long *)puVar4;
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar20 == 0) goto LAB_05e64114;
                uVar3 = *(uint *)(lVar17 + 0x18);
                if (uVar3 < *(uint *)(lVar20 + 0x18)) {
                  lVar20 = lVar20 + (long)(int)uVar3 * 8;
                  *(uint *)(lVar17 + 0x18) = uVar3 + 1;
                  *(float *)(lVar20 + 0x20) = fVar27;
                  *(undefined4 *)(lVar20 + 0x24) = 0;
                }
                else {
                  FUN_03b2c488(fVar27,0,lVar17,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
                if (lVar25 == 0) goto LAB_05e64114;
                if (0 < (int)*(ulong *)(lVar25 + 0x18)) {
                  uVar15 = 0;
                  uVar21 = *(ulong *)(lVar25 + 0x18) & 0xffffffff;
                  do {
                    if (uVar21 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d60af0();
                    }
                    if (lVar18 == 0) goto LAB_05e64114;
                    iVar2 = *(int *)(lVar25 + 0x20 + uVar15 * 4);
                    lVar20 = *(long *)(lVar18 + 0x10);
                    lVar22 = *(long *)puVar5;
                    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                    if (lVar20 == 0) goto LAB_05e64114;
                    uVar3 = *(uint *)(lVar18 + 0x18);
                    iVar2 = iVar2 + iVar23 * 2;
                    if (uVar3 < *(uint *)(lVar20 + 0x18)) {
                      *(uint *)(lVar18 + 0x18) = uVar3 + 1;
                      *(int *)(lVar20 + (long)(int)uVar3 * 4 + 0x20) = iVar2;
                    }
                    else {
                      FUN_03a382d0(lVar18,iVar2,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar21 = (ulong)*(uint *)(lVar25 + 0x18);
                    uVar15 = uVar15 + 1;
                  } while ((long)uVar15 < (long)(int)*(uint *)(lVar25 + 0x18));
                }
                plVar24 = (long *)PTR_DAT_06762080;
                iVar23 = iVar1;
              } while (iVar1 != 0x20);
              lVar25 = *unaff_x28;
              if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar15 = UnityEngine_Font__add_textureRebuilt(lVar25,0,0);
              if ((uVar15 & 1) != 0) {
                lVar25 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06762728);
                FUN_0603d81c(lVar25,0);
                *unaff_x28 = lVar25;
                thunk_FUN_02dd37b4(unaff_x28,lVar25);
                if (*unaff_x28 == 0) goto LAB_05e64114;
                thunk_FUN_0606f6e4(*unaff_x28,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Clear<InputDevice>__
                                   ,0);
              }
              lVar25 = *unaff_x28;
              uVar19 = FUN_03b3075c(lVar16,*(undefined8 *)PTR_DAT_067626e0);
              if (lVar25 != 0) {
                FUN_06040930(lVar25,uVar19,0);
                lVar25 = *unaff_x28;
                uVar19 = FUN_03b2dec0(lVar17,*(undefined8 *)PTR_DAT_06762f28);
                if ((lVar25 != 0) && (FUN_06040b34(lVar25,uVar19,0), lVar18 != 0)) {
                  lVar25 = *unaff_x28;
                  uVar19 = FUN_03a39cac(lVar18,*(undefined8 *)PTR_DAT_0675eb98);
                  if (lVar25 != 0) {
                    FUN_06042188(lVar25,uVar19,0);
                    if (*unaff_x28 != 0) {
                      FUN_06042e34(*unaff_x28,0);
                      if (*unaff_x28 != 0) {
                        FUN_06042f18(*unaff_x28,0,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05e64114:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


