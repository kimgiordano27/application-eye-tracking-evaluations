/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.ShaderPrewarmer$$DebugPrewarmShaderKeywords
ENTRY_POINT: 0319b758
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0319b778) */
/* WARNING: Removing unreachable block (ram,0x0319b7d0) */

void Meta_XR_Experimental_ShaderPrewarmer_ShaderPrewarmer__DebugPrewarmShaderKeywords
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float fVar10;
  float unaff_s10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack000000000000005c;
  
  fStack000000000000005c = unaff_s8;
  fVar3 = (float)FUN_069042b4(param_4,0);
  fVar4 = *(float *)(unaff_x19 + 0x40);
  fVar7 = fVar4;
  if (fVar4 < 0.0) {
    fVar7 = 0.0;
  }
  fVar9 = param_3;
  lVar1 = FUN_068f5d7c();
  lVar2 = FUN_068f5d7c();
  if (lVar2 != 0) {
    fVar5 = (float)FUN_069042b4(lVar2,0);
                    /* try { // try from 0319b7c0 to 0329b7cb has its CatchHandler @ 0319b828 */
    fVar6 = (float)FUN_068eec18(0);
    fVar6 = fVar6 * *(float *)(unaff_x19 + 0x44);
                    /* try { // try from 0319b7d4 to 0329b7db has its CatchHandler @ 0319b820 */
                    /* try { // try from 0319b7dc to 0329b843 has its CatchHandler @ 0319b710 */
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    if (lVar1 != 0) {
      fVar3 = (fStack000000000000005c + (fVar3 - fStack000000000000005c) * fVar7) - fVar5;
                    /* catch() { ... } // from try @ 0319b7d4 with catch @ 0319b820 */
                    /* catch() { ... } // from try @ 0319b74c with catch @ 0319b824 */
      fVar9 = fVar9 + ((unaff_s10 + (param_3 - unaff_s10) * fVar7) - fVar9) * fVar6;
                    /* catch() { ... } // from try @ 0319b7c0 with catch @ 0319b828 */
      fVar4 = fVar4 + ((unaff_s9 + (param_2 - unaff_s9) * fVar7) - fVar4) * fVar6;
      FUN_06904354(fVar5 + fVar3 * fVar6,lVar1,0);
                    /* catch() { ... } // from try @ 0319b90c with catch @ 0319b844 */
      lVar1 = FUN_068f5d7c();
      if ((((*(long *)(unaff_x19 + 0x20) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x48), lVar2 != 0)) &&
          (lVar2 = FUN_03153f94(lVar2,0), lVar2 != 0)) && (*(long *)(lVar2 + 0x10) != 0)) {
        fVar7 = (float)FUN_0690449c(*(long *)(lVar2 + 0x10),0);
                    /* try { // try from 0319b880 to 0329b88f has its CatchHandler @ 0319b954 */
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48), lVar2 != 0)) {
          fVar13 = *(float *)(unaff_x19 + 0x48);
          fVar5 = *(float *)(unaff_x19 + 0x4c);
          fVar6 = *(float *)(unaff_x19 + 0x50);
          fVar14 = *(float *)(unaff_x19 + 0x54);
          lVar2 = FUN_03153f8c(lVar2,0);
          if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
                    /* try { // try from 0319b8f0 to 0329b8fb has its CatchHandler @ 0319b958 */
                    /* try { // try from 0319b904 to 0329b90b has its CatchHandler @ 0319b950 */
                    /* try { // try from 0319b90c to 0329b973 has its CatchHandler @ 0319b844 */
            fVar10 = (fVar9 * fVar13 + fVar3 * fVar5 + fVar4 * fVar14) - fVar7 * fVar6;
            fVar11 = (fVar7 * fVar5 + fVar3 * fVar6 + fVar9 * fVar14) - fVar4 * fVar13;
            fVar12 = ((fVar3 * fVar14 - fVar7 * fVar13) - fVar4 * fVar5) - fVar9 * fVar6;
            FUN_0690449c(*(long *)(lVar2 + 0x10),0);
                    /* catch() { ... } // from try @ 0319b904 with catch @ 0319b950 */
                    /* catch() { ... } // from try @ 0319b880 with catch @ 0319b954 */
                    /* catch() { ... } // from try @ 0319b8f0 with catch @ 0319b958 */
                    /* catch() { ... } // from try @ 0319ba38 with catch @ 0319b974 */
                    /* try { // try from 0319b9ac to 0329b9bb has its CatchHandler @ 0319ba7c */
            FUN_068eca84((fVar4 * fVar6 + fVar3 * fVar13 + fVar7 * fVar14) - fVar9 * fVar5,0);
            if (lVar1 != 0) {
              FUN_06904520(lVar1,0);
              if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                 (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x48), lVar1 != 0)) {
                lVar1 = FUN_03153f94(lVar1,0);
                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                   (uVar8 = FUN_069042b4(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
                  *(undefined4 *)(lVar1 + 0x28) = uVar8;
                  *(float *)(lVar1 + 0x2c) = fVar10;
                  *(float *)(lVar1 + 0x30) = fVar11;
                    /* try { // try from 0319ba1c to 0329ba27 has its CatchHandler @ 0319ba80 */
                  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                     (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x48), lVar1 != 0)) {
                    lVar1 = FUN_03153f94(lVar1,0);
                    /* try { // try from 0319ba30 to 0329ba37 has its CatchHandler @ 0319ba78 */
                    /* try { // try from 0319ba38 to 0329ba9b has its CatchHandler @ 0319b974 */
                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                       (uVar8 = FUN_0690449c(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
                      *(undefined4 *)(lVar1 + 0x34) = uVar8;
                      *(float *)(lVar1 + 0x38) = fVar10;
                      *(float *)(lVar1 + 0x3c) = fVar11;
                      *(float *)(lVar1 + 0x40) = fVar12;
                      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                         (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48), lVar1 != 0)) {
                        lVar1 = FUN_03153f8c(lVar1,0);
                    /* catch() { ... } // from try @ 0319ba30 with catch @ 0319ba78 */
                    /* catch() { ... } // from try @ 0319b9ac with catch @ 0319ba7c */
                        if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                           (uVar8 = FUN_069042b4(*(long *)(unaff_x19 + 0x38),0), lVar1 != 0)) {
                    /* catch() { ... } // from try @ 0319ba1c with catch @ 0319ba80 */
                          *(undefined4 *)(lVar1 + 0x28) = uVar8;
                          *(float *)(lVar1 + 0x2c) = fVar10;
                          *(float *)(lVar1 + 0x30) = fVar11;
                          if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                             (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48), lVar1 != 0)) {
                    /* try { // try from 0319ba9c to 0329baeb has its CatchHandler @ 0319ba9c
                       catch(type#1 @ 00000000) { ... } // from try @ 0319ba9c with catch @ 0319ba9c
                       catch(type#1 @ 00000000) { ... } // from try @ 0319bc20 with catch @ 0319ba9c
                        */
                            lVar1 = FUN_03153f8c(lVar1,0);
                            if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                               (uVar8 = FUN_0690449c(*(long *)(unaff_x19 + 0x38),0), lVar1 != 0)) {
                              *(undefined4 *)(lVar1 + 0x34) = uVar8;
                              *(float *)(lVar1 + 0x38) = fVar10;
                              *(float *)(lVar1 + 0x3c) = fVar11;
                              *(float *)(lVar1 + 0x40) = fVar12;
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


