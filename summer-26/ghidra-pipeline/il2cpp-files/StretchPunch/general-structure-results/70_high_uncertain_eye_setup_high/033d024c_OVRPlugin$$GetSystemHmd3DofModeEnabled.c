/*
FUNCTION_NAME: OVRPlugin$$GetSystemHmd3DofModeEnabled
ENTRY_POINT: 033d024c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSystemHmd3DofModeEnabled(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long unaff_x19;
  long *unaff_x20;
  long *plVar16;
  uint uVar17;
  long unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  
  do {
    FUN_03198f70(param_1,param_2,param_3);
    param_1 = unaff_x19;
    param_2 = unaff_x20;
    while( true ) {
      do {
        lVar11 = *(long *)(param_1 + 0x10);
        lVar13 = *(long *)StringLiteral_5417;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_033d0900;
        uVar4 = *(uint *)(param_1 + 0x18);
        plVar6 = param_2;
        if (uVar4 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(param_1 + 0x18) = uVar4 + 1;
          puVar5 = (undefined8 *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
          *puVar5 = unaff_x28;
          thunk_FUN_01e10808(puVar5,unaff_x28);
        }
        else {
          FUN_03198f70(param_1,unaff_x28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        do {
          param_2 = plVar6;
          unaff_x23 = unaff_x23 + 1;
          if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x23) {
            if (param_1 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,
                                            *(undefined4 *)(param_1 + 0x18));
              FUN_03199424(param_1,plVar6,*(undefined8 *)StringLiteral_8953);
            }
            uVar4 = FUN_03308b18(param_2,0,0);
            if ((uVar4 & in_stack_00000008._4_4_) == 0 && (unaff_w25 >> 0xd & 1) == 0)
            goto LAB_033d0620;
            uVar7 = (**(code **)(*in_stack_00000028 + 0x6c8))
                              (in_stack_00000028,in_stack_00000030,0x10,unaff_w25,
                               *(undefined8 *)(*in_stack_00000028 + 0x6d0));
            lVar11 = thunk_FUN_01de26bc(uVar7,*(undefined8 *)StringLiteral_6208);
            puVar3 = StringLiteral_1291;
            puVar2 = StringLiteral_1157;
            if (lVar11 == 0) goto LAB_033d0900;
            uVar4 = *(uint *)(lVar11 + 0x18);
            if ((int)uVar4 < 1) goto LAB_033d0620;
            uVar17 = 0;
            lVar13 = 0;
            plVar16 = param_2;
            goto LAB_033d03e0;
          }
          if (*(uint *)(unaff_x24 + 0x18) <= unaff_x23) goto LAB_033d0904;
          unaff_x28 = *(long **)(unaff_x21 + unaff_x23 * 8);
          uVar7 = FUN_01d7d9bc(*unaff_x22,in_stack_00000048._4_4_);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*unaff_x27);
          }
          if (unaff_x28 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
            if ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)StringLiteral_5177)) goto LAB_033d0908;
          }
          uVar9 = FUN_033cab78(unaff_x28,unaff_w25,3,uVar7);
          plVar6 = param_2;
        } while (((uVar9 & 1) == 0) ||
                (uVar9 = FUN_03308b18(param_2,0,0), plVar6 = unaff_x28, (uVar9 & 1) != 0));
      } while (param_1 != 0);
      param_1 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
      FUN_031987ac(param_1,*(undefined4 *)(unaff_x24 + 0x18),*(undefined8 *)StringLiteral_8954);
      if (param_1 == 0) goto LAB_033d0900;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar13 = *(long *)StringLiteral_5417;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_033d0900;
      uVar4 = *(uint *)(param_1 + 0x18);
      if (*(uint *)(lVar11 + 0x18) <= uVar4) break;
      *(uint *)(param_1 + 0x18) = uVar4 + 1;
      plVar6 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
      *plVar6 = (long)param_2;
      thunk_FUN_01e10808(plVar6,param_2);
    }
    param_3 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
    unaff_x19 = param_1;
    unaff_x20 = param_2;
  } while( true );
LAB_033d03e0:
  do {
    if (uVar4 <= uVar17) goto LAB_033d0904;
    plVar8 = *(long **)(lVar11 + (long)(int)uVar17 * 8 + 0x20);
    if (plVar8 == (long *)0x0) goto LAB_033d0900;
    lVar12 = *plVar8;
    if (unaff_w26 == 0) {
      pcVar14 = *(code **)(lVar12 + 0x2a8);
      uVar7 = *(undefined8 *)(lVar12 + 0x2b0);
    }
    else {
      pcVar14 = *(code **)(lVar12 + 0x2d8);
      uVar7 = *(undefined8 *)(lVar12 + 0x2e0);
    }
    unaff_x28 = (long *)(*pcVar14)(plVar8,1,uVar7);
    uVar9 = FUN_03308b18(unaff_x28,0,0);
    param_2 = plVar16;
    if ((uVar9 & 1) == 0) {
      uVar7 = FUN_01d7d9bc(*(undefined8 *)puVar3,in_stack_00000048._4_4_);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)puVar2);
      }
      if (unaff_x28 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
        if ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_5177)) {
LAB_033d0908:
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(unaff_x28);
        }
      }
      uVar9 = FUN_033cab78(unaff_x28,unaff_w25,3,uVar7);
      if (((uVar9 & 1) != 0) &&
         (uVar9 = FUN_03308b18(plVar16,0,0), param_2 = unaff_x28, (uVar9 & 1) == 0)) {
        if (lVar13 == 0) {
          lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
          FUN_031987ac(lVar13,*(undefined4 *)(lVar11 + 0x18),*(undefined8 *)StringLiteral_8954);
          if (lVar13 == 0) goto LAB_033d0900;
          lVar12 = *(long *)(lVar13 + 0x10);
          lVar15 = *(long *)StringLiteral_5417;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_033d0900;
          uVar4 = *(uint *)(lVar13 + 0x18);
          if (uVar4 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar4 + 1;
            plVar8 = (long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
            *plVar8 = (long)plVar16;
            thunk_FUN_01e10808(plVar8,plVar16);
          }
          else {
            FUN_03198f70(lVar13,plVar16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar12 = *(long *)(lVar13 + 0x10);
        lVar15 = *(long *)StringLiteral_5417;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_033d0900;
        uVar4 = *(uint *)(lVar13 + 0x18);
        if (uVar4 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar4 + 1;
          plVar8 = (long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
          *plVar8 = (long)unaff_x28;
          thunk_FUN_01e10808(plVar8,unaff_x28);
          param_2 = plVar16;
        }
        else {
          FUN_03198f70(lVar13,unaff_x28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          param_2 = plVar16;
        }
      }
    }
    uVar4 = *(uint *)(lVar11 + 0x18);
    uVar17 = uVar17 + 1;
    plVar16 = param_2;
  } while ((int)uVar17 < (int)uVar4);
  if (lVar13 != 0) {
    plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,*(undefined4 *)(lVar13 + 0x18));
    FUN_03199424(lVar13,plVar6,*(undefined8 *)StringLiteral_8953);
  }
LAB_033d0620:
  uVar9 = FUN_03308adc(param_2,0,0);
  if ((uVar9 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (plVar6 == (long *)0x0)) {
      if ((param_2 == (long *)0x0) ||
         (lVar11 = (**(code **)(*param_2 + 0x3b8))(param_2,*(undefined8 *)(*param_2 + 0x3c0)),
         lVar11 == 0)) goto LAB_033d0900;
      if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar11 + 0x18) == 0)) {
        uVar7 = (**(code **)(*param_2 + 0x348))
                          (param_2,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058,
                           in_stack_00000010,*(undefined8 *)(*param_2 + 0x350));
        return uVar7;
      }
    }
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,1);
      if (plVar6 == (long *)0x0) goto LAB_033d0900;
      if ((param_2 != (long *)0x0) &&
         (lVar11 = thunk_FUN_01de26bc(param_2,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0)) {
        uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_033d0904:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      plVar6[4] = (long)param_2;
      thunk_FUN_01e10808(plVar6 + 4,param_2);
    }
    if (in_stack_00000058 == 0) {
      lVar13 = *(long *)StringLiteral_886;
      lVar11 = *(long *)(lVar13 + 0x38);
      if (lVar11 == 0) {
        FUN_01dde854(lVar13);
        lVar11 = *(long *)(lVar13 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01dde7f8();
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01dde7f8();
      }
      in_stack_00000058 = **(long **)(lVar11 + 0xb8);
    }
    in_stack_00000050 = 0;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    plVar6 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                               (in_stack_00000018,unaff_w25,plVar6,&stack0x00000058,
                                in_stack_00000020,in_stack_00000010,in_stack_00000038,
                                &stack0x00000050);
    uVar9 = FUN_03308638(plVar6,0,0);
    if ((uVar9 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
LAB_033d0900:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar11 = *plVar6;
      bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
      if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_1554)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar6);
      }
      uVar7 = (**(code **)(lVar11 + 0x348))
                        (plVar6,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058,
                         in_stack_00000010,*(undefined8 *)(lVar11 + 0x350));
      if (in_stack_00000050 != 0) {
        if (in_stack_00000018 == (long *)0x0) goto LAB_033d0900;
        (**(code **)(*in_stack_00000018 + 0x1a8))
                  (in_stack_00000018,&stack0x00000058,in_stack_00000050,
                   *(undefined8 *)(*in_stack_00000018 + 0x1b0));
      }
      return uVar7;
    }
  }
  uVar7 = (**(code **)(*in_stack_00000028 + 0x2c8))
                    (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2d0));
  thunk_FUN_01dd295c(StringLiteral_1159);
  uVar10 = thunk_FUN_01de27b8();
  FUN_03395900(uVar10,uVar7,in_stack_00000030,0);
  uVar7 = thunk_FUN_01dd295c(StringLiteral_8967);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar10,uVar7);
}


