/*
FUNCTION_NAME: OVRManager$$InitializeInsightPassthrough
ENTRY_POINT: 076b1a9c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__InitializeInsightPassthrough
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  int in_w8;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 076b1a94 with catch @ 076b1aa0
                        */
  *(undefined1 *)(param_4 + 0x32) = 0;
  if (in_w8 != 0) {
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_076b1b28;
    fVar5 = *(float *)(param_4 + 0x34);
    fVar6 = *(float *)(param_4 + 0x38);
    fVar4 = *(float *)(param_4 + 0x3c);
    lVar1 = FUN_085849e0(*(long *)(param_4 + 0x28),0);
    if (lVar1 == 0) goto LAB_076b1b28;
    fVar2 = (float)FUN_08599040(lVar1,0);
    lVar1 = *(long *)(param_4 + 0x28);
    if (lVar1 == 0) goto LAB_076b1b28;
    fVar3 = (float)FUN_08626f18(lVar1,0);
    FUN_08626fcc(((param_3 * fVar2 * param_2) / (fVar5 * fVar6 * fVar4)) * fVar3,lVar1,0);
  }
  if (*(long *)(param_4 + 0x28) != 0) {
                    /* try { // try from 076b1b0c to 077b1c13 has its CatchHandler @ 076b1b0c
                       catch() { ... } // from try @ 076b1b0c with catch @ 076b1b0c
                       catch() { ... } // from try @ 076b1dd4 with catch @ 076b1b0c
                       catch() { ... } // from try @ 076b2098 with catch @ 076b1b0c
                       catch() { ... } // from try @ 076b2160 with catch @ 076b1b0c
                       catch() { ... } // from try @ 076b21e0 with catch @ 076b1b0c */
    FUN_086272cc(*(long *)(param_4 + 0x28),*(undefined1 *)(param_4 + 0x31),0);
    return;
  }
LAB_076b1b28:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


