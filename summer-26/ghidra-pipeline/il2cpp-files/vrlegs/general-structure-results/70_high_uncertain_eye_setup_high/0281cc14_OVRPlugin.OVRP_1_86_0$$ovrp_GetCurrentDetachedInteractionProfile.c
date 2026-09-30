/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_GetCurrentDetachedInteractionProfile
ENTRY_POINT: 0281cc14
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


void OVRPlugin_OVRP_1_86_0__ovrp_GetCurrentDetachedInteractionProfile
               (char *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint in_w8;
  long in_x9;
  uint uVar11;
  long in_x12;
  ulong uVar12;
  int iVar13;
  uint in_w16;
  long *in_x17;
  undefined1 (*unaff_x19) [16];
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint unaff_w29;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  
                    /* try { // try from 0281cc14 to 0291cc17 has its CatchHandler @ 0281ccec */
  iVar13 = 0;
                    /* try { // try from 0281cc18 to 0291cc1f has its CatchHandler @ 0281ccf4 */
  uVar12 = 0;
  iVar14 = 0;
                    /* try { // try from 0281cc24 to 0291cc2b has its CatchHandler @ 0281ccf0 */
                    /* try { // try from 0281cc2c to 0291cccb has its CatchHandler @ 0281ca00 */
  uVar18 = unaff_w29;
  uVar11 = unaff_w21;
  uVar17 = unaff_w29;
  do {
    uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar11 * 2 + 0x20);
    if ((uVar2 == 0x65) || (uVar2 == 0x45)) {
LAB_0281ccdc:
      param_1 = (char *)0x3;
      if ((uVar11 == unaff_w21) || (uVar11 == uVar17))
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
      uVar16 = uVar11 + 1;
      if (uVar16 == unaff_w29) goto LAB_0281cb94;
      uVar1 = uVar11;
      if ((int)unaff_w29 <= (int)uVar17) {
        uVar1 = uVar18;
      }
      if (in_w8 <= uVar16) break;
      sVar3 = *(short *)(unaff_x22 + (long)(int)uVar16 * 2 + 0x20);
      if (sVar3 == 0x2b) {
        bVar10 = false;
        uVar16 = uVar11 + 2;
      }
      else if (sVar3 == 0x2d) {
        uVar16 = uVar11 + 2;
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      uVar11 = uVar16;
      if ((int)uVar16 < (int)unaff_w29) {
        iVar15 = iVar14;
        uVar18 = uVar16;
        if (uVar16 <= in_w8) {
          uVar18 = in_w8;
        }
        do {
          if (uVar18 == uVar16) goto LAB_0281d5e4;
          uVar11 = (uint)*(ushort *)(unaff_x22 + (long)(int)uVar16 * 2 + 0x20);
          if (9 < uVar11 - 0x30) goto LAB_0281cb94;
          iVar14 = uVar11 + iVar15 * 10 + -0x30;
          uVar16 = uVar16 + 1;
          if (iVar14 <= iVar15) {
            iVar14 = iVar15;
          }
          iVar15 = iVar14;
          uVar11 = unaff_w29;
        } while (unaff_w29 != uVar16);
      }
      iVar15 = -iVar14;
      uVar18 = uVar1;
      if (!bVar10) {
        iVar15 = iVar14;
      }
    }
    else {
      uVar16 = (uint)uVar2;
      iVar15 = iVar14;
      if (uVar16 != 0x2e) {
        if (uVar16 - 0x30 < 10) {
          if ((uVar11 != unaff_w21 || uVar16 != 0x30) || (uVar11 = unaff_w29, unaff_w20 == 1)) {
            if (0x1c < in_stack_00000040._4_4_) {
LAB_0281cf54:
              lVar6 = *(long *)(*in_x17 + 0x20);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_01a46ff8();
              }
              param_1 = (char *)thunk_FUN_01a59484((long)&stack0x00000068 + 4,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80))
              ;
              if (*param_1 == '\0') {
                _cStack0000000000000080 = CONCAT62(uStack0000000000000081._1_6_,uVar2);
                param_1 = (char *)FUN_02241190((long)&stack0x00000068 + 4,&stack0x00000080,
                                               *(undefined8 *)PTR_DAT_03cfe590);
              }
              iVar13 = iVar13 + 1;
              param_3 = (long *)PTR_DAT_03cbfff0;
              in_x17 = (long *)PTR_DAT_03cfe4f0;
              goto LAB_0281cd98;
            }
            if (in_stack_00000040._4_4_ == 0x1c) {
              uStack0000000000000064 = uStack0000000000000068;
              lVar6 = *(long *)(*param_3 + 0x20);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_01a46ff8();
              }
              pcVar7 = (char *)thunk_FUN_01a59484((long)&stack0x00000060 + 4,
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80));
              if (*pcVar7 == '\0') {
                if (in_stack_00000038 < 0x6df37f675ef6eae0) {
                  if (in_stack_00000038 == 0x6df37f675ef6eadf) {
                    if (uVar12 < 0x151fa39a) {
                      if (uVar12 == 0x151fa399) {
                        bVar10 = 0x35 < uVar16;
                      }
                      else {
                        bVar10 = false;
                      }
                    }
                    else {
                      bVar10 = true;
                    }
                  }
                  else {
                    bVar10 = false;
                  }
                }
                else {
                  bVar10 = true;
                }
                _cStack0000000000000080 = CONCAT71(uStack0000000000000081,bVar10);
                FUN_02241190(&stack0x00000068,&stack0x00000080,*(undefined8 *)PTR_DAT_03cbffe8);
                puVar5 = (undefined8 *)&stack0x00000060;
                uStack0000000000000060 = uStack0000000000000068;
                uVar8 = *(undefined8 *)PTR_DAT_03cbfdd8;
              }
              else {
                puVar5 = (undefined8 *)((long)&stack0x00000060 + 4);
                uVar8 = *(undefined8 *)PTR_DAT_03cbfdd8;
              }
              param_1 = (char *)FUN_01ba9478(puVar5,&stack0x00000080,uVar8);
              param_3 = (long *)PTR_DAT_03cbfff0;
              in_x17 = (long *)PTR_DAT_03cfe4f0;
              if (cStack0000000000000080 != '\0') goto LAB_0281cf54;
LAB_0281cfd0:
              uVar12 = ((ulong)uVar2 + uVar12 * 10) - 0x30;
            }
            else {
              if (0x12 < in_stack_00000040._4_4_) goto LAB_0281cfd0;
              in_stack_00000038 = ((ulong)uVar2 + in_stack_00000038 * 10) - 0x30;
            }
            in_stack_00000040._4_4_ = in_stack_00000040._4_4_ + 1;
            goto LAB_0281cd98;
          }
          if (in_w8 <= in_w16) break;
          sVar3 = *(short *)(in_x9 + 0x20);
          uVar11 = in_w16;
          if (sVar3 == 0x2e) goto LAB_0281cc5c;
          if ((sVar3 == 0x45) || (sVar3 == 0x65)) goto LAB_0281ccdc;
        }
LAB_0281cb94:
        param_1 = (char *)0x3;
        goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
      }
      if (uVar11 == unaff_w21) goto LAB_0281cb94;
LAB_0281cc5c:
      param_1 = (char *)0x3;
      if ((uVar17 != unaff_w29) || (uVar17 = uVar11 + 1, uVar17 == unaff_w29))
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
LAB_0281cd98:
    iVar14 = iVar15;
    puVar4 = PTR_DAT_03cc5358;
    uVar11 = uVar11 + 1;
    if ((int)unaff_w29 <= (int)uVar11) {
      if (*(int *)(*(long *)PTR_DAT_03cc5358 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar13 = iVar14 + iVar13 + (uVar17 - uVar18);
      auVar19 = FUN_027d361c(in_stack_00000038,0);
      if (in_stack_00000040._4_4_ + -0x13 == 0 || in_stack_00000040._4_4_ < 0x13) {
        *(long *)*unaff_x19 = auVar19._0_8_;
      }
      else {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,1,0,0,0,in_stack_00000040._4_4_ + -0x13,0);
        auVar19 = FUN_027d3e50(auVar19._0_8_,auVar19._8_8_,_cStack0000000000000080,in_stack_00000088
                               ,0);
        auVar20 = FUN_027d361c(uVar12,0);
        auVar19 = FUN_027d3c38(auVar19._0_8_,auVar19._8_8_,auVar20._0_8_,auVar20._8_8_,0);
        *(long *)*unaff_x19 = auVar19._0_8_;
      }
      uVar8 = auVar19._8_8_;
      uVar9 = auVar19._0_8_;
      *(undefined8 *)(*unaff_x19 + 8) = uVar8;
      if (iVar13 < 1) {
        in_stack_00000050._4_4_ = uStack000000000000006c;
        lVar6 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01a46ff8();
        }
        pcVar7 = (char *)thunk_FUN_01a59484((long)&stack0x00000050 + 4,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80));
        if (*pcVar7 == '\0') {
          in_stack_00000058 = 0;
        }
        else {
          FUN_01ba9478((long)&stack0x00000050 + 4,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe4f8);
          uVar2 = _cStack0000000000000080;
          _cStack0000000000000080 = 0;
          in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar2);
          FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
          in_stack_00000058 = _cStack0000000000000080;
        }
        FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
        iVar14 = _cStack0000000000000080;
        lVar6 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01a46ff8();
        }
        pcVar7 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80));
        if (((-0x1d < iVar13) && (0x34 < iVar14)) && (*pcVar7 != '\0')) {
          uVar8 = *(undefined8 *)*unaff_x19;
          uVar9 = *(undefined8 *)(*unaff_x19 + 8);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar19 = FUN_027d3bc8(uVar8,uVar9,0);
          *unaff_x19 = auVar19;
        }
        if (-1 < iVar13) goto LAB_0281d598;
        if (0 < iVar13 + in_stack_00000040._4_4_ + 0x1c) {
          uVar8 = *(undefined8 *)*unaff_x19;
          uVar9 = *(undefined8 *)(*unaff_x19 + 8);
          auVar20 = *unaff_x19;
          auVar19 = *unaff_x19;
          if (iVar13 < -0x1c) {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,0x10000000,0x3e250261,0x204fce5e,0,0,0);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            auVar19 = FUN_027d3e50(uVar8,uVar9,_cStack0000000000000080,in_stack_00000088,0);
            *unaff_x19 = auVar19;
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            FUN_027cf91c(&stack0x00000070,1,0,0,0,-0x1c - iVar13,0);
            uVar8 = in_stack_00000070;
            uVar9 = in_stack_00000078;
          }
          else {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,1,0,0,0,-iVar13,0);
            uVar8 = _cStack0000000000000080;
            uVar9 = in_stack_00000088;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              uVar8 = _cStack0000000000000080;
              uVar9 = in_stack_00000088;
              auVar19 = auVar20;
            }
          }
          goto LAB_0281d58c;
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000098 = (*(undefined8 **)(*(long *)puVar4 + 0xb8))[1];
        in_stack_00000090 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
        *(undefined8 *)(*unaff_x19 + 8) = in_stack_00000098;
        *(undefined8 *)*unaff_x19 = in_stack_00000090;
      }
      else {
        if (0x1d < iVar13 + in_stack_00000040._4_4_) {
LAB_0281d54c:
          param_1 = (char *)0x2;
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
        }
        if (iVar13 + in_stack_00000040._4_4_ == 0x1d) {
          if (iVar13 < 2) {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,0x99999999,0x99999999,0x19999999,0,0,0);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_027d432c(uVar9,uVar8,_cStack0000000000000080,in_stack_00000088,0);
            if ((uVar12 & 1) != 0) {
              in_stack_00000050._4_4_ = uStack000000000000006c;
              lVar6 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_01a46ff8();
              }
              pcVar7 = (char *)thunk_FUN_01a59484((long)&stack0x00000050 + 4,
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80));
              if (*pcVar7 == '\0') {
                in_stack_00000058 = 0;
              }
              else {
                FUN_01ba9478((long)&stack0x00000050 + 4,&stack0x00000080,
                             *(undefined8 *)PTR_DAT_03cfe4f8);
                uVar2 = _cStack0000000000000080;
                _cStack0000000000000080 = 0;
                in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar2);
                FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
                in_stack_00000058 = _cStack0000000000000080;
              }
              FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
              iVar13 = _cStack0000000000000080;
              lVar6 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_01a46ff8();
              }
              pcVar7 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80));
              if ((0x35 < iVar13) && (*pcVar7 != '\0')) goto LAB_0281d54c;
            }
          }
          else {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar13 + -1,0);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            auVar19 = FUN_027d3e50(uVar9,uVar8,_cStack0000000000000080,in_stack_00000088,0);
            *unaff_x19 = auVar19;
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            FUN_027cf91c(&stack0x00000070,0x99999999,0x99999999,0x19999999,0,0,0);
            uVar12 = FUN_027d4568(auVar19._0_8_,auVar19._8_8_,in_stack_00000070,in_stack_00000078,0)
            ;
            if ((uVar12 & 1) != 0) goto LAB_0281d54c;
          }
          auVar20 = *unaff_x19;
          auVar19 = *unaff_x19;
          _cStack0000000000000080 = 0;
          in_stack_00000088 = 0;
          FUN_027cee20(&stack0x00000080,10,0);
          uVar8 = _cStack0000000000000080;
          uVar9 = in_stack_00000088;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            uVar8 = _cStack0000000000000080;
            uVar9 = in_stack_00000088;
            auVar19 = auVar20;
          }
LAB_0281d58c:
          auVar19 = FUN_027d3da0(auVar19._0_8_,auVar19._8_8_,uVar8,uVar9,0);
        }
        else {
          _cStack0000000000000080 = 0;
          in_stack_00000088 = 0;
          FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar13,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar19 = FUN_027d3e50(uVar9,uVar8,_cStack0000000000000080,in_stack_00000088,0);
        }
        *unaff_x19 = auVar19;
LAB_0281d598:
        if (in_stack_00000030._4_4_ == 0x2d) {
          uVar8 = *(undefined8 *)*unaff_x19;
          uVar9 = *(undefined8 *)(*unaff_x19 + 8);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar19 = FUN_027d3bc0(uVar8,uVar9,0);
          *unaff_x19 = auVar19;
          param_1 = (char *)0x1;
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
        }
      }
      param_1 = (char *)0x1;
OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported:
      if (*(long *)(in_x12 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_1);
      }
      return;
    }
    in_w8 = *(uint *)(unaff_x22 + 0x18);
  } while (uVar11 < in_w8);
LAB_0281d5e4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44(param_1);
}


