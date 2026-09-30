/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcFrameImageFlipped
ENTRY_POINT: 033e7fcc
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


/* WARNING: Type propagation algorithm not settling */

void OVRPlugin_Media__SetMrcFrameImageFlipped(void)

{
  ulong uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  int *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  uint uVar11;
  int unaff_w27;
  long lVar12;
  undefined1 auVar13 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint uStack0000000000000038;
  uint uStack000000000000003c;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  
code_r0x033e7fcc:
  *unaff_x23 = in_w8 + 1;
  uVar5 = FUN_03271744();
  if (unaff_x24 != 0) {
    if (*(uint *)(unaff_x24 + 0x18) <= (uVar5 & 0xffff) - 0x31) {
LAB_033e842c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
joined_r0x033e7ff0:
    if (unaff_x20 != 0) {
LAB_033e8310:
      do {
        FUN_033e8790();
LAB_033e8318:
        uVar1 = unaff_x22 & 0xffffffff;
switchD_033e7c00_caseD_3f:
        unaff_x22 = uVar1;
        iVar6 = *unaff_x23;
        *unaff_x23 = iVar6 + 1;
        if (*(int *)(unaff_x25 + 0x10) <= iVar6 + 1) {
          in_stack_00000040 = 1;
          goto LAB_033e8348;
        }
        sVar2 = FUN_03271744();
        if (sVar2 != 0x25) {
          FUN_03271744();
          goto joined_r0x033e7c04;
        }
        *unaff_x23 = *unaff_x23 + 1;
        uVar3 = FUN_03271744();
        auVar13 = _in_stack_00000028;
        if (uVar3 < 0x59) goto code_r0x033e7be8;
        switch(uVar3) {
        case 0x5e:
        case 0x6d:
        case 0x7c:
          goto switchD_033e7c00_caseD_26;
        default:
          goto switchD_033e7c00_caseD_22;
        case 99:
          if (unaff_x20 == 0) goto LAB_033e83e0;
          auVar13 = FUN_033e8430();
          _in_stack_00000028 = auVar13;
          goto joined_r0x033e7c04;
        case 100:
          if (unaff_x20 == 0) goto LAB_033e83e0;
          auVar13 = FUN_033e8430();
          _in_stack_00000028 = auVar13;
          if (unaff_x19 == (long *)0x0) goto LAB_033e83e0;
          FUN_034198c0();
          goto LAB_033e8318;
        case 0x65:
          goto switchD_033e7c00_caseD_3b;
        case 0x67:
          *unaff_x23 = *unaff_x23 + 1;
          uVar8 = FUN_03271744();
          lVar7 = FUN_033e8884(uVar8,in_stack_00000018,in_stack_00000020,&stack0x00000038);
          if (lVar7 == 0) goto LAB_033e83e0;
          if (uStack0000000000000038 < *(uint *)(lVar7 + 0x18)) goto joined_r0x033e7ff0;
          goto LAB_033e842c;
        case 0x69:
          if (unaff_x24 == 0) goto LAB_033e83e0;
          if (*(int *)(unaff_x24 + 0x18) != 0) {
            in_stack_00000048 = 0;
            in_stack_00000040 = (ulong)(*(int *)(unaff_x24 + 0x20) + 1);
            thunk_FUN_01e10808();
            if (*(int *)(unaff_x24 + 0x18) != 0) {
              *(ulong *)(unaff_x24 + 0x20) = in_stack_00000040;
              *(undefined8 *)(unaff_x24 + 0x28) = in_stack_00000048;
              thunk_FUN_01e10808(in_stack_00000010,0);
              if (1 < *(uint *)(unaff_x24 + 0x18)) {
                in_stack_00000048 = 0;
                in_stack_00000040 = (ulong)(*(int *)(unaff_x24 + 0x30) + 1);
                thunk_FUN_01e10808();
                if (1 < *(uint *)(unaff_x24 + 0x18)) {
                  *(ulong *)(unaff_x24 + 0x30) = in_stack_00000040;
                  *(undefined8 *)(unaff_x24 + 0x38) = in_stack_00000048;
                  lVar7 = in_stack_00000008;
                  goto LAB_033e81cc;
                }
              }
            }
          }
          goto LAB_033e842c;
        case 0x6c:
          if (unaff_x20 != 0) {
            auVar13 = FUN_033e8430();
            lVar7 = auVar13._8_8_;
            _in_stack_00000028 = auVar13;
            if ((DAT_044a6af2 & 1) == 0) {
              FUN_01d7d918(StringLiteral_1184);
              DAT_044a6af2 = (byte)unaff_x21;
            }
            if (lVar7 == 0) {
              lVar7 = **(long **)(*(long *)StringLiteral_1184 + 0xb8);
            }
            if (lVar7 != 0) {
              uVar5 = *(uint *)(lVar7 + 0x10);
              goto switchD_033e7cb8_caseD_27;
            }
          }
          goto LAB_033e83e0;
        case 0x6f:
        case 0x78:
          goto OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize;
        case 0x70:
          in_w8 = *unaff_x23;
          goto code_r0x033e7fcc;
        case 0x73:
          if (unaff_x20 == 0) goto LAB_033e83e0;
          auVar13 = FUN_033e8430();
          _in_stack_00000028 = auVar13;
          if ((DAT_044a6af2 & 1) == 0) {
            FUN_01d7d918(StringLiteral_1184);
            DAT_044a6af2 = (byte)unaff_x21;
          }
          goto joined_r0x033e829c;
        case 0x74:
          if (unaff_x20 == 0) goto LAB_033e83e0;
          iVar6 = FUN_033e8430();
          *unaff_x23 = *unaff_x23 + 1;
          FUN_033e7af0();
          if (iVar6 != 0) {
            if (unaff_x19 == (long *)0x0) goto LAB_033e83e0;
            FUN_03418f00();
          }
          auVar13 = FUN_033e8430();
          _in_stack_00000028 = auVar13;
          if (auVar13._0_4_ == 0) {
            *unaff_x23 = *unaff_x23 + 1;
            FUN_033e7af0();
            if (iVar6 == 0) {
              if (unaff_x19 == (long *)0x0) goto LAB_033e83e0;
              FUN_03418f00();
            }
            auVar13 = FUN_033e8430();
            _in_stack_00000028 = auVar13;
            if (auVar13._0_4_ == 0) goto switchD_033e7c00_caseD_22;
          }
          if ((unaff_x22 & 1) == 0) {
            in_stack_00000040 = 1;
            in_stack_00000048 = 0;
            thunk_FUN_01e10808(&stack0x00000048,0);
            goto LAB_033e8354;
          }
          uVar1 = 0;
          goto switchD_033e7c00_caseD_3f;
        case 0x7b:
          *unaff_x23 = *unaff_x23 + 1;
          sVar2 = FUN_03271744();
          if (sVar2 == 0x7d) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            do {
              uVar4 = FUN_03271744();
              uVar5 = (uVar5 * unaff_w27 + (uVar4 & 0xffff)) - 0x30;
              *unaff_x23 = *unaff_x23 + 1;
              sVar2 = FUN_03271744();
            } while (sVar2 != 0x7d);
          }
          in_stack_00000048 = 0;
          in_stack_00000040 = (ulong)uVar5;
          thunk_FUN_01e10808();
          if (unaff_x20 == 0) goto LAB_033e83e0;
          break;
        case 0x7e:
          goto switchD_033e7c00_caseD_21;
        }
      } while( true );
    }
  }
LAB_033e83e0:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
code_r0x033e7be8:
  uVar1 = 1;
  switch(uVar3) {
  case 0x21:
switchD_033e7c00_caseD_21:
    if (unaff_x20 == 0) goto LAB_033e83e0;
    auVar13 = FUN_033e8430();
    _in_stack_00000028 = auVar13;
    sVar2 = FUN_03271744();
    uVar5 = (uint)(auVar13._0_4_ == 0);
    if (sVar2 != 0x21) {
      uVar5 = ~auVar13._0_4_;
    }
switchD_033e7cb8_caseD_27:
    in_stack_00000048 = 0;
    in_stack_00000040 = (ulong)uVar5;
    thunk_FUN_01e10808();
    goto LAB_033e8310;
  default:
    goto switchD_033e7c00_caseD_22;
  case 0x25:
    break;
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
    goto switchD_033e7c00_caseD_26;
  case 0x27:
    uVar5 = FUN_03271744();
    in_stack_00000048 = 0;
    in_stack_00000040 = (ulong)uVar5 & 0xffffffff0000ffff;
    thunk_FUN_01e10808();
    if (unaff_x20 == 0) goto LAB_033e83e0;
    FUN_033e8790();
    *unaff_x23 = *unaff_x23 + 2;
    goto LAB_033e8318;
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
    iVar6 = *unaff_x23;
    iVar10 = *(int *)(unaff_x25 + 0x10);
    if (iVar6 < iVar10) goto LAB_033e7cd4;
    goto LAB_033e7d20;
  case 0x3b:
switchD_033e7c00_caseD_3b:
    sVar2 = FUN_03271744();
    in_stack_00000040 = (ulong)(sVar2 == 0x3b);
LAB_033e8348:
    in_stack_00000048 = 0;
    thunk_FUN_01e10808(&stack0x00000048,0);
    if (unaff_x20 != 0) {
LAB_033e8354:
      FUN_033e8790();
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x168))();
        return;
      }
    }
    goto LAB_033e83e0;
  case 0x3f:
    goto switchD_033e7c00_caseD_3f;
  case 0x50:
    *unaff_x23 = *unaff_x23 + 1;
    uVar8 = FUN_03271744();
    lVar7 = FUN_033e8884(uVar8,in_stack_00000018,in_stack_00000020,(long)&stack0x00000038 + 4);
    uVar5 = uStack000000000000003c;
    if (unaff_x20 == 0) goto LAB_033e83e0;
    lVar12 = (long)(int)uStack000000000000003c;
    auVar13 = FUN_033e8430();
    if (lVar7 == 0) goto LAB_033e83e0;
    if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_033e842c;
    lVar7 = lVar7 + lVar12 * 0x10;
    *(undefined1 (*) [16])(lVar7 + 0x20) = auVar13;
    lVar7 = lVar7 + 0x28;
LAB_033e81cc:
    thunk_FUN_01e10808(lVar7,0);
    goto LAB_033e8318;
  }
joined_r0x033e7c04:
  if (unaff_x19 == (long *)0x0) goto LAB_033e83e0;
  FUN_03419818();
  goto LAB_033e8318;
  while (iVar6 = iVar6 + 1, iVar6 < *(int *)(unaff_x25 + 0x10)) {
LAB_033e7cd4:
    uVar5 = FUN_03271744();
    uVar5 = (uVar5 & 0xffff) - 0x58;
    if ((uVar5 < 0x21) && ((unaff_x21 << ((ulong)uVar5 & 0x3f) & 0x108801001U) != 0)) break;
  }
  iVar10 = *(int *)(unaff_x25 + 0x10);
  auVar13 = _in_stack_00000028;
LAB_033e7d20:
  if (iVar10 <= iVar6) {
switchD_033e7c00_caseD_22:
    _in_stack_00000028 = auVar13;
    thunk_FUN_01dd295c(StringLiteral_1244);
    uVar8 = thunk_FUN_01de27b8();
    uVar9 = thunk_FUN_01dd295c(StringLiteral_9268);
    FUN_03393770(uVar8,uVar9,0);
    uVar9 = thunk_FUN_01dd295c(StringLiteral_9269);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar8,uVar9);
  }
  _in_stack_00000028 = auVar13;
  lVar7 = System_DateTime__GetDatePart();
  if (lVar7 == 0) goto LAB_033e83e0;
  if (1 < *(int *)(lVar7 + 0x10)) {
    sVar2 = FUN_03271744(lVar7,1,0);
    if (sVar2 == 0x3a) {
      lVar7 = FUN_0327ac0c(lVar7,1,1,0);
    }
  }
  if (unaff_x20 == 0) goto LAB_033e83e0;
  auVar13 = FUN_033e8430();
  _in_stack_00000028 = auVar13;
  uVar8 = FUN_033e8514(&stack0x00000028);
  FUN_033e8570(lVar7,uVar8);
joined_r0x033e829c:
  if (unaff_x19 == (long *)0x0) goto LAB_033e83e0;
  FUN_03418f00();
  goto LAB_033e8318;
switchD_033e7c00_caseD_26:
  if (unaff_x20 == 0) goto LAB_033e83e0;
  uVar4 = FUN_033e8430();
  auVar13 = FUN_033e8430();
  _in_stack_00000028 = auVar13;
  uVar3 = FUN_03271744();
  uVar11 = auVar13._0_4_;
  if (uVar3 < 0x42) {
    uVar5 = 0;
    switch(uVar3) {
    case 0x26:
      uVar5 = uVar11 & uVar4;
      break;
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2c:
    case 0x2e:
      break;
    case 0x2a:
      uVar5 = uVar11 * uVar4;
      break;
    case 0x2b:
      uVar5 = uVar11 + uVar4;
      break;
    case 0x2d:
      uVar5 = uVar11 - uVar4;
      break;
    case 0x2f:
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = (int)uVar11 / (int)uVar4;
      }
      break;
    default:
      switch(uVar3) {
      case 0x3c:
        uVar5 = (uint)((int)uVar11 < (int)uVar4);
        break;
      case 0x3d:
        uVar5 = (uint)(uVar11 == uVar4);
        break;
      case 0x3e:
        uVar5 = (uint)((int)uVar4 < (int)uVar11);
        break;
      case 0x41:
        uVar5 = (uint)(uVar4 != 0 && uVar11 != 0);
      }
    }
    goto switchD_033e7cb8_caseD_27;
  }
  if (uVar3 < 0x5f) {
    if (uVar3 == 0x4f) {
      uVar5 = (uint)(uVar11 != 0 || uVar4 != 0);
      goto switchD_033e7cb8_caseD_27;
    }
    if (uVar3 == 0x5e) {
      uVar5 = uVar11 ^ uVar4;
      goto switchD_033e7cb8_caseD_27;
    }
  }
  else {
    if (uVar3 == 0x6d) {
      iVar6 = 0;
      if (uVar4 != 0) {
        iVar6 = (int)uVar11 / (int)uVar4;
      }
      uVar5 = uVar11 - iVar6 * uVar4;
      goto switchD_033e7cb8_caseD_27;
    }
    if (uVar3 == 0x7c) {
      uVar5 = uVar11 | uVar4;
      goto switchD_033e7cb8_caseD_27;
    }
  }
  uVar5 = 0;
  goto switchD_033e7cb8_caseD_27;
}


