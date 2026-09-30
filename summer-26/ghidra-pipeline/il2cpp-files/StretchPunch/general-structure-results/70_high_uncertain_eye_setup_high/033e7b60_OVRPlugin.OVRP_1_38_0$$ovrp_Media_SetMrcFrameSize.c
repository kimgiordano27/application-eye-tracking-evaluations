/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameSize
ENTRY_POINT: 033e7b60
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameSize(long *param_1)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  long unaff_x20;
  int *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined4 unaff_w26;
  uint uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint uStack0000000000000038;
  uint uStack000000000000003c;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_034175bc(param_1,unaff_w26,0);
  if (*unaff_x23 < *(int *)(unaff_x25 + 0x10)) {
    bVar1 = false;
    do {
      sVar3 = FUN_03271744();
      if (sVar3 != 0x25) {
        uVar8 = FUN_03271744();
        auVar15 = _in_stack_00000028;
        if (param_1 != (long *)0x0) {
          uVar8 = uVar8 & 0xffffffff;
LAB_033e7c28:
          FUN_03419818(param_1,uVar8,0);
          bVar2 = bVar1;
          goto switchD_033e7c00_caseD_3f;
        }
        goto LAB_033e83e0;
      }
      *unaff_x23 = *unaff_x23 + 1;
      uVar4 = FUN_03271744();
      auVar15 = _in_stack_00000028;
      if (uVar4 < 0x59) {
        bVar2 = true;
        switch(uVar4) {
        case 0x21:
switchD_033e7c00_caseD_21:
          if (unaff_x20 != 0) {
            auVar15 = FUN_033e8430();
            _in_stack_00000028 = auVar15;
            sVar3 = FUN_03271744();
            uVar6 = (uint)(auVar15._0_4_ == 0);
            if (sVar3 != 0x21) {
              uVar6 = ~auVar15._0_4_;
            }
            goto switchD_033e7cb8_caseD_27;
          }
          goto LAB_033e83e0;
        default:
          goto switchD_033e7c00_caseD_22;
        case 0x25:
          if (param_1 != (long *)0x0) {
            uVar8 = 0x25;
            goto LAB_033e7c28;
          }
          goto LAB_033e83e0;
        case 0x26:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2f:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x41:
        case 0x4f:
switchD_033e7c00_caseD_26:
          if (unaff_x20 != 0) {
            uVar5 = FUN_033e8430();
            auVar15 = FUN_033e8430();
            _in_stack_00000028 = auVar15;
            uVar4 = FUN_03271744();
            uVar13 = auVar15._0_4_;
            if (uVar4 < 0x42) {
              uVar6 = 0;
              switch(uVar4) {
              case 0x26:
                uVar6 = uVar13 & uVar5;
                break;
              case 0x27:
              case 0x28:
              case 0x29:
              case 0x2c:
              case 0x2e:
                break;
              case 0x2a:
                uVar6 = uVar13 * uVar5;
                break;
              case 0x2b:
                uVar6 = uVar13 + uVar5;
                break;
              case 0x2d:
                uVar6 = uVar13 - uVar5;
                break;
              case 0x2f:
                uVar6 = 0;
                if (uVar5 != 0) {
                  uVar6 = (int)uVar13 / (int)uVar5;
                }
                break;
              default:
                switch(uVar4) {
                case 0x3c:
                  uVar6 = (uint)((int)uVar13 < (int)uVar5);
                  break;
                case 0x3d:
                  uVar6 = (uint)(uVar13 == uVar5);
                  break;
                case 0x3e:
                  uVar6 = (uint)((int)uVar5 < (int)uVar13);
                  break;
                case 0x41:
                  uVar6 = (uint)(uVar5 != 0 && uVar13 != 0);
                }
              }
            }
            else if (uVar4 < 0x5f) {
              if (uVar4 == 0x4f) {
                uVar6 = (uint)(uVar13 != 0 || uVar5 != 0);
              }
              else if (uVar4 == 0x5e) {
                uVar6 = uVar13 ^ uVar5;
              }
              else {
LAB_033e7e70:
                uVar6 = 0;
              }
            }
            else if (uVar4 == 0x6d) {
              iVar7 = 0;
              if (uVar5 != 0) {
                iVar7 = (int)uVar13 / (int)uVar5;
              }
              uVar6 = uVar13 - iVar7 * uVar5;
            }
            else {
              if (uVar4 != 0x7c) goto LAB_033e7e70;
              uVar6 = uVar13 | uVar5;
            }
switchD_033e7cb8_caseD_27:
            in_stack_00000048 = 0;
            in_stack_00000040 = (ulong)uVar6;
            thunk_FUN_01e10808(&stack0x00000048,0);
            goto LAB_033e8310;
          }
          goto LAB_033e83e0;
        case 0x27:
          uVar6 = FUN_03271744();
          in_stack_00000048 = 0;
          in_stack_00000040 = (ulong)uVar6 & 0xffffffff0000ffff;
          thunk_FUN_01e10808(&stack0x00000048,0);
          auVar15 = _in_stack_00000028;
          if (unaff_x20 != 0) {
            FUN_033e8790();
            *unaff_x23 = *unaff_x23 + 2;
            bVar2 = bVar1;
            break;
          }
          goto LAB_033e83e0;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x58:
OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize:
          iVar7 = *unaff_x23;
          iVar12 = *(int *)(unaff_x25 + 0x10);
          if (iVar7 < iVar12) {
            do {
              uVar6 = FUN_03271744();
              uVar6 = (uVar6 & 0xffff) - 0x58;
              if ((uVar6 < 0x21) && ((1L << ((ulong)uVar6 & 0x3f) & 0x108801001U) != 0)) break;
              iVar7 = iVar7 + 1;
            } while (iVar7 < *(int *)(unaff_x25 + 0x10));
            iVar12 = *(int *)(unaff_x25 + 0x10);
            auVar15 = _in_stack_00000028;
          }
          if (iVar12 <= iVar7) {
switchD_033e7c00_caseD_22:
            _in_stack_00000028 = auVar15;
            thunk_FUN_01dd295c(StringLiteral_1244);
            uVar10 = thunk_FUN_01de27b8();
            uVar11 = thunk_FUN_01dd295c(StringLiteral_9268);
            FUN_03393770(uVar10,uVar11,0);
            uVar11 = thunk_FUN_01dd295c(StringLiteral_9269);
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar10,uVar11);
          }
          _in_stack_00000028 = auVar15;
          lVar9 = System_DateTime__GetDatePart();
          auVar15 = _in_stack_00000028;
          if (lVar9 == 0) goto LAB_033e83e0;
          if (1 < *(int *)(lVar9 + 0x10)) {
            sVar3 = FUN_03271744(lVar9,1,0);
            if (sVar3 == 0x3a) {
              lVar9 = FUN_0327ac0c(lVar9,1,1,0);
            }
          }
          auVar15 = _in_stack_00000028;
          if (unaff_x20 == 0) goto LAB_033e83e0;
          auVar15 = FUN_033e8430();
          _in_stack_00000028 = auVar15;
          uVar10 = FUN_033e8514(&stack0x00000028);
          lVar9 = FUN_033e8570(lVar9,uVar10);
          auVar15 = _in_stack_00000028;
          if (param_1 == (long *)0x0) goto LAB_033e83e0;
LAB_033e7dbc:
          FUN_03418f00(param_1,lVar9,0);
          bVar2 = bVar1;
          break;
        case 0x3b:
switchD_033e7c00_caseD_3b:
          sVar3 = FUN_03271744();
          in_stack_00000040 = (ulong)(sVar3 == 0x3b);
          goto LAB_033e8348;
        case 0x3f:
          break;
        case 0x50:
          *unaff_x23 = *unaff_x23 + 1;
          uVar10 = FUN_03271744();
          lVar9 = FUN_033e8884(uVar10,in_stack_00000018,in_stack_00000020,(long)&stack0x00000038 + 4
                              );
          uVar6 = uStack000000000000003c;
          auVar15 = _in_stack_00000028;
          if (unaff_x20 == 0) goto LAB_033e83e0;
          lVar14 = (long)(int)uStack000000000000003c;
          auVar16 = FUN_033e8430();
          auVar15 = _in_stack_00000028;
          if (lVar9 == 0) goto LAB_033e83e0;
          if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_033e842c;
          lVar9 = lVar9 + lVar14 * 0x10;
          *(undefined1 (*) [16])(lVar9 + 0x20) = auVar16;
          lVar9 = lVar9 + 0x28;
LAB_033e81cc:
          thunk_FUN_01e10808(lVar9,0);
          bVar2 = bVar1;
        }
      }
      else {
        switch(uVar4) {
        case 0x5e:
        case 0x6d:
        case 0x7c:
          goto switchD_033e7c00_caseD_26;
        default:
          goto switchD_033e7c00_caseD_22;
        case 99:
          if (unaff_x20 != 0) {
            auVar15 = FUN_033e8430();
            if (param_1 != (long *)0x0) {
              uVar8 = auVar15._0_8_ & 0xffffffff;
              _in_stack_00000028 = auVar15;
              goto LAB_033e7c28;
            }
          }
          goto LAB_033e83e0;
        case 100:
          if (unaff_x20 != 0) {
            auVar15 = FUN_033e8430();
            if (param_1 != (long *)0x0) {
              _in_stack_00000028 = auVar15;
              FUN_034198c0(param_1,auVar15._0_8_ & 0xffffffff,0);
              bVar2 = bVar1;
              goto switchD_033e7c00_caseD_3f;
            }
          }
          goto LAB_033e83e0;
        case 0x65:
          goto switchD_033e7c00_caseD_3b;
        case 0x67:
          *unaff_x23 = *unaff_x23 + 1;
          uVar10 = FUN_03271744();
          lVar9 = FUN_033e8884(uVar10,in_stack_00000018,in_stack_00000020,&stack0x00000038);
          auVar15 = _in_stack_00000028;
          if (lVar9 == 0) goto LAB_033e83e0;
          if (*(uint *)(lVar9 + 0x18) <= uStack0000000000000038) goto LAB_033e842c;
          break;
        case 0x69:
          if (unaff_x24 != 0) {
            if (*(int *)(unaff_x24 + 0x18) == 0) {
LAB_033e842c:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            in_stack_00000048 = 0;
            in_stack_00000040 = (ulong)(*(int *)(unaff_x24 + 0x20) + 1);
            thunk_FUN_01e10808(&stack0x00000048,0);
            if (*(int *)(unaff_x24 + 0x18) == 0) goto LAB_033e842c;
            *(ulong *)(unaff_x24 + 0x20) = in_stack_00000040;
            *(undefined8 *)(unaff_x24 + 0x28) = in_stack_00000048;
            thunk_FUN_01e10808(unaff_x24 + 0x28,0);
            if (*(uint *)(unaff_x24 + 0x18) < 2) goto LAB_033e842c;
            in_stack_00000048 = 0;
            in_stack_00000040 = (ulong)(*(int *)(unaff_x24 + 0x30) + 1);
            thunk_FUN_01e10808(&stack0x00000048,0);
            if (*(uint *)(unaff_x24 + 0x18) < 2) goto LAB_033e842c;
            *(ulong *)(unaff_x24 + 0x30) = in_stack_00000040;
            *(undefined8 *)(unaff_x24 + 0x38) = in_stack_00000048;
            lVar9 = unaff_x24 + 0x38;
            goto LAB_033e81cc;
          }
          goto LAB_033e83e0;
        case 0x6c:
          if (unaff_x20 != 0) {
            auVar15 = FUN_033e8430();
            lVar9 = auVar15._8_8_;
            _in_stack_00000028 = auVar15;
            if ((DAT_044a6af2 & 1) == 0) {
              FUN_01d7d918(StringLiteral_1184);
              DAT_044a6af2 = 1;
            }
            if (lVar9 == 0) {
              lVar9 = **(long **)(*(long *)StringLiteral_1184 + 0xb8);
            }
            auVar15 = _in_stack_00000028;
            if (lVar9 != 0) {
              uVar6 = *(uint *)(lVar9 + 0x10);
              goto switchD_033e7cb8_caseD_27;
            }
          }
          goto LAB_033e83e0;
        case 0x6f:
        case 0x78:
          goto OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize;
        case 0x70:
          *unaff_x23 = *unaff_x23 + 1;
          uVar6 = FUN_03271744();
          auVar15 = _in_stack_00000028;
          if (unaff_x24 == 0) goto LAB_033e83e0;
          if (*(uint *)(unaff_x24 + 0x18) <= (uVar6 & 0xffff) - 0x31) goto LAB_033e842c;
          break;
        case 0x73:
          if (unaff_x20 != 0) {
            auVar15 = FUN_033e8430();
            lVar9 = auVar15._8_8_;
            _in_stack_00000028 = auVar15;
            if ((DAT_044a6af2 & 1) == 0) {
              FUN_01d7d918(StringLiteral_1184);
              DAT_044a6af2 = 1;
            }
            if (lVar9 == 0) {
              lVar9 = **(long **)(*(long *)StringLiteral_1184 + 0xb8);
            }
            auVar15 = _in_stack_00000028;
            if (param_1 != (long *)0x0) goto LAB_033e7dbc;
          }
          goto LAB_033e83e0;
        case 0x74:
          if (unaff_x20 == 0) goto LAB_033e83e0;
          iVar7 = FUN_033e8430();
          *unaff_x23 = *unaff_x23 + 1;
          uVar10 = FUN_033e7af0();
          if (iVar7 != 0) {
            auVar15 = _in_stack_00000028;
            if (param_1 == (long *)0x0) goto LAB_033e83e0;
            FUN_03418f00(param_1,uVar10,0);
          }
          auVar15 = FUN_033e8430();
          _in_stack_00000028 = auVar15;
          if (auVar15._0_4_ == 0) {
            *unaff_x23 = *unaff_x23 + 1;
            uVar10 = FUN_033e7af0();
            if (iVar7 == 0) {
              auVar15 = _in_stack_00000028;
              if (param_1 == (long *)0x0) goto LAB_033e83e0;
              FUN_03418f00(param_1,uVar10,0);
            }
            auVar15 = FUN_033e8430();
            _in_stack_00000028 = auVar15;
            if (auVar15._0_4_ == 0) goto switchD_033e7c00_caseD_22;
          }
          if (bVar1) {
            bVar2 = false;
            goto switchD_033e7c00_caseD_3f;
          }
          in_stack_00000040 = 1;
          in_stack_00000048 = 0;
          thunk_FUN_01e10808(&stack0x00000048,0);
          goto LAB_033e8354;
        case 0x7b:
          *unaff_x23 = *unaff_x23 + 1;
          sVar3 = FUN_03271744();
          if (sVar3 == 0x7d) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              uVar5 = FUN_03271744();
              uVar6 = (uVar6 * 10 + (uVar5 & 0xffff)) - 0x30;
              *unaff_x23 = *unaff_x23 + 1;
              sVar3 = FUN_03271744();
            } while (sVar3 != 0x7d);
          }
          in_stack_00000048 = 0;
          in_stack_00000040 = (ulong)uVar6;
          thunk_FUN_01e10808(&stack0x00000048,0);
          break;
        case 0x7e:
          goto switchD_033e7c00_caseD_21;
        }
        auVar15 = _in_stack_00000028;
        if (unaff_x20 == 0) goto LAB_033e83e0;
LAB_033e8310:
        FUN_033e8790();
        bVar2 = bVar1;
      }
switchD_033e7c00_caseD_3f:
      bVar1 = bVar2;
      iVar7 = *unaff_x23;
      *unaff_x23 = iVar7 + 1;
    } while (iVar7 + 1 < *(int *)(unaff_x25 + 0x10));
  }
  in_stack_00000040 = 1;
LAB_033e8348:
  in_stack_00000048 = 0;
  thunk_FUN_01e10808(&stack0x00000048,0);
  auVar15 = _in_stack_00000028;
  if (unaff_x20 != 0) {
LAB_033e8354:
    FUN_033e8790();
    auVar15 = _in_stack_00000028;
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      return;
    }
  }
LAB_033e83e0:
  _in_stack_00000028 = auVar15;
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


