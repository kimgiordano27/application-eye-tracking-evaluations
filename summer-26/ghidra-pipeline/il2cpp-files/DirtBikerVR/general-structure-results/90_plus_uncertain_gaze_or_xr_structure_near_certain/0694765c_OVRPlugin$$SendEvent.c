/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 0694765c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * OVRPlugin__SendEvent(undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  long unaff_x19;
  uint unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x26;
  long *unaff_x29;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uStack000000000000001c;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084b6690);
  FUN_03a8a718(PTR_DAT_084b6698);
  FUN_03a8a718(PTR_DAT_08489ea0);
  FUN_03a8a718(PTR_DAT_084b66a0);
  FUN_03a8a718(PTR_DAT_084b66a8);
  FUN_03a8a718(PTR_DAT_084b66b0);
  FUN_03a8a718(PTR_DAT_084b66b8);
  FUN_03a8a718(PTR_DAT_084b66c0);
  *(undefined1 *)(unaff_x19 + 0xfd7) = 1;
  puVar1 = PTR_DAT_084b66b0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000060 = 0;
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07c4f4f4(*(undefined8 *)puVar1,0);
  if ((unaff_x23 == 0) || (lVar6 = FUN_07c9c69c(), lVar6 == 0)) goto LAB_069484b8;
  fVar18 = (float)FUN_07cacacc(lVar6,0);
  if (DAT_08974f84 == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    DAT_08974f84 = '\x01';
  }
  lVar15 = *(long *)(*(long *)PTR_DAT_084868a0 + 0xb8);
  param_3 = param_3 - *(float *)(lVar15 + 0x14);
  fVar18 = fVar18 - *(float *)(lVar15 + 0xc);
  param_2 = param_2 - *(float *)(lVar15 + 0x10);
  if (DAT_015c561c <= param_3 * param_3 + fVar18 * fVar18 + param_2 * param_2) {
    puVar17 = (undefined8 *)PTR_DAT_084b6610;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar17 = (undefined8 *)PTR_DAT_084b6610;
    }
LAB_0694804c:
    FUN_07c4fb40(*puVar17,0);
    return (long *)0x0;
  }
  fVar18 = DAT_015c561c;
  FUN_07c998ec();
  lVar15 = FUN_04561f74();
  if (lVar15 == 0) goto LAB_069484b8;
  if (*(long *)(lVar15 + 0x18) == 0) {
    puVar17 = (undefined8 *)PTR_DAT_084b6678;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar17 = (undefined8 *)PTR_DAT_084b6678;
    }
    goto LAB_0694804c;
  }
  uVar7 = thunk_FUN_07ca227c();
  uVar7 = FUN_065c0764(*(undefined8 *)PTR_DAT_084b66a8,uVar7,0);
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x29);
  }
  FUN_07c4f4f4(uVar7,0);
  lVar15 = FUN_07c9d9fc();
  if (lVar15 != 0) {
    lVar15 = FUN_04561560(lVar15,*(undefined8 *)PTR_DAT_08488150);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
    }
    uVar8 = FUN_07c9e200(lVar15,0,0);
    if ((uVar8 & 1) != 0) {
      lVar15 = FUN_07c9d9fc();
      if (lVar15 == 0) goto LAB_069484b8;
      lVar15 = FUN_045614d0(lVar15,*(undefined8 *)PTR_DAT_0848de10);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
      }
      uVar8 = FUN_07c9e200(lVar15,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4fb40(*(undefined8 *)PTR_DAT_084b6648,0);
      }
    }
    if (lVar15 != 0) {
      uStack000000000000001c = unaff_w21;
      FUN_07d3077c(0x44af0000,lVar15,0);
      FUN_07d319d0(lVar15,1,0);
      FUN_07d3222c(lVar15,0);
      FUN_07d322e0(lVar15,0);
      if (unaff_x26 != 0) {
        FUN_04de90b8(&stack0x00000038);
        puVar4 = PTR_DAT_084b6640;
        puVar3 = PTR_DAT_0848e8a0;
        puVar2 = PTR_DAT_08488a98;
        puVar1 = PTR_DAT_08486760;
        fVar21 = DAT_015c5bc8;
        fVar23 = DAT_015c5b88;
        uVar20 = DAT_015c5b5c;
        fVar22 = DAT_015c5990;
        in_stack_00000058 = CONCAT44(fStack0000000000000044,uStack0000000000000040);
        in_stack_00000050 = CONCAT44(uStack000000000000003c,fStack0000000000000038);
        in_stack_00000060 = CONCAT44(uStack000000000000004c,fStack0000000000000048);
        while (uVar8 = FUN_061c1964(&stack0x00000050,*(undefined8 *)puVar2),
              lVar14 = in_stack_00000060, (uVar8 & 1) != 0) {
          if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar7 = thunk_FUN_07ca227c(in_stack_00000060,0);
          uVar7 = FUN_065c0764(uVar7,*(undefined8 *)PTR_DAT_084b6628,0);
          uVar9 = FUN_065c0764(*(undefined8 *)PTR_DAT_084b6670,uVar7,0);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4f4f4(uVar9,0);
          lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
          FUN_07c9d2fc(lVar10,uVar7,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_07c998ec(lVar10,*(undefined8 *)PTR_DAT_084b6448,0);
          lVar11 = FUN_07c9c69c(lVar10,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_07cacdbc(lVar11,lVar6,0);
          lVar11 = FUN_07c9c69c(lVar10,0);
          lVar12 = FUN_07c9c69c(lVar14,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar19 = FUN_07cac280(lVar12,0);
          param_4 = FUN_07cac4e0(lVar6,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_07cad038(uVar19,lVar11,0);
          uVar7 = thunk_FUN_07ca227c(lVar10,0);
          uVar7 = FUN_065c0764(*(undefined8 *)puVar4,uVar7,0);
          FUN_07c4f4f4(uVar7,0);
          if (unaff_w24 == 1) {
            plVar13 = (long *)FUN_045614d0(lVar10,*(undefined8 *)PTR_DAT_084b65e0);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            (**(code **)(*plVar13 + 0x5b8))(plVar13,lVar14,*(undefined8 *)(*plVar13 + 0x5c0));
            lVar11 = FUN_04561560(lVar10,*(undefined8 *)PTR_DAT_084b65f0);
            if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar8 = FUN_07c9c218(lVar11,0,0);
            if ((uVar8 & 1) != 0) {
              lVar10 = FUN_04561560(lVar10,*(undefined8 *)PTR_DAT_084b65f0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_07fc86d4(lVar10,0);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              param_3 = fVar23;
              FUN_07fc87b0(lVar11,0);
              FUN_07fc8b94(uVar20,lVar11,0);
            }
          }
          else {
            plVar13 = (long *)FUN_045614d0(lVar10,*(undefined8 *)PTR_DAT_084b65e8);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_069771d0(plVar13,0);
            lVar10 = FUN_07c9c69c(lVar14,0);
            lVar11 = (**(code **)(*plVar13 + 0x5a8))(plVar13,*(undefined8 *)(*plVar13 + 0x5b0));
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar7 = FUN_07c9c69c(lVar11,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0(uVar7,uVar7);
            }
            FUN_07cacdbc(lVar10,uVar7,0);
            lVar10 = FUN_07c9c69c(lVar14,0);
            if (DAT_08974d8f == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d8f = '\x01';
            }
            puVar16 = *(undefined4 **)(*(long *)PTR_DAT_084868a0 + 0xb8);
            uVar19 = *puVar16;
            fVar18 = (float)puVar16[1];
            param_3 = (float)puVar16[2];
            if (DAT_08974d8a == '\0') {
              FUN_03a8a718(PTR_DAT_08486860);
              DAT_08974d8a = '\x01';
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            param_4 = **(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
            FUN_07cad124(uVar19,lVar10,0);
          }
          lVar10 = FUN_04561560(lVar14,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar8 = FUN_07c9c218(lVar10,0,0);
          if ((uVar8 & 1) == 0) {
            uVar7 = thunk_FUN_07ca227c(lVar14,0);
            uVar7 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b6690,uVar7,
                                 *(undefined8 *)PTR_DAT_084b6668,0);
            if (*(int *)(*unaff_x29 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_07c4adbc(uVar7,0);
          }
          else {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_07c61260(&stack0x00000038,lVar10,0);
            fVar5 = fStack0000000000000048;
            FUN_07c61260(&stack0x00000038,lVar10,0);
            fVar24 = fStack0000000000000044;
            if ((fVar5 < fVar22) || (1.0 < fVar5)) {
              fStack0000000000000038 = fVar5;
              uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000038);
              uVar7 = FUN_065c412c(*(undefined8 *)PTR_DAT_084b6618,uVar7,0);
              if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_07c4adbc(uVar7,0);
            }
            else {
              fStack0000000000000038 = fVar5;
              uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000038);
              uVar7 = FUN_065c412c(*(undefined8 *)PTR_DAT_084b6698,uVar7,0);
              if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_07c4f4f4(uVar7,0);
              (**(code **)(*plVar13 + 0x238))(fVar5,plVar13,*(undefined8 *)(*plVar13 + 0x240));
            }
            fVar24 = fVar24 + fVar24;
            fStack0000000000000038 = fVar24;
            if (((fVar24 < fVar21) || (1.0 < fVar24)) || (fVar5 < fVar24)) {
              uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000038);
              uVar7 = FUN_065c412c(*(undefined8 *)PTR_DAT_084b6600,uVar7,0);
              if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_07c4adbc(uVar7,0);
            }
            else {
              uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000038);
              uVar7 = FUN_065c412c(*(undefined8 *)PTR_DAT_084b66a0,uVar7,0);
              if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_07c4f4f4(uVar7,0);
              (**(code **)(*plVar13 + 600))(fVar24,plVar13,*(undefined8 *)(*plVar13 + 0x260));
            }
          }
        }
        FUN_061c1960(&stack0x00000050,*(undefined8 *)PTR_DAT_08488a70);
        plVar13 = (long *)FUN_04561560(unaff_x23,*(undefined8 *)PTR_DAT_084b60b8);
        if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
        }
        uVar8 = FUN_07c9e200(plVar13,0,0);
        if ((uVar8 & 1) == 0) {
          if (plVar13 == (long *)0x0) goto LAB_069484b8;
        }
        else {
          uVar7 = thunk_FUN_07ca227c(unaff_x23,0);
          uVar7 = FUN_065c0764(*(undefined8 *)PTR_DAT_084b6658,uVar7,0);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*unaff_x29);
          }
          FUN_07c4f4f4(uVar7,0);
          plVar13 = (long *)FUN_045614d0(unaff_x23,*(undefined8 *)PTR_DAT_084b65d8);
          if (plVar13 == (long *)0x0) goto LAB_069484b8;
          (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
        }
        lVar14 = FUN_07c98f88(plVar13,0);
        FUN_0694a0b0(plVar13);
        if (lVar14 != 0) {
          FUN_07cadf5c(lVar14,0);
          FUN_07d31014(lVar15,0);
          if ((unaff_w22 & 1) != 0) {
            if (*(int *)(*unaff_x29 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6620,0);
            lVar15 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
            FUN_07c9d2fc(lVar15,*(undefined8 *)PTR_DAT_084b6650,0);
            if ((lVar15 == 0) || (lVar14 = FUN_07c9c69c(lVar15,0), lVar14 == 0)) goto LAB_069484b8;
            FUN_07cacdbc(lVar14,lVar6,0);
            FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6608,0);
            lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
            FUN_07c9d2fc(lVar14,*(undefined8 *)PTR_DAT_084b66b8,0);
            if (lVar14 == 0) goto LAB_069484b8;
            lVar10 = FUN_07c9c69c(lVar14,0);
            uVar7 = FUN_07c9c69c(lVar15,0);
            if (lVar10 == 0) goto LAB_069484b8;
            FUN_07cacdbc(lVar10,uVar7,0);
            lVar10 = FUN_07c98f88(plVar13,0);
            lVar11 = FUN_07c9c69c(lVar14,0);
            if (lVar10 == 0) goto LAB_069484b8;
            uVar20 = FUN_07cac280(lVar10,0);
            fVar22 = fVar18;
            fVar23 = param_3;
            uVar19 = FUN_07cac4e0(lVar10,0);
            if (lVar11 == 0) goto LAB_069484b8;
            FUN_07cad038(uVar20,fVar18,param_3,uVar19,fVar22,fVar23,param_4,lVar11,0);
            lVar10 = FUN_045614d0(lVar14,*(undefined8 *)PTR_DAT_08494af8);
            if (lVar10 == 0) goto LAB_069484b8;
            FUN_07c46614(0x42a00000,lVar10,0);
            FUN_045614d0(lVar14,*(undefined8 *)PTR_DAT_084b65c0);
            lVar14 = FUN_045614d0(lVar14,*(undefined8 *)PTR_DAT_084b65d0);
            uVar7 = FUN_07c98f88(plVar13,0);
            if (lVar14 == 0) goto LAB_069484b8;
            *(undefined8 *)(lVar14 + 0x20) = uVar7;
            thunk_FUN_03afed3c();
            FUN_07c998cc(lVar14,*(undefined8 *)PTR_DAT_08489ea0,0);
            FUN_045614d0(lVar15,*(undefined8 *)PTR_DAT_084b65c8);
          }
          if ((uStack000000000000001c & 1) == 0) {
LAB_06948418:
            if (*(int *)(*unaff_x29 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b65f8,0);
            FUN_06939cec(plVar13,0);
            FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b66c0,0);
            FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6680,0);
            return plVar13;
          }
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6660,0);
          puVar1 = PTR_DAT_08487320;
          lVar15 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
          FUN_07c9d2fc(lVar15,*(undefined8 *)PTR_DAT_084b6638,0);
          lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
          FUN_07c9d2fc(lVar14,*(undefined8 *)PTR_DAT_084b6688,0);
          if (((lVar15 != 0) && (lVar10 = FUN_07c9c69c(lVar15,0), lVar10 != 0)) &&
             ((FUN_07cacdbc(lVar10,lVar6,0), lVar14 != 0 &&
              (lVar10 = FUN_07c9c69c(lVar14,0), lVar10 != 0)))) {
            FUN_07cacdbc(lVar10,lVar6,0);
            lVar10 = FUN_07c9c69c(lVar15,0);
            fVar21 = (float)FUN_07cac280(lVar6,0);
            fVar22 = fVar18;
            fVar23 = param_3;
            fVar24 = (float)FUN_07cac7a8(lVar6,0);
            if (lVar10 != 0) {
              param_3 = param_3 - fVar23;
              fVar18 = fVar18 - fVar22;
              FUN_07cac358(fVar21 - fVar24,fVar18,param_3,lVar10,0);
              lVar10 = FUN_07c9c69c(lVar14,0);
              fVar21 = (float)FUN_07cac280(lVar6,0);
              fVar22 = fVar18;
              fVar23 = param_3;
              fVar24 = (float)FUN_07cac7a8(lVar6,0);
              if (lVar10 != 0) {
                FUN_07cac358(fVar21 + fVar24,fVar18 + fVar22,param_3 + fVar23,lVar10,0);
                puVar1 = PTR_DAT_084b5a40;
                FUN_07c998ec(lVar15,*(undefined8 *)PTR_DAT_084b5a40,0);
                FUN_07c998ec(lVar14,*(undefined8 *)puVar1,0);
                goto LAB_06948418;
              }
            }
          }
        }
      }
    }
  }
LAB_069484b8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


