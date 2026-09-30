/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 07443a70
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MetaXRFeature__OnSessionExiting(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s11;
  float unaff_s12;
  undefined8 in_stack_00000000;
  
  fVar5 = unaff_s12 * *(float *)(param_1 + 0x1c);
  fVar6 = unaff_s12 * *(float *)(param_1 + 0x20);
  uVar1 = FUN_07443b88(unaff_s12 * *(float *)(param_1 + 0x18),fVar5,fVar6);
  if ((uVar1 & 1) != 0) {
    unaff_s12 = in_stack_00000000._4_4_ - *(float *)(unaff_x19 + 0x28);
    fVar5 = 0.0;
    if (unaff_s12 <= 0.0) {
      unaff_s12 = 0.0;
    }
  }
  if (unaff_s11 < ABS(unaff_s12)) {
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_08abf9ec(unaff_s8 + unaff_s12,*(long *)(unaff_x19 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar2 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
        fVar4 = (float)FUN_08a5d3f4(lVar2,0);
        if (DAT_09836325 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a0f88);
          DAT_09836325 = '\x01';
        }
        lVar3 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
        FUN_08a5d494(fVar4 + unaff_s12 * *(float *)(lVar3 + 0x18) * 0.5,
                     fVar5 + unaff_s12 * *(float *)(lVar3 + 0x1c) * 0.5,
                     fVar6 + unaff_s12 * *(float *)(lVar3 + 0x20) * 0.5,lVar2,0);
        FUN_074437b0();
        goto LAB_07443b60;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
LAB_07443b60:
  return unaff_s11 < ABS(unaff_s12);
}


