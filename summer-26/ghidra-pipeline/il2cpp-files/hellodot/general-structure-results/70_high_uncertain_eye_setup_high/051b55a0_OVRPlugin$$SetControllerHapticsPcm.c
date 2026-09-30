/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsPcm
ENTRY_POINT: 051b55a0
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerHapticsPcm
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               float param_5,float param_6,float param_7,float param_8,long param_9,
               undefined8 param_10)

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
  float unaff_s8;
  float in_s23;
  
  while( true ) {
    FUN_05f01e3c(param_1 - param_7,param_5 - param_8,param_6 - in_s23,param_9,param_10);
    do {
      unaff_x21 = unaff_x21 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      lVar1 = *unaff_x24;
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar1 = *unaff_x24;
      }
      if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_051b55d4;
      if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x21) {
        return;
      }
      if (*unaff_x19 == 0) goto LAB_051b55d4;
      if ((long)*(int *)(*unaff_x19 + 0x18) <= (long)unaff_x21) {
        return;
      }
      lVar1 = FUN_051b5bdc();
      if (lVar1 == 0) goto LAB_051b55d4;
      lVar1 = FUN_051b5a88(lVar1,unaff_x21 & 0xffffffff);
    } while (lVar1 == 0);
    param_9 = *(long *)(lVar1 + 0x18);
    fVar3 = *(float *)(lVar1 + 0x24) * unaff_s8;
    fVar4 = *(float *)(lVar1 + 0x28) * unaff_s8;
    fVar2 = (float)FUN_05ee9d24(*(float *)(lVar1 + 0x20) * unaff_s8,0);
    lVar1 = *unaff_x19;
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    if (param_9 == 0) break;
    lVar1 = lVar1 + unaff_x23;
    fVar8 = *(float *)(lVar1 + 0x28);
    fVar5 = *(float *)(lVar1 + 0x2c);
    fVar6 = *(float *)(lVar1 + 0x20);
    fVar7 = *(float *)(lVar1 + 0x24);
    param_10 = 0;
    in_s23 = fVar3 * fVar6;
    param_8 = fVar2 * fVar8;
    param_7 = fVar4 * fVar7;
    param_6 = fVar2 * fVar7 + param_4 * fVar8 + fVar4 * fVar5;
    param_5 = fVar4 * fVar6 + param_4 * fVar7 + fVar3 * fVar5;
    param_1 = fVar3 * fVar8 + param_4 * fVar6 + fVar2 * fVar5;
    param_4 = ((param_4 * fVar5 - fVar2 * fVar6) - fVar3 * fVar7) - fVar4 * fVar8;
  }
LAB_051b55d4:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


