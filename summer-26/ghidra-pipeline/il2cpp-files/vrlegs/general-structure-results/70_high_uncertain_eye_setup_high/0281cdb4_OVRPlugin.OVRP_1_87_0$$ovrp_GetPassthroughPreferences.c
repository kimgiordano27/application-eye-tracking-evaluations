/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$ovrp_GetPassthroughPreferences
ENTRY_POINT: 0281cdb4
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


void OVRPlugin_OVRP_1_87_0__ovrp_GetPassthroughPreferences
               (undefined8 param_1,undefined8 param_2,long *param_3,short *param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  long in_x12;
  ulong in_x13;
  int in_w14;
  uint in_w16;
  long *in_x17;
  undefined1 (*unaff_x19) [16];
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  int iVar15;
  int unaff_w23;
  long unaff_x24;
  uint uVar16;
  ulong unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  short *psStack0000000000000010;
  uint uStack0000000000000018;
  int iStack000000000000001c;
  ulong uStack0000000000000020;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  long lStack0000000000000048;
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
  
  lStack0000000000000048 = in_x12;
  uStack0000000000000018 = in_w16;
code_r0x0281cdb4:
  psStack0000000000000010 = param_4;
  iStack000000000000001c = in_w14;
  uStack0000000000000020 = in_x13;
  if (0x1c < in_stack_00000040._4_4_) {
LAB_0281cf54:
    lVar7 = *(long *)(*in_x17 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    pcVar8 = (char *)thunk_FUN_01a59484((long)&stack0x00000068 + 4,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
    if (*pcVar8 == '\0') {
      _cStack0000000000000080 = CONCAT62(uStack0000000000000081._1_6_,(short)unaff_x25);
      FUN_02241190((long)&stack0x00000068 + 4,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe590);
    }
    in_w14 = iStack000000000000001c + 1;
    param_3 = (long *)PTR_DAT_03cbfff0;
    param_4 = psStack0000000000000010;
    in_x13 = uStack0000000000000020;
    in_x17 = (long *)PTR_DAT_03cfe4f0;
    goto LAB_0281cd98;
  }
  if (in_stack_00000040._4_4_ == 0x1c) {
    uStack0000000000000064 = uStack0000000000000068;
    lVar7 = *(long *)(*param_3 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    pcVar8 = (char *)thunk_FUN_01a59484((long)&stack0x00000060 + 4,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
    if (*pcVar8 == '\0') {
      if (in_stack_00000038 < 0x6df37f675ef6eae0) {
        if (in_stack_00000038 == 0x6df37f675ef6eadf) {
          if (uStack0000000000000020 < 0x151fa39a) {
            if (uStack0000000000000020 == 0x151fa399) {
              bVar13 = 0x35 < (uint)unaff_x25;
            }
            else {
              bVar13 = false;
            }
          }
          else {
            bVar13 = true;
          }
        }
        else {
          bVar13 = false;
        }
      }
      else {
        bVar13 = true;
      }
      _cStack0000000000000080 = CONCAT71(uStack0000000000000081,bVar13);
      FUN_02241190(&stack0x00000068,&stack0x00000080,*(undefined8 *)PTR_DAT_03cbffe8);
      puVar9 = (undefined8 *)&stack0x00000060;
      uStack0000000000000060 = uStack0000000000000068;
      uVar11 = *(undefined8 *)PTR_DAT_03cbfdd8;
    }
    else {
      puVar9 = (undefined8 *)((long)&stack0x00000060 + 4);
      uVar11 = *(undefined8 *)PTR_DAT_03cbfdd8;
    }
    FUN_01ba9478(puVar9,&stack0x00000080,uVar11);
    param_3 = (long *)PTR_DAT_03cbfff0;
    in_x17 = (long *)PTR_DAT_03cfe4f0;
    if (cStack0000000000000080 != '\0') goto LAB_0281cf54;
LAB_0281cfd0:
    in_x13 = (unaff_x25 + uStack0000000000000020 * unaff_x24) - 0x30;
  }
  else {
    if (0x12 < in_stack_00000040._4_4_) goto LAB_0281cfd0;
    in_stack_00000038 = (unaff_x25 + in_stack_00000038 * unaff_x24) - 0x30;
  }
  in_stack_00000040._4_4_ = in_stack_00000040._4_4_ + 1;
  param_4 = psStack0000000000000010;
  in_w14 = iStack000000000000001c;
LAB_0281cd98:
  do {
    puVar5 = PTR_DAT_03cc5358;
    unaff_w26 = unaff_w26 + 1;
    if ((int)unaff_w29 <= (int)unaff_w26) {
      if (*(int *)(*(long *)PTR_DAT_03cc5358 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar15 = unaff_w23 + in_w14 + (unaff_w27 - unaff_w28);
      auVar17 = FUN_027d361c(in_stack_00000038,0);
      if (in_stack_00000040._4_4_ + -0x13 == 0 || in_stack_00000040._4_4_ < 0x13) {
        *(long *)*unaff_x19 = auVar17._0_8_;
      }
      else {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,1,0,0,0,in_stack_00000040._4_4_ + -0x13,0);
        auVar17 = FUN_027d3e50(auVar17._0_8_,auVar17._8_8_,_cStack0000000000000080,in_stack_00000088
                               ,0);
        auVar18 = FUN_027d361c(in_x13,0);
        auVar17 = FUN_027d3c38(auVar17._0_8_,auVar17._8_8_,auVar18._0_8_,auVar18._8_8_,0);
        *(long *)*unaff_x19 = auVar17._0_8_;
      }
      uVar11 = auVar17._8_8_;
      uVar12 = auVar17._0_8_;
      *(undefined8 *)(*unaff_x19 + 8) = uVar11;
      if (iVar15 < 1) {
        in_stack_00000050._4_4_ = uStack000000000000006c;
        lVar7 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01a46ff8();
        }
        pcVar8 = (char *)thunk_FUN_01a59484((long)&stack0x00000050 + 4,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
        if (*pcVar8 == '\0') {
          in_stack_00000058 = 0;
        }
        else {
          FUN_01ba9478((long)&stack0x00000050 + 4,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe4f8);
          uVar3 = _cStack0000000000000080;
          _cStack0000000000000080 = 0;
          in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar3);
          FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
          in_stack_00000058 = _cStack0000000000000080;
        }
        FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
        iVar6 = _cStack0000000000000080;
        lVar7 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01a46ff8();
        }
        pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
        if (((-0x1d < iVar15) && (0x34 < iVar6)) && (*pcVar8 != '\0')) {
          uVar11 = *(undefined8 *)*unaff_x19;
          uVar12 = *(undefined8 *)(*unaff_x19 + 8);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar17 = FUN_027d3bc8(uVar11,uVar12,0);
          *unaff_x19 = auVar17;
        }
        if (-1 < iVar15) goto LAB_0281d598;
        if (0 < iVar15 + in_stack_00000040._4_4_ + 0x1c) {
          uVar11 = *(undefined8 *)*unaff_x19;
          uVar12 = *(undefined8 *)(*unaff_x19 + 8);
          auVar18 = *unaff_x19;
          auVar17 = *unaff_x19;
          if (iVar15 < -0x1c) {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,0x10000000,0x3e250261,0x204fce5e,0,0,0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            auVar17 = FUN_027d3e50(uVar11,uVar12,_cStack0000000000000080,in_stack_00000088,0);
            *unaff_x19 = auVar17;
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            FUN_027cf91c(&stack0x00000070,1,0,0,0,-0x1c - iVar15,0);
            uVar11 = in_stack_00000070;
            uVar12 = in_stack_00000078;
          }
          else {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,1,0,0,0,-iVar15,0);
            uVar11 = _cStack0000000000000080;
            uVar12 = in_stack_00000088;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              uVar11 = _cStack0000000000000080;
              uVar12 = in_stack_00000088;
              auVar17 = auVar18;
            }
          }
          goto LAB_0281d58c;
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000098 = (*(undefined8 **)(*(long *)puVar5 + 0xb8))[1];
        in_stack_00000090 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        *(undefined8 *)(*unaff_x19 + 8) = in_stack_00000098;
        *(undefined8 *)*unaff_x19 = in_stack_00000090;
      }
      else {
        if (0x1d < iVar15 + in_stack_00000040._4_4_) {
LAB_0281d54c:
          uVar11 = 2;
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
        }
        if (iVar15 + in_stack_00000040._4_4_ == 0x1d) {
          if (iVar15 < 2) {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,0x99999999,0x99999999,0x19999999,0,0,0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar10 = FUN_027d432c(uVar12,uVar11,_cStack0000000000000080,in_stack_00000088,0);
            if ((uVar10 & 1) != 0) {
              in_stack_00000050._4_4_ = uStack000000000000006c;
              lVar7 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_01a46ff8();
              }
              pcVar8 = (char *)thunk_FUN_01a59484((long)&stack0x00000050 + 4,
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
              if (*pcVar8 == '\0') {
                in_stack_00000058 = 0;
              }
              else {
                FUN_01ba9478((long)&stack0x00000050 + 4,&stack0x00000080,
                             *(undefined8 *)PTR_DAT_03cfe4f8);
                uVar3 = _cStack0000000000000080;
                _cStack0000000000000080 = 0;
                in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar3);
                FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
                in_stack_00000058 = _cStack0000000000000080;
              }
              FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
              iVar15 = _cStack0000000000000080;
              lVar7 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_01a46ff8();
              }
              pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
              if ((0x35 < iVar15) && (*pcVar8 != '\0')) goto LAB_0281d54c;
            }
          }
          else {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar15 + -1,0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            auVar17 = FUN_027d3e50(uVar12,uVar11,_cStack0000000000000080,in_stack_00000088,0);
            *unaff_x19 = auVar17;
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            FUN_027cf91c(&stack0x00000070,0x99999999,0x99999999,0x19999999,0,0,0);
            uVar10 = FUN_027d4568(auVar17._0_8_,auVar17._8_8_,in_stack_00000070,in_stack_00000078,0)
            ;
            if ((uVar10 & 1) != 0) goto LAB_0281d54c;
          }
          auVar18 = *unaff_x19;
          auVar17 = *unaff_x19;
          _cStack0000000000000080 = 0;
          in_stack_00000088 = 0;
          FUN_027cee20(&stack0x00000080,10,0);
          uVar11 = _cStack0000000000000080;
          uVar12 = in_stack_00000088;
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            uVar11 = _cStack0000000000000080;
            uVar12 = in_stack_00000088;
            auVar17 = auVar18;
          }
LAB_0281d58c:
          auVar17 = FUN_027d3da0(auVar17._0_8_,auVar17._8_8_,uVar11,uVar12,0);
        }
        else {
          _cStack0000000000000080 = 0;
          in_stack_00000088 = 0;
          FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar15,0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar17 = FUN_027d3e50(uVar12,uVar11,_cStack0000000000000080,in_stack_00000088,0);
        }
        *unaff_x19 = auVar17;
LAB_0281d598:
        if (in_stack_00000030._4_4_ == 0x2d) {
          uVar11 = *(undefined8 *)*unaff_x19;
          uVar12 = *(undefined8 *)(*unaff_x19 + 8);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar17 = FUN_027d3bc0(uVar11,uVar12,0);
          *unaff_x19 = auVar17;
          uVar11 = 1;
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
        }
      }
      uVar11 = 1;
OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported:
      if (*(long *)(lStack0000000000000048 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar11);
      }
      return;
    }
    uVar14 = *(uint *)(unaff_x22 + 0x18);
    if (uVar14 <= unaff_w26) goto LAB_0281d5e4;
    uVar3 = *(ushort *)(unaff_x22 + (long)(int)unaff_w26 * 2 + 0x20);
    unaff_x25 = (ulong)uVar3;
    if ((uVar3 != 0x65) && (uVar3 != 0x45)) {
      uVar16 = (uint)uVar3;
      if (uVar16 == 0x2e) {
        if (unaff_w26 != unaff_w21) {
LAB_0281cc5c:
          uVar11 = 3;
          if ((unaff_w27 != unaff_w29) || (unaff_w27 = unaff_w26 + 1, unaff_w27 == unaff_w29))
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
          goto LAB_0281cd98;
        }
      }
      else if (uVar16 - 0x30 < 10) {
        if ((unaff_w26 != unaff_w21 || uVar16 != 0x30) || (unaff_w26 = unaff_w29, unaff_w20 == 1))
        goto code_r0x0281cdb4;
        if (uVar14 <= uStack0000000000000018) goto LAB_0281d5e4;
        sVar4 = *param_4;
        unaff_w26 = uStack0000000000000018;
        if (sVar4 == 0x2e) goto LAB_0281cc5c;
        if ((sVar4 == 0x45) || (sVar4 == 0x65)) goto LAB_0281ccdc;
      }
LAB_0281cb94:
      uVar11 = 3;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
LAB_0281ccdc:
    uVar11 = 3;
    if ((unaff_w26 == unaff_w21) || (unaff_w26 == unaff_w27))
    goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    uVar16 = unaff_w26 + 1;
    if (uVar16 == unaff_w29) goto LAB_0281cb94;
    uVar1 = unaff_w26;
    if ((int)unaff_w29 <= (int)unaff_w27) {
      uVar1 = unaff_w28;
    }
    if (uVar14 <= uVar16) {
LAB_0281d5e4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    sVar4 = *(short *)(unaff_x22 + (long)(int)uVar16 * 2 + 0x20);
    if (sVar4 == 0x2b) {
      bVar13 = false;
      uVar16 = unaff_w26 + 2;
    }
    else if (sVar4 == 0x2d) {
      uVar16 = unaff_w26 + 2;
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    unaff_w26 = uVar16;
    iVar15 = unaff_w23;
    if ((int)uVar16 < (int)unaff_w29) {
      uVar2 = uVar16;
      if (uVar16 <= uVar14) {
        uVar2 = uVar14;
      }
      do {
        if (uVar2 == uVar16) goto LAB_0281d5e4;
        uVar14 = (uint)*(ushort *)(unaff_x22 + (long)(int)uVar16 * 2 + 0x20);
        if (9 < uVar14 - 0x30) goto LAB_0281cb94;
        iVar15 = uVar14 + unaff_w23 * (int)unaff_x24 + -0x30;
        uVar16 = uVar16 + 1;
        if (iVar15 <= unaff_w23) {
          iVar15 = unaff_w23;
        }
        unaff_w26 = unaff_w29;
        unaff_w23 = iVar15;
      } while (unaff_w29 != uVar16);
    }
    unaff_w28 = uVar1;
    unaff_w23 = -iVar15;
    if (!bVar13) {
      unaff_w23 = iVar15;
    }
  } while( true );
}


