/*
FUNCTION_NAME: OVRPlugin$$DiscoverSpaces
ENTRY_POINT: 07c8bc90
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


float OVRPlugin__DiscoverSpaces(undefined4 param_1,undefined4 param_2)

{
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  long unaff_x29;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float fVar8;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000008;
  float fStack0000000000000010;
  float fStack0000000000000018;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  
  do {
    fStack0000000000000000 = unaff_s10;
    fStack0000000000000008 = unaff_s12;
    fStack0000000000000010 = unaff_s13;
    fStack0000000000000018 = unaff_s9;
    fVar4 = (float)OVRPlugin__CreateDynamicObjectTracker
                             (param_1,param_2,uStack0000000000000044,uStack0000000000000048,
                              uStack000000000000004c,in_stack_00000050);
    if (fVar4 <= fStack000000000000005c) {
      fStack000000000000005c = fVar4;
    }
    do {
      unaff_x29 = unaff_x29 + unaff_x25;
      if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)unaff_x23) {
        return fStack000000000000005c;
      }
      if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) <= unaff_x23) {
LAB_07c8bd14:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      if (*(long *)(unaff_x20 + 0x40) == 0) {
LAB_07c8bd18:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_07ca3aa4(&stack0x00000060,*(long *)(unaff_x20 + 0x40),
                   *(undefined4 *)(unaff_x24 + unaff_x23 * 4),0);
      unaff_s12 = in_stack_00000068;
      fVar4 = fStack0000000000000064;
      unaff_s10 = fStack0000000000000060;
      unaff_x23 = unaff_x23 + 1;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x23) goto LAB_07c8bd14;
      if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_07c8bd18;
      FUN_07ca3aa4(&stack0x00000060,*(long *)(unaff_x20 + 0x40),
                   *(undefined4 *)(unaff_x19 + (unaff_x29 >> 0x1e) + 0x20),0);
      unaff_s9 = in_stack_00000068;
      fVar5 = fStack0000000000000064;
      unaff_s13 = fStack0000000000000060;
      param_1 = uStack000000000000003c;
      param_2 = uStack0000000000000040;
      if (unaff_s15 <= unaff_s8) break;
      if (*(char *)(unaff_x26 + 0xf42) == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x26 + 0xf42) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar2 = fStack0000000000000030;
      fVar7 = fStack0000000000000028;
      fVar8 = fStack000000000000002c;
      if (fStack0000000000000034 <= fStack0000000000000058) {
        if (*(char *)(unaff_x28 + 0xf43) == '\0') {
          FUN_04447ba8();
          *(undefined1 *)(unaff_x28 + 0xf43) = unaff_w27;
        }
        pfVar1 = *(float **)(*unaff_x22 + 0xb8);
        fVar2 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar7 = pfVar1[2];
      }
      if (*(char *)(unaff_x26 + 0xf42) == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x26 + 0xf42) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar3 = unaff_s13 - unaff_s10;
      fVar5 = fVar5 - fVar4;
      fVar4 = unaff_s9 - unaff_s12;
      fVar6 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
      if (fVar6 <= fStack0000000000000058) {
        if (*(char *)(unaff_x28 + 0xf43) == '\0') {
          FUN_04447ba8();
          *(undefined1 *)(unaff_x28 + 0xf43) = unaff_w27;
        }
        pfVar1 = *(float **)(*unaff_x22 + 0xb8);
        fVar3 = *pfVar1;
        fVar5 = pfVar1[1];
        fVar4 = pfVar1[2];
      }
      else {
        fVar3 = fVar3 / fVar6;
        fVar5 = fVar5 / fVar6;
        fVar4 = fVar4 / fVar6;
      }
      unaff_s15 = 1.0;
      unaff_s8 = fStack0000000000000038;
    } while (fStack0000000000000038 <= fVar7 * fVar4 + fVar2 * fVar3 + fVar8 * fVar5);
  } while( true );
}


