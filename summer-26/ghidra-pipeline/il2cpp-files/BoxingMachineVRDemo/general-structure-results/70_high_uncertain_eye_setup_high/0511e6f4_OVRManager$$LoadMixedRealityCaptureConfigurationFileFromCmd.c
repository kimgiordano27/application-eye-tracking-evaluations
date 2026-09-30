/*
FUNCTION_NAME: OVRManager$$LoadMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 0511e6f4
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

void OVRManager__LoadMixedRealityCaptureConfigurationFileFromCmd(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  undefined1 auVar14 [16];
  long in_stack_00000008;
  undefined2 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_06780ae8);
  FUN_02d6084c(PTR_DAT_06769cc0);
                    /* try { // try from 0511e714 to 0521e71f has its CatchHandler @ 0511e7c0 */
  FUN_02d6084c(PTR_DAT_0676aed8);
  FUN_02d6084c(PTR_DAT_06780af0);
                    /* try { // try from 0511e72c to 0521e72f has its CatchHandler @ 0511e7bc */
  FUN_02d6084c(PTR_DAT_06780af8);
  FUN_02d6084c(PTR_DAT_06780b00);
                    /* try { // try from 0511e740 to 0521e76f has its CatchHandler @ 0511e7c4 */
  FUN_02d6084c(PTR_DAT_06780c10);
  FUN_02d6084c(PTR_DAT_06780b08);
  FUN_02d6084c(PTR_DAT_06780b10);
  FUN_02d6084c(PTR_DAT_06780c18);
  FUN_02d6084c(PTR_DAT_0676a770);
                    /* try { // try from 0511e77c to 0521e77f has its CatchHandler @ 0511e7b8 */
                    /* try { // try from 0511e780 to 0521e7db has its CatchHandler @ 0511e6b0 */
  FUN_02d6084c(PTR_DAT_06780b18);
  FUN_02d6084c(PTR_DAT_06771088);
  FUN_02d6084c(PTR_DAT_06780b20);
  FUN_02d6084c(PTR_DAT_06768be0);
  FUN_02d6084c(PTR_DAT_06769370);
  FUN_02d6084c(PTR_DAT_06780b28);
  FUN_02d6084c(PTR_DAT_06780b30);
  FUN_02d6084c(PTR_DAT_06780b38);
  FUN_02d6084c(PTR_DAT_06769c80);
  FUN_02d6084c(PTR_DAT_0676b5c8);
  FUN_02d6084c(PTR_DAT_0676aea0);
  FUN_02d6084c(PTR_DAT_06780b40);
  FUN_02d6084c(PTR_DAT_06780b48);
  FUN_02d6084c(PTR_DAT_0676ded8);
  FUN_02d6084c(PTR_DAT_06780b58);
  FUN_02d6084c(PTR_DAT_06780b60);
  FUN_02d6084c(PTR_DAT_06780c20);
  FUN_02d6084c(PTR_DAT_067686e0);
  *(undefined1 *)(unaff_x20 + 0xbda) = 1;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar7 = (long *)FUN_0513336c();
  puVar3 = PTR_DAT_06780bf8;
  puVar2 = PTR_DAT_0675f3d8;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar1 = (long *)(in_stack_00000008 + 0x28);
  do {
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0511e900;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0);
LAB_0511e900:
    uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_0511f5c4;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0511e95c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar3,0);
LAB_0511e95c:
    auVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    lVar10 = auVar14._8_8_;
    uVar9 = auVar14._0_8_;
    uVar5 = FUN_0516ffe8(uVar9,0);
    if (uVar5 < 0x848c8621) {
      if (uVar5 < 0x3a793390) {
        if (uVar5 < 0x150efe0e) {
          if (uVar5 == 0x11de6cdc) {
            uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06768be0,0);
            if ((uVar11 & 1) != 0) {
              lVar13 = *(long *)(in_stack_00000008 + 0x28);
              uVar9 = FUN_0511fed4(in_stack_00000008,lVar10);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              puVar8 = (undefined8 *)(lVar13 + 0xb8);
              *puVar8 = uVar9;
              thunk_FUN_02dd37b4(puVar8);
            }
          }
          else if (uVar5 == 0x13f0fb79) {
            uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780b00,0);
            if ((uVar11 & 1) != 0) {
              lVar13 = *plVar1;
              if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar6 = FUN_0513ca00(lVar10,0);
              _uStack0000000000000010 = 0;
              FUN_03dce070(&stack0x00000010,uVar6,*(undefined8 *)PTR_DAT_067675e0);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              *(ulong *)(lVar13 + 0x84) = _uStack0000000000000010;
            }
          }
          else if ((uVar5 == 0x150efe0d) &&
                  (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780af0,0),
                  (uVar11 & 1) != 0)) {
            lVar13 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_0513ec68(lVar10,0);
            _uStack0000000000000010 = 0;
            in_stack_00000018 = 0;
            FUN_03dcb204(&stack0x00000010,*(undefined8 *)PTR_DAT_0677dc00);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined8 *)(lVar13 + 0x58) = in_stack_00000018;
            *(ulong *)(lVar13 + 0x50) = _uStack0000000000000010;
          }
        }
        else if (uVar5 < 0x346f3b6a) {
          if (uVar5 == 0x1c9c30e1) {
            uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780b30,0);
            if ((uVar11 & 1) != 0) {
              FUN_05120a24(in_stack_00000008,lVar10);
            }
          }
          else if ((uVar5 == 0x346f3b69) &&
                  (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_0676ded8,0),
                  (uVar11 & 1) != 0)) {
            lVar13 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar9 = FUN_0513f030(lVar10,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            puVar8 = (undefined8 *)(lVar13 + 0x28);
            *puVar8 = uVar9;
            thunk_FUN_02dd37b4(puVar8);
          }
        }
        else if (uVar5 == 0x37386ae0) {
          uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06769370,0);
          if ((uVar11 & 1) != 0) {
            lVar13 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar9 = FUN_0513f030(lVar10,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            puVar8 = (undefined8 *)(lVar13 + 0x10);
            *puVar8 = uVar9;
            thunk_FUN_02dd37b4(puVar8);
          }
        }
        else if ((uVar5 == 0x3a79338f) &&
                (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780c20,0),
                (uVar11 & 1) != 0)) {
          FUN_051204bc(in_stack_00000008,lVar10);
        }
      }
      else if (uVar5 < 0x64f7c28c) {
        if (uVar5 == 0x5127f14d) {
          uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_067686e0,0);
          if ((uVar11 & 1) != 0) {
            lVar13 = *plVar1;
            uVar9 = FUN_0511f904(uVar11,lVar10);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined8 *)(lVar13 + 0x30) = uVar9;
          }
        }
        else if (uVar5 == 0x5bf2f681) {
          uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06769c80,0);
          if ((uVar11 & 1) != 0) {
            lVar13 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_0513ec68(lVar10,0);
            _uStack0000000000000010 = 0;
            in_stack_00000018 = 0;
            FUN_03dcb204(&stack0x00000010,*(undefined8 *)PTR_DAT_0677dc00);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined8 *)(lVar13 + 0x78) = in_stack_00000018;
            *(ulong *)(lVar13 + 0x70) = _uStack0000000000000010;
          }
        }
        else if ((uVar5 == 0x64f7c28b) &&
                (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780b38,0),
                (uVar11 & 1) != 0)) {
          lVar13 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = FUN_0513b614(lVar10,0);
          _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
          FUN_03dc8178(&stack0x00000010,uVar5 & 1,*(undefined8 *)PTR_DAT_067769b0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined2 *)(lVar13 + 0x82) = uStack0000000000000010;
        }
      }
      else if (uVar5 < 0x7a472401) {
        if (uVar5 == 0x720625cd) {
          uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780b18,0);
          if ((uVar11 & 1) != 0) {
            lVar13 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar5 = FUN_0513b614(lVar10,0);
            _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
            FUN_03dc8178(&stack0x00000010,uVar5 & 1,*(undefined8 *)PTR_DAT_067769b0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined2 *)(lVar13 + 0x80) = uStack0000000000000010;
          }
        }
        else if ((uVar5 == 0x7a472400) &&
                (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780b08,0),
                (uVar11 & 1) != 0)) {
          FUN_05120ae0(in_stack_00000008,lVar10);
        }
      }
      else if (uVar5 == 0x816cb000) {
        uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780af8,0);
        if ((uVar11 & 1) != 0) {
          FUN_05120b9c(in_stack_00000008,lVar10);
        }
      }
      else if ((uVar5 == 0x848c8620) &&
              (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780b28,0),
              (uVar11 & 1) != 0)) {
        lVar13 = *plVar1;
        if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_0513b614(lVar10,0);
        _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
        FUN_03dc8178(&stack0x00000010,uVar5 & 1,*(undefined8 *)PTR_DAT_067769b0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(undefined2 *)(lVar13 + 0x20) = uStack0000000000000010;
      }
    }
    else if (uVar5 < 0xa07863c1) {
      if (uVar5 < 0x938122f8) {
        if (uVar5 == 0x873d0129) {
          uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780b48,0);
          if ((uVar11 & 1) != 0) {
            lVar13 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar9 = FUN_0513f030(lVar10,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            puVar8 = (undefined8 *)(lVar13 + 0x38);
            *puVar8 = uVar9;
            thunk_FUN_02dd37b4(puVar8);
          }
        }
        else if (uVar5 == 0x933b5bde) {
          uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_0676a770,0);
          if ((uVar11 & 1) != 0) {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar13 = *plVar1;
            uVar9 = FUN_05143844(lVar10,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            puVar8 = (undefined8 *)(lVar13 + 0xf0);
            *puVar8 = uVar9;
            thunk_FUN_02dd37b4(puVar8);
          }
        }
        else if ((uVar5 == 0x938122f7) &&
                (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06769cc0,0),
                (uVar11 & 1) != 0)) {
          lVar13 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0513ec68(lVar10,0);
          _uStack0000000000000010 = 0;
          in_stack_00000018 = 0;
          FUN_03dcb204(&stack0x00000010,*(undefined8 *)PTR_DAT_0677dc00);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined8 *)(lVar13 + 0x68) = in_stack_00000018;
          *(ulong *)(lVar13 + 0x60) = _uStack0000000000000010;
        }
      }
      else if (uVar5 < 0x9b8caa56) {
        if (uVar5 == 0x9865b509) {
          uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_0676b5c8,0);
          if ((uVar11 & 1) != 0) {
            lVar13 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar9 = FUN_0513f030(lVar10,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            puVar8 = (undefined8 *)(lVar13 + 0x18);
            *puVar8 = uVar9;
            thunk_FUN_02dd37b4(puVar8);
          }
        }
        else if ((uVar5 == 0x9b8caa55) &&
                (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780c10,0),
                (uVar11 & 1) != 0)) {
          lVar13 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar9 = FUN_0513f030(lVar10,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          puVar8 = (undefined8 *)(lVar13 + 0xd8);
          *puVar8 = uVar9;
          thunk_FUN_02dd37b4(puVar8);
        }
      }
      else if (uVar5 == 0x9d85d64e) {
        uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780b40,0);
        if ((uVar11 & 1) != 0) {
          FUN_05121048(in_stack_00000008,lVar10);
        }
      }
      else if ((uVar5 == 0xa07863c0) &&
              (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780b20,0),
              (uVar11 & 1) != 0)) {
        lVar13 = *plVar1;
        uVar9 = FUN_0511f904(uVar11,lVar10);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(undefined8 *)(lVar13 + 0xe8) = uVar9;
      }
    }
    else if (uVar5 < 0xd1f6a663) {
      if (uVar5 < 0xb99d8553) {
        if (uVar5 == 0xb0443bf7) {
          uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780b10,0);
          if ((uVar11 & 1) != 0) {
            lVar13 = *plVar1;
            if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar6 = FUN_0513ca00(lVar10,0);
            _uStack0000000000000010 = 0;
            FUN_03dce070(&stack0x00000010,uVar6,*(undefined8 *)PTR_DAT_067675e0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(ulong *)(lVar13 + 0x40) = _uStack0000000000000010;
          }
        }
        else if ((uVar5 == 0xb99d8552) &&
                (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06771088,0),
                (uVar11 & 1) != 0)) {
          lVar13 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar9 = FUN_0513f030(lVar10,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined8 *)(lVar13 + 0x100) = uVar9;
          thunk_FUN_02dd37b4(lVar13 + 0x100);
        }
      }
      else if (uVar5 == 0xce0beff7) {
        uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_0676aed8,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = FUN_0513b614(lVar10,0);
          _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
          FUN_03dc8178(&stack0x00000010,uVar5 & 1,*(undefined8 *)PTR_DAT_067769b0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined2 *)(lVar13 + 0x22) = uStack0000000000000010;
        }
      }
      else if ((uVar5 == 0xd1f6a662) &&
              (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780c18,0),
              (uVar11 & 1) != 0)) {
        lVar13 = *plVar1;
        if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        bVar4 = FUN_0513b614(lVar10,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(byte *)(lVar13 + 0xb1) = bVar4 & 1;
      }
    }
    else if (uVar5 < 0xeb4bb271) {
      if (uVar5 == 0xd23308c1) {
        uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_0676aea0,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_0513ca00(lVar10,0);
          _uStack0000000000000010 = 0;
          FUN_03dce070(&stack0x00000010,uVar6,*(undefined8 *)PTR_DAT_067675e0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(ulong *)(lVar13 + 0x48) = _uStack0000000000000010;
        }
      }
      else if ((uVar5 == 0xeb4bb270) &&
              (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780b60,0),
              (uVar11 & 1) != 0)) {
        lVar13 = *(long *)(in_stack_00000008 + 0x28);
        uVar9 = FUN_0511fed4(in_stack_00000008,lVar10);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        puVar8 = (undefined8 *)(lVar13 + 200);
        *puVar8 = uVar9;
        thunk_FUN_02dd37b4(puVar8);
      }
    }
    else if (uVar5 == 0xf618f139) {
      uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780ae8,0);
      if ((uVar11 & 1) != 0) {
        lVar13 = *plVar1;
        if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_0513b614(lVar10,0);
        _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
        FUN_03dc8178(&stack0x00000010,uVar5 & 1,*(undefined8 *)PTR_DAT_067769b0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(undefined2 *)(lVar13 + 0x24) = uStack0000000000000010;
      }
    }
    else if ((uVar5 == 0xfcfb3733) &&
            (uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)PTR_DAT_06780b58,0), (uVar11 & 1) != 0
            )) {
      lVar13 = *plVar1;
      if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar6 = FUN_0513ca00(lVar10,0);
      _uStack0000000000000010 = 0;
      FUN_03dce070(&stack0x00000010,uVar6,*(undefined8 *)PTR_DAT_067675e0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(ulong *)(lVar13 + 0x8c) = _uStack0000000000000010;
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0511f5e0;
    }
  }
LAB_0511f5c4:
  puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511f5e0:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


