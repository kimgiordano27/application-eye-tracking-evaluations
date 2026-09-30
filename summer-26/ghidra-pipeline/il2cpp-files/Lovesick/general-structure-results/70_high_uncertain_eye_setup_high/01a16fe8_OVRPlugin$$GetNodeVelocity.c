/*
FUNCTION_NAME: OVRPlugin$$GetNodeVelocity
ENTRY_POINT: 01a16fe8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetNodeVelocity(long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  float *pfVar1;
  long unaff_x20;
  long *unaff_x21;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  pfVar1 = *(float **)(param_1 + 0xb8);
  fVar6 = *pfVar1;
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar2 = (float)FUN_01a15ea0();
  if (DAT_03775508 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775508 = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar4 = SQRT((fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) *
               (param_4 * param_4 + fVar2 * fVar2 + param_3 * param_3));
  fVar5 = 0.0;
  if (DAT_028aa5c8 <= fVar4) {
    fVar4 = (fVar8 * param_4 + fVar6 * fVar2 + fVar7 * param_3) / fVar4;
    fVar5 = fVar4;
    if (1.0 < fVar4) {
      fVar5 = 1.0;
    }
    if (fVar4 < -1.0) {
      fVar5 = -1.0;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar3 = acos((double)fVar5);
    fVar5 = (float)dVar3 * DAT_028aa158;
  }
  fVar4 = 1.0;
  if (fStack0000000000000028 * (fVar7 * fVar2 - fVar6 * param_3) +
      in_stack_00000020._4_4_ * (fVar8 * param_3 - fVar7 * param_4) +
      fStack000000000000002c * (fVar6 * param_4 - fVar8 * fVar2) < 0.0) {
    fVar4 = -1.0;
  }
  fVar8 = fVar4 * fVar5 - (float)(int)((fVar4 * fVar5) / 360.0) * 360.0;
  fVar7 = fVar8;
  if (360.0 < fVar8) {
    fVar7 = 360.0;
  }
  if (fVar8 < 0.0) {
    fVar7 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    fVar8 = *(float *)(*(long *)(unaff_x20 + 0x18) + 0x2c);
    if ((fVar8 < fVar7) && (fVar6 = fVar2, ABS(fVar7 - fVar8) < ABS(360.0 - fVar7))) {
      fVar6 = (float)FUN_01a15f4c();
    }
    fVar2 = (float)FUN_01a16160();
    return in_stack_00000018 + fVar6 * fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


