/*
FUNCTION_NAME: OVRPlugin$$DiscoverSpaces
ENTRY_POINT: 05330a2c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__DiscoverSpaces(float param_1,float param_2,float param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  long unaff_x26;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s15;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  
  do {
    fVar8 = fStack00000000000000b8;
    if (unaff_s8 <= unaff_s15 * param_3 + param_1 + param_2) goto LAB_05330a6c;
    do {
      fVar6 = (float)FUN_05330f4c(uStack0000000000000038,uStack000000000000003c,
                                  uStack0000000000000040,uStack0000000000000044,
                                  uStack0000000000000048,uStack000000000000004c);
      if (fVar6 <= fVar8) {
        fVar8 = fVar6;
      }
LAB_05330a6c:
      if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)unaff_x23) {
        return fVar8;
      }
      if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) <= unaff_x23) {
LAB_05330ac4:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (*(long *)(unaff_x20 + 0x40) == 0) {
LAB_05330ac0:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar1 = unaff_x19 + unaff_x23 * 4;
      FUN_05348760((long)&stack0x00000050 + 4,*(long *)(unaff_x20 + 0x40),
                   *(undefined4 *)(lVar1 + 0x20),0);
      fVar3 = fStack000000000000005c;
      fVar2 = fStack0000000000000058;
      fVar6 = in_stack_00000050._4_4_;
      unaff_x23 = unaff_x23 + 1;
      if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x23) goto LAB_05330ac4;
      if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_05330ac0;
      FUN_05348760((long)&stack0x00000050 + 4,*(long *)(unaff_x20 + 0x40),
                   *(undefined4 *)(lVar1 + 0x24),0);
      param_3 = fStack000000000000005c;
      fVar7 = fStack0000000000000058;
      fVar5 = in_stack_00000050._4_4_;
    } while (1.0 <= unaff_s8);
    if (*(char *)(unaff_x24 + 0x2bf) == '\0') {
      FUN_02f08768();
      *(undefined1 *)(unaff_x24 + 0x2bf) = unaff_w25;
    }
    fStack00000000000000b8 = fVar8;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    param_2 = fStack0000000000000028;
    param_1 = fStack000000000000002c;
    unaff_s15 = in_stack_00000020._4_4_;
    if (fStack0000000000000030 <= fStack00000000000000bc) {
      if (*(char *)(unaff_x26 + 0x2c1) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x26 + 0x2c1) = unaff_w25;
      }
      pfVar4 = *(float **)(*unaff_x22 + 0xb8);
      param_1 = *pfVar4;
      param_2 = pfVar4[1];
      unaff_s15 = pfVar4[2];
    }
    if (*(char *)(unaff_x24 + 0x2bf) == '\0') {
      FUN_02f08768();
      *(undefined1 *)(unaff_x24 + 0x2bf) = unaff_w25;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar5 = fVar5 - fVar6;
    fVar7 = fVar7 - fVar2;
    param_3 = param_3 - fVar3;
    fVar8 = SQRT(param_3 * param_3 + fVar5 * fVar5 + fVar7 * fVar7);
    if (fVar8 <= fStack00000000000000bc) {
      if (*(char *)(unaff_x26 + 0x2c1) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x26 + 0x2c1) = unaff_w25;
      }
      pfVar4 = *(float **)(*unaff_x22 + 0xb8);
      fVar5 = *pfVar4;
      fVar7 = pfVar4[1];
      param_3 = pfVar4[2];
    }
    else {
      fVar5 = fVar5 / fVar8;
      fVar7 = fVar7 / fVar8;
      param_3 = param_3 / fVar8;
    }
    param_1 = param_1 * fVar5;
    param_2 = param_2 * fVar7;
    unaff_s8 = fStack0000000000000034;
  } while( true );
}


