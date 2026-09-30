/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 051c9bc0
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetSpaceBoundary2D(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  long in_x9;
  long unaff_x19;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_s6;
  float fVar13;
  float fVar14;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  
  puVar2 = PTR_DAT_065c9850;
  puVar1 = PTR_DAT_065c8d28;
  if ((long)(in_x9 + (param_1 << 0x20)) < 1) {
    fStack000000000000005c = INFINITY;
  }
  else {
    fStack0000000000000030 = fStack0000000000000048 - in_stack_00000038._4_4_;
    fStack000000000000002c = fStack000000000000004c - fStack0000000000000040;
    fStack000000000000005c = INFINITY;
    fStack0000000000000028 = in_stack_00000050 - fStack0000000000000044;
    fStack0000000000000034 =
         SQRT(fStack0000000000000028 * fStack0000000000000028 +
              fStack0000000000000030 * fStack0000000000000030 +
              fStack000000000000002c * fStack000000000000002c);
    uVar6 = 0;
    fStack0000000000000058 = DAT_013ddfb8;
    fStack0000000000000030 = fStack0000000000000030 / fStack0000000000000034;
    fStack000000000000002c = fStack000000000000002c / fStack0000000000000034;
    fStack0000000000000028 = fStack0000000000000028 / fStack0000000000000034;
    lVar7 = 0x100000000;
    do {
      if ((param_1 & 0xffffffff) <= uVar6) {
LAB_051c9e64:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      if (*(long *)(param_2 + 0x40) == 0) {
LAB_051c9e68:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_051deef8(&stack0x00000060,*(long *)(param_2 + 0x40),
                   *(undefined4 *)(unaff_x19 + 0x20 + uVar6 * 4),0);
      fVar4 = in_stack_00000068;
      fVar3 = fStack0000000000000064;
      fVar12 = fStack0000000000000060;
      uVar6 = uVar6 + 1;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_051c9e64;
      if (*(long *)(param_2 + 0x40) == 0) goto LAB_051c9e68;
      FUN_051deef8(&stack0x00000060,*(long *)(param_2 + 0x40),
                   *(undefined4 *)(unaff_x19 + (lVar7 >> 0x1e) + 0x20),0);
      fVar11 = in_stack_00000068;
      fVar10 = fStack0000000000000064;
      fVar9 = fStack0000000000000060;
      if (1.0 <= in_s6) {
LAB_051c9ddc:
        fVar12 = (float)FUN_051ca32c(in_stack_00000038._4_4_,fStack0000000000000040,
                                     fStack0000000000000044,fStack0000000000000048,
                                     fStack000000000000004c,in_stack_00000050);
        if (fVar12 <= fStack000000000000005c) {
          fStack000000000000005c = fVar12;
        }
      }
      else {
        if (DAT_06a6722e == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(puVar1);
          DAT_06a6722e = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        fVar8 = fStack0000000000000030;
        fVar13 = fStack0000000000000028;
        fVar14 = fStack000000000000002c;
        if (fStack0000000000000034 <= fStack0000000000000058) {
          if (DAT_06a67148 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
            DAT_06a67148 = '\x01';
          }
          pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
          fVar8 = *pfVar5;
          fVar14 = pfVar5[1];
          fVar13 = pfVar5[2];
        }
        if (DAT_06a6722e == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(puVar1);
          DAT_06a6722e = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        fVar9 = fVar9 - fVar12;
        fVar10 = fVar10 - fVar3;
        fVar11 = fVar11 - fVar4;
        fVar12 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
        if (fVar12 <= fStack0000000000000058) {
          if (DAT_06a67148 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
            DAT_06a67148 = '\x01';
          }
          pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
          fVar9 = *pfVar5;
          fVar10 = pfVar5[1];
          fVar11 = pfVar5[2];
        }
        else {
          fVar9 = fVar9 / fVar12;
          fVar10 = fVar10 / fVar12;
          fVar11 = fVar11 / fVar12;
        }
        if (fVar13 * fVar11 + fVar8 * fVar9 + fVar14 * fVar10 < in_s6) goto LAB_051c9ddc;
      }
      lVar7 = lVar7 + 0x100000000;
      param_1 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
    } while ((long)uVar6 < (long)((int)*(ulong *)(unaff_x19 + 0x18) + -1));
  }
  return fStack000000000000005c;
}


