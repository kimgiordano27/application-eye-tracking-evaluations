/*
FUNCTION_NAME: OVRManager$$get_colorGamut
ENTRY_POINT: 069260dc
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


void OVRManager__get_colorGamut(void)

{
  uint uVar1;
  long unaff_x19;
  long *unaff_x20;
  long lVar2;
  uint unaff_w22;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  float unaff_s8;
  float __x;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = 0;
  do {
    lVar2 = *unaff_x20;
    if (lVar2 == 0) goto LAB_069261ac;
    fVar6 = *(float *)(unaff_x19 + 0x1c);
    fVar7 = *(float *)(unaff_x19 + 0x20);
    fVar8 = *(float *)(unaff_x19 + 0x24);
    __x = ABS(unaff_s8) * *(float *)(unaff_x19 + 0x18);
    fVar4 = atanf(__x);
    fVar4 = atanf(__x - fVar8 * (__x - fVar4));
    fVar4 = sinf(fVar6 * fVar4);
    FUN_07c42374(unaff_s8,fVar7 * fVar4,lVar2,0);
    uVar1 = uVar3 + 1;
    unaff_s8 = unaff_s8 + (float)(&DAT_015c4900)[10 < uVar3];
    uVar3 = uVar1;
  } while (unaff_w22 != uVar1);
  if (0 < (int)unaff_w22) {
    uVar3 = 0;
    do {
      if (*unaff_x20 == 0) {
LAB_069261ac:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_07c42908(0,*unaff_x20,uVar3,0);
      uVar3 = uVar3 + 1;
    } while (unaff_w22 != uVar3);
  }
  uVar5 = FUN_06925fc4();
  *(undefined4 *)(unaff_x19 + 0x28) = uVar5;
  return;
}


