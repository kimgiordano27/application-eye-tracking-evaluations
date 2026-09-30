/*
FUNCTION_NAME: OVRPlugin$$GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 033d0180
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


undefined8
OVRPlugin__GetLocalTrackingSpaceRecenterCount(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long unaff_x19;
  long lVar15;
  long *unaff_x20;
  uint uVar16;
  long unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 unaff_x29;
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
  
  while (plVar7 = unaff_x20, param_1 == param_3) {
    do {
      while( true ) {
        uVar5 = FUN_033cab78(unaff_x28,unaff_w25,3,unaff_x29);
        unaff_x20 = plVar7;
        if (((uVar5 & 1) != 0) &&
           (uVar5 = FUN_03308b18(plVar7,0,0), unaff_x20 = unaff_x28, (uVar5 & 1) == 0)) {
          if (unaff_x19 == 0) {
            unaff_x19 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
            FUN_031987ac(unaff_x19,*(undefined4 *)(unaff_x24 + 0x18),
                         *(undefined8 *)StringLiteral_8954);
            if (unaff_x19 == 0) goto LAB_033d0900;
            lVar9 = *(long *)(unaff_x19 + 0x10);
            lVar15 = *(long *)StringLiteral_5417;
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_033d0900;
            uVar4 = *(uint *)(unaff_x19 + 0x18);
            if (uVar4 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar4 + 1;
              plVar6 = (long *)(lVar9 + (long)(int)uVar4 * 8 + 0x20);
              *plVar6 = (long)plVar7;
              thunk_FUN_01e10808(plVar6,plVar7);
            }
            else {
              FUN_03198f70(unaff_x19,plVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar9 = *(long *)(unaff_x19 + 0x10);
          lVar15 = *(long *)StringLiteral_5417;
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_033d0900;
          uVar4 = *(uint *)(unaff_x19 + 0x18);
          if (uVar4 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar4 + 1;
            plVar6 = (long *)(lVar9 + (long)(int)uVar4 * 8 + 0x20);
            *plVar6 = (long)unaff_x28;
            thunk_FUN_01e10808(plVar6,unaff_x28);
            unaff_x20 = plVar7;
          }
          else {
            FUN_03198f70(unaff_x19,unaff_x28,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            unaff_x20 = plVar7;
          }
        }
        unaff_x23 = unaff_x23 + 1;
        if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x23) {
          if (unaff_x19 == 0) {
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,
                                          *(undefined4 *)(unaff_x19 + 0x18));
            FUN_03199424(unaff_x19,plVar7,*(undefined8 *)StringLiteral_8953);
          }
          uVar4 = FUN_03308b18(unaff_x20,0,0);
          if ((uVar4 & in_stack_00000008._4_4_) == 0 && (unaff_w25 >> 0xd & 1) == 0)
          goto LAB_033d0620;
          uVar8 = (**(code **)(*in_stack_00000028 + 0x6c8))
                            (in_stack_00000028,in_stack_00000030,0x10,unaff_w25,
                             *(undefined8 *)(*in_stack_00000028 + 0x6d0));
          lVar9 = thunk_FUN_01de26bc(uVar8,*(undefined8 *)StringLiteral_6208);
          puVar3 = StringLiteral_1291;
          puVar2 = StringLiteral_1157;
          if (lVar9 == 0) goto LAB_033d0900;
          uVar4 = *(uint *)(lVar9 + 0x18);
          if ((int)uVar4 < 1) goto LAB_033d0620;
          uVar16 = 0;
          lVar15 = 0;
          plVar6 = unaff_x20;
          goto LAB_033d03e0;
        }
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_x23) goto LAB_033d0904;
        unaff_x28 = *(long **)(unaff_x21 + unaff_x23 * 8);
        unaff_x29 = FUN_01d7d9bc(*unaff_x22,in_stack_00000048._4_4_);
        plVar7 = unaff_x20;
        if (*(int *)(*unaff_x27 + 0xe0) == 0) break;
        if (unaff_x28 != (long *)0x0) goto LAB_033d0154;
      }
      thunk_FUN_01dc4f30(*unaff_x27);
    } while (unaff_x28 == (long *)0x0);
LAB_033d0154:
    param_3 = *(long *)StringLiteral_5177;
    if (*(byte *)(*unaff_x28 + 0x130) < *(byte *)(param_3 + 0x130)) break;
    param_1 = *(long *)(*(long *)(*unaff_x28 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8);
  }
LAB_033d0908:
                    /* WARNING: Subroutine does not return */
  FUN_01d7df0c(unaff_x28);
  while( true ) {
    plVar10 = *(long **)(lVar9 + (long)(int)uVar16 * 8 + 0x20);
    if (plVar10 == (long *)0x0) goto LAB_033d0900;
    lVar12 = *plVar10;
    if (unaff_w26 == 0) {
      pcVar13 = *(code **)(lVar12 + 0x2a8);
      uVar8 = *(undefined8 *)(lVar12 + 0x2b0);
    }
    else {
      pcVar13 = *(code **)(lVar12 + 0x2d8);
      uVar8 = *(undefined8 *)(lVar12 + 0x2e0);
    }
    unaff_x28 = (long *)(*pcVar13)(plVar10,1,uVar8);
    uVar5 = FUN_03308b18(unaff_x28,0,0);
    unaff_x20 = plVar6;
    if ((uVar5 & 1) == 0) {
      uVar8 = FUN_01d7d9bc(*(undefined8 *)puVar3,in_stack_00000048._4_4_);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)puVar2);
      }
      if (unaff_x28 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
        if ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_5177)) goto LAB_033d0908;
      }
      uVar5 = FUN_033cab78(unaff_x28,unaff_w25,3,uVar8);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = FUN_03308b18(plVar6,0,0), unaff_x20 = unaff_x28, (uVar5 & 1) == 0)) {
        if (lVar15 == 0) {
          lVar15 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
          FUN_031987ac(lVar15,*(undefined4 *)(lVar9 + 0x18),*(undefined8 *)StringLiteral_8954);
          if (lVar15 == 0) goto LAB_033d0900;
          lVar12 = *(long *)(lVar15 + 0x10);
          lVar14 = *(long *)StringLiteral_5417;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_033d0900;
          uVar4 = *(uint *)(lVar15 + 0x18);
          if (uVar4 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar4 + 1;
            plVar10 = (long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
            *plVar10 = (long)plVar6;
            thunk_FUN_01e10808(plVar10,plVar6);
          }
          else {
            FUN_03198f70(lVar15,plVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar12 = *(long *)(lVar15 + 0x10);
        lVar14 = *(long *)StringLiteral_5417;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_033d0900;
        uVar4 = *(uint *)(lVar15 + 0x18);
        if (uVar4 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar4 + 1;
          plVar10 = (long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
          *plVar10 = (long)unaff_x28;
          thunk_FUN_01e10808(plVar10,unaff_x28);
          unaff_x20 = plVar6;
        }
        else {
          FUN_03198f70(lVar15,unaff_x28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          unaff_x20 = plVar6;
        }
      }
    }
    uVar4 = *(uint *)(lVar9 + 0x18);
    uVar16 = uVar16 + 1;
    plVar6 = unaff_x20;
    if ((int)uVar4 <= (int)uVar16) break;
LAB_033d03e0:
    if (uVar4 <= uVar16) goto LAB_033d0904;
  }
  if (lVar15 != 0) {
    plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,*(undefined4 *)(lVar15 + 0x18));
    FUN_03199424(lVar15,plVar7,*(undefined8 *)StringLiteral_8953);
  }
LAB_033d0620:
  uVar5 = FUN_03308adc(unaff_x20,0,0);
  if ((uVar5 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (plVar7 == (long *)0x0)) {
      if ((unaff_x20 == (long *)0x0) ||
         (lVar9 = (**(code **)(*unaff_x20 + 0x3b8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x3c0)),
         lVar9 == 0)) goto LAB_033d0900;
      if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar9 + 0x18) == 0)) {
        uVar8 = (**(code **)(*unaff_x20 + 0x348))
                          (unaff_x20,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058
                           ,in_stack_00000010,*(undefined8 *)(*unaff_x20 + 0x350));
        return uVar8;
      }
    }
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,1);
      if (plVar7 == (long *)0x0) goto LAB_033d0900;
      if ((unaff_x20 != (long *)0x0) &&
         (lVar9 = thunk_FUN_01de26bc(unaff_x20,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
        uVar8 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar8,0);
      }
      if ((int)plVar7[3] == 0) {
LAB_033d0904:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      plVar7[4] = (long)unaff_x20;
      thunk_FUN_01e10808(plVar7 + 4,unaff_x20);
    }
    if (in_stack_00000058 == 0) {
      lVar15 = *(long *)StringLiteral_886;
      lVar9 = *(long *)(lVar15 + 0x38);
      if (lVar9 == 0) {
        FUN_01dde854(lVar15);
        lVar9 = *(long *)(lVar15 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar9 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      in_stack_00000058 = **(long **)(lVar9 + 0xb8);
    }
    in_stack_00000050 = 0;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    plVar7 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                               (in_stack_00000018,unaff_w25,plVar7,&stack0x00000058,
                                in_stack_00000020,in_stack_00000010,in_stack_00000038,
                                &stack0x00000050);
    uVar5 = FUN_03308638(plVar7,0,0);
    if ((uVar5 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
LAB_033d0900:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar9 = *plVar7;
      bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_1554))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar7);
      }
      uVar8 = (**(code **)(lVar9 + 0x348))
                        (plVar7,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058,
                         in_stack_00000010,*(undefined8 *)(lVar9 + 0x350));
      if (in_stack_00000050 != 0) {
        if (in_stack_00000018 == (long *)0x0) goto LAB_033d0900;
        (**(code **)(*in_stack_00000018 + 0x1a8))
                  (in_stack_00000018,&stack0x00000058,in_stack_00000050,
                   *(undefined8 *)(*in_stack_00000018 + 0x1b0));
      }
      return uVar8;
    }
  }
  uVar8 = (**(code **)(*in_stack_00000028 + 0x2c8))
                    (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2d0));
  thunk_FUN_01dd295c(StringLiteral_1159);
  uVar11 = thunk_FUN_01de27b8();
  FUN_03395900(uVar11,uVar8,in_stack_00000030,0);
  uVar8 = thunk_FUN_01dd295c(StringLiteral_8967);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar11,uVar8);
}


