/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_GetControllerIsInHand
ENTRY_POINT: 0281cc98
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


void OVRPlugin_OVRP_1_86_0__ovrp_GetControllerIsInHand
               (undefined8 param_1,undefined8 param_2,long *param_3,short *param_4)

{
  ushort uVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  uint in_w8;
  uint in_w9;
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
  ulong unaff_x25;
  uint unaff_w26;
  uint uVar15;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  
  while( true ) {
    if (in_w9 == 0) {
      unaff_w26 = unaff_w29;
    }
    if (((in_w9 & 1) == 0) && (unaff_w20 != 1)) break;
    if (in_stack_00000040._4_4_ < 0x1d) {
      if (in_stack_00000040._4_4_ == 0x1c) {
        uStack0000000000000064 = uStack0000000000000068;
        lVar8 = *(long *)(*param_3 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01a46ff8();
        }
        pcVar9 = (char *)thunk_FUN_01a59484((long)&stack0x00000060 + 4,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80));
        if (*pcVar9 == '\0') {
          if (in_stack_00000038 < 0x6df37f675ef6eae0) {
            if (in_stack_00000038 == 0x6df37f675ef6eadf) {
              if (in_x13 < 0x151fa39a) {
                if (in_x13 == 0x151fa399) {
                  bVar11 = 0x35 < (uint)unaff_x25;
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
          puVar6 = (undefined8 *)&stack0x00000060;
          uStack0000000000000060 = uStack0000000000000068;
          uVar5 = *(undefined8 *)PTR_DAT_03cbfdd8;
        }
        else {
          puVar6 = (undefined8 *)((long)&stack0x00000060 + 4);
          uVar5 = *(undefined8 *)PTR_DAT_03cbfdd8;
        }
        FUN_01ba9478(puVar6,&stack0x00000080,uVar5);
        param_3 = (long *)PTR_DAT_03cbfff0;
        in_x17 = (long *)PTR_DAT_03cfe4f0;
        if (cStack0000000000000080 != '\0') goto LAB_0281cf54;
LAB_0281cfd0:
        in_x13 = (unaff_x25 + in_x13 * unaff_x24) - 0x30;
      }
      else {
        if (0x12 < in_stack_00000040._4_4_) goto LAB_0281cfd0;
        in_stack_00000038 = (unaff_x25 + in_stack_00000038 * unaff_x24) - 0x30;
      }
      in_stack_00000040._4_4_ = in_stack_00000040._4_4_ + 1;
    }
    else {
LAB_0281cf54:
      lVar8 = *(long *)(*in_x17 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01a46ff8();
      }
      pcVar9 = (char *)thunk_FUN_01a59484((long)&stack0x00000068 + 4,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80));
      if (*pcVar9 == '\0') {
        _cStack0000000000000080 = CONCAT62(uStack0000000000000081._1_6_,(short)unaff_x25);
        FUN_02241190((long)&stack0x00000068 + 4,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe590);
      }
      in_w14 = in_w14 + 1;
      param_3 = (long *)PTR_DAT_03cbfff0;
      in_x17 = (long *)PTR_DAT_03cfe4f0;
    }
LAB_0281cd98:
    puVar3 = PTR_DAT_03cc5358;
    unaff_w26 = unaff_w26 + 1;
    if ((int)unaff_w29 <= (int)unaff_w26) {
      if (*(int *)(*(long *)PTR_DAT_03cc5358 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar13 = unaff_w23 + in_w14 + (unaff_w27 - unaff_w28);
      auVar16 = FUN_027d361c(in_stack_00000038,0);
      if (in_stack_00000040._4_4_ + -0x13 == 0 || in_stack_00000040._4_4_ < 0x13) {
        *(long *)*unaff_x19 = auVar16._0_8_;
      }
      else {
        _cStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,1,0,0,0,in_stack_00000040._4_4_ + -0x13,0);
        auVar16 = FUN_027d3e50(auVar16._0_8_,auVar16._8_8_,_cStack0000000000000080,in_stack_00000088
                               ,0);
        auVar17 = FUN_027d361c(in_x13,0);
        auVar16 = FUN_027d3c38(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
        *(long *)*unaff_x19 = auVar16._0_8_;
      }
      uVar5 = auVar16._8_8_;
      uVar10 = auVar16._0_8_;
      *(undefined8 *)(*unaff_x19 + 8) = uVar5;
      if (iVar13 < 1) {
        in_stack_00000050._4_4_ = uStack000000000000006c;
        lVar8 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01a46ff8();
        }
        pcVar9 = (char *)thunk_FUN_01a59484((long)&stack0x00000050 + 4,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80));
        if (*pcVar9 == '\0') {
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
        lVar8 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01a46ff8();
        }
        pcVar9 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80));
        if (((-0x1d < iVar13) && (0x34 < iVar4)) && (*pcVar9 != '\0')) {
          uVar5 = *(undefined8 *)*unaff_x19;
          uVar10 = *(undefined8 *)(*unaff_x19 + 8);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar16 = FUN_027d3bc8(uVar5,uVar10,0);
          *unaff_x19 = auVar16;
        }
        if (-1 < iVar13) goto LAB_0281d598;
        if (0 < iVar13 + in_stack_00000040._4_4_ + 0x1c) {
          uVar5 = *(undefined8 *)*unaff_x19;
          uVar10 = *(undefined8 *)(*unaff_x19 + 8);
          auVar17 = *unaff_x19;
          auVar16 = *unaff_x19;
          if (iVar13 < -0x1c) {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,0x10000000,0x3e250261,0x204fce5e,0,0,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            auVar16 = FUN_027d3e50(uVar5,uVar10,_cStack0000000000000080,in_stack_00000088,0);
            *unaff_x19 = auVar16;
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
              auVar16 = auVar17;
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
            uVar7 = FUN_027d432c(uVar10,uVar5,_cStack0000000000000080,in_stack_00000088,0);
            if ((uVar7 & 1) != 0) {
              in_stack_00000050._4_4_ = uStack000000000000006c;
              lVar8 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01a46ff8();
              }
              pcVar9 = (char *)thunk_FUN_01a59484((long)&stack0x00000050 + 4,
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80));
              if (*pcVar9 == '\0') {
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
              lVar8 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01a46ff8();
              }
              pcVar9 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80));
              if ((0x35 < iVar13) && (*pcVar9 != '\0')) goto LAB_0281d54c;
            }
          }
          else {
            _cStack0000000000000080 = 0;
            in_stack_00000088 = 0;
            FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar13 + -1,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            auVar16 = FUN_027d3e50(uVar10,uVar5,_cStack0000000000000080,in_stack_00000088,0);
            *unaff_x19 = auVar16;
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            FUN_027cf91c(&stack0x00000070,0x99999999,0x99999999,0x19999999,0,0,0);
            uVar7 = FUN_027d4568(auVar16._0_8_,auVar16._8_8_,in_stack_00000070,in_stack_00000078,0);
            if ((uVar7 & 1) != 0) goto LAB_0281d54c;
          }
          auVar17 = *unaff_x19;
          auVar16 = *unaff_x19;
          _cStack0000000000000080 = 0;
          in_stack_00000088 = 0;
          FUN_027cee20(&stack0x00000080,10,0);
          uVar5 = _cStack0000000000000080;
          uVar10 = in_stack_00000088;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            uVar5 = _cStack0000000000000080;
            uVar10 = in_stack_00000088;
            auVar16 = auVar17;
          }
LAB_0281d58c:
          auVar16 = FUN_027d3da0(auVar16._0_8_,auVar16._8_8_,uVar5,uVar10,0);
        }
        else {
          _cStack0000000000000080 = 0;
          in_stack_00000088 = 0;
          FUN_027cf91c(&stack0x00000080,1,0,0,0,iVar13,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar16 = FUN_027d3e50(uVar10,uVar5,_cStack0000000000000080,in_stack_00000088,0);
        }
        *unaff_x19 = auVar16;
LAB_0281d598:
        if (in_stack_00000030._4_4_ == 0x2d) {
          uVar5 = *(undefined8 *)*unaff_x19;
          uVar10 = *(undefined8 *)(*unaff_x19 + 8);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          auVar16 = FUN_027d3bc0(uVar5,uVar10,0);
          *unaff_x19 = auVar16;
          uVar5 = 1;
          goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
        }
      }
      uVar5 = 1;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
    in_w8 = *(uint *)(unaff_x22 + 0x18);
    if (in_w8 <= unaff_w26) goto LAB_0281d5e4;
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w26 * 2 + 0x20);
    unaff_x25 = (ulong)uVar1;
    uVar14 = unaff_w28;
    if ((uVar1 == 0x65) || (uVar1 == 0x45)) {
LAB_0281ccdc:
                    /* try { // try from 0281ccdc to 0291cd0f has its CatchHandler @ 0281ca00 */
      uVar5 = 3;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0281ccd8 with catch @ 0281cce4
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0281cc14 with catch @ 0281ccec
                        */
      if ((unaff_w26 == unaff_w21) || (unaff_w26 == unaff_w27))
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0281cc24 with catch @ 0281ccf0
                        */
      uVar15 = unaff_w26 + 1;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0281cc18 with catch @ 0281ccf4
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0281cb58 with catch @ 0281ccf8
                        */
      if (uVar15 == unaff_w29) goto LAB_0281cb94;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0281cccc with catch @ 0281ccfc
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0281cbb4 with catch @ 0281cd00
                        */
      unaff_w28 = unaff_w26;
      if ((int)unaff_w29 <= (int)unaff_w27) {
        unaff_w28 = uVar14;
      }
      if (in_w8 <= uVar15) goto LAB_0281d5e4;
                    /* try { // try from 0281cd10 to 0291cd13 has its CatchHandler @ 0281cd24 */
      sVar2 = *(short *)(unaff_x22 + (long)(int)uVar15 * 2 + 0x20);
      if (sVar2 == 0x2b) {
        bVar11 = false;
        uVar15 = unaff_w26 + 2;
      }
      else if (sVar2 == 0x2d) {
                    /* catch() { ... } // from try @ 0281cd10 with catch @ 0281cd24 */
        uVar15 = unaff_w26 + 2;
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      unaff_w26 = uVar15;
      iVar13 = unaff_w23;
      if ((int)uVar15 < (int)unaff_w29) {
        uVar14 = uVar15;
        if (uVar15 <= in_w8) {
          uVar14 = in_w8;
        }
        do {
          if (uVar14 == uVar15) goto LAB_0281d5e4;
          uVar12 = (uint)*(ushort *)(unaff_x22 + (long)(int)uVar15 * 2 + 0x20);
          if (9 < uVar12 - 0x30) goto LAB_0281cb94;
          iVar13 = uVar12 + unaff_w23 * (int)unaff_x24 + -0x30;
          uVar15 = uVar15 + 1;
          if (iVar13 <= unaff_w23) {
            iVar13 = unaff_w23;
          }
          unaff_w26 = unaff_w29;
          unaff_w23 = iVar13;
        } while (unaff_w29 != uVar15);
      }
      unaff_w23 = -iVar13;
      if (!bVar11) {
        unaff_w23 = iVar13;
      }
      goto LAB_0281cd98;
    }
    uVar14 = (uint)uVar1;
    if (uVar14 == 0x2e) {
      if (unaff_w26 == unaff_w21) goto LAB_0281cb94;
LAB_0281cc5c:
      uVar5 = 3;
      if ((unaff_w27 != unaff_w29) || (unaff_w27 = unaff_w26 + 1, unaff_w27 == unaff_w29))
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
      goto LAB_0281cd98;
    }
    if (9 < uVar14 - 0x30) goto LAB_0281cb94;
    in_w9 = (uint)(unaff_w26 != unaff_w21 || uVar14 != 0x30);
  }
  if (in_w8 <= in_w16) {
LAB_0281d5e4:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  sVar2 = *param_4;
  unaff_w26 = in_w16;
  if (sVar2 == 0x2e) goto LAB_0281cc5c;
  uVar14 = unaff_w28;
                    /* try { // try from 0281cccc to 0291ccd3 has its CatchHandler @ 0281ccfc */
  if (sVar2 == 0x45) goto LAB_0281ccdc;
                    /* try { // try from 0281ccd4 to 0291ccd7 has its CatchHandler @ 0281ca00 */
                    /* try { // try from 0281ccd8 to 0291ccdb has its CatchHandler @ 0281cce4 */
  if (sVar2 == 0x65) goto LAB_0281ccdc;
LAB_0281cb94:
  uVar5 = 3;
OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported:
  if (*(long *)(in_x12 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


