/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameImageFlipped
ENTRY_POINT: 033e8110
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

void OVRPlugin_Media__GetMrcFrameImageFlipped(void)

{
  ulong uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint in_w8;
  uint uVar10;
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
  ulong uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
code_r0x033e8110:
  uVar10 = (uint)(in_w8 != 0);
switchD_033e7cb8_caseD_27:
  uStack0000000000000048 = 0;
  uStack0000000000000040 = (ulong)uVar10;
  thunk_FUN_01e10808();
  do {
    FUN_033e8790();
LAB_033e8318:
    uVar1 = unaff_x22 & 0xffffffff;
switchD_033e7c00_caseD_3f:
    unaff_x22 = uVar1;
    iVar5 = *unaff_x23;
    *unaff_x23 = iVar5 + 1;
    if (*(int *)(unaff_x25 + 0x10) <= iVar5 + 1) {
      uStack0000000000000040 = 1;
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
    if (uVar3 < 0x59) break;
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
      uVar7 = FUN_03271744();
      lVar6 = FUN_033e8884(uVar7,in_stack_00000018,in_stack_00000020,&stack0x00000038);
      if (lVar6 == 0) goto LAB_033e83e0;
      if (*(uint *)(lVar6 + 0x18) <= uStack0000000000000038) goto LAB_033e842c;
      goto joined_r0x033e8230;
    case 0x69:
      if (unaff_x24 != 0) {
        if (*(int *)(unaff_x24 + 0x18) == 0) goto LAB_033e842c;
        uStack0000000000000048 = 0;
        uStack0000000000000040 = (ulong)(*(int *)(unaff_x24 + 0x20) + 1);
        thunk_FUN_01e10808();
        if (*(int *)(unaff_x24 + 0x18) == 0) goto LAB_033e842c;
        *(ulong *)(unaff_x24 + 0x20) = uStack0000000000000040;
        *(undefined8 *)(unaff_x24 + 0x28) = uStack0000000000000048;
        thunk_FUN_01e10808(in_stack_00000010,0);
        if (*(uint *)(unaff_x24 + 0x18) < 2) goto LAB_033e842c;
        uStack0000000000000048 = 0;
        uStack0000000000000040 = (ulong)(*(int *)(unaff_x24 + 0x30) + 1);
        thunk_FUN_01e10808();
        if (*(uint *)(unaff_x24 + 0x18) < 2) goto LAB_033e842c;
        *(ulong *)(unaff_x24 + 0x30) = uStack0000000000000040;
        *(undefined8 *)(unaff_x24 + 0x38) = uStack0000000000000048;
        lVar6 = in_stack_00000008;
        goto LAB_033e81cc;
      }
      goto LAB_033e83e0;
    case 0x6c:
      if (unaff_x20 == 0) goto LAB_033e83e0;
      auVar13 = FUN_033e8430();
      lVar6 = auVar13._8_8_;
      _in_stack_00000028 = auVar13;
      if ((DAT_044a6af2 & 1) == 0) {
        FUN_01d7d918(StringLiteral_1184);
        DAT_044a6af2 = (byte)unaff_x21;
      }
      if (lVar6 == 0) {
        lVar6 = **(long **)(*(long *)StringLiteral_1184 + 0xb8);
      }
      if (lVar6 == 0) goto LAB_033e83e0;
      uVar10 = *(uint *)(lVar6 + 0x10);
      goto switchD_033e7cb8_caseD_27;
    case 0x6f:
    case 0x78:
      goto OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize;
    case 0x70:
      *unaff_x23 = *unaff_x23 + 1;
      uVar10 = FUN_03271744();
      if (unaff_x24 == 0) goto LAB_033e83e0;
      if ((uVar10 & 0xffff) - 0x31 < *(uint *)(unaff_x24 + 0x18)) goto joined_r0x033e8230;
LAB_033e842c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
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
      iVar5 = FUN_033e8430();
      *unaff_x23 = *unaff_x23 + 1;
      FUN_033e7af0();
      if (iVar5 != 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_033e83e0;
        FUN_03418f00();
      }
      auVar13 = FUN_033e8430();
      _in_stack_00000028 = auVar13;
      if (auVar13._0_4_ == 0) {
        *unaff_x23 = *unaff_x23 + 1;
        FUN_033e7af0();
        if (iVar5 == 0) {
          if (unaff_x19 == (long *)0x0) goto LAB_033e83e0;
          FUN_03418f00();
        }
        auVar13 = FUN_033e8430();
        _in_stack_00000028 = auVar13;
        if (auVar13._0_4_ == 0) goto switchD_033e7c00_caseD_22;
      }
      if ((unaff_x22 & 1) == 0) {
        uStack0000000000000040 = 1;
        uStack0000000000000048 = 0;
        thunk_FUN_01e10808(&stack0x00000048,0);
        goto LAB_033e8354;
      }
      uVar1 = 0;
      goto switchD_033e7c00_caseD_3f;
    case 0x7b:
      *unaff_x23 = *unaff_x23 + 1;
      sVar2 = FUN_03271744();
      if (sVar2 == 0x7d) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          uVar4 = FUN_03271744();
          uVar10 = (uVar10 * unaff_w27 + (uVar4 & 0xffff)) - 0x30;
          *unaff_x23 = *unaff_x23 + 1;
          sVar2 = FUN_03271744();
        } while (sVar2 != 0x7d);
      }
      uStack0000000000000048 = 0;
      uStack0000000000000040 = (ulong)uVar10;
      thunk_FUN_01e10808();
joined_r0x033e8230:
      if (unaff_x20 == 0) goto LAB_033e83e0;
      break;
    case 0x7e:
      goto switchD_033e7c00_caseD_21;
    }
  } while( true );
  uVar1 = 1;
  switch(uVar3) {
  case 0x21:
switchD_033e7c00_caseD_21:
    if (unaff_x20 == 0) goto LAB_033e83e0;
    auVar13 = FUN_033e8430();
    _in_stack_00000028 = auVar13;
    sVar2 = FUN_03271744();
    uVar10 = (uint)(auVar13._0_4_ == 0);
    if (sVar2 != 0x21) {
      uVar10 = ~auVar13._0_4_;
    }
    goto switchD_033e7cb8_caseD_27;
  default:
    goto switchD_033e7c00_caseD_22;
  case 0x25:
    goto switchD_033e7c00_caseD_25;
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
    if (unaff_x20 == 0) goto LAB_033e83e0;
    uVar4 = FUN_033e8430();
    auVar13 = FUN_033e8430();
    _in_stack_00000028 = auVar13;
    uVar3 = FUN_03271744();
    uVar11 = auVar13._0_4_;
    if (uVar3 < 0x42) {
      uVar10 = 0;
      switch(uVar3) {
      case 0x26:
        uVar10 = uVar11 & uVar4;
        break;
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2c:
      case 0x2e:
        break;
      case 0x2a:
        uVar10 = uVar11 * uVar4;
        break;
      case 0x2b:
        uVar10 = uVar11 + uVar4;
        break;
      case 0x2d:
        uVar10 = uVar11 - uVar4;
        break;
      case 0x2f:
        uVar10 = 0;
        if (uVar4 != 0) {
          uVar10 = (int)uVar11 / (int)uVar4;
        }
        break;
      default:
        switch(uVar3) {
        case 0x3c:
          uVar10 = (uint)((int)uVar11 < (int)uVar4);
          break;
        case 0x3d:
          uVar10 = (uint)(uVar11 == uVar4);
          break;
        case 0x3e:
          uVar10 = (uint)((int)uVar4 < (int)uVar11);
          break;
        case 0x41:
          uVar10 = (uint)(uVar4 != 0 && uVar11 != 0);
        }
      }
      goto switchD_033e7cb8_caseD_27;
    }
    if (uVar3 < 0x5f) {
      if (uVar3 == 0x4f) {
        in_w8 = uVar11 | uVar4;
        goto code_r0x033e8110;
      }
      if (uVar3 == 0x5e) {
        uVar10 = uVar11 ^ uVar4;
        goto switchD_033e7cb8_caseD_27;
      }
    }
    else {
      if (uVar3 == 0x6d) {
        iVar5 = 0;
        if (uVar4 != 0) {
          iVar5 = (int)uVar11 / (int)uVar4;
        }
        uVar10 = uVar11 - iVar5 * uVar4;
        goto switchD_033e7cb8_caseD_27;
      }
      if (uVar3 == 0x7c) {
        uVar10 = uVar11 | uVar4;
        goto switchD_033e7cb8_caseD_27;
      }
    }
    uVar10 = 0;
    goto switchD_033e7cb8_caseD_27;
  case 0x27:
    uVar10 = FUN_03271744();
    uStack0000000000000048 = 0;
    uStack0000000000000040 = (ulong)uVar10 & 0xffffffff0000ffff;
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
    iVar5 = *unaff_x23;
    iVar9 = *(int *)(unaff_x25 + 0x10);
    if (iVar5 < iVar9) goto LAB_033e7cd4;
    goto LAB_033e7d20;
  case 0x3b:
switchD_033e7c00_caseD_3b:
    sVar2 = FUN_03271744();
    uStack0000000000000040 = (ulong)(sVar2 == 0x3b);
LAB_033e8348:
    uStack0000000000000048 = 0;
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
    uVar7 = FUN_03271744();
    lVar6 = FUN_033e8884(uVar7,in_stack_00000018,in_stack_00000020,(long)&stack0x00000038 + 4);
    uVar10 = uStack000000000000003c;
    if (unaff_x20 == 0) goto LAB_033e83e0;
    lVar12 = (long)(int)uStack000000000000003c;
    auVar13 = FUN_033e8430();
    if (lVar6 == 0) goto LAB_033e83e0;
    if (uVar10 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + lVar12 * 0x10;
      *(undefined1 (*) [16])(lVar6 + 0x20) = auVar13;
      lVar6 = lVar6 + 0x28;
LAB_033e81cc:
      thunk_FUN_01e10808(lVar6,0);
      goto LAB_033e8318;
    }
  }
  goto LAB_033e842c;
switchD_033e7c00_caseD_25:
joined_r0x033e7c04:
  if (unaff_x19 == (long *)0x0) goto LAB_033e83e0;
  FUN_03419818();
  goto LAB_033e8318;
  while (iVar5 = iVar5 + 1, iVar5 < *(int *)(unaff_x25 + 0x10)) {
LAB_033e7cd4:
    uVar10 = FUN_03271744();
    uVar10 = (uVar10 & 0xffff) - 0x58;
    if ((uVar10 < 0x21) && ((unaff_x21 << ((ulong)uVar10 & 0x3f) & 0x108801001U) != 0)) break;
  }
  iVar9 = *(int *)(unaff_x25 + 0x10);
  auVar13 = _in_stack_00000028;
LAB_033e7d20:
  if (iVar9 <= iVar5) {
switchD_033e7c00_caseD_22:
    _in_stack_00000028 = auVar13;
    thunk_FUN_01dd295c(StringLiteral_1244);
    uVar7 = thunk_FUN_01de27b8();
    uVar8 = thunk_FUN_01dd295c(StringLiteral_9268);
    FUN_03393770(uVar7,uVar8,0);
    uVar8 = thunk_FUN_01dd295c(StringLiteral_9269);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar7,uVar8);
  }
  _in_stack_00000028 = auVar13;
  lVar6 = System_DateTime__GetDatePart();
  if (lVar6 == 0) {
LAB_033e83e0:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (1 < *(int *)(lVar6 + 0x10)) {
    sVar2 = FUN_03271744(lVar6,1,0);
    if (sVar2 == 0x3a) {
      lVar6 = FUN_0327ac0c(lVar6,1,1,0);
    }
  }
  if (unaff_x20 == 0) goto LAB_033e83e0;
  auVar13 = FUN_033e8430();
  _in_stack_00000028 = auVar13;
  uVar7 = FUN_033e8514(&stack0x00000028);
  FUN_033e8570(lVar6,uVar7);
joined_r0x033e829c:
  if (unaff_x19 == (long *)0x0) goto LAB_033e83e0;
  FUN_03418f00();
  goto LAB_033e8318;
}


