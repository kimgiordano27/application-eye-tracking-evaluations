/*
FUNCTION_NAME: OVRPlugin$$GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 05d27f7c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetLocalTrackingSpaceRecenterCount
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

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
  
  if (param_4 != 0) {
    fVar2 = (float)FUN_069042b4(param_4,0);
    if (DAT_0738e662 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e662 = '\x01';
    }
    if (unaff_x20 != 0) {
      param_2 = param_2 - unaff_s12;
      param_3 = param_3 - unaff_s13;
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      thunk_FUN_0690572c(fVar2 - unaff_s11,param_2,param_3,*(undefined4 *)(lVar1 + 0x18),
                         *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20));
      if (*(char *)(unaff_x19 + 0x60) == '\0') {
        return;
      }
      lVar1 = FUN_068f5d7c();
      if (lVar1 != 0) {
        fVar2 = (float)FUN_069042b4(lVar1,0);
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          fVar4 = param_2;
          fVar5 = param_3;
          fVar3 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x50),0);
          if (DAT_0738e72b == '\0') {
            FUN_02fe925c(PTR_DAT_06f6d508);
            DAT_0738e72b = '\x01';
          }
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          if ((*(long *)(unaff_x19 + 0x48) != 0) &&
             (lVar1 = FUN_068f5d7c(*(long *)(unaff_x19 + 0x48),0), lVar1 != 0)) {
            fVar2 = SQRT((param_3 - fVar5) * (param_3 - fVar5) +
                         (fVar2 - fVar3) * (fVar2 - fVar3) + (param_2 - fVar4) * (param_2 - fVar4));
            FUN_06904aa4(fVar2 * *(float *)(unaff_x19 + 100),fVar2 * *(float *)(unaff_x19 + 0x68),
                         fVar2 * *(float *)(unaff_x19 + 0x6c),lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


