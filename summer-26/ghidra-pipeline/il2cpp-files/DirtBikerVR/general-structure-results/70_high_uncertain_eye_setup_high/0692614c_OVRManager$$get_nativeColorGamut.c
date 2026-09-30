/*
FUNCTION_NAME: OVRManager$$get_nativeColorGamut
ENTRY_POINT: 0692614c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_nativeColorGamut(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  long *unaff_x20;
  uint uVar1;
  long lVar2;
  uint unaff_w22;
  uint unaff_w23;
  long unaff_x24;
  float fVar3;
  undefined4 uVar4;
  float unaff_s8;
  float __x;
  float fVar5;
  float fVar6;
  float fVar7;
  
  while (!(bool)in_ZR) {
    lVar2 = *unaff_x20;
    if (lVar2 == 0) goto LAB_069261ac;
    fVar5 = *(float *)(unaff_x19 + 0x1c);
    fVar6 = *(float *)(unaff_x19 + 0x20);
    fVar7 = *(float *)(unaff_x19 + 0x24);
    __x = ABS(unaff_s8) * *(float *)(unaff_x19 + 0x18);
    fVar3 = atanf(__x);
    fVar3 = atanf(__x - fVar7 * (__x - fVar3));
    fVar3 = sinf(fVar5 * fVar3);
    FUN_07c42374(unaff_s8,fVar6 * fVar3,lVar2,0);
    unaff_s8 = unaff_s8 + *(float *)(unaff_x24 + (ulong)(10 < unaff_w23) * 4);
    in_ZR = unaff_w22 == unaff_w23 + 1;
    unaff_w23 = unaff_w23 + 1;
  }
  if (0 < (int)unaff_w22) {
    uVar1 = 0;
    do {
      if (*unaff_x20 == 0) {
LAB_069261ac:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_07c42908(0,*unaff_x20,uVar1,0);
      uVar1 = uVar1 + 1;
    } while (unaff_w22 != uVar1);
  }
  uVar4 = FUN_06925fc4();
  *(undefined4 *)(unaff_x19 + 0x28) = uVar4;
  return;
}


