/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 019eb29c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent(float param_1,float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float unaff_s10;
  float unaff_s11;
  
  fVar6 = unaff_s8 + unaff_s11 * param_2;
  fVar7 = unaff_s9 + unaff_s11 * param_3;
  fVar2 = (float)FUN_019ed5f8(unaff_s10 + param_1,fVar6,fVar7);
  if ((*(long *)(unaff_x19 + 0x18) != 0) &&
     (fVar4 = fVar6, fVar5 = fVar7, lVar1 = FUN_0268fd10(*(long *)(unaff_x19 + 0x18),0), lVar1 != 0)
     ) {
    fVar3 = (float)FUN_0269f578(lVar1,0);
    FUN_0269f618(fVar2 + fVar3,fVar6 + fVar4,fVar7 + fVar5,lVar1,0);
    FUN_019eccf4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


