/*
FUNCTION_NAME: OVRManager$$CreateMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 069298f8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__CreateMixedRealityCaptureConfigurationFileFromCmd
                (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
                float param_7,float param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long in_x9;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  float unaff_s8;
  float unaff_s9;
  float in_s16;
  
  while( true ) {
    unaff_s8 = unaff_s8 +
               (*(float *)(in_x9 + 0x20) * param_5 * *(float *)(param_1 + 0x28) +
               (((in_s16 * param_4 + (param_6 - param_8 * param_7)) -
                in_s16 * *(float *)(in_x9 + 0x20) * param_2) - param_3 * *(float *)(param_1 + 0x28))
               ) * unaff_s9;
    lVar5 = FUN_07c73a5c();
    uVar1 = unaff_w23 + 1;
    if (lVar5 == 0) break;
    if (*(int *)(lVar5 + 0x18) <= (int)uVar1) {
      return ABS(unaff_s8);
    }
    if (unaff_x21 == 0) break;
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if (uVar2 <= uVar1) {
LAB_06929960:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (unaff_x20 == 0) break;
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    uVar1 = *(uint *)(unaff_x21 + (long)(int)uVar1 * 4 + 0x20);
    if ((((uVar3 <= uVar1) || (uVar2 <= unaff_w23 + 2)) ||
        (uVar4 = *(uint *)(unaff_x21 + (long)(int)(unaff_w23 + 2) * 4 + 0x20), uVar3 <= uVar4)) ||
       (uVar2 <= unaff_w23 + 3)) goto LAB_06929960;
    uVar2 = *(uint *)(unaff_x21 + (long)(int)(unaff_w23 + 3) * 4 + 0x20);
    if (uVar3 <= uVar2) goto LAB_06929960;
    lVar5 = unaff_x20 + (long)(int)uVar4 * (long)unaff_w22;
    param_1 = unaff_x20 + (long)(int)uVar2 * (long)unaff_w22;
    in_x9 = unaff_x20 + (long)(int)uVar1 * (long)unaff_w22;
    param_5 = *(float *)(lVar5 + 0x24);
    in_s16 = *(float *)(lVar5 + 0x28);
    param_2 = *(float *)(param_1 + 0x24);
    param_8 = *(float *)(in_x9 + 0x28);
    param_7 = param_5 * *(float *)(param_1 + 0x20);
    param_4 = *(float *)(in_x9 + 0x24) * *(float *)(param_1 + 0x20);
    param_3 = *(float *)(in_x9 + 0x24) * *(float *)(lVar5 + 0x20);
    param_6 = param_8 * *(float *)(lVar5 + 0x20) * param_2;
    unaff_w23 = unaff_w23 + 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


