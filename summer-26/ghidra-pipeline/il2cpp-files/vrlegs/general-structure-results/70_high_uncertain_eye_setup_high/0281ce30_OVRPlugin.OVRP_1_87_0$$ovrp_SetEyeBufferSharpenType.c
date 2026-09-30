/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$ovrp_SetEyeBufferSharpenType
ENTRY_POINT: 0281ce30
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


void OVRPlugin_OVRP_1_87_0__ovrp_SetEyeBufferSharpenType
               (undefined8 param_1,undefined8 param_2,long *param_3,short *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  undefined *puVar6;
  int iVar7;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  long in_x12;
  ulong in_x13;
  int in_w14;
  uint in_w16;
  long *in_x17;
  undefined1 (*unaff_x19) [16];
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  int iVar16;
  int unaff_w23;
  long unaff_x24;
  uint uVar17;
  ulong unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined2 uStack0000000000000060;
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
  
code_r0x0281ce30:
  iVar1 = in_stack_00000040._4_4_;
  if (!(bool)in_ZR && in_NG == in_OV) goto LAB_0281cfd0;
  in_stack_00000038 = (unaff_x25 + in_stack_00000038 * unaff_x24) - 0x30;
LAB_0281cfd8:
  iVar1 = in_stack_00000040._4_4_ + 1;
LAB_0281cd98:
  puVar6 = PTR_DAT_03cc5358;
  unaff_w26 = unaff_w26 + 1;
  if ((int)unaff_w29 <= (int)unaff_w26) {
    if (*(int *)(*(long *)PTR_DAT_03cc5358 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar16 = unaff_w23 + in_w14 + (unaff_w27 - unaff_w28);
    auVar18 = FUN_027d361c(in_stack_00000038,0);
    if (in_stack_00000040._4_4_ + -0x12 == 0 || iVar1 < 0x13) {
      *(long *)*unaff_x19 = auVar18._0_8_;
    }
    else {
      _cStack0000000000000080 = 0;
      in_stack_00000088 = 0;
      FUN_027cf91c(&stack0x00000080,1,0,0,0,in_stack_00000040._4_4_ + -0x12,0);
      auVar18 = FUN_027d3e50(auVar18._0_8_,auVar18._8_8_,_cStack0000000000000080,in_stack_00000088,0
                            );
      auVar19 = FUN_027d361c(in_x13,0);
      auVar18 = FUN_027d3c38(auVar18._0_8_,auVar18._8_8_,auVar19._0_8_,auVar19._8_8_,0);
      *(long *)*unaff_x19 = auVar18._0_8_;
    }
    uVar8 = auVar18._8_8_;
    uVar13 = auVar18._0_8_;
    *(undefined8 *)(*unaff_x19 + 8) = uVar8;
    if (iVar16 < 1) {
      in_stack_00000050._4_4_ = uStack000000000000006c;
      lVar9 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01a46ff8();
      }
      pcVar10 = (char *)thunk_FUN_01a59484((long)&stack0x00000050 + 4,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
      if (*pcVar10 == '\0') {
        in_stack_00000058 = 0;
      }
      else {
        FUN_01ba9478((long)&stack0x00000050 + 4,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe4f8);
        uVar4 = _cStack0000000000000080;
        _cStack0000000000000080 = 0;
        in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar4);
        FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
        in_stack_00000058 = _cStack0000000000000080;
      }
      FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
      iVar7 = _cStack0000000000000080;
      lVar9 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01a46ff8();
      }
      pcVar10 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
      if (((-0x1d < iVar16) && (0x34 < iVar7)) && (*pcVar10 != '\0')) {
        uVar8 = *(undefined8 *)*unaff_x19;
        uVar13 = *(undefined8 *)(*unaff_x19 + 8);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar18 = FUN_027d3bc8(uVar8,uVar13,0);
        *unaff_x19 = auVar18;
      }
      if (-1 < iVar16) goto LAB_0281d598;
      if (0 < iVar16 + iVar1 + 0x1c) {
        uVar8 = *(undefined8 *)*unaff_x19;
        uVar13 = *(undefined8 *)(*unaff_x19 + 8);
        auVar19 = *unaff_x19;
        auVar18 = *unaff_x19;
        if (iVar16 < -0x1c) {
          _cStack0000000000000080 = 0;
          in_stack_00000088 = 0;
          FUN_027cf91c(&stack0x00000080,0x10000000,0x3e250261,0x204fce5e,0,0,0);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar18 = FUN_027d3e50(uVar8,uVar13,_cStack0000000000000080,in_stack_00000088,0);
          *unaff_x19 = auVar18;
          in_stack_00000070 = 0;
          in_stack_00000078 = 0;
          FUN_027cf91c(&stack0x00000070,1,0,0,0,-0x1c - iVar16,0);
          uVar8 = in_stack_00000070;
          uVar13 = in_stack_00000078;
        }
        else {
          _cStack0000000000000080 = 0;
          in_stack_00000088 = 0;
          FUN_027cf91c(&stack0x00000080,1,0,0,0,-iVar16,0);
          uVar8 = _cStack0000000000000080;
          uVar13 = in_stack_00000088;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            uVar8 = _cStack0000000000000080;
            uVar13 = in_stack_00000088;
            auVar18 = auVar19;
          }
        }
        goto LAB_0281d58c;
      }
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_00000098 = (*(undefined8 **)(*(long *)puVar6 + 0xb8))[1];
      in_stack_00000090 = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined8 *)(*unaff_x19 + 8) = in_stack_00000098;
      *(undefined8 *)*unaff_x19 = in_stack_00000090;
    }
    else {
      if (0x1d < iVar16 + iVar1) {
LAB_0281d54c:
        uVar8 = 2;
        goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
      }
      if (iVar16 + iVar1 == 0x1d) {
        if (iVar16 < 2) {
          _cStack0000000000000080 = 0;
          in_stack_00000088 = 0;
          FUN_027cf91c(&stack0x00000080,0x99999999,0x99999999,0x19999999,0,0,0);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_027d432c(uVar13,uVar8,_cStack0000000000000080,in_stack_00000088,0);
          if ((uVar12 & 1) != 0) {
            in_stack_00000050._4_4_ = uStack000000000000006c;
            lVar9 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_01a46ff8();
            }
            pcVar10 = (char *)thunk_FUN_01a59484((long)&stack0x00000050 + 4,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
            if (*pcVar10 == '\0') {
              in_stack_00000058 = 0;
            }
            else {
              FUN_01ba9478((long)&stack0x00000050 + 4,&stack0x00000080,
                           *(undefined8 *)PTR_DAT_03cfe4f8);
              uVar4 = _cStack0000000000000080;
              _cStack0000000000000080 = 0;
              in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar4);
              FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
              in_stack_00000058 = _cStack0000000000000080;
            }
            FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
            iVar1 = _cStack0000000000000080;
            lVar9 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_01a46ff8();
            }
            pcVar10 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
            if ((0x35 < iVar1) && (*pcVar10 != '\0')) goto LAB_0281d54c;
          }
        }
        else {
          _cStack0000000000000080 = 0;
          in_stack_00000088 = 0;
          FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar16 + -1,0);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar18 = FUN_027d3e50(uVar13,uVar8,_cStack0000000000000080,in_stack_00000088,0);
          *unaff_x19 = auVar18;
          in_stack_00000070 = 0;
          in_stack_00000078 = 0;
          FUN_027cf91c(&stack0x00000070,0x99999999,0x99999999,0x19999999,0,0,0);
          uVar12 = FUN_027d4568(auVar18._0_8_,auVar18._8_8_,in_stack_00000070,in_stack_00000078,0);
          if ((uVar12 & 1) != 0) goto LAB_0281d54c;
        }
        auVar19 = *unaff_x19;
        auVar18 = *unaff_x19;
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cee20(&stack0x00000080,10,0);
        uVar8 = _cStack0000000000000080;
        uVar13 = in_stack_00000088;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar8 = _cStack0000000000000080;
          uVar13 = in_stack_00000088;
          auVar18 = auVar19;
        }
LAB_0281d58c:
        auVar18 = FUN_027d3da0(auVar18._0_8_,auVar18._8_8_,uVar8,uVar13,0);
      }
      else {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar16,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar18 = FUN_027d3e50(uVar13,uVar8,_cStack0000000000000080,in_stack_00000088,0);
      }
      *unaff_x19 = auVar18;
LAB_0281d598:
      if (in_stack_00000030._4_4_ == 0x2d) {
        uVar8 = *(undefined8 *)*unaff_x19;
        uVar13 = *(undefined8 *)(*unaff_x19 + 8);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar18 = FUN_027d3bc0(uVar8,uVar13,0);
        *unaff_x19 = auVar18;
        uVar8 = 1;
        goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
      }
    }
    uVar8 = 1;
OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported:
    if (*(long *)(in_x12 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar8);
    }
    return;
  }
  uVar15 = *(uint *)(unaff_x22 + 0x18);
  if (uVar15 <= unaff_w26) goto LAB_0281d5e4;
  uVar4 = *(ushort *)(unaff_x22 + (long)(int)unaff_w26 * 2 + 0x20);
  unaff_x25 = (ulong)uVar4;
  if ((uVar4 == 0x65) || (uVar4 == 0x45)) {
LAB_0281ccdc:
    uVar8 = 3;
    if ((unaff_w26 == unaff_w21) || (unaff_w26 == unaff_w27))
    goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    uVar17 = unaff_w26 + 1;
    if (uVar17 == unaff_w29) goto LAB_0281cb94;
    uVar2 = unaff_w26;
    if ((int)unaff_w29 <= (int)unaff_w27) {
      uVar2 = unaff_w28;
    }
    if (uVar15 <= uVar17) {
LAB_0281d5e4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    sVar5 = *(short *)(unaff_x22 + (long)(int)uVar17 * 2 + 0x20);
    if (sVar5 == 0x2b) {
      bVar14 = false;
      uVar17 = unaff_w26 + 2;
    }
    else if (sVar5 == 0x2d) {
      uVar17 = unaff_w26 + 2;
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    unaff_w26 = uVar17;
    iVar16 = unaff_w23;
    if ((int)uVar17 < (int)unaff_w29) {
      uVar3 = uVar17;
      if (uVar17 <= uVar15) {
        uVar3 = uVar15;
      }
      do {
        if (uVar3 == uVar17) goto LAB_0281d5e4;
        uVar15 = (uint)*(ushort *)(unaff_x22 + (long)(int)uVar17 * 2 + 0x20);
        if (9 < uVar15 - 0x30) goto LAB_0281cb94;
        iVar16 = uVar15 + unaff_w23 * (int)unaff_x24 + -0x30;
        uVar17 = uVar17 + 1;
        if (iVar16 <= unaff_w23) {
          iVar16 = unaff_w23;
        }
        unaff_w26 = unaff_w29;
        unaff_w23 = iVar16;
      } while (unaff_w29 != uVar17);
    }
    unaff_w28 = uVar2;
    unaff_w23 = -iVar16;
    if (!bVar14) {
      unaff_w23 = iVar16;
    }
    goto LAB_0281cd98;
  }
  uVar17 = (uint)uVar4;
  if (uVar17 == 0x2e) {
    if (unaff_w26 != unaff_w21) {
LAB_0281cc5c:
      uVar8 = 3;
      if ((unaff_w27 != unaff_w29) || (unaff_w27 = unaff_w26 + 1, unaff_w27 == unaff_w29))
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
      goto LAB_0281cd98;
    }
  }
  else if (uVar17 - 0x30 < 10) {
    if ((unaff_w26 != unaff_w21 || uVar17 != 0x30) || (unaff_w26 = unaff_w29, unaff_w20 == 1)) {
      if (iVar1 < 0x1d) {
        if (iVar1 != 0x1c) {
          in_OV = SBORROW4(iVar1,0x12);
          in_NG = in_stack_00000040._4_4_ + -0x11 < 0;
          in_ZR = iVar1 == 0x12;
          in_stack_00000040._4_4_ = iVar1;
          goto code_r0x0281ce30;
        }
        uStack0000000000000064 = uStack0000000000000068;
        lVar9 = *(long *)(*param_3 + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01a46ff8();
        }
        pcVar10 = (char *)thunk_FUN_01a59484((long)&stack0x00000060 + 4,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
        if (*pcVar10 == '\0') {
          if (in_stack_00000038 < 0x6df37f675ef6eae0) {
            if (in_stack_00000038 == 0x6df37f675ef6eadf) {
              if (in_x13 < 0x151fa39a) {
                if (in_x13 == 0x151fa399) {
                  bVar14 = 0x35 < uVar17;
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
          puVar11 = (undefined8 *)&stack0x00000060;
          uStack0000000000000060 = uStack0000000000000068;
          uVar8 = *(undefined8 *)PTR_DAT_03cbfdd8;
        }
        else {
          puVar11 = (undefined8 *)((long)&stack0x00000060 + 4);
          uVar8 = *(undefined8 *)PTR_DAT_03cbfdd8;
        }
        FUN_01ba9478(puVar11,&stack0x00000080,uVar8);
        param_3 = (long *)PTR_DAT_03cbfff0;
        in_x17 = (long *)PTR_DAT_03cfe4f0;
        if (cStack0000000000000080 == '\0') goto LAB_0281cfd0;
      }
      lVar9 = *(long *)(*in_x17 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01a46ff8();
      }
      pcVar10 = (char *)thunk_FUN_01a59484((long)&stack0x00000068 + 4,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
      if (*pcVar10 == '\0') {
        _cStack0000000000000080 = CONCAT62(uStack0000000000000081._1_6_,uVar4);
        FUN_02241190((long)&stack0x00000068 + 4,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe590);
      }
      in_w14 = in_w14 + 1;
      param_3 = (long *)PTR_DAT_03cbfff0;
      in_x17 = (long *)PTR_DAT_03cfe4f0;
      goto LAB_0281cd98;
    }
    if (uVar15 <= in_w16) goto LAB_0281d5e4;
    sVar5 = *param_4;
    unaff_w26 = in_w16;
    if (sVar5 == 0x2e) goto LAB_0281cc5c;
    if ((sVar5 == 0x45) || (sVar5 == 0x65)) goto LAB_0281ccdc;
  }
LAB_0281cb94:
  uVar8 = 3;
  goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
LAB_0281cfd0:
  in_stack_00000040._4_4_ = iVar1;
  in_x13 = (unaff_x25 + in_x13 * unaff_x24) - 0x30;
  goto LAB_0281cfd8;
}


