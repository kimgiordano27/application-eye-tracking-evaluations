/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$.cctor
ENTRY_POINT: 0281cd2c
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


void OVRPlugin_OVRP_1_86_0___cctor
               (undefined8 param_1,undefined8 param_2,long *param_3,short *param_4)

{
  ushort uVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint in_w8;
  int in_w9;
  uint uVar12;
  long in_x12;
  ulong in_x13;
  int in_w14;
  uint in_w16;
  long *in_x17;
  undefined1 (*unaff_x19) [16];
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  int unaff_w23;
  int iVar13;
  long unaff_x24;
  uint uVar14;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  
                    /* try { // try from 0281cd2c to 0291cd93 has its CatchHandler @ 0281cda8 */
  do {
    uVar12 = unaff_w26;
    iVar13 = unaff_w23;
    if ((int)unaff_w26 < (int)unaff_w29) {
      uVar14 = unaff_w26;
      if (unaff_w26 <= in_w8) {
        uVar14 = in_w8;
      }
      do {
        if (uVar14 == unaff_w26) goto LAB_0281d5e4;
        uVar12 = (uint)*(ushort *)(unaff_x22 + (long)(int)unaff_w26 * 2 + 0x20);
        if (9 < uVar12 - 0x30) goto LAB_0281cb94;
        iVar13 = uVar12 + unaff_w23 * (int)unaff_x24 + -0x30;
        unaff_w26 = unaff_w26 + 1;
        if (iVar13 <= unaff_w23) {
          iVar13 = unaff_w23;
        }
        uVar12 = unaff_w29;
        unaff_w23 = iVar13;
      } while (unaff_w29 != unaff_w26);
    }
                    /* try { // try from 0281cd94 to 0291cd9f has its CatchHandler @ 0281ca00 */
    unaff_w23 = -iVar13;
    if (in_w9 == 0) {
      unaff_w23 = iVar13;
    }
LAB_0281cd98:
    puVar3 = PTR_DAT_03cc5358;
    uVar12 = uVar12 + 1;
                    /* try { // try from 0281cda0 to 0291cda7 has its CatchHandler @ 0281cda8 */
    if ((int)unaff_w29 <= (int)uVar12) {
      if (*(int *)(*(long *)PTR_DAT_03cc5358 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar13 = unaff_w23 + in_w14 + (unaff_w27 - unaff_w28);
      auVar15 = FUN_027d361c(in_stack_00000038,0);
      if (in_stack_00000040._4_4_ + -0x13 == 0 || in_stack_00000040._4_4_ < 0x13) {
        *(long *)*unaff_x19 = auVar15._0_8_;
      }
      else {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,1,0,0,0,in_stack_00000040._4_4_ + -0x13,0);
        auVar15 = FUN_027d3e50(auVar15._0_8_,auVar15._8_8_,_cStack0000000000000080,in_stack_00000088
                               ,0);
        auVar16 = FUN_027d361c(in_x13,0);
        auVar15 = FUN_027d3c38(auVar15._0_8_,auVar15._8_8_,auVar16._0_8_,auVar16._8_8_,0);
        *(long *)*unaff_x19 = auVar15._0_8_;
      }
      uVar5 = auVar15._8_8_;
      uVar10 = auVar15._0_8_;
      *(undefined8 *)(*unaff_x19 + 8) = uVar5;
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
          uVar1 = _cStack0000000000000080;
          _cStack0000000000000080 = 0;
          in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar1);
          FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
          in_stack_00000058 = _cStack0000000000000080;
        }
        FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
        iVar4 = _cStack0000000000000080;
        lVar6 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01a46ff8();
        }
        pcVar7 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80));
        if (((-0x1d < iVar13) && (0x34 < iVar4)) && (*pcVar7 != '\0')) {
          uVar5 = *(undefined8 *)*unaff_x19;
          uVar10 = *(undefined8 *)(*unaff_x19 + 8);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar15 = FUN_027d3bc8(uVar5,uVar10,0);
          *unaff_x19 = auVar15;
        }
        if (-1 < iVar13) goto LAB_0281d598;
        if (0 < iVar13 + in_stack_00000040._4_4_ + 0x1c) {
          uVar5 = *(undefined8 *)*unaff_x19;
          uVar10 = *(undefined8 *)(*unaff_x19 + 8);
          auVar16 = *unaff_x19;
          auVar15 = *unaff_x19;
          if (iVar13 < -0x1c) {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,0x10000000,0x3e250261,0x204fce5e,0,0,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            auVar15 = FUN_027d3e50(uVar5,uVar10,_cStack0000000000000080,in_stack_00000088,0);
            *unaff_x19 = auVar15;
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            FUN_027cf91c(&stack0x00000070,1,0,0,0,-0x1c - iVar13,0);
            uVar5 = in_stack_00000070;
            uVar10 = in_stack_00000078;
          }
          else {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,1,0,0,0,-iVar13,0);
            uVar5 = _cStack0000000000000080;
            uVar10 = in_stack_00000088;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              uVar5 = _cStack0000000000000080;
              uVar10 = in_stack_00000088;
              auVar15 = auVar16;
            }
          }
          goto LAB_0281d58c;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000098 = (*(undefined8 **)(*(long *)puVar3 + 0xb8))[1];
        in_stack_00000090 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
        *(undefined8 *)(*unaff_x19 + 8) = in_stack_00000098;
        *(undefined8 *)*unaff_x19 = in_stack_00000090;
      }
      else {
        if (0x1d < iVar13 + in_stack_00000040._4_4_) {
LAB_0281d54c:
          uVar5 = 2;
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
        }
        if (iVar13 + in_stack_00000040._4_4_ == 0x1d) {
          if (iVar13 < 2) {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,0x99999999,0x99999999,0x19999999,0,0,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar9 = FUN_027d432c(uVar10,uVar5,_cStack0000000000000080,in_stack_00000088,0);
            if ((uVar9 & 1) != 0) {
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
                uVar1 = _cStack0000000000000080;
                _cStack0000000000000080 = 0;
                in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar1);
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
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            auVar15 = FUN_027d3e50(uVar10,uVar5,_cStack0000000000000080,in_stack_00000088,0);
            *unaff_x19 = auVar15;
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            FUN_027cf91c(&stack0x00000070,0x99999999,0x99999999,0x19999999,0,0,0);
            uVar9 = FUN_027d4568(auVar15._0_8_,auVar15._8_8_,in_stack_00000070,in_stack_00000078,0);
            if ((uVar9 & 1) != 0) goto LAB_0281d54c;
          }
          auVar16 = *unaff_x19;
          auVar15 = *unaff_x19;
          _cStack0000000000000080 = 0;
          in_stack_00000088 = 0;
          FUN_027cee20(&stack0x00000080,10,0);
          uVar5 = _cStack0000000000000080;
          uVar10 = in_stack_00000088;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            uVar5 = _cStack0000000000000080;
            uVar10 = in_stack_00000088;
            auVar15 = auVar16;
          }
LAB_0281d58c:
          auVar15 = FUN_027d3da0(auVar15._0_8_,auVar15._8_8_,uVar5,uVar10,0);
        }
        else {
          _cStack0000000000000080 = 0;
          in_stack_00000088 = 0;
          FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar13,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar15 = FUN_027d3e50(uVar10,uVar5,_cStack0000000000000080,in_stack_00000088,0);
        }
        *unaff_x19 = auVar15;
LAB_0281d598:
        if (in_stack_00000030._4_4_ == 0x2d) {
          uVar5 = *(undefined8 *)*unaff_x19;
          uVar10 = *(undefined8 *)(*unaff_x19 + 8);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar15 = FUN_027d3bc0(uVar5,uVar10,0);
          *unaff_x19 = auVar15;
          uVar5 = 1;
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
        }
      }
      uVar5 = 1;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
    in_w8 = *(uint *)(unaff_x22 + 0x18);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0281cd2c with catch @ 0281cda8
                       catch(type#2 @ 00000000) { ... } // from try @ 0281cda0 with catch @ 0281cda8
                        */
    if (in_w8 <= uVar12) goto LAB_0281d5e4;
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar12 * 2 + 0x20);
    if ((uVar1 == 0x65) || (uVar1 == 0x45)) goto LAB_0281ccdc;
    uVar14 = (uint)uVar1;
    if (uVar14 == 0x2e) {
      if (uVar12 == unaff_w21) goto LAB_0281cb94;
LAB_0281cc5c:
      uVar5 = 3;
      if ((unaff_w27 != unaff_w29) || (unaff_w27 = uVar12 + 1, unaff_w27 == unaff_w29))
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
      goto LAB_0281cd98;
    }
    if (9 < uVar14 - 0x30) goto LAB_0281cb94;
    if ((uVar12 != unaff_w21 || uVar14 != 0x30) || (uVar12 = unaff_w29, unaff_w20 == 1)) {
      if (in_stack_00000040._4_4_ < 0x1d) {
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
                if (in_x13 < 0x151fa39a) {
                  if (in_x13 == 0x151fa399) {
                    bVar11 = 0x35 < uVar14;
                  }
                  else {
                    bVar11 = false;
                  }
                }
                else {
                  bVar11 = true;
                }
              }
              else {
                bVar11 = false;
              }
            }
            else {
              bVar11 = true;
            }
            _cStack0000000000000080 = CONCAT71(uStack0000000000000081,bVar11);
            FUN_02241190(&stack0x00000068,&stack0x00000080,*(undefined8 *)PTR_DAT_03cbffe8);
            puVar8 = (undefined8 *)&stack0x00000060;
            uStack0000000000000060 = uStack0000000000000068;
            uVar5 = *(undefined8 *)PTR_DAT_03cbfdd8;
          }
          else {
            puVar8 = (undefined8 *)((long)&stack0x00000060 + 4);
            uVar5 = *(undefined8 *)PTR_DAT_03cbfdd8;
          }
          FUN_01ba9478(puVar8,&stack0x00000080,uVar5);
          param_3 = (long *)PTR_DAT_03cbfff0;
          in_x17 = (long *)PTR_DAT_03cfe4f0;
          if (cStack0000000000000080 != '\0') goto LAB_0281cf54;
LAB_0281cfd0:
          in_x13 = ((ulong)uVar1 + in_x13 * unaff_x24) - 0x30;
        }
        else {
          if (0x12 < in_stack_00000040._4_4_) goto LAB_0281cfd0;
          in_stack_00000038 = ((ulong)uVar1 + in_stack_00000038 * unaff_x24) - 0x30;
        }
        in_stack_00000040._4_4_ = in_stack_00000040._4_4_ + 1;
      }
      else {
LAB_0281cf54:
        lVar6 = *(long *)(*in_x17 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01a46ff8();
        }
        pcVar7 = (char *)thunk_FUN_01a59484((long)&stack0x00000068 + 4,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80));
        if (*pcVar7 == '\0') {
          _cStack0000000000000080 = CONCAT62(uStack0000000000000081._1_6_,uVar1);
          FUN_02241190((long)&stack0x00000068 + 4,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe590);
        }
        in_w14 = in_w14 + 1;
        param_3 = (long *)PTR_DAT_03cbfff0;
        in_x17 = (long *)PTR_DAT_03cfe4f0;
      }
      goto LAB_0281cd98;
    }
    if (in_w8 <= in_w16) goto LAB_0281d5e4;
    sVar2 = *param_4;
    uVar12 = in_w16;
    if (sVar2 == 0x2e) goto LAB_0281cc5c;
    if ((sVar2 != 0x45) && (sVar2 != 0x65)) {
LAB_0281cb94:
      uVar5 = 3;
OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported:
      if (*(long *)(in_x12 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar5);
      }
      return;
    }
LAB_0281ccdc:
    uVar5 = 3;
    if ((uVar12 == unaff_w21) || (uVar12 == unaff_w27))
    goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    unaff_w26 = uVar12 + 1;
    if (unaff_w26 == unaff_w29) goto LAB_0281cb94;
    uVar14 = uVar12;
    if ((int)unaff_w29 <= (int)unaff_w27) {
      uVar14 = unaff_w28;
    }
    if (in_w8 <= unaff_w26) {
LAB_0281d5e4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    sVar2 = *(short *)(unaff_x22 + (long)(int)unaff_w26 * 2 + 0x20);
    unaff_w28 = uVar14;
    if (sVar2 == 0x2b) {
      in_w9 = 0;
      unaff_w26 = uVar12 + 2;
    }
    else if (sVar2 == 0x2d) {
      unaff_w26 = uVar12 + 2;
      in_w9 = 1;
    }
    else {
      in_w9 = 0;
    }
  } while( true );
}


