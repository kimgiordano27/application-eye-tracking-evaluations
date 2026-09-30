/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 05330950
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


float OVRPlugin__ShareSpaces(void)

{
  long lVar1;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  long unaff_x26;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_s7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float unaff_s14;
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
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  
  do {
    FUN_02f08768();
    *(undefined1 *)(unaff_x24 + 0x2bf) = unaff_w25;
    do {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar3 = unaff_s13 - unaff_s10;
      fVar4 = unaff_s14 - unaff_s11;
      fStack0000000000000050 = unaff_s9 - fStack0000000000000050;
      fVar5 = SQRT(fStack0000000000000050 * fStack0000000000000050 + fVar3 * fVar3 + fVar4 * fVar4);
      if (fVar5 <= fStack00000000000000bc) {
        if (*(char *)(unaff_x26 + 0x2c1) == '\0') {
          FUN_02f08768();
          *(undefined1 *)(unaff_x26 + 0x2c1) = unaff_w25;
        }
        pfVar2 = *(float **)(*unaff_x22 + 0xb8);
        fVar3 = *pfVar2;
        fVar4 = pfVar2[1];
        fStack0000000000000050 = pfVar2[2];
      }
      else {
        fVar3 = fVar3 / fVar5;
        fVar4 = fVar4 / fVar5;
        fStack0000000000000050 = fStack0000000000000050 / fVar5;
      }
      fVar5 = fStack00000000000000b8;
      if (fStack0000000000000034 <=
          unaff_s15 * fStack0000000000000050 + unaff_s8 * fVar3 + in_s7 * fVar4) goto LAB_05330a6c;
      do {
        fVar3 = (float)FUN_05330f4c(uStack0000000000000038,uStack000000000000003c,
                                    uStack0000000000000040,uStack0000000000000044,
                                    uStack0000000000000048,uStack000000000000004c);
        if (fVar3 <= fVar5) {
          fVar5 = fVar3;
        }
LAB_05330a6c:
        if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)unaff_x23) {
          return fVar5;
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
        fStack0000000000000050 = fStack000000000000005c;
        unaff_s11 = fStack0000000000000058;
        unaff_s10 = fStack0000000000000054;
        unaff_x23 = unaff_x23 + 1;
        if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x23) goto LAB_05330ac4;
        if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_05330ac0;
        FUN_05348760((long)&stack0x00000050 + 4,*(long *)(unaff_x20 + 0x40),
                     *(undefined4 *)(lVar1 + 0x24),0);
        unaff_s9 = fStack000000000000005c;
        unaff_s14 = fStack0000000000000058;
        unaff_s13 = fStack0000000000000054;
      } while (1.0 <= fStack0000000000000034);
      if (*(char *)(unaff_x24 + 0x2bf) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x24 + 0x2bf) = unaff_w25;
      }
      fStack00000000000000b8 = fVar5;
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      in_s7 = fStack0000000000000028;
      unaff_s8 = fStack000000000000002c;
      unaff_s15 = in_stack_00000020._4_4_;
      if (fStack0000000000000030 <= fStack00000000000000bc) {
        if (*(char *)(unaff_x26 + 0x2c1) == '\0') {
          FUN_02f08768();
          *(undefined1 *)(unaff_x26 + 0x2c1) = unaff_w25;
        }
        pfVar2 = *(float **)(*unaff_x22 + 0xb8);
        unaff_s8 = *pfVar2;
        in_s7 = pfVar2[1];
        unaff_s15 = pfVar2[2];
      }
    } while (*(char *)(unaff_x24 + 0x2bf) != '\0');
  } while( true );
}


