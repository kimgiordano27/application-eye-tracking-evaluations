/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$.ctor
ENTRY_POINT: 05bb029c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_PassthroughCapabilities___ctor
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float fVar9;
  
  if (param_4 != 0) {
    fVar1 = (float)FUN_069e7468(param_4,0);
                    /* try { // try from 05bb02a8 to 05cb02ab has its CatchHandler @ 05bb02bc */
                    /* catch() { ... } // from try @ 05bb0278 with catch @ 05bb02b0 */
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      fVar9 = param_2;
      fVar7 = param_3;
                    /* catch() { ... } // from try @ 05bb02a8 with catch @ 05bb02bc */
                    /* try { // try from 05bb02c0 to 05cb02c7 has its CatchHandler @ 05bb02d0 */
      fVar2 = (float)FUN_069e74e4(*(long *)(unaff_x20 + 0x30),0);
                    /* try { // try from 05bb02c8 to 05cb02d3 has its CatchHandler @ 05baff1c */
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        fVar5 = fVar9;
        fVar6 = fVar7;
                    /* catch() { ... } // from try @ 05bb0248 with catch @ 05bb02d0
                       catch() { ... } // from try @ 05bb0288 with catch @ 05bb02d0
                       catch() { ... } // from try @ 05bb02c0 with catch @ 05bb02d0 */
        fVar3 = (float)FUN_069e7560(*(long *)(unaff_x20 + 0x30),0);
        if (*(long *)(unaff_x20 + 0x30) != 0) {
          fVar6 = unaff_s9 * fVar6;
          fVar5 = unaff_s9 * fVar5;
          fVar7 = unaff_s8 * param_3 + unaff_s10 * fVar7;
          fVar8 = fVar7 + fVar6;
          fVar9 = unaff_s8 * param_2 + unaff_s10 * fVar9 + fVar5;
          uVar4 = FUN_069e5200(*(long *)(unaff_x20 + 0x30),0);
          unaff_x19[1] = 0;
          unaff_x19[2] = 0;
          *unaff_x19 = 0;
          *(undefined4 *)(unaff_x19 + 3) = 0;
          FUN_069e4d6c(unaff_s8 * fVar1 + unaff_s10 * fVar2 + unaff_s9 * fVar3,fVar9,fVar8,uVar4,
                       fVar5,fVar6,fVar7);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


