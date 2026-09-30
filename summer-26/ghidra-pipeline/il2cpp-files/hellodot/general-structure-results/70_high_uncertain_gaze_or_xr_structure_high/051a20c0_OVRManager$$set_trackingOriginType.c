/*
FUNCTION_NAME: OVRManager$$set_trackingOriginType
ENTRY_POINT: 051a20c0
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRManager__set_trackingOriginType(float param_1,float param_2,float param_3)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  undefined4 unaff_s8;
  float unaff_s9;
  float fVar4;
  float unaff_s10;
  float fVar5;
  float unaff_s11;
  
  fVar3 = SQRT(param_3 + param_1);
  if (fVar3 <= param_2) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
    fVar4 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  else {
    fVar4 = unaff_s9 / fVar3;
    fVar5 = unaff_s10 / fVar3;
    fVar3 = unaff_s11 / fVar3;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_05ef2234(*(long *)(unaff_x19 + 0x30),1,0);
    lVar2 = *(long *)(unaff_x19 + 0x30);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x4c) = 1;
      *(float *)(lVar2 + 0x40) = fVar4;
      *(float *)(lVar2 + 0x44) = fVar5;
      *(float *)(lVar2 + 0x48) = fVar3;
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x74) = unaff_s8;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


