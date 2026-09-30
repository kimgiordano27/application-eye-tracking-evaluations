/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_SetMultimodalHandsControllersSupported
ENTRY_POINT: 0281cb1c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_16;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_8
*/


void OVRPlugin_OVRP_1_86_0__ovrp_SetMultimodalHandsControllersSupported(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined2 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  undefined1 (*unaff_x19) [16];
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  int iVar21;
  int iVar22;
  long unaff_x23;
  long unaff_x24;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack0000000000000038;
  int iStack0000000000000044;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined2 in_stack_00000060;
  undefined2 uStack0000000000000064;
  undefined2 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  char cStack0000000000000080;
  undefined7 uStack0000000000000081;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cbfff0);
  FUN_01ab69ac(PTR_DAT_03cfe4f0);
  pcVar8 = (char *)FUN_01ab69ac(PTR_DAT_03cc1790);
  *(undefined1 *)(unaff_x23 + 0x3a4) = 1;
  uStack0000000000000064 = 0;
  in_stack_00000060 = 0;
                    /* try { // try from 0281cb58 to 0291cb7f has its CatchHandler @ 0281ccf8 */
  in_stack_00000058 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  *(undefined8 *)*unaff_x19 = 0;
  *(undefined8 *)(*unaff_x19 + 8) = 0;
  if (unaff_w20 == 0) {
LAB_0281cb94:
    pcVar8 = (char *)0x3;
    goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
  }
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar16 = *(ulong *)(unaff_x22 + 0x18);
  if ((uint)uVar16 <= unaff_w21) goto LAB_0281d5e4;
  sVar4 = *(short *)(unaff_x22 + (long)(int)unaff_w21 * 2 + 0x20);
  if (sVar4 == 0x2d) {
    unaff_w20 = unaff_w20 + -1;
    if (unaff_w20 == 0) goto LAB_0281cb94;
    unaff_w21 = unaff_w21 + 1;
  }
  uVar2 = unaff_w21 + unaff_w20;
  uStack000000000000006c = 0;
  uStack0000000000000068 = 0;
  uVar25 = uVar2;
  uVar24 = uVar2;
  if ((int)unaff_w21 < (int)uVar2) {
    if (unaff_w21 < (uint)uVar16) {
      iStack0000000000000044 = 0;
      uStack0000000000000038 = 0;
      uVar1 = unaff_w21 + 1;
      iVar19 = 0;
      uVar18 = 0;
      iVar21 = 0;
      plVar12 = (long *)PTR_DAT_03cbfff0;
      plVar20 = (long *)PTR_DAT_03cfe4f0;
      uVar17 = unaff_w21;
      do {
        uVar5 = *(ushort *)(unaff_x22 + (long)(int)uVar17 * 2 + 0x20);
        uVar15 = (uint)uVar16;
        if ((uVar5 == 0x65) || (uVar5 == 0x45)) {
LAB_0281ccdc:
          pcVar8 = (char *)0x3;
          if ((uVar17 == unaff_w21) || (uVar17 == uVar24))
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
          uVar23 = uVar17 + 1;
          if (uVar23 == uVar2) goto LAB_0281cb94;
          uVar3 = uVar17;
          if ((int)uVar2 <= (int)uVar24) {
            uVar3 = uVar25;
          }
          if (uVar15 <= uVar23) break;
          sVar6 = *(short *)(unaff_x22 + (long)(int)uVar23 * 2 + 0x20);
          if (sVar6 == 0x2b) {
            bVar14 = false;
            uVar23 = uVar17 + 2;
          }
          else if (sVar6 == 0x2d) {
            uVar23 = uVar17 + 2;
            bVar14 = true;
          }
          else {
            bVar14 = false;
          }
          uVar17 = uVar23;
          if ((int)uVar23 < (int)uVar2) {
            iVar22 = iVar21;
            uVar25 = uVar23;
            if (uVar23 <= uVar15) {
              uVar25 = uVar15;
            }
            do {
              if (uVar25 == uVar23) goto LAB_0281d5e4;
              uVar17 = (uint)*(ushort *)(unaff_x22 + (long)(int)uVar23 * 2 + 0x20);
              if (9 < uVar17 - 0x30) goto LAB_0281cb94;
              iVar21 = uVar17 + iVar22 * 10 + -0x30;
              uVar23 = uVar23 + 1;
              if (iVar21 <= iVar22) {
                iVar21 = iVar22;
              }
              iVar22 = iVar21;
              uVar17 = uVar2;
            } while (uVar2 != uVar23);
          }
          iVar22 = -iVar21;
          uVar25 = uVar3;
          if (!bVar14) {
            iVar22 = iVar21;
          }
        }
        else {
          uVar23 = (uint)uVar5;
          iVar22 = iVar21;
          if (uVar23 == 0x2e) {
            if (uVar17 == unaff_w21) goto LAB_0281cb94;
          }
          else {
            if (9 < uVar23 - 0x30) goto LAB_0281cb94;
            if ((uVar17 != unaff_w21 || uVar23 != 0x30) || (uVar17 = uVar2, unaff_w20 == 1)) {
              if (0x1c < iStack0000000000000044) {
LAB_0281cf54:
                lVar10 = *(long *)(*plVar20 + 0x20);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01a46ff8();
                }
                pcVar8 = (char *)thunk_FUN_01a59484((long)&stack0x00000068 + 4,
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80
                                                     ));
                if (*pcVar8 == '\0') {
                  _cStack0000000000000080 = CONCAT62(uStack0000000000000081._1_6_,uVar5);
                  pcVar8 = (char *)FUN_02241190((long)&stack0x00000068 + 4,&stack0x00000080,
                                                *(undefined8 *)PTR_DAT_03cfe590);
                }
                iVar19 = iVar19 + 1;
                plVar12 = (long *)PTR_DAT_03cbfff0;
                plVar20 = (long *)PTR_DAT_03cfe4f0;
                goto LAB_0281cd98;
              }
              if (iStack0000000000000044 == 0x1c) {
                uStack0000000000000064 = uStack0000000000000068;
                lVar10 = *(long *)(*plVar12 + 0x20);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01a46ff8();
                }
                pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000064,
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80
                                                     ));
                if (*pcVar8 == '\0') {
                  if (uStack0000000000000038 < 0x6df37f675ef6eae0) {
                    if (uStack0000000000000038 == 0x6df37f675ef6eadf) {
                      if (uVar18 < 0x151fa39a) {
                        if (uVar18 == 0x151fa399) {
                          bVar14 = 0x35 < uVar23;
                        }
                        else {
                          bVar14 = false;
                        }
                      }
                      else {
                        bVar14 = true;
                      }
                    }
                    else {
                      bVar14 = false;
                    }
                  }
                  else {
                    bVar14 = true;
                  }
                  _cStack0000000000000080 = CONCAT71(uStack0000000000000081,bVar14);
                  FUN_02241190(&stack0x00000068,&stack0x00000080,*(undefined8 *)PTR_DAT_03cbffe8);
                  puVar9 = &stack0x00000060;
                  in_stack_00000060 = uStack0000000000000068;
                  uVar11 = *(undefined8 *)PTR_DAT_03cbfdd8;
                }
                else {
                  puVar9 = &stack0x00000064;
                  uVar11 = *(undefined8 *)PTR_DAT_03cbfdd8;
                }
                pcVar8 = (char *)FUN_01ba9478(puVar9,&stack0x00000080,uVar11);
                plVar12 = (long *)PTR_DAT_03cbfff0;
                plVar20 = (long *)PTR_DAT_03cfe4f0;
                if (cStack0000000000000080 != '\0') goto LAB_0281cf54;
LAB_0281cfd0:
                uVar18 = ((ulong)uVar5 + uVar18 * 10) - 0x30;
              }
              else {
                if (0x12 < iStack0000000000000044) goto LAB_0281cfd0;
                uStack0000000000000038 = ((ulong)uVar5 + uStack0000000000000038 * 10) - 0x30;
              }
              iStack0000000000000044 = iStack0000000000000044 + 1;
              goto LAB_0281cd98;
            }
            if (uVar15 <= uVar1) break;
            sVar6 = *(short *)(unaff_x22 + (long)(int)uVar1 * 2 + 0x20);
            uVar17 = uVar1;
            if (sVar6 != 0x2e) {
              if ((sVar6 == 0x45) || (sVar6 == 0x65)) goto LAB_0281ccdc;
              goto LAB_0281cb94;
            }
          }
          pcVar8 = (char *)0x3;
          if ((uVar24 != uVar2) || (uVar24 = uVar17 + 1, uVar24 == uVar2))
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
        }
LAB_0281cd98:
        iVar21 = iVar22;
        uVar17 = uVar17 + 1;
        if ((int)uVar2 <= (int)uVar17) goto LAB_0281d004;
        uVar16 = (ulong)*(uint *)(unaff_x22 + 0x18);
      } while (uVar17 < *(uint *)(unaff_x22 + 0x18));
    }
LAB_0281d5e4:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44(pcVar8);
  }
  iVar19 = 0;
  iStack0000000000000044 = 0;
  uVar18 = 0;
  uStack0000000000000038 = 0;
  iVar21 = 0;
LAB_0281d004:
  puVar7 = PTR_DAT_03cc5358;
  if (*(int *)(*(long *)PTR_DAT_03cc5358 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar19 = iVar21 + iVar19 + (uVar24 - uVar25);
  auVar26 = FUN_027d361c(uStack0000000000000038,0);
  if (iStack0000000000000044 + -0x13 == 0 || iStack0000000000000044 < 0x13) {
    *(long *)*unaff_x19 = auVar26._0_8_;
  }
  else {
    _cStack0000000000000080 = 0;
    in_stack_00000088 = 0;
    FUN_027cf91c(&stack0x00000080,1,0,0,0,iStack0000000000000044 + -0x13,0);
    auVar26 = FUN_027d3e50(auVar26._0_8_,auVar26._8_8_,_cStack0000000000000080,in_stack_00000088,0);
    auVar27 = FUN_027d361c(uVar18,0);
    auVar26 = FUN_027d3c38(auVar26._0_8_,auVar26._8_8_,auVar27._0_8_,auVar27._8_8_,0);
    *(long *)*unaff_x19 = auVar26._0_8_;
  }
  uVar11 = auVar26._8_8_;
  uVar13 = auVar26._0_8_;
  *(undefined8 *)(*unaff_x19 + 8) = uVar11;
  if (iVar19 < 1) {
    uStack0000000000000054 = uStack000000000000006c;
    lVar10 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8();
    }
    pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000054,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80));
    if (*pcVar8 == '\0') {
      in_stack_00000058 = 0;
    }
    else {
      FUN_01ba9478(&stack0x00000054,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe4f8);
      uVar5 = _cStack0000000000000080;
      _cStack0000000000000080 = 0;
      in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar5);
      FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
      in_stack_00000058 = _cStack0000000000000080;
    }
    FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
    iVar21 = _cStack0000000000000080;
    lVar10 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8();
    }
    pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80));
    if (((-0x1d < iVar19) && (0x34 < iVar21)) && (*pcVar8 != '\0')) {
      uVar11 = *(undefined8 *)*unaff_x19;
      uVar13 = *(undefined8 *)(*unaff_x19 + 8);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar26 = FUN_027d3bc8(uVar11,uVar13,0);
      *unaff_x19 = auVar26;
    }
    if (-1 < iVar19) goto LAB_0281d598;
    if (0 < iVar19 + iStack0000000000000044 + 0x1c) {
      uVar11 = *(undefined8 *)*unaff_x19;
      uVar13 = *(undefined8 *)(*unaff_x19 + 8);
      auVar27 = *unaff_x19;
      auVar26 = *unaff_x19;
      if (iVar19 < -0x1c) {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,0x10000000,0x3e250261,0x204fce5e,0,0,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar26 = FUN_027d3e50(uVar11,uVar13,_cStack0000000000000080,in_stack_00000088,0);
        *unaff_x19 = auVar26;
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        FUN_027cf91c(&stack0x00000070,1,0,0,0,-0x1c - iVar19,0);
        uVar11 = in_stack_00000070;
        uVar13 = in_stack_00000078;
      }
      else {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,1,0,0,0,-iVar19,0);
        uVar11 = _cStack0000000000000080;
        uVar13 = in_stack_00000088;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar11 = _cStack0000000000000080;
          uVar13 = in_stack_00000088;
          auVar26 = auVar27;
        }
      }
      goto LAB_0281d58c;
    }
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_00000098 = (*(undefined8 **)(*(long *)puVar7 + 0xb8))[1];
    in_stack_00000090 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined8 *)(*unaff_x19 + 8) = in_stack_00000098;
    *(undefined8 *)*unaff_x19 = in_stack_00000090;
  }
  else {
    if (0x1d < iVar19 + iStack0000000000000044) {
LAB_0281d54c:
      pcVar8 = (char *)0x2;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
    if (iVar19 + iStack0000000000000044 == 0x1d) {
      if (iVar19 < 2) {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,0x99999999,0x99999999,0x19999999,0,0,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_027d432c(uVar13,uVar11,_cStack0000000000000080,in_stack_00000088,0);
        if ((uVar16 & 1) != 0) {
          uStack0000000000000054 = uStack000000000000006c;
          lVar10 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01a46ff8();
          }
          pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000054,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80));
          if (*pcVar8 == '\0') {
            in_stack_00000058 = 0;
          }
          else {
            FUN_01ba9478(&stack0x00000054,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe4f8);
            uVar5 = _cStack0000000000000080;
            _cStack0000000000000080 = 0;
            in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar5);
            FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
            in_stack_00000058 = _cStack0000000000000080;
          }
          FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
          iVar19 = _cStack0000000000000080;
          lVar10 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01a46ff8();
          }
          pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80));
          if ((0x35 < iVar19) && (*pcVar8 != '\0')) goto LAB_0281d54c;
        }
      }
      else {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar19 + -1,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar26 = FUN_027d3e50(uVar13,uVar11,_cStack0000000000000080,in_stack_00000088,0);
        *unaff_x19 = auVar26;
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        FUN_027cf91c(&stack0x00000070,0x99999999,0x99999999,0x19999999,0,0,0);
        uVar16 = FUN_027d4568(auVar26._0_8_,auVar26._8_8_,in_stack_00000070,in_stack_00000078,0);
        if ((uVar16 & 1) != 0) goto LAB_0281d54c;
      }
      auVar27 = *unaff_x19;
      auVar26 = *unaff_x19;
      _cStack0000000000000080 = 0;
      in_stack_00000088 = 0;
      FUN_027cee20(&stack0x00000080,10,0);
      uVar11 = _cStack0000000000000080;
      uVar13 = in_stack_00000088;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar11 = _cStack0000000000000080;
        uVar13 = in_stack_00000088;
        auVar26 = auVar27;
      }
LAB_0281d58c:
      auVar26 = FUN_027d3da0(auVar26._0_8_,auVar26._8_8_,uVar11,uVar13,0);
    }
    else {
      _cStack0000000000000080 = 0;
      in_stack_00000088 = 0;
      FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar19,0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar26 = FUN_027d3e50(uVar13,uVar11,_cStack0000000000000080,in_stack_00000088,0);
    }
    *unaff_x19 = auVar26;
LAB_0281d598:
    if (sVar4 == 0x2d) {
      uVar11 = *(undefined8 *)*unaff_x19;
      uVar13 = *(undefined8 *)(*unaff_x19 + 8);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar26 = FUN_027d3bc0(uVar11,uVar13,0);
      *unaff_x19 = auVar26;
      pcVar8 = (char *)0x1;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
  }
  pcVar8 = (char *)0x1;
OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported:
  if (*(long *)(unaff_x24 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar8);
  }
  return;
}


