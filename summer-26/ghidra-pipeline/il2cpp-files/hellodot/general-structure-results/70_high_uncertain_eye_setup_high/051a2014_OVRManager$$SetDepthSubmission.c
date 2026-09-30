/*
FUNCTION_NAME: OVRManager$$SetDepthSubmission
ENTRY_POINT: 051a2014
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetDepthSubmission(float param_1,float param_2,float param_3)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((360.0 <= param_1) || ((unaff_x20 & 1) == 0)) {
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_05ef2234(*(long *)(unaff_x19 + 0x30),0,0);
      lVar2 = *(long *)(unaff_x19 + 0x30);
      if (lVar2 != 0) {
        param_1 = 360.0;
LAB_051a2174:
        *(float *)(lVar2 + 0x74) = param_1;
        return;
      }
    }
  }
  else if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar3 = (float)FUN_05f01910(*(long *)(unaff_x19 + 0x28),0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar5 = param_2;
      fVar6 = param_3;
      fVar4 = (float)FUN_05f01910(*(long *)(unaff_x19 + 0x20),0);
      if (DAT_06a6722e == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
        DAT_06a6722e = '\x01';
      }
      fVar3 = fVar3 - fVar4;
      param_2 = param_2 - fVar5;
      param_3 = param_3 - fVar6;
      if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar5 = SQRT(param_3 * param_3 + fVar3 * fVar3 + param_2 * param_2);
      if (fVar5 <= DAT_013ddfb8) {
        if (DAT_06a67148 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
          DAT_06a67148 = '\x01';
        }
        pfVar1 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
        fVar3 = *pfVar1;
        param_2 = pfVar1[1];
        param_3 = pfVar1[2];
      }
      else {
        fVar3 = fVar3 / fVar5;
        param_2 = param_2 / fVar5;
        param_3 = param_3 / fVar5;
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_05ef2234(*(long *)(unaff_x19 + 0x30),1,0);
        lVar2 = *(long *)(unaff_x19 + 0x30);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x4c) = 1;
          *(float *)(lVar2 + 0x40) = fVar3;
          *(float *)(lVar2 + 0x44) = param_2;
          *(float *)(lVar2 + 0x48) = param_3;
          lVar2 = *(long *)(unaff_x19 + 0x30);
          if (lVar2 != 0) goto LAB_051a2174;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


