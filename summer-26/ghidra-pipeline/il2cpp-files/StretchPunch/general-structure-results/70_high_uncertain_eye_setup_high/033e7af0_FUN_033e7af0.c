/*
FUNCTION_NAME: FUN_033e7af0
ENTRY_POINT: 033e7af0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_033e7af0(long param_1,int *param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  ulong local_70;
  undefined8 uStack_68;
  
  if ((DAT_044a6ada & 1) == 0) {
    FUN_01d7d918(StringLiteral_1723);
    DAT_044a6ada = 1;
  }
  local_88._8_8_ = 0;
  local_78 = 0;
  local_88._0_8_ = 0;
  auVar17 = ZEXT816(0);
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    plVar9 = (long *)thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1723);
    FUN_034175bc(plVar9,uVar1,0);
    iVar8 = *param_2;
    if (iVar8 < *(int *)(param_1 + 0x10)) {
      bVar2 = false;
LAB_033e7ba0:
      sVar4 = FUN_03271744(param_1,iVar8,0);
      if (sVar4 != 0x25) {
        uVar10 = FUN_03271744(param_1,*param_2,0);
        auVar17 = local_88;
        if (plVar9 != (long *)0x0) {
          uVar10 = uVar10 & 0xffffffff;
LAB_033e7c28:
          FUN_03419818(plVar9,uVar10,0);
          bVar3 = bVar2;
          goto switchD_033e7c00_caseD_3f;
        }
        goto LAB_033e83e0;
      }
      iVar8 = *param_2 + 1;
      *param_2 = iVar8;
      uVar5 = FUN_03271744(param_1,iVar8,0);
      auVar17 = local_88;
      if (0x58 < uVar5) {
        switch(uVar5) {
        case 0x5e:
        case 0x6d:
        case 0x7c:
          goto switchD_033e7c00_caseD_26;
        default:
          goto switchD_033e7c00_caseD_22;
        case 99:
          if (param_4 != 0) {
            auVar17 = FUN_033e8430(param_4);
            if (plVar9 != (long *)0x0) {
              uVar10 = auVar17._0_8_ & 0xffffffff;
              local_88 = auVar17;
              goto LAB_033e7c28;
            }
          }
          goto LAB_033e83e0;
        case 100:
          if (param_4 != 0) {
            auVar17 = FUN_033e8430(param_4);
            if (plVar9 != (long *)0x0) {
              local_88 = auVar17;
              FUN_034198c0(plVar9,auVar17._0_8_ & 0xffffffff,0);
              bVar3 = bVar2;
              goto switchD_033e7c00_caseD_3f;
            }
          }
          goto LAB_033e83e0;
        case 0x65:
          goto switchD_033e7c00_caseD_3b;
        case 0x67:
          iVar8 = *param_2;
          *param_2 = iVar8 + 1;
          uVar12 = FUN_03271744(param_1,iVar8 + 1,0);
          lVar11 = FUN_033e8884(uVar12,param_5,param_6,&local_78);
          auVar17 = local_88;
          if (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= (uint)local_78) goto LAB_033e842c;
            if (param_4 != 0) {
              lVar11 = lVar11 + (long)(int)(uint)local_78 * 0x10;
              goto LAB_033e7ff8;
            }
          }
          goto LAB_033e83e0;
        case 0x69:
          if (param_3 != 0) {
            if (*(int *)(param_3 + 0x18) == 0) {
LAB_033e842c:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            uStack_68 = 0;
            local_70 = (ulong)(*(int *)(param_3 + 0x20) + 1);
            thunk_FUN_01e10808(&uStack_68,0);
            if (*(int *)(param_3 + 0x18) == 0) goto LAB_033e842c;
            *(ulong *)(param_3 + 0x20) = local_70;
            *(undefined8 *)(param_3 + 0x28) = uStack_68;
            thunk_FUN_01e10808(param_3 + 0x28,0);
            if (*(uint *)(param_3 + 0x18) < 2) goto LAB_033e842c;
            uStack_68 = 0;
            local_70 = (ulong)(*(int *)(param_3 + 0x30) + 1);
            thunk_FUN_01e10808(&uStack_68,0);
            if (*(uint *)(param_3 + 0x18) < 2) goto LAB_033e842c;
            *(ulong *)(param_3 + 0x30) = local_70;
            *(undefined8 *)(param_3 + 0x38) = uStack_68;
            lVar11 = param_3 + 0x38;
            goto LAB_033e81cc;
          }
          goto LAB_033e83e0;
        case 0x6c:
          if (param_4 != 0) {
            auVar17 = FUN_033e8430(param_4);
            lVar11 = auVar17._8_8_;
            local_88 = auVar17;
            if ((DAT_044a6af2 & 1) == 0) {
              FUN_01d7d918(StringLiteral_1184);
              DAT_044a6af2 = 1;
            }
            if (lVar11 == 0) {
              lVar11 = **(long **)(*(long *)StringLiteral_1184 + 0xb8);
            }
            auVar17 = local_88;
            if (lVar11 != 0) {
              uVar7 = *(uint *)(lVar11 + 0x10);
              goto switchD_033e7cb8_caseD_27;
            }
          }
          goto LAB_033e83e0;
        case 0x6f:
        case 0x78:
          goto OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize;
        case 0x70:
          iVar8 = *param_2;
          *param_2 = iVar8 + 1;
          uVar10 = FUN_03271744(param_1,iVar8 + 1,0);
          auVar17 = local_88;
          if (param_3 != 0) {
            lVar11 = (uVar10 & 0xffff) - 0x31;
            if (*(uint *)(param_3 + 0x18) <= (uint)lVar11) goto LAB_033e842c;
            if (param_4 != 0) {
              lVar11 = param_3 + lVar11 * 0x10;
LAB_033e7ff8:
              uVar10 = *(ulong *)(lVar11 + 0x20);
              uVar12 = *(undefined8 *)(lVar11 + 0x28);
              goto LAB_033e8310;
            }
          }
          goto LAB_033e83e0;
        case 0x73:
          if (param_4 != 0) {
            auVar17 = FUN_033e8430(param_4);
            lVar11 = auVar17._8_8_;
            local_88 = auVar17;
            if ((DAT_044a6af2 & 1) == 0) {
              FUN_01d7d918(StringLiteral_1184);
              DAT_044a6af2 = 1;
            }
            if (lVar11 == 0) {
              lVar11 = **(long **)(*(long *)StringLiteral_1184 + 0xb8);
            }
            auVar17 = local_88;
            if (plVar9 != (long *)0x0) goto LAB_033e7dbc;
          }
          goto LAB_033e83e0;
        case 0x74:
          goto switchD_033e7c54_caseD_74;
        case 0x7b:
          iVar8 = *param_2;
          *param_2 = iVar8 + 1;
          sVar4 = FUN_03271744(param_1,iVar8 + 1,0);
          if (sVar4 == 0x7d) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              uVar6 = FUN_03271744(param_1,*param_2,0);
              iVar8 = *param_2;
              uVar7 = (uVar7 * 10 + (uVar6 & 0xffff)) - 0x30;
              *param_2 = iVar8 + 1;
              sVar4 = FUN_03271744(param_1,iVar8 + 1,0);
            } while (sVar4 != 0x7d);
          }
          uStack_68 = 0;
          local_70 = (ulong)uVar7;
          thunk_FUN_01e10808(&uStack_68,0);
          uVar10 = local_70;
          uVar12 = uStack_68;
          auVar17 = local_88;
          if (param_4 != 0) goto LAB_033e8310;
          goto LAB_033e83e0;
        case 0x7e:
          goto switchD_033e7c00_caseD_21;
        }
      }
      bVar3 = true;
      switch(uVar5) {
      case 0x21:
switchD_033e7c00_caseD_21:
        if (param_4 != 0) {
          auVar17 = FUN_033e8430(param_4);
          local_88 = auVar17;
          sVar4 = FUN_03271744(param_1,*param_2,0);
          uVar7 = (uint)(auVar17._0_4_ == 0);
          if (sVar4 != 0x21) {
            uVar7 = ~auVar17._0_4_;
          }
          goto switchD_033e7cb8_caseD_27;
        }
        goto LAB_033e83e0;
      default:
        goto switchD_033e7c00_caseD_22;
      case 0x25:
        if (plVar9 != (long *)0x0) {
          uVar10 = 0x25;
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
        if (param_4 == 0) goto LAB_033e83e0;
        uVar6 = FUN_033e8430(param_4);
        auVar17 = FUN_033e8430(param_4);
        local_88 = auVar17;
        uVar5 = FUN_03271744(param_1,*param_2,0);
        uVar15 = auVar17._0_4_;
        if (uVar5 < 0x42) {
          uVar7 = 0;
          switch(uVar5) {
          case 0x26:
            uVar7 = uVar15 & uVar6;
            break;
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2c:
          case 0x2e:
            break;
          case 0x2a:
            uVar7 = uVar15 * uVar6;
            break;
          case 0x2b:
            uVar7 = uVar15 + uVar6;
            break;
          case 0x2d:
            uVar7 = uVar15 - uVar6;
            break;
          case 0x2f:
            uVar7 = 0;
            if (uVar6 != 0) {
              uVar7 = (int)uVar15 / (int)uVar6;
            }
            break;
          default:
            switch(uVar5) {
            case 0x3c:
              uVar7 = (uint)((int)uVar15 < (int)uVar6);
              break;
            case 0x3d:
              uVar7 = (uint)(uVar15 == uVar6);
              break;
            case 0x3e:
              uVar7 = (uint)((int)uVar6 < (int)uVar15);
              break;
            case 0x41:
              uVar7 = (uint)(uVar6 != 0 && uVar15 != 0);
            }
          }
        }
        else if (uVar5 < 0x5f) {
          if (uVar5 == 0x4f) {
            uVar7 = (uint)(uVar15 != 0 || uVar6 != 0);
          }
          else if (uVar5 == 0x5e) {
            uVar7 = uVar15 ^ uVar6;
          }
          else {
LAB_033e7e70:
            uVar7 = 0;
          }
        }
        else if (uVar5 == 0x6d) {
          iVar8 = 0;
          if (uVar6 != 0) {
            iVar8 = (int)uVar15 / (int)uVar6;
          }
          uVar7 = uVar15 - iVar8 * uVar6;
        }
        else {
          if (uVar5 != 0x7c) goto LAB_033e7e70;
          uVar7 = uVar15 | uVar6;
        }
switchD_033e7cb8_caseD_27:
        uStack_68 = 0;
        local_70 = (ulong)uVar7;
        thunk_FUN_01e10808(&uStack_68,0);
        uVar10 = local_70;
        uVar12 = uStack_68;
LAB_033e8310:
        FUN_033e8790(param_4,uVar10,uVar12);
        bVar3 = bVar2;
        break;
      case 0x27:
        uVar7 = FUN_03271744(param_1,*param_2 + 1,0);
        uStack_68 = 0;
        local_70 = (ulong)uVar7 & 0xffffffff0000ffff;
        thunk_FUN_01e10808(&uStack_68,0);
        auVar17 = local_88;
        if (param_4 == 0) goto LAB_033e83e0;
        FUN_033e8790(param_4,local_70,uStack_68);
        *param_2 = *param_2 + 2;
        bVar3 = bVar2;
        break;
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
        iVar8 = *param_2;
        iVar14 = *(int *)(param_1 + 0x10);
        if (iVar8 < iVar14) {
          do {
            uVar7 = FUN_03271744(param_1,iVar8,0);
            uVar7 = (uVar7 & 0xffff) - 0x58;
            if ((uVar7 < 0x21) && ((1L << ((ulong)uVar7 & 0x3f) & 0x108801001U) != 0)) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(param_1 + 0x10));
          iVar14 = *(int *)(param_1 + 0x10);
          auVar17 = local_88;
        }
        if (iVar14 <= iVar8) {
switchD_033e7c00_caseD_22:
          local_88 = auVar17;
          thunk_FUN_01dd295c(StringLiteral_1244);
          uVar12 = thunk_FUN_01de27b8();
          uVar13 = thunk_FUN_01dd295c(StringLiteral_9268);
          FUN_03393770(uVar12,uVar13,0);
          uVar13 = thunk_FUN_01dd295c(StringLiteral_9269);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar12,uVar13);
        }
        local_88 = auVar17;
        lVar11 = System_DateTime__GetDatePart(param_1,*param_2 + -1,(iVar8 - *param_2) + 2,0);
        auVar17 = local_88;
        if (lVar11 == 0) goto LAB_033e83e0;
        if (1 < *(int *)(lVar11 + 0x10)) {
          sVar4 = FUN_03271744(lVar11,1,0);
          if (sVar4 == 0x3a) {
            lVar11 = FUN_0327ac0c(lVar11,1,1,0);
          }
        }
        auVar17 = local_88;
        if (param_4 == 0) goto LAB_033e83e0;
        auVar17 = FUN_033e8430(param_4);
        local_88 = auVar17;
        uVar12 = FUN_033e8514(local_88);
        lVar11 = FUN_033e8570(lVar11,uVar12);
        auVar17 = local_88;
        if (plVar9 == (long *)0x0) goto LAB_033e83e0;
LAB_033e7dbc:
        FUN_03418f00(plVar9,lVar11,0);
        bVar3 = bVar2;
        break;
      case 0x3b:
switchD_033e7c00_caseD_3b:
        sVar4 = FUN_03271744(param_1,*param_2,0);
        local_70 = (ulong)(sVar4 == 0x3b);
        goto LAB_033e8348;
      case 0x3f:
        break;
      case 0x50:
        iVar8 = *param_2;
        *param_2 = iVar8 + 1;
        uVar12 = FUN_03271744(param_1,iVar8 + 1,0);
        lVar11 = FUN_033e8884(uVar12,param_5,param_6,(long)&local_78 + 4);
        auVar17 = local_88;
        if (param_4 == 0) goto LAB_033e83e0;
        uVar7 = local_78._4_4_;
        lVar16 = (long)(int)local_78._4_4_;
        auVar18 = FUN_033e8430(param_4);
        auVar17 = local_88;
        if (lVar11 == 0) goto LAB_033e83e0;
        if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_033e842c;
        lVar11 = lVar11 + lVar16 * 0x10;
        *(undefined1 (*) [16])(lVar11 + 0x20) = auVar18;
        lVar11 = lVar11 + 0x28;
LAB_033e81cc:
        thunk_FUN_01e10808(lVar11,0);
        bVar3 = bVar2;
      }
      goto switchD_033e7c00_caseD_3f;
    }
LAB_033e8338:
    local_70 = 1;
LAB_033e8348:
    uStack_68 = 0;
    thunk_FUN_01e10808(&uStack_68,0);
    auVar17 = local_88;
    if (param_4 != 0) {
LAB_033e8354:
      FUN_033e8790(param_4,local_70,uStack_68);
      auVar17 = local_88;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        return;
      }
    }
  }
LAB_033e83e0:
  local_88 = auVar17;
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
switchD_033e7c54_caseD_74:
  if (param_4 == 0) goto LAB_033e83e0;
  iVar8 = FUN_033e8430(param_4);
  *param_2 = *param_2 + 1;
  uVar12 = FUN_033e7af0(param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar8 != 0) {
    auVar17 = local_88;
    if (plVar9 == (long *)0x0) goto LAB_033e83e0;
    FUN_03418f00(plVar9,uVar12,0);
  }
  auVar17 = FUN_033e8430(param_4);
  local_88 = auVar17;
  if (auVar17._0_4_ == 0) {
    *param_2 = *param_2 + 1;
    uVar12 = FUN_033e7af0(param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar8 == 0) {
      auVar17 = local_88;
      if (plVar9 == (long *)0x0) goto LAB_033e83e0;
      FUN_03418f00(plVar9,uVar12,0);
    }
    auVar17 = FUN_033e8430(param_4);
    local_88 = auVar17;
    if (auVar17._0_4_ == 0) goto switchD_033e7c00_caseD_22;
  }
  if (!bVar2) {
    local_70 = 1;
    uStack_68 = 0;
    thunk_FUN_01e10808(&uStack_68,0);
    goto LAB_033e8354;
  }
  bVar3 = false;
switchD_033e7c00_caseD_3f:
  bVar2 = bVar3;
  iVar8 = *param_2 + 1;
  *param_2 = iVar8;
  if (*(int *)(param_1 + 0x10) <= iVar8) goto LAB_033e8338;
  goto LAB_033e7ba0;
}


