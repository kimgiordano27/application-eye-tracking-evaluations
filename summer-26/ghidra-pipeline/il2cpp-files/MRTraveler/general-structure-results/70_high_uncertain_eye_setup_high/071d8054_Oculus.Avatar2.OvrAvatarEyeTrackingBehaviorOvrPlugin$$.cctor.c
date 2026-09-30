/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarEyeTrackingBehaviorOvrPlugin$$.cctor
ENTRY_POINT: 071d8054
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin___cctor
               (undefined8 param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
               ulong param_5,short *param_6,undefined8 *param_7)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  char in_NG;
  char in_OV;
  undefined8 uVar6;
  ulong uVar7;
  bool bVar8;
  uint in_w8;
  int in_w9;
  uint uVar9;
  int in_w10;
  long in_x12;
  ulong in_x13;
  ulong in_x14;
  int in_w15;
  uint in_w17;
  undefined1 (*unaff_x19) [16];
  int unaff_w20;
  uint unaff_w21;
  undefined8 uVar10;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar11;
  uint unaff_w26;
  int iVar12;
  int unaff_w27;
  long unaff_x28;
  uint unaff_w29;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iStack0000000000000038;
  int iStack000000000000003c;
  ushort uStack0000000000000048;
  char cStack000000000000004c;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  char cStack0000000000000060;
  int iStack0000000000000064;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000088;
  
  do {
    iVar12 = in_w10;
    if (in_NG == in_OV) {
      iVar12 = unaff_w27;
    }
    uVar9 = unaff_w29;
    uVar11 = unaff_w24;
    if (unaff_w29 == unaff_w21) {
      do {
        iVar5 = -iVar12;
        if (in_w9 == 0) {
          iVar5 = iVar12;
        }
LAB_071d806c:
        iVar12 = iVar5;
        puVar4 = PTR_DAT_08e7fed8;
        uVar9 = uVar9 + 1;
        if ((int)unaff_w29 <= (int)uVar9) {
          if (*(int *)(*(long *)PTR_DAT_08e7fed8 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          iVar12 = iVar12 + in_w15 + (unaff_w23 - unaff_w24);
          auVar13 = FUN_071628e0(in_x14,0);
          if (iStack000000000000003c + -0x13 == 0 || iStack000000000000003c < 0x13) {
            *(long *)*unaff_x19 = auVar13._0_8_;
          }
          else {
            _cStack0000000000000060 = 0;
            in_stack_00000068 = 0;
            FUN_0715eb88(&stack0x00000060,1,0,0,0,iStack000000000000003c + -0x13,0);
            auVar13 = FUN_07162e68(auVar13._0_8_,auVar13._8_8_,_cStack0000000000000060,
                                   in_stack_00000068,0);
            auVar14 = FUN_071628e0(in_x13,0);
            auVar13 = FUN_07162c50(auVar13._0_8_,auVar13._8_8_,auVar14._0_8_,auVar14._8_8_,0);
            *(long *)*unaff_x19 = auVar13._0_8_;
          }
          uVar6 = auVar13._8_8_;
          uVar10 = auVar13._0_8_;
          *(undefined8 *)(*unaff_x19 + 8) = uVar6;
          if (iVar12 < 1) {
            if ((_cStack000000000000004c & 0xff) == 0) {
              uVar7 = 0;
            }
            else {
              _cStack0000000000000060 = 0;
              FUN_056b6af4(&stack0x00000060,_cStack000000000000004c >> 0x10,
                           *(undefined8 *)PTR_DAT_08e707a0);
              uVar7 = _cStack0000000000000060;
            }
            if (((-0x1d < iVar12) && ((uVar7 & 0xff) != 0)) && (0x34 < (int)(uVar7 >> 0x20))) {
              uVar6 = *(undefined8 *)*unaff_x19;
              uVar10 = *(undefined8 *)(*unaff_x19 + 8);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              auVar13 = FUN_07162b70(uVar6,uVar10,0);
              *unaff_x19 = auVar13;
            }
            if (-1 < iVar12) goto LAB_071d86d0;
            if (0 < iVar12 + iStack000000000000003c + 0x1c) {
              uVar6 = *(undefined8 *)*unaff_x19;
              uVar10 = *(undefined8 *)(*unaff_x19 + 8);
              auVar14 = *unaff_x19;
              auVar13 = *unaff_x19;
              if (iVar12 < -0x1c) {
                _cStack0000000000000060 = 0;
                in_stack_00000068 = 0;
                FUN_0715eb88(&stack0x00000060,0x10000000,0x3e250261,0x204fce5e,0,0,0);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                auVar13 = FUN_07162e68(uVar6,uVar10,_cStack0000000000000060,in_stack_00000068,0);
                *unaff_x19 = auVar13;
                in_stack_00000050 = 0;
                in_stack_00000058 = 0;
                FUN_0715eb88(&stack0x00000050,1,0,0,0,-0x1c - iVar12,0);
                uVar7 = in_stack_00000050;
                uVar6 = in_stack_00000058;
              }
              else {
                _cStack0000000000000060 = 0;
                in_stack_00000068 = 0;
                FUN_0715eb88(&stack0x00000060,1,0,0,0,-iVar12,0);
                uVar7 = _cStack0000000000000060;
                uVar6 = in_stack_00000068;
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                  uVar7 = _cStack0000000000000060;
                  uVar6 = in_stack_00000068;
                  auVar13 = auVar14;
                }
              }
              auVar13 = FUN_07162db8(auVar13._0_8_,auVar13._8_8_,uVar7,uVar6,0);
              goto LAB_071d86cc;
            }
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            in_stack_00000078 = (*(undefined8 **)(*(long *)puVar4 + 0xb8))[1];
            in_stack_00000070 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
            *(undefined8 *)(*unaff_x19 + 8) = in_stack_00000078;
            *(undefined8 *)*unaff_x19 = in_stack_00000070;
          }
          else {
            if (0x1d < iVar12 + iStack000000000000003c) {
LAB_071d83dc:
              uVar6 = 2;
              goto LAB_071d7e54;
            }
            if (iVar12 + iStack000000000000003c == 0x1d) {
              if (iVar12 < 2) {
                _cStack0000000000000060 = 0;
                in_stack_00000068 = 0;
                FUN_0715eb88(&stack0x00000060,0x99999999,0x99999999,0x19999999,0,0,0);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                uVar7 = FUN_07163344(uVar10,uVar6,_cStack0000000000000060,in_stack_00000068,0);
                if (((uVar7 & 1) != 0) && ((_cStack000000000000004c & 0xff) != 0)) {
                  _cStack0000000000000060 = 0;
                  FUN_056b6af4(&stack0x00000060,_cStack000000000000004c >> 0x10,
                               *(undefined8 *)PTR_DAT_08e707a0);
                  if ((cStack0000000000000060 != '\0') && (0x35 < iStack0000000000000064))
                  goto LAB_071d83dc;
                }
              }
              else {
                _cStack0000000000000060 = 0;
                in_stack_00000068 = 0;
                FUN_0715eb88(&stack0x00000060,1,0,0,0,iVar12 + -1,0);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                auVar13 = FUN_07162e68(uVar10,uVar6,_cStack0000000000000060,in_stack_00000068,0);
                *unaff_x19 = auVar13;
                in_stack_00000050 = 0;
                in_stack_00000058 = 0;
                FUN_0715eb88(&stack0x00000050,0x99999999,0x99999999,0x19999999,0,0,0);
                uVar7 = FUN_07163580(auVar13._0_8_,auVar13._8_8_,in_stack_00000050,in_stack_00000058
                                     ,0);
                if ((uVar7 & 1) != 0) goto LAB_071d83dc;
              }
              uVar6 = *(undefined8 *)*unaff_x19;
              uVar10 = *(undefined8 *)(*unaff_x19 + 8);
              _cStack0000000000000060 = 0;
              in_stack_00000068 = 0;
              FUN_0715e08c(&stack0x00000060,10,0);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              auVar13 = FUN_07162db8(uVar6,uVar10,_cStack0000000000000060,in_stack_00000068,0);
            }
            else {
              _cStack0000000000000060 = 0;
              in_stack_00000068 = 0;
              FUN_0715eb88(&stack0x00000060,1,0,0,0,iVar12,0);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              auVar13 = FUN_07162e68(uVar10,uVar6,_cStack0000000000000060,in_stack_00000068,0);
            }
LAB_071d86cc:
            *unaff_x19 = auVar13;
LAB_071d86d0:
            if (iStack0000000000000038 == 0x2d) {
              uVar6 = *(undefined8 *)*unaff_x19;
              uVar10 = *(undefined8 *)(*unaff_x19 + 8);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              auVar13 = FUN_07162b68(uVar6,uVar10,0);
              *unaff_x19 = auVar13;
              uVar6 = 1;
              goto LAB_071d7e54;
            }
          }
          uVar6 = 1;
          goto LAB_071d7e54;
        }
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if (uVar1 <= uVar9) goto LAB_071d8718;
        uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar9 * 2 + 0x20);
        if ((uVar2 == 0x65) || (uVar2 == 0x45)) goto LAB_071d7fb0;
        uVar11 = (uint)uVar2;
        iVar5 = iVar12;
        if (uVar11 == 0x2e) {
          if (uVar9 == unaff_w26) goto LAB_071d7e50;
LAB_071d7f30:
          uVar6 = 3;
          if ((unaff_w23 != unaff_w29) || (unaff_w23 = uVar9 + 1, unaff_w23 == unaff_w29))
          goto LAB_071d7e54;
          goto LAB_071d806c;
        }
        if (9 < uVar11 - 0x30) goto LAB_071d7e50;
        if ((uVar9 != unaff_w26 || uVar11 != 0x30) || (uVar9 = unaff_w29, unaff_w20 == 1)) {
          if (iStack000000000000003c < 0x1d) {
            if (iStack000000000000003c == 0x1c) {
              if ((uStack0000000000000048 & 0xff) == 0) {
                if (in_x14 < param_3 + 1) {
                  if (in_x14 == param_3) {
                    if (in_x13 < param_5 + 1) {
                      bVar8 = in_x13 == param_5 && 0x35 < uVar11;
                    }
                    else {
                      bVar8 = true;
                    }
                  }
                  else {
                    bVar8 = false;
                  }
                }
                else {
                  bVar8 = true;
                }
                FUN_056b16dc(&stack0x00000048,bVar8,*param_7);
                param_3 = 0x6df37f675ef6eadf;
                param_5 = 0x151fa399;
                param_7 = (undefined8 *)PTR_DAT_08e75cf0;
                param_2 = (undefined8 *)PTR_DAT_08ea9c38;
              }
              if (0xff < uStack0000000000000048) goto LAB_071d8094;
LAB_071d8238:
              in_x13 = ((ulong)uVar2 + in_x13 * unaff_x28) - 0x30;
            }
            else {
              if (0x12 < iStack000000000000003c) goto LAB_071d8238;
              in_x14 = ((ulong)uVar2 + in_x14 * unaff_x28) - 0x30;
            }
            iStack000000000000003c = iStack000000000000003c + 1;
          }
          else {
LAB_071d8094:
            if (cStack000000000000004c == '\0') {
              FUN_056b24c0((long)&stack0x00000048 + 4,uVar2,*param_2);
              param_5 = 0x151fa399;
              param_3 = 0x6df37f675ef6eadf;
              param_2 = (undefined8 *)PTR_DAT_08ea9c38;
              param_7 = (undefined8 *)PTR_DAT_08e75cf0;
            }
            in_w15 = in_w15 + 1;
          }
          goto LAB_071d806c;
        }
        if (uVar1 <= in_w17) goto LAB_071d8718;
        sVar3 = *param_6;
        uVar9 = in_w17;
        if (sVar3 == 0x2e) goto LAB_071d7f30;
        if ((sVar3 != 0x45) && (sVar3 != 0x65)) goto LAB_071d7e50;
LAB_071d7fb0:
        uVar6 = 3;
        if ((uVar9 == unaff_w26) || (uVar9 == unaff_w23)) goto LAB_071d7e54;
        unaff_w21 = uVar9 + 1;
        if (unaff_w21 == unaff_w29) goto LAB_071d7e50;
        uVar11 = uVar9;
        if ((int)unaff_w29 <= (int)unaff_w23) {
          uVar11 = unaff_w24;
        }
        if (uVar1 <= unaff_w21) goto LAB_071d8718;
        sVar3 = *(short *)(unaff_x22 + (long)(int)unaff_w21 * 2 + 0x20);
        if (sVar3 == 0x2b) {
          in_w9 = 0;
          unaff_w21 = uVar9 + 2;
        }
        else if (sVar3 == 0x2d) {
          unaff_w21 = uVar9 + 2;
          in_w9 = 1;
        }
        else {
          in_w9 = 0;
        }
        uVar9 = unaff_w21;
        unaff_w24 = uVar11;
      } while ((int)unaff_w29 <= (int)unaff_w21);
      in_w8 = unaff_w21;
      if (unaff_w21 <= uVar1) {
        in_w8 = uVar1;
      }
    }
    if (in_w8 == unaff_w21) {
LAB_071d8718:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar9 = (uint)*(ushort *)(unaff_x22 + (long)(int)unaff_w21 * 2 + 0x20);
    if (9 < uVar9 - 0x30) {
LAB_071d7e50:
      uVar6 = 3;
LAB_071d7e54:
      if (*(long *)(in_x12 + 0x28) != in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
      return;
    }
    in_w10 = uVar9 + iVar12 * (int)unaff_x28 + -0x30;
    unaff_w21 = unaff_w21 + 1;
    in_OV = SBORROW4(iVar12,in_w10);
    in_NG = iVar12 - in_w10 < 0;
    unaff_w24 = uVar11;
    unaff_w27 = iVar12;
  } while( true );
}


