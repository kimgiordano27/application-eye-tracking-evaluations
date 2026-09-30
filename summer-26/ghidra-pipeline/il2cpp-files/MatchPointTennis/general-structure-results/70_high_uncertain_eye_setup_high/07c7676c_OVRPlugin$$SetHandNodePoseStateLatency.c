/*
FUNCTION_NAME: OVRPlugin$$SetHandNodePoseStateLatency
ENTRY_POINT: 07c7676c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetHandNodePoseStateLatency
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,long param_9,undefined8 param_10)

{
  long lVar1;
  long *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float in_s16;
  float in_s17;
  float fVar4;
  
  while( true ) {
    fVar4 = param_4 * param_8;
    fVar3 = param_4 * param_6;
    fVar2 = param_4 * param_7;
    param_4 = ((in_s16 - in_s17) - param_2 * param_7) - param_3 * param_8;
    FUN_0953a418((param_2 * param_8 + fVar3 + param_1 * param_5) - param_3 * param_7,
                 (param_3 * param_6 + fVar2 + param_2 * param_5) - param_1 * param_8,
                 (param_1 * param_7 + fVar4 + param_3 * param_5) - param_2 * param_6,param_9,
                 param_10);
    do {
      unaff_x21 = unaff_x21 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      lVar1 = *unaff_x24;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar1 = *unaff_x24;
      }
      if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_07c767fc;
      if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x21) {
        return;
      }
      if (*unaff_x19 == 0) goto LAB_07c767fc;
      if ((long)*(int *)(*unaff_x19 + 0x18) <= (long)unaff_x21) {
        return;
      }
      lVar1 = FUN_07c76e24();
      if (lVar1 == 0) goto LAB_07c767fc;
      lVar1 = FUN_07c76cd0(lVar1,unaff_x21 & 0xffffffff);
    } while (lVar1 == 0);
    param_9 = *(long *)(lVar1 + 0x18);
    param_2 = *(float *)(lVar1 + 0x24) * unaff_s8;
    param_3 = *(float *)(lVar1 + 0x28) * unaff_s8;
    param_1 = (float)FUN_09516910(*(float *)(lVar1 + 0x20) * unaff_s8,0);
    lVar1 = *unaff_x19;
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (param_9 == 0) break;
    lVar1 = lVar1 + unaff_x23;
    param_8 = *(float *)(lVar1 + 0x28);
    param_5 = *(float *)(lVar1 + 0x2c);
    param_6 = *(float *)(lVar1 + 0x20);
    param_7 = *(float *)(lVar1 + 0x24);
    param_10 = 0;
    in_s16 = param_4 * param_5;
    in_s17 = param_1 * param_6;
  }
LAB_07c767fc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


