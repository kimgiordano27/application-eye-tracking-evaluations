/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.ShaderPrewarmer$$PrepareShaderGenMaterials
ENTRY_POINT: 03199914
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Experimental_ShaderPrewarmer_ShaderPrewarmer__PrepareShaderGenMaterials
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  long unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  undefined8 unaff_d9;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float in_stack_00000020;
  
  fVar2 = (float)FUN_068ed2ec(0);
  param_3 = unaff_s8 + param_3;
  *(float *)(unaff_x20 + 0x30) = param_3;
  *(ulong *)(unaff_x20 + 0x28) =
       CONCAT44((float)((ulong)unaff_d9 >> 0x20) + param_2,(float)unaff_d9 + fVar2);
  *(undefined4 *)(unaff_x20 + 0x20) = 0x3f800000;
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    lVar1 = *(long *)(unaff_x20 + 0x10);
    fVar2 = (float)FUN_0690449c(*(long *)(unaff_x21 + 0x10),0);
    if (lVar1 != 0) {
                    /* try { // try from 03199998 to 032999ab has its CatchHandler @ 03199a84 */
                    /* try { // try from 031999ac to 032999b7 has its CatchHandler @ 031998ac */
                    /* try { // try from 031999b8 to 032999bf has its CatchHandler @ 03199a4c */
                    /* try { // try from 031999d0 to 032999e7 has its CatchHandler @ 03199a44 */
      fVar3 = (in_stack_00000000._4_4_ * fStack0000000000000018 +
              fStack000000000000001c * fStack0000000000000010 +
              in_stack_00000020 * fStack000000000000000c) -
              fStack0000000000000008 * fStack0000000000000014;
      fVar4 = (fStack0000000000000008 * fStack0000000000000010 +
              fStack000000000000001c * fStack0000000000000014 +
              in_stack_00000000._4_4_ * fStack000000000000000c) -
              in_stack_00000020 * fStack0000000000000018;
      fVar5 = (in_stack_00000020 * fStack0000000000000014 +
              fStack000000000000001c * fStack0000000000000018 +
              fStack0000000000000008 * fStack000000000000000c) -
              in_stack_00000000._4_4_ * fStack0000000000000010;
      fVar6 = ((fStack000000000000001c * fStack000000000000000c -
               in_stack_00000020 * fStack0000000000000010) -
              in_stack_00000000._4_4_ * fStack0000000000000014) -
              fStack0000000000000008 * fStack0000000000000018;
                    /* try { // try from 031999e8 to 032999fb has its CatchHandler @ 03199a84 */
                    /* try { // try from 031999fc to 03299a07 has its CatchHandler @ 031998ac */
                    /* try { // try from 03199a08 to 03299a0f has its CatchHandler @ 03199a40 */
                    /* try { // try from 03199a20 to 03299a37 has its CatchHandler @ 03199a3c */
                    /* try { // try from 03199a38 to 03299a9f has its CatchHandler @ 031998ac */
                    /* catch() { ... } // from try @ 03199a20 with catch @ 03199a3c */
                    /* catch() { ... } // from try @ 03199a08 with catch @ 03199a40 */
                    /* catch() { ... } // from try @ 031999d0 with catch @ 03199a44 */
                    /* catch() { ... } // from try @ 031999b8 with catch @ 03199a4c */
      FUN_06904520((fVar5 * param_2 + fVar3 * param_4 + fVar6 * fVar2) - fVar4 * param_3,
                   (fVar3 * param_3 + fVar4 * param_4 + fVar6 * param_2) - fVar5 * fVar2,
                   (fVar4 * fVar2 + fVar5 * param_4 + fVar6 * param_3) - fVar3 * param_2,
                   ((fVar6 * param_4 - fVar3 * fVar2) - fVar4 * param_2) - fVar5 * param_3,lVar1,0);
      if (((*(long *)(unaff_x19 + 0x20) != 0) &&
          (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x48), lVar1 != 0)) &&
         (lVar1 = FUN_0315405c(lVar1,0), lVar1 != 0)) {
        *(undefined4 *)(lVar1 + 0x30) = 0x3f800000;
                    /* catch() { ... } // from try @ 03199998 with catch @ 03199a84
                       catch() { ... } // from try @ 031999e8 with catch @ 03199a84 */
        if (((*(long *)(unaff_x19 + 0x20) != 0) &&
            (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x48), lVar1 != 0)) &&
           (lVar1 = FUN_03154084(lVar1,0), lVar1 != 0)) {
                    /* catch() { ... } // from try @ 03199ba8 with catch @ 03199aa0
                       catch() { ... } // from try @ 03199bf8 with catch @ 03199aa0
                       catch() { ... } // from try @ 03199c34 with catch @ 03199aa0 */
          *(undefined4 *)(lVar1 + 0x30) = 0x3f800000;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


