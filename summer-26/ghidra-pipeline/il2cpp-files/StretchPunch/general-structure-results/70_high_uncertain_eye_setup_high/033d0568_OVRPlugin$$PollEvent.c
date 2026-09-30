/*
FUNCTION_NAME: OVRPlugin$$PollEvent
ENTRY_POINT: 033d0568
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033d0804) */
/* WARNING: Removing unreachable block (ram,0x033d0808) */

undefined8 OVRPlugin__PollEvent(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *in_x9;
  long lVar10;
  int in_w10;
  long unaff_x19;
  long lVar11;
  long *unaff_x20;
  uint unaff_w21;
  undefined8 *unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  long *unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  
  while( true ) {
    lVar10 = *in_x9;
    *(int *)(unaff_x19 + 0x1c) = in_w10 + 1;
    if (param_1 == 0) break;
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    plVar7 = unaff_x20;
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      plVar4 = (long *)(param_1 + (long)(int)uVar2 * 8 + 0x20);
      *plVar4 = (long)unaff_x28;
      thunk_FUN_01e10808(plVar4,unaff_x28);
    }
    else {
      FUN_03198f70(unaff_x19,unaff_x28,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    do {
      do {
        unaff_x20 = plVar7;
        unaff_w21 = unaff_w21 + 1;
        if ((int)*(uint *)(unaff_x24 + 0x18) <= (int)unaff_w21) {
          if (unaff_x19 != 0) {
            in_stack_00000010 =
                 (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,
                                      *(undefined4 *)(unaff_x19 + 0x18));
            FUN_03199424(unaff_x19,in_stack_00000010,*(undefined8 *)StringLiteral_8953);
          }
          uVar5 = FUN_03308adc(unaff_x20,0,0);
          if ((uVar5 & 1) != 0) {
            if ((in_stack_00000048._4_4_ == 0) && (in_stack_00000010 == (long *)0x0)) {
              if ((unaff_x20 == (long *)0x0) ||
                 (lVar10 = (**(code **)(*unaff_x20 + 0x3b8))
                                     (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x3c0)), lVar10 == 0))
              goto LAB_033d0900;
              if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar10 + 0x18) == 0)) {
                uVar6 = (**(code **)(*unaff_x20 + 0x348))
                                  (unaff_x20,in_stack_00000040,unaff_w25,in_stack_00000018,
                                   in_stack_00000058);
                return uVar6;
              }
            }
            if (in_stack_00000010 == (long *)0x0) {
              in_stack_00000010 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,1);
              if (in_stack_00000010 == (long *)0x0) goto LAB_033d0900;
              if ((unaff_x20 != (long *)0x0) &&
                 (lVar10 = thunk_FUN_01de26bc(unaff_x20,*(undefined8 *)(*in_stack_00000010 + 0x40)),
                 lVar10 == 0)) {
                uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                FUN_01d7da3c(uVar6,0);
              }
              if ((int)in_stack_00000010[3] == 0) goto LAB_033d0904;
              in_stack_00000010[4] = (long)unaff_x20;
              thunk_FUN_01e10808(in_stack_00000010 + 4,unaff_x20);
            }
            if (in_stack_00000058 == 0) {
              lVar11 = *(long *)StringLiteral_886;
              lVar10 = *(long *)(lVar11 + 0x38);
              if (lVar10 == 0) {
                FUN_01dde854(lVar11);
                lVar10 = *(long *)(lVar11 + 0x38);
              }
              lVar10 = *(long *)(lVar10 + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01dde7f8();
              }
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01dde7f8();
              }
              in_stack_00000058 = **(long **)(lVar10 + 0xb8);
            }
            if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            plVar7 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                                       (in_stack_00000018,unaff_w25,in_stack_00000010,
                                        &stack0x00000058,in_stack_00000020);
            uVar5 = FUN_03308638(plVar7,0,0);
            if ((uVar5 & 1) == 0) {
              if (plVar7 != (long *)0x0) {
                lVar10 = *plVar7;
                bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
                if ((bVar1 <= *(byte *)(lVar10 + 0x130)) &&
                   (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)StringLiteral_1554)) {
                  uVar6 = (**(code **)(lVar10 + 0x348))
                                    (plVar7,in_stack_00000040,unaff_w25,in_stack_00000018,
                                     in_stack_00000058);
                  return uVar6;
                }
                    /* WARNING: Subroutine does not return */
                FUN_01d7df0c(plVar7);
              }
              goto LAB_033d0900;
            }
          }
          uVar6 = (**(code **)(*in_stack_00000028 + 0x2c8))
                            (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2d0));
          thunk_FUN_01dd295c(StringLiteral_1159);
          uVar8 = thunk_FUN_01de27b8();
          FUN_03395900(uVar8,uVar6,in_stack_00000030,0);
          uVar6 = thunk_FUN_01dd295c(StringLiteral_8967);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar8,uVar6);
        }
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_w21) {
LAB_033d0904:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        plVar7 = *(long **)(unaff_x24 + (long)(int)unaff_w21 * 8 + 0x20);
        if (plVar7 == (long *)0x0) goto LAB_033d0900;
        lVar10 = *plVar7;
        if (unaff_w26 == 0) {
          pcVar9 = *(code **)(lVar10 + 0x2a8);
          uVar6 = *(undefined8 *)(lVar10 + 0x2b0);
        }
        else {
          pcVar9 = *(code **)(lVar10 + 0x2d8);
          uVar6 = *(undefined8 *)(lVar10 + 0x2e0);
        }
        unaff_x28 = (long *)(*pcVar9)(plVar7,1,uVar6);
        uVar5 = FUN_03308b18(unaff_x28,0,0);
        plVar7 = unaff_x20;
      } while ((uVar5 & 1) != 0);
      uVar6 = FUN_01d7d9bc(*unaff_x23,in_stack_00000048._4_4_);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x29);
      }
      if (unaff_x28 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
        if ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_5177)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(unaff_x28);
        }
      }
      uVar5 = FUN_033cab78(unaff_x28,unaff_w25,3,uVar6);
    } while (((uVar5 & 1) == 0) ||
            (uVar5 = FUN_03308b18(unaff_x20,0,0), plVar7 = unaff_x28, (uVar5 & 1) != 0));
    if (unaff_x19 == 0) {
      unaff_x19 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
      FUN_031987ac(unaff_x19,*(undefined4 *)(unaff_x24 + 0x18),*(undefined8 *)StringLiteral_8954);
      if (unaff_x19 == 0) break;
      lVar10 = *(long *)(unaff_x19 + 0x10);
      lVar11 = *(long *)StringLiteral_5417;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar10 == 0) break;
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
        puVar3 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
        *puVar3 = unaff_x20;
        thunk_FUN_01e10808(puVar3,unaff_x20);
      }
      else {
        FUN_03198f70(unaff_x19,unaff_x20,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
    in_w10 = *(int *)(unaff_x19 + 0x1c);
    param_1 = *(long *)(unaff_x19 + 0x10);
    in_x9 = (long *)StringLiteral_5417;
  }
LAB_033d0900:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


