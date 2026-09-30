/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 0511e8fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0511f618) */

void OVRManager__InitOVRManager(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  uint unaff_w20;
  long lVar9;
  uint unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  long *unaff_x27;
  uint unaff_w28;
  uint unaff_w29;
  undefined1 auVar10 [16];
  long in_stack_00000008;
  undefined2 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
code_r0x0511e8fc:
  puVar5 = (undefined8 *)(param_1 + 0x138);
  while (uVar4 = (*(code *)*puVar5)(), (uVar4 & 1) != 0) {
    lVar7 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0511e95c;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_0511e95c:
    auVar10 = (*(code *)*puVar5)();
    lVar7 = auVar10._8_8_;
    uVar6 = auVar10._0_8_;
    uVar2 = FUN_0516ffe8(uVar6,0);
    if (uVar2 < unaff_w29) {
      if (unaff_w26 < uVar2) {
        if (unaff_w28 < uVar2) {
          if (uVar2 < 0x7a472401) {
            if (uVar2 == 0x720625cd) {
              uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780b18,0);
              if ((uVar4 & 1) != 0) {
                lVar9 = *unaff_x27;
                if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar2 = FUN_0513b614(lVar7,0);
                _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
                FUN_03dc8178(&stack0x00000010,uVar2 & 1,*(undefined8 *)PTR_DAT_067769b0);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                *(undefined2 *)(lVar9 + 0x80) = uStack0000000000000010;
              }
            }
            else if ((uVar2 == 0x7a472400) &&
                    (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780b08,0),
                    (uVar4 & 1) != 0)) {
              FUN_05120ae0(in_stack_00000008,lVar7);
            }
          }
          else if (uVar2 == 0x816cb000) {
            uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780af8,0);
            if ((uVar4 & 1) != 0) {
              FUN_05120b9c(in_stack_00000008,lVar7);
            }
          }
          else if ((uVar2 == 0x848c8620) &&
                  (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780b28,0),
                  (uVar4 & 1) != 0)) {
            lVar9 = *unaff_x27;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar2 = FUN_0513b614(lVar7,0);
            _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
            FUN_03dc8178(&stack0x00000010,uVar2 & 1,*(undefined8 *)PTR_DAT_067769b0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined2 *)(lVar9 + 0x20) = uStack0000000000000010;
          }
        }
        else if (uVar2 == 0x5127f14d) {
          uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_067686e0,0);
          if ((uVar4 & 1) != 0) {
            lVar9 = *unaff_x27;
            uVar6 = FUN_0511f904(uVar4,lVar7);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined8 *)(lVar9 + 0x30) = uVar6;
          }
        }
        else if (uVar2 == 0x5bf2f681) {
          uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06769c80,0);
          if ((uVar4 & 1) != 0) {
            lVar9 = *unaff_x27;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_0513ec68(lVar7,0);
            _uStack0000000000000010 = 0;
            in_stack_00000018 = 0;
            FUN_03dcb204(&stack0x00000010,*(undefined8 *)PTR_DAT_0677dc00);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined8 *)(lVar9 + 0x78) = in_stack_00000018;
            *(ulong *)(lVar9 + 0x70) = _uStack0000000000000010;
          }
        }
        else if ((uVar2 == unaff_w28) &&
                (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780b38,0),
                (uVar4 & 1) != 0)) {
          lVar9 = *unaff_x27;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar2 = FUN_0513b614(lVar7,0);
          _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
          FUN_03dc8178(&stack0x00000010,uVar2 & 1,*(undefined8 *)PTR_DAT_067769b0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined2 *)(lVar9 + 0x82) = uStack0000000000000010;
        }
      }
      else if (uVar2 < 0x150efe0e) {
        if (uVar2 == 0x11de6cdc) {
          uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06768be0,0);
          if ((uVar4 & 1) != 0) {
            lVar9 = *(long *)(in_stack_00000008 + 0x28);
            uVar6 = FUN_0511fed4(in_stack_00000008,lVar7);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            puVar5 = (undefined8 *)(lVar9 + 0xb8);
            *puVar5 = uVar6;
            thunk_FUN_02dd37b4(puVar5);
          }
        }
        else if (uVar2 == 0x13f0fb79) {
          uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780b00,0);
          if ((uVar4 & 1) != 0) {
            lVar9 = *unaff_x27;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar3 = FUN_0513ca00(lVar7,0);
            _uStack0000000000000010 = 0;
            FUN_03dce070(&stack0x00000010,uVar3,*(undefined8 *)PTR_DAT_067675e0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(ulong *)(lVar9 + 0x84) = _uStack0000000000000010;
          }
        }
        else if ((uVar2 == 0x150efe0d) &&
                (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780af0,0),
                (uVar4 & 1) != 0)) {
          lVar9 = *unaff_x27;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0513ec68(lVar7,0);
          _uStack0000000000000010 = 0;
          in_stack_00000018 = 0;
          FUN_03dcb204(&stack0x00000010,*(undefined8 *)PTR_DAT_0677dc00);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined8 *)(lVar9 + 0x58) = in_stack_00000018;
          *(ulong *)(lVar9 + 0x50) = _uStack0000000000000010;
        }
      }
      else if (uVar2 < 0x346f3b6a) {
        if (uVar2 == 0x1c9c30e1) {
          uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780b30,0);
          if ((uVar4 & 1) != 0) {
            FUN_05120a24(in_stack_00000008,lVar7);
          }
        }
        else if ((uVar2 == 0x346f3b69) &&
                (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_0676ded8,0),
                (uVar4 & 1) != 0)) {
          lVar9 = *unaff_x27;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_0513f030(lVar7,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          puVar5 = (undefined8 *)(lVar9 + 0x28);
          *puVar5 = uVar6;
          thunk_FUN_02dd37b4(puVar5);
        }
      }
      else if (uVar2 == 0x37386ae0) {
        uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06769370,0);
        if ((uVar4 & 1) != 0) {
          lVar9 = *unaff_x27;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_0513f030(lVar7,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          puVar5 = (undefined8 *)(lVar9 + 0x10);
          *puVar5 = uVar6;
          thunk_FUN_02dd37b4(puVar5);
        }
      }
      else if ((uVar2 == unaff_w26) &&
              (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780c20,0), (uVar4 & 1) != 0
              )) {
        FUN_051204bc(in_stack_00000008,lVar7);
      }
    }
    else if (unaff_w20 < uVar2) {
      if (uVar2 < 0xd1f6a663) {
        if (uVar2 < 0xb99d8553) {
          if (uVar2 == 0xb0443bf7) {
            uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780b10,0);
            if ((uVar4 & 1) != 0) {
              lVar9 = *unaff_x27;
              if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar3 = FUN_0513ca00(lVar7,0);
              _uStack0000000000000010 = 0;
              FUN_03dce070(&stack0x00000010,uVar3,*(undefined8 *)PTR_DAT_067675e0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              *(ulong *)(lVar9 + 0x40) = _uStack0000000000000010;
            }
          }
          else if ((uVar2 == 0xb99d8552) &&
                  (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06771088,0),
                  (uVar4 & 1) != 0)) {
            lVar9 = *unaff_x27;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar6 = FUN_0513f030(lVar7,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined8 *)(lVar9 + 0x100) = uVar6;
            thunk_FUN_02dd37b4(lVar9 + 0x100);
          }
        }
        else if (uVar2 == 0xce0beff7) {
          uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_0676aed8,0);
          if ((uVar4 & 1) != 0) {
            lVar9 = *unaff_x27;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar2 = FUN_0513b614(lVar7,0);
            _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
            FUN_03dc8178(&stack0x00000010,uVar2 & 1,*(undefined8 *)PTR_DAT_067769b0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined2 *)(lVar9 + 0x22) = uStack0000000000000010;
          }
        }
        else if ((uVar2 == 0xd1f6a662) &&
                (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780c18,0),
                (uVar4 & 1) != 0)) {
          lVar9 = *unaff_x27;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          bVar1 = FUN_0513b614(lVar7,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(byte *)(lVar9 + 0xb1) = bVar1 & 1;
        }
      }
      else if (uVar2 < 0xeb4bb271) {
        if (uVar2 == 0xd23308c1) {
          uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_0676aea0,0);
          if ((uVar4 & 1) != 0) {
            lVar9 = *unaff_x27;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar3 = FUN_0513ca00(lVar7,0);
            _uStack0000000000000010 = 0;
            FUN_03dce070(&stack0x00000010,uVar3,*(undefined8 *)PTR_DAT_067675e0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(ulong *)(lVar9 + 0x48) = _uStack0000000000000010;
          }
        }
        else if ((uVar2 == 0xeb4bb270) &&
                (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780b60,0),
                (uVar4 & 1) != 0)) {
          lVar9 = *(long *)(in_stack_00000008 + 0x28);
          uVar6 = FUN_0511fed4(in_stack_00000008,lVar7);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          puVar5 = (undefined8 *)(lVar9 + 200);
          *puVar5 = uVar6;
          thunk_FUN_02dd37b4(puVar5);
        }
      }
      else if (uVar2 == 0xf618f139) {
        uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780ae8,0);
        if ((uVar4 & 1) != 0) {
          lVar9 = *unaff_x27;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar2 = FUN_0513b614(lVar7,0);
          _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
          FUN_03dc8178(&stack0x00000010,uVar2 & 1,*(undefined8 *)PTR_DAT_067769b0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined2 *)(lVar9 + 0x24) = uStack0000000000000010;
        }
      }
      else if ((uVar2 == 0xfcfb3733) &&
              (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780b58,0), (uVar4 & 1) != 0
              )) {
        lVar9 = *unaff_x27;
        if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_0513ca00(lVar7,0);
        _uStack0000000000000010 = 0;
        FUN_03dce070(&stack0x00000010,uVar3,*(undefined8 *)PTR_DAT_067675e0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(ulong *)(lVar9 + 0x8c) = _uStack0000000000000010;
      }
    }
    else if (unaff_w23 < uVar2) {
      if (uVar2 < 0x9b8caa56) {
        if (uVar2 == 0x9865b509) {
          uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_0676b5c8,0);
          if ((uVar4 & 1) != 0) {
            lVar9 = *unaff_x27;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar6 = FUN_0513f030(lVar7,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            puVar5 = (undefined8 *)(lVar9 + 0x18);
            *puVar5 = uVar6;
            thunk_FUN_02dd37b4(puVar5);
          }
        }
        else if ((uVar2 == 0x9b8caa55) &&
                (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780c10,0),
                (uVar4 & 1) != 0)) {
          lVar9 = *unaff_x27;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_0513f030(lVar7,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          puVar5 = (undefined8 *)(lVar9 + 0xd8);
          *puVar5 = uVar6;
          thunk_FUN_02dd37b4(puVar5);
        }
      }
      else if (uVar2 == 0x9d85d64e) {
        uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780b40,0);
        if ((uVar4 & 1) != 0) {
          FUN_05121048(in_stack_00000008,lVar7);
        }
      }
      else if ((uVar2 == unaff_w20) &&
              (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780b20,0), (uVar4 & 1) != 0
              )) {
        lVar9 = *unaff_x27;
        uVar6 = FUN_0511f904(uVar4,lVar7);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(undefined8 *)(lVar9 + 0xe8) = uVar6;
      }
    }
    else if (uVar2 == 0x873d0129) {
      uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06780b48,0);
      if ((uVar4 & 1) != 0) {
        lVar9 = *unaff_x27;
        if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = FUN_0513f030(lVar7,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        puVar5 = (undefined8 *)(lVar9 + 0x38);
        *puVar5 = uVar6;
        thunk_FUN_02dd37b4(puVar5);
      }
    }
    else if (uVar2 == 0x933b5bde) {
      uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_0676a770,0);
      if ((uVar4 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar9 = *unaff_x27;
        uVar6 = FUN_05143844(lVar7,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        puVar5 = (undefined8 *)(lVar9 + 0xf0);
        *puVar5 = uVar6;
        thunk_FUN_02dd37b4(puVar5);
      }
    }
    else if ((uVar2 == unaff_w23) &&
            (uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06769cc0,0), (uVar4 & 1) != 0))
    {
      lVar9 = *unaff_x27;
      if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0513ec68(lVar7,0);
      _uStack0000000000000010 = 0;
      in_stack_00000018 = 0;
      FUN_03dcb204(&stack0x00000010,*(undefined8 *)PTR_DAT_0677dc00);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(undefined8 *)(lVar9 + 0x68) = in_stack_00000018;
      *(ulong *)(lVar9 + 0x60) = _uStack0000000000000010;
    }
    param_1 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          param_1 = param_1 + (long)*piVar8 * 0x10;
          goto code_r0x0511e8fc;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0511f5e0;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_0511f5e0:
    (*(code *)*puVar5)();
  }
  return;
}


