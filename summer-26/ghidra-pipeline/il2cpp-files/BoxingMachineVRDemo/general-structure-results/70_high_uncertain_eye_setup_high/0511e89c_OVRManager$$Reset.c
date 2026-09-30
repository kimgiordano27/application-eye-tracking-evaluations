/*
FUNCTION_NAME: OVRManager$$Reset
ENTRY_POINT: 0511e89c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0511f618) */

void OVRManager__Reset(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  uint unaff_w20;
  long lVar14;
  uint unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w28;
  uint unaff_w29;
  undefined1 auVar15 [16];
  long in_stack_00000008;
  undefined2 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  plVar1 = (long *)(param_1 + 0x28);
  uVar2 = unaff_w26 & 0xffff | 0x3a790000;
  uVar3 = unaff_w28 & 0xffff | 0x64f70000;
  uVar4 = unaff_w20 & 0xffff | 0xa0780000;
  uVar5 = unaff_w23 & 0xffff | 0x93810000;
  do {
    lVar11 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0511e900;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_0511e900:
    uVar12 = (*(code *)*puVar9)();
    if ((uVar12 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar11 = *unaff_x19;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_0511f5c4;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0511e95c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_0511e95c:
    auVar15 = (*(code *)*puVar9)();
    lVar11 = auVar15._8_8_;
    uVar10 = auVar15._0_8_;
    uVar7 = FUN_0516ffe8(uVar10,0);
    if (uVar7 < (unaff_w29 & 0xffff | 0x848c0000)) {
      if (uVar2 < uVar7) {
        if (uVar3 < uVar7) {
          if (uVar7 < 0x7a472401) {
            if (uVar7 == 0x720625cd) {
              uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780b18,0);
              if ((uVar12 & 1) != 0) {
                lVar14 = *plVar1;
                if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar7 = FUN_0513b614(lVar11,0);
                _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
                FUN_03dc8178(&stack0x00000010,uVar7 & 1,*(undefined8 *)PTR_DAT_067769b0);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                *(undefined2 *)(lVar14 + 0x80) = uStack0000000000000010;
              }
            }
            else if ((uVar7 == 0x7a472400) &&
                    (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780b08,0),
                    (uVar12 & 1) != 0)) {
              FUN_05120ae0(in_stack_00000008,lVar11);
            }
          }
          else if (uVar7 == 0x816cb000) {
            uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780af8,0);
            if ((uVar12 & 1) != 0) {
              FUN_05120b9c(in_stack_00000008,lVar11);
            }
          }
          else if ((uVar7 == 0x848c8620) &&
                  (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780b28,0),
                  (uVar12 & 1) != 0)) {
            lVar14 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar7 = FUN_0513b614(lVar11,0);
            _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
            FUN_03dc8178(&stack0x00000010,uVar7 & 1,*(undefined8 *)PTR_DAT_067769b0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined2 *)(lVar14 + 0x20) = uStack0000000000000010;
          }
        }
        else if (uVar7 == 0x5127f14d) {
          uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_067686e0,0);
          if ((uVar12 & 1) != 0) {
            lVar14 = *plVar1;
            uVar10 = FUN_0511f904(uVar12,lVar11);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined8 *)(lVar14 + 0x30) = uVar10;
          }
        }
        else if (uVar7 == 0x5bf2f681) {
          uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06769c80,0);
          if ((uVar12 & 1) != 0) {
            lVar14 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_0513ec68(lVar11,0);
            _uStack0000000000000010 = 0;
            in_stack_00000018 = 0;
            FUN_03dcb204(&stack0x00000010,*(undefined8 *)PTR_DAT_0677dc00);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined8 *)(lVar14 + 0x78) = in_stack_00000018;
            *(ulong *)(lVar14 + 0x70) = _uStack0000000000000010;
          }
        }
        else if ((uVar7 == uVar3) &&
                (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780b38,0),
                (uVar12 & 1) != 0)) {
          lVar14 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar7 = FUN_0513b614(lVar11,0);
          _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
          FUN_03dc8178(&stack0x00000010,uVar7 & 1,*(undefined8 *)PTR_DAT_067769b0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined2 *)(lVar14 + 0x82) = uStack0000000000000010;
        }
      }
      else if (uVar7 < 0x150efe0e) {
        if (uVar7 == 0x11de6cdc) {
          uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06768be0,0);
          if ((uVar12 & 1) != 0) {
            lVar14 = *(long *)(in_stack_00000008 + 0x28);
            uVar10 = FUN_0511fed4(in_stack_00000008,lVar11);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            puVar9 = (undefined8 *)(lVar14 + 0xb8);
            *puVar9 = uVar10;
            thunk_FUN_02dd37b4(puVar9);
          }
        }
        else if (uVar7 == 0x13f0fb79) {
          uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780b00,0);
          if ((uVar12 & 1) != 0) {
            lVar14 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar8 = FUN_0513ca00(lVar11,0);
            _uStack0000000000000010 = 0;
            FUN_03dce070(&stack0x00000010,uVar8,*(undefined8 *)PTR_DAT_067675e0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(ulong *)(lVar14 + 0x84) = _uStack0000000000000010;
          }
        }
        else if ((uVar7 == 0x150efe0d) &&
                (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780af0,0),
                (uVar12 & 1) != 0)) {
          lVar14 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0513ec68(lVar11,0);
          _uStack0000000000000010 = 0;
          in_stack_00000018 = 0;
          FUN_03dcb204(&stack0x00000010,*(undefined8 *)PTR_DAT_0677dc00);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined8 *)(lVar14 + 0x58) = in_stack_00000018;
          *(ulong *)(lVar14 + 0x50) = _uStack0000000000000010;
        }
      }
      else if (uVar7 < 0x346f3b6a) {
        if (uVar7 == 0x1c9c30e1) {
          uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780b30,0);
          if ((uVar12 & 1) != 0) {
            FUN_05120a24(in_stack_00000008,lVar11);
          }
        }
        else if ((uVar7 == 0x346f3b69) &&
                (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_0676ded8,0),
                (uVar12 & 1) != 0)) {
          lVar14 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar10 = FUN_0513f030(lVar11,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          puVar9 = (undefined8 *)(lVar14 + 0x28);
          *puVar9 = uVar10;
          thunk_FUN_02dd37b4(puVar9);
        }
      }
      else if (uVar7 == 0x37386ae0) {
        uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06769370,0);
        if ((uVar12 & 1) != 0) {
          lVar14 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar10 = FUN_0513f030(lVar11,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          puVar9 = (undefined8 *)(lVar14 + 0x10);
          *puVar9 = uVar10;
          thunk_FUN_02dd37b4(puVar9);
        }
      }
      else if ((uVar7 == uVar2) &&
              (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780c20,0),
              (uVar12 & 1) != 0)) {
        FUN_051204bc(in_stack_00000008,lVar11);
      }
    }
    else if (uVar4 < uVar7) {
      if (uVar7 < 0xd1f6a663) {
        if (uVar7 < 0xb99d8553) {
          if (uVar7 == 0xb0443bf7) {
            uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780b10,0);
            if ((uVar12 & 1) != 0) {
              lVar14 = *plVar1;
              if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar8 = FUN_0513ca00(lVar11,0);
              _uStack0000000000000010 = 0;
              FUN_03dce070(&stack0x00000010,uVar8,*(undefined8 *)PTR_DAT_067675e0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              *(ulong *)(lVar14 + 0x40) = _uStack0000000000000010;
            }
          }
          else if ((uVar7 == 0xb99d8552) &&
                  (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06771088,0),
                  (uVar12 & 1) != 0)) {
            lVar14 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = FUN_0513f030(lVar11,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined8 *)(lVar14 + 0x100) = uVar10;
            thunk_FUN_02dd37b4(lVar14 + 0x100);
          }
        }
        else if (uVar7 == 0xce0beff7) {
          uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_0676aed8,0);
          if ((uVar12 & 1) != 0) {
            lVar14 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar7 = FUN_0513b614(lVar11,0);
            _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
            FUN_03dc8178(&stack0x00000010,uVar7 & 1,*(undefined8 *)PTR_DAT_067769b0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined2 *)(lVar14 + 0x22) = uStack0000000000000010;
          }
        }
        else if ((uVar7 == 0xd1f6a662) &&
                (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780c18,0),
                (uVar12 & 1) != 0)) {
          lVar14 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          bVar6 = FUN_0513b614(lVar11,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(byte *)(lVar14 + 0xb1) = bVar6 & 1;
        }
      }
      else if (uVar7 < 0xeb4bb271) {
        if (uVar7 == 0xd23308c1) {
          uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_0676aea0,0);
          if ((uVar12 & 1) != 0) {
            lVar14 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar8 = FUN_0513ca00(lVar11,0);
            _uStack0000000000000010 = 0;
            FUN_03dce070(&stack0x00000010,uVar8,*(undefined8 *)PTR_DAT_067675e0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(ulong *)(lVar14 + 0x48) = _uStack0000000000000010;
          }
        }
        else if ((uVar7 == 0xeb4bb270) &&
                (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780b60,0),
                (uVar12 & 1) != 0)) {
          lVar14 = *(long *)(in_stack_00000008 + 0x28);
          uVar10 = FUN_0511fed4(in_stack_00000008,lVar11);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          puVar9 = (undefined8 *)(lVar14 + 200);
          *puVar9 = uVar10;
          thunk_FUN_02dd37b4(puVar9);
        }
      }
      else if (uVar7 == 0xf618f139) {
        uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780ae8,0);
        if ((uVar12 & 1) != 0) {
          lVar14 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar7 = FUN_0513b614(lVar11,0);
          _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
          FUN_03dc8178(&stack0x00000010,uVar7 & 1,*(undefined8 *)PTR_DAT_067769b0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined2 *)(lVar14 + 0x24) = uStack0000000000000010;
        }
      }
      else if ((uVar7 == 0xfcfb3733) &&
              (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780b58,0),
              (uVar12 & 1) != 0)) {
        lVar14 = *plVar1;
        if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar8 = FUN_0513ca00(lVar11,0);
        _uStack0000000000000010 = 0;
        FUN_03dce070(&stack0x00000010,uVar8,*(undefined8 *)PTR_DAT_067675e0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(ulong *)(lVar14 + 0x8c) = _uStack0000000000000010;
      }
    }
    else if (uVar5 < uVar7) {
      if (uVar7 < 0x9b8caa56) {
        if (uVar7 == 0x9865b509) {
          uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_0676b5c8,0);
          if ((uVar12 & 1) != 0) {
            lVar14 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = FUN_0513f030(lVar11,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            puVar9 = (undefined8 *)(lVar14 + 0x18);
            *puVar9 = uVar10;
            thunk_FUN_02dd37b4(puVar9);
          }
        }
        else if ((uVar7 == 0x9b8caa55) &&
                (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780c10,0),
                (uVar12 & 1) != 0)) {
          lVar14 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar10 = FUN_0513f030(lVar11,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          puVar9 = (undefined8 *)(lVar14 + 0xd8);
          *puVar9 = uVar10;
          thunk_FUN_02dd37b4(puVar9);
        }
      }
      else if (uVar7 == 0x9d85d64e) {
        uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780b40,0);
        if ((uVar12 & 1) != 0) {
          FUN_05121048(in_stack_00000008,lVar11);
        }
      }
      else if ((uVar7 == uVar4) &&
              (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780b20,0),
              (uVar12 & 1) != 0)) {
        lVar14 = *plVar1;
        uVar10 = FUN_0511f904(uVar12,lVar11);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(undefined8 *)(lVar14 + 0xe8) = uVar10;
      }
    }
    else if (uVar7 == 0x873d0129) {
      uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06780b48,0);
      if ((uVar12 & 1) != 0) {
        lVar14 = *plVar1;
        if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_0513f030(lVar11,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        puVar9 = (undefined8 *)(lVar14 + 0x38);
        *puVar9 = uVar10;
        thunk_FUN_02dd37b4(puVar9);
      }
    }
    else if (uVar7 == 0x933b5bde) {
      uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_0676a770,0);
      if ((uVar12 & 1) != 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar14 = *plVar1;
        uVar10 = FUN_05143844(lVar11,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        puVar9 = (undefined8 *)(lVar14 + 0xf0);
        *puVar9 = uVar10;
        thunk_FUN_02dd37b4(puVar9);
      }
    }
    else if ((uVar7 == uVar5) &&
            (uVar12 = thunk_FUN_04e8bd3c(uVar10,*(undefined8 *)PTR_DAT_06769cc0,0),
            (uVar12 & 1) != 0)) {
      lVar14 = *plVar1;
      if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0513ec68(lVar11,0);
      _uStack0000000000000010 = 0;
      in_stack_00000018 = 0;
      FUN_03dcb204(&stack0x00000010,*(undefined8 *)PTR_DAT_0677dc00);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(undefined8 *)(lVar14 + 0x68) = in_stack_00000018;
      *(ulong *)(lVar14 + 0x60) = _uStack0000000000000010;
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0511f5e0;
    }
  }
LAB_0511f5c4:
  puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_0511f5e0:
  (*(code *)*puVar9)();
  return;
}


