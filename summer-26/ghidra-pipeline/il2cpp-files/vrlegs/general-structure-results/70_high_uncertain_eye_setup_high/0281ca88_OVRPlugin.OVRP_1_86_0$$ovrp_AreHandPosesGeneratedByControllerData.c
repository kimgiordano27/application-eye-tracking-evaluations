/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_AreHandPosesGeneratedByControllerData
ENTRY_POINT: 0281ca88
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_14;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_8
*/


void OVRPlugin_OVRP_1_86_0__ovrp_AreHandPosesGeneratedByControllerData
               (char *param_1,uint param_2,int param_3,undefined1 (*param_4) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  long lVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  long lStack00000000000000a8;
  
  lVar7 = tpidr_el0;
  lStack00000000000000a8 = *(long *)(lVar7 + 0x28);
  pcVar9 = param_1;
  if ((DAT_041253a4 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc5358);
    FUN_01ab69ac(PTR_DAT_03cfe4f8);
    FUN_01ab69ac(PTR_DAT_03cbfdd8);
    FUN_01ab69ac(PTR_DAT_03cc1820);
    FUN_01ab69ac(PTR_DAT_03cc1828);
    FUN_01ab69ac(PTR_DAT_03cbffe8);
    FUN_01ab69ac(PTR_DAT_03cfe590);
    FUN_01ab69ac(PTR_DAT_03cbfff0);
    FUN_01ab69ac(PTR_DAT_03cfe4f0);
    pcVar9 = (char *)FUN_01ab69ac(PTR_DAT_03cc1790);
    DAT_041253a4 = 1;
  }
  uStack0000000000000064 = 0;
  in_stack_00000060 = 0;
  in_stack_00000058 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  *(undefined8 *)*param_4 = 0;
  *(undefined8 *)(*param_4 + 8) = 0;
  if (param_3 == 0) {
LAB_0281cb94:
    pcVar9 = (char *)0x3;
    goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
  }
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar17 = *(ulong *)(param_1 + 0x18);
  if ((uint)uVar17 <= param_2) goto LAB_0281d5e4;
  sVar4 = *(short *)(param_1 + (long)(int)param_2 * 2 + 0x20);
  if (sVar4 == 0x2d) {
    param_3 = param_3 + -1;
    if (param_3 == 0) goto LAB_0281cb94;
    param_2 = param_2 + 1;
  }
  uVar2 = param_2 + param_3;
  uStack000000000000006c = 0;
  uStack0000000000000068 = 0;
  uVar26 = uVar2;
  uVar25 = uVar2;
  if ((int)param_2 < (int)uVar2) {
    if (param_2 < (uint)uVar17) {
      iStack0000000000000044 = 0;
      uStack0000000000000038 = 0;
      uVar1 = param_2 + 1;
      iVar19 = 0;
      uVar18 = 0;
      iVar21 = 0;
      plVar13 = (long *)PTR_DAT_03cbfff0;
      plVar20 = (long *)PTR_DAT_03cfe4f0;
      uVar24 = param_2;
      do {
        uVar5 = *(ushort *)(param_1 + (long)(int)uVar24 * 2 + 0x20);
        uVar16 = (uint)uVar17;
        if ((uVar5 == 0x65) || (uVar5 == 0x45)) {
LAB_0281ccdc:
          pcVar9 = (char *)0x3;
          if ((uVar24 == param_2) || (uVar24 == uVar25))
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
          uVar23 = uVar24 + 1;
          if (uVar23 == uVar2) goto LAB_0281cb94;
          uVar3 = uVar24;
          if ((int)uVar2 <= (int)uVar25) {
            uVar3 = uVar26;
          }
          if (uVar16 <= uVar23) break;
          if (*(short *)(param_1 + (long)(int)uVar23 * 2 + 0x20) == 0x2b) {
            bVar15 = false;
            uVar23 = uVar24 + 2;
          }
          else if (*(short *)(param_1 + (long)(int)uVar23 * 2 + 0x20) == 0x2d) {
            uVar23 = uVar24 + 2;
            bVar15 = true;
          }
          else {
            bVar15 = false;
          }
          uVar24 = uVar23;
          if ((int)uVar23 < (int)uVar2) {
            iVar22 = iVar21;
            uVar26 = uVar23;
            if (uVar23 <= uVar16) {
              uVar26 = uVar16;
            }
            do {
              if (uVar26 == uVar23) goto LAB_0281d5e4;
              if (9 < *(ushort *)(param_1 + (long)(int)uVar23 * 2 + 0x20) - 0x30) goto LAB_0281cb94;
              iVar21 = (uint)*(ushort *)(param_1 + (long)(int)uVar23 * 2 + 0x20) + iVar22 * 10 +
                       -0x30;
              uVar23 = uVar23 + 1;
              if (iVar21 <= iVar22) {
                iVar21 = iVar22;
              }
              iVar22 = iVar21;
              uVar24 = uVar2;
            } while (uVar2 != uVar23);
          }
          iVar22 = -iVar21;
          uVar26 = uVar3;
          if (!bVar15) {
            iVar22 = iVar21;
          }
        }
        else {
          uVar23 = (uint)uVar5;
          iVar22 = iVar21;
          if (uVar23 == 0x2e) {
            if (uVar24 == param_2) goto LAB_0281cb94;
          }
          else {
            if (9 < uVar23 - 0x30) goto LAB_0281cb94;
            if ((uVar24 != param_2 || uVar23 != 0x30) || (uVar24 = uVar2, param_3 == 1)) {
              if (0x1c < iStack0000000000000044) {
LAB_0281cf54:
                lVar11 = *(long *)(*plVar20 + 0x20);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_01a46ff8();
                }
                pcVar9 = (char *)thunk_FUN_01a59484((long)&stack0x00000068 + 4,
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80
                                                     ));
                if (*pcVar9 == '\0') {
                  _cStack0000000000000080 = CONCAT62(uStack0000000000000081._1_6_,uVar5);
                  pcVar9 = (char *)FUN_02241190((long)&stack0x00000068 + 4,&stack0x00000080,
                                                *(undefined8 *)PTR_DAT_03cfe590);
                }
                iVar19 = iVar19 + 1;
                plVar13 = (long *)PTR_DAT_03cbfff0;
                plVar20 = (long *)PTR_DAT_03cfe4f0;
                goto LAB_0281cd98;
              }
              if (iStack0000000000000044 == 0x1c) {
                uStack0000000000000064 = uStack0000000000000068;
                lVar11 = *(long *)(*plVar13 + 0x20);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_01a46ff8();
                }
                pcVar9 = (char *)thunk_FUN_01a59484(&stack0x00000064,
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80
                                                     ));
                if (*pcVar9 == '\0') {
                  if (uStack0000000000000038 < 0x6df37f675ef6eae0) {
                    if (uStack0000000000000038 == 0x6df37f675ef6eadf) {
                      if (uVar18 < 0x151fa39a) {
                        if (uVar18 == 0x151fa399) {
                          bVar15 = 0x35 < uVar23;
                        }
                        else {
                          bVar15 = false;
                        }
                      }
                      else {
                        bVar15 = true;
                      }
                    }
                    else {
                      bVar15 = false;
                    }
                  }
                  else {
                    bVar15 = true;
                  }
                  _cStack0000000000000080 = CONCAT71(uStack0000000000000081,bVar15);
                  FUN_02241190(&stack0x00000068,&stack0x00000080,*(undefined8 *)PTR_DAT_03cbffe8);
                  puVar10 = &stack0x00000060;
                  in_stack_00000060 = uStack0000000000000068;
                  uVar12 = *(undefined8 *)PTR_DAT_03cbfdd8;
                }
                else {
                  puVar10 = &stack0x00000064;
                  uVar12 = *(undefined8 *)PTR_DAT_03cbfdd8;
                }
                pcVar9 = (char *)FUN_01ba9478(puVar10,&stack0x00000080,uVar12);
                plVar13 = (long *)PTR_DAT_03cbfff0;
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
            if (uVar16 <= uVar1) break;
            sVar6 = *(short *)(param_1 + (long)(int)uVar1 * 2 + 0x20);
            uVar24 = uVar1;
            if (sVar6 != 0x2e) {
              if ((sVar6 == 0x45) || (sVar6 == 0x65)) goto LAB_0281ccdc;
              goto LAB_0281cb94;
            }
          }
          pcVar9 = (char *)0x3;
          if ((uVar25 != uVar2) || (uVar25 = uVar24 + 1, uVar25 == uVar2))
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
        }
LAB_0281cd98:
        iVar21 = iVar22;
        uVar24 = uVar24 + 1;
        if ((int)uVar2 <= (int)uVar24) goto LAB_0281d004;
        uVar17 = (ulong)*(uint *)(param_1 + 0x18);
      } while (uVar24 < *(uint *)(param_1 + 0x18));
    }
LAB_0281d5e4:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44(pcVar9);
  }
  iVar19 = 0;
  iStack0000000000000044 = 0;
  uVar18 = 0;
  uStack0000000000000038 = 0;
  iVar21 = 0;
LAB_0281d004:
  puVar8 = PTR_DAT_03cc5358;
  if (*(int *)(*(long *)PTR_DAT_03cc5358 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar19 = iVar21 + iVar19 + (uVar25 - uVar26);
  auVar27 = FUN_027d361c(uStack0000000000000038,0);
  if (iStack0000000000000044 + -0x13 == 0 || iStack0000000000000044 < 0x13) {
    *(long *)*param_4 = auVar27._0_8_;
  }
  else {
    _cStack0000000000000080 = 0;
    in_stack_00000088 = 0;
    FUN_027cf91c(&stack0x00000080,1,0,0,0,iStack0000000000000044 + -0x13,0);
    auVar27 = FUN_027d3e50(auVar27._0_8_,auVar27._8_8_,_cStack0000000000000080,in_stack_00000088,0);
    auVar28 = FUN_027d361c(uVar18,0);
    auVar27 = FUN_027d3c38(auVar27._0_8_,auVar27._8_8_,auVar28._0_8_,auVar28._8_8_,0);
    *(long *)*param_4 = auVar27._0_8_;
  }
  uVar12 = auVar27._8_8_;
  uVar14 = auVar27._0_8_;
  *(undefined8 *)(*param_4 + 8) = uVar12;
  if (iVar19 < 1) {
    uStack0000000000000054 = uStack000000000000006c;
    lVar11 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01a46ff8();
    }
    pcVar9 = (char *)thunk_FUN_01a59484(&stack0x00000054,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
    if (*pcVar9 == '\0') {
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
    lVar11 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01a46ff8();
    }
    pcVar9 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
    if (((-0x1d < iVar19) && (0x34 < iVar21)) && (*pcVar9 != '\0')) {
      uVar12 = *(undefined8 *)*param_4;
      uVar14 = *(undefined8 *)(*param_4 + 8);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar27 = FUN_027d3bc8(uVar12,uVar14,0);
      *param_4 = auVar27;
    }
    if (-1 < iVar19) goto LAB_0281d598;
    if (0 < iVar19 + iStack0000000000000044 + 0x1c) {
      uVar12 = *(undefined8 *)*param_4;
      uVar14 = *(undefined8 *)(*param_4 + 8);
      auVar28 = *param_4;
      auVar27 = *param_4;
      if (iVar19 < -0x1c) {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,0x10000000,0x3e250261,0x204fce5e,0,0,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar27 = FUN_027d3e50(uVar12,uVar14,_cStack0000000000000080,in_stack_00000088,0);
        *param_4 = auVar27;
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        FUN_027cf91c(&stack0x00000070,1,0,0,0,-0x1c - iVar19,0);
        uVar12 = in_stack_00000070;
        uVar14 = in_stack_00000078;
      }
      else {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,1,0,0,0,-iVar19,0);
        uVar12 = _cStack0000000000000080;
        uVar14 = in_stack_00000088;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar12 = _cStack0000000000000080;
          uVar14 = in_stack_00000088;
          auVar27 = auVar28;
        }
      }
      goto LAB_0281d58c;
    }
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_00000098 = (*(undefined8 **)(*(long *)puVar8 + 0xb8))[1];
    in_stack_00000090 = **(undefined8 **)(*(long *)puVar8 + 0xb8);
    *(undefined8 *)(*param_4 + 8) = in_stack_00000098;
    *(undefined8 *)*param_4 = in_stack_00000090;
  }
  else {
    if (0x1d < iVar19 + iStack0000000000000044) {
LAB_0281d54c:
      pcVar9 = (char *)0x2;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
    if (iVar19 + iStack0000000000000044 == 0x1d) {
      if (iVar19 < 2) {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,0x99999999,0x99999999,0x19999999,0,0,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_027d432c(uVar14,uVar12,_cStack0000000000000080,in_stack_00000088,0);
        if ((uVar17 & 1) != 0) {
          uStack0000000000000054 = uStack000000000000006c;
          lVar11 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01a46ff8();
          }
          pcVar9 = (char *)thunk_FUN_01a59484(&stack0x00000054,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
          if (*pcVar9 == '\0') {
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
          lVar11 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01a46ff8();
          }
          pcVar9 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
          if ((0x35 < iVar19) && (*pcVar9 != '\0')) goto LAB_0281d54c;
        }
      }
      else {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar19 + -1,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar27 = FUN_027d3e50(uVar14,uVar12,_cStack0000000000000080,in_stack_00000088,0);
        *param_4 = auVar27;
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        FUN_027cf91c(&stack0x00000070,0x99999999,0x99999999,0x19999999,0,0,0);
        uVar17 = FUN_027d4568(auVar27._0_8_,auVar27._8_8_,in_stack_00000070,in_stack_00000078,0);
        if ((uVar17 & 1) != 0) goto LAB_0281d54c;
      }
      auVar28 = *param_4;
      auVar27 = *param_4;
      _cStack0000000000000080 = 0;
      in_stack_00000088 = 0;
      FUN_027cee20(&stack0x00000080,10,0);
      uVar12 = _cStack0000000000000080;
      uVar14 = in_stack_00000088;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar12 = _cStack0000000000000080;
        uVar14 = in_stack_00000088;
        auVar27 = auVar28;
      }
LAB_0281d58c:
      auVar27 = FUN_027d3da0(auVar27._0_8_,auVar27._8_8_,uVar12,uVar14,0);
    }
    else {
      _cStack0000000000000080 = 0;
      in_stack_00000088 = 0;
      FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar19,0);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar27 = FUN_027d3e50(uVar14,uVar12,_cStack0000000000000080,in_stack_00000088,0);
    }
    *param_4 = auVar27;
LAB_0281d598:
    if (sVar4 == 0x2d) {
      uVar12 = *(undefined8 *)*param_4;
      uVar14 = *(undefined8 *)(*param_4 + 8);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar27 = FUN_027d3bc0(uVar12,uVar14,0);
      *param_4 = auVar27;
      pcVar9 = (char *)0x1;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
  }
  pcVar9 = (char *)0x1;
OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported:
  if (*(long *)(lVar7 + 0x28) != lStack00000000000000a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar9);
  }
  return;
}


