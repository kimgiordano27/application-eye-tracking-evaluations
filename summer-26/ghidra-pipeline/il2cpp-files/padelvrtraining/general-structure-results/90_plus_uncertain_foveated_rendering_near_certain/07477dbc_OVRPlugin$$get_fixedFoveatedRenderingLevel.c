/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 07477dbc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingLevel(float param_1,float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  if (DAT_09836325 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    DAT_09836325 = '\x01';
  }
  if (unaff_x20 != 0) {
    param_2 = param_2 - unaff_s12;
    param_3 = param_3 - unaff_s13;
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    thunk_FUN_08a5ecd4(param_1 - unaff_s11,param_2,param_3,*(undefined4 *)(lVar1 + 0x18),
                       *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20));
    if (*(char *)(unaff_x19 + 0x60) == '\0') {
      return;
    }
    lVar1 = FUN_08a4d98c();
    if (lVar1 != 0) {
      fVar2 = (float)FUN_08a5d3f4(lVar1,0);
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        fVar4 = param_2;
        fVar5 = param_3;
        fVar3 = (float)FUN_08a5d3f4(*(long *)(unaff_x19 + 0x50),0);
        if (DAT_09836324 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a1008);
          DAT_09836324 = '\x01';
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        if ((*(long *)(unaff_x19 + 0x48) != 0) &&
           (lVar1 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x48),0), lVar1 != 0)) {
          fVar2 = SQRT((param_3 - fVar5) * (param_3 - fVar5) +
                       (fVar2 - fVar3) * (fVar2 - fVar3) + (param_2 - fVar4) * (param_2 - fVar4));
          FUN_08a5debc(fVar2 * *(float *)(unaff_x19 + 100),fVar2 * *(float *)(unaff_x19 + 0x68),
                       fVar2 * *(float *)(unaff_x19 + 0x6c),lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


