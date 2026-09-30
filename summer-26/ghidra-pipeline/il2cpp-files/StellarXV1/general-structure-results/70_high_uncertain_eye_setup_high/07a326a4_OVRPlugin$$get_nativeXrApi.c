/*
FUNCTION_NAME: OVRPlugin$$get_nativeXrApi
ENTRY_POINT: 07a326a4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_nativeXrApi
               (float param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5,
               float param_6,float param_7,float param_8,long param_9,undefined8 param_10)

{
  long lVar1;
  long *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 unaff_d8;
  float unaff_s9;
  float in_s16;
  
  while( true ) {
    fVar5 = param_3 - param_5;
    FUN_089dbfa0(param_6 - param_7,in_s16 - param_1,param_8 - param_2,param_9,param_10);
    do {
      unaff_x21 = unaff_x21 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      lVar1 = *unaff_x24;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar1 = *unaff_x24;
      }
      if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_07a326dc;
      if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x21) {
        return;
      }
      if (*unaff_x19 == 0) goto LAB_07a326dc;
      if ((long)*(int *)(*unaff_x19 + 0x18) <= (long)unaff_x21) {
        return;
      }
      lVar1 = FUN_07a32d08();
      if (lVar1 == 0) goto LAB_07a326dc;
      lVar1 = FUN_07a32bb8(lVar1,unaff_x21 & 0xffffffff);
    } while (lVar1 == 0);
    param_9 = *(long *)(lVar1 + 0x18);
    fVar3 = (float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20) * (float)((ulong)unaff_d8 >> 0x20)
    ;
    fVar4 = *(float *)(lVar1 + 0x28) * unaff_s9;
    fVar2 = (float)FUN_089b9180(0);
    lVar1 = *unaff_x19;
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (param_9 == 0) break;
    lVar1 = lVar1 + unaff_x23;
    param_10 = 0;
    fVar6 = *(float *)(lVar1 + 0x20);
    fVar9 = *(float *)(lVar1 + 0x24);
    fVar8 = *(float *)(lVar1 + 0x28);
    fVar7 = *(float *)(lVar1 + 0x2c);
    param_2 = fVar3 * fVar6;
    param_1 = fVar2 * fVar8;
    param_5 = fVar4 * fVar8;
    param_7 = fVar4 * fVar9;
    param_3 = (fVar5 * fVar7 - fVar2 * fVar6) - fVar3 * fVar9;
    param_8 = fVar2 * fVar9 + fVar4 * fVar7 + fVar5 * fVar8;
    in_s16 = fVar4 * fVar6 + fVar3 * fVar7 + fVar5 * fVar9;
    param_6 = fVar2 * fVar7 + fVar5 * fVar6 + fVar3 * fVar8;
  }
LAB_07a326dc:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


