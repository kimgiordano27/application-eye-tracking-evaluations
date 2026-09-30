/*
FUNCTION_NAME: OVRPlugin$$GetTrackerFrustum
ENTRY_POINT: 053189c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerFrustum
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,long param_9,undefined8 param_10)

{
  long lVar1;
  long *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  float fVar2;
  undefined8 unaff_d8;
  float unaff_s9;
  float in_s16;
  float in_s17;
  float fVar3;
  float in_s20;
  
  while( true ) {
    fVar3 = param_4 * param_7;
    fVar2 = param_4 * param_5;
    param_4 = ((in_s16 - in_s17) - param_2 * param_8) - param_3 * param_7;
    FUN_06100000((param_1 * param_6 + fVar2 + param_2 * param_7) - param_3 * param_8,
                 (param_3 * param_5 + param_2 * param_6 + in_s20) - param_1 * param_7,
                 (param_1 * param_8 + param_3 * param_6 + fVar3) - param_2 * param_5,param_9,
                 param_10);
    do {
      unaff_x21 = unaff_x21 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      lVar1 = *unaff_x24;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar1 = *unaff_x24;
      }
      if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_05318a50;
      if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x21) {
        return;
      }
      if (*unaff_x19 == 0) goto LAB_05318a50;
      if ((long)*(int *)(*unaff_x19 + 0x18) <= (long)unaff_x21) {
        return;
      }
      lVar1 = FUN_05319060();
      if (lVar1 == 0) goto LAB_05318a50;
      lVar1 = FUN_05318f10(lVar1,unaff_x21 & 0xffffffff);
    } while (lVar1 == 0);
    param_9 = *(long *)(lVar1 + 0x18);
    param_2 = (float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20) *
              (float)((ulong)unaff_d8 >> 0x20);
    param_3 = *(float *)(lVar1 + 0x28) * unaff_s9;
    param_1 = (float)FUN_060df604(0);
    lVar1 = *unaff_x19;
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (param_9 == 0) break;
    lVar1 = lVar1 + unaff_x23;
    param_10 = 0;
    param_5 = *(float *)(lVar1 + 0x20);
    param_8 = *(float *)(lVar1 + 0x24);
    param_7 = *(float *)(lVar1 + 0x28);
    param_6 = *(float *)(lVar1 + 0x2c);
    in_s17 = param_1 * param_5;
    in_s20 = param_4 * param_8;
    in_s16 = param_4 * param_6;
  }
LAB_05318a50:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


