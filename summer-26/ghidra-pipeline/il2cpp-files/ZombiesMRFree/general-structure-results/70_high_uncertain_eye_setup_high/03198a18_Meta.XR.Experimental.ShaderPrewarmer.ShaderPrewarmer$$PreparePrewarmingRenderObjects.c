/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.ShaderPrewarmer$$PreparePrewarmingRenderObjects
ENTRY_POINT: 03198a18
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Experimental_ShaderPrewarmer_ShaderPrewarmer__PreparePrewarmingRenderObjects
               (undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 in_w8;
  undefined8 *puVar4;
  long unaff_x19;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  
  *(undefined4 *)(param_4 + 0x20) = in_w8;
                    /* try { // try from 03198a20 to 03298a37 has its CatchHandler @ 03198a3c */
  lVar2 = FUN_03153f8c(param_4,0);
                    /* try { // try from 03198a38 to 03298aa7 has its CatchHandler @ 0319885c */
                    /* catch() { ... } // from try @ 03198a20 with catch @ 03198a3c */
                    /* catch() { ... } // from try @ 03198a08 with catch @ 03198a40 */
                    /* catch() { ... } // from try @ 031989d0 with catch @ 03198a44 */
                    /* catch() { ... } // from try @ 031989b8 with catch @ 03198a48 */
                    /* catch() { ... } // from try @ 03198980 with catch @ 03198a4c */
                    /* catch() { ... } // from try @ 03198968 with catch @ 03198a54 */
  if ((((*(long *)(unaff_x19 + 0x68) != 0) &&
       (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar3 != 0)) &&
      (lVar3 = FUN_03153f8c(lVar3,0), lVar3 != 0)) &&
     ((*(long *)(lVar3 + 0x10) != 0 && (uVar5 = FUN_069042b4(*(long *)(lVar3 + 0x10),0), lVar2 != 0)
      ))) {
    *(undefined4 *)(lVar2 + 0x28) = uVar5;
    *(undefined4 *)(lVar2 + 0x2c) = param_2;
    *(float *)(lVar2 + 0x30) = param_3;
    if ((*(long *)(unaff_x19 + 0x68) != 0) &&
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar2 != 0)) {
      lVar2 = FUN_03153f94(lVar2,0);
                    /* catch() { ... } // from try @ 03198948 with catch @ 03198a8c
                       catch() { ... } // from try @ 03198998 with catch @ 03198a8c
                       catch() { ... } // from try @ 031989e8 with catch @ 03198a8c */
                    /* catch() { ... } // from try @ 03198bb0 with catch @ 03198aa8
                       catch() { ... } // from try @ 03198c00 with catch @ 03198aa8
                       catch() { ... } // from try @ 03198c50 with catch @ 03198aa8
                       catch() { ... } // from try @ 03198c8c with catch @ 03198aa8 */
      if ((((*(long *)(unaff_x19 + 0x68) != 0) &&
           (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar3 != 0)) &&
          (lVar3 = FUN_03153f94(lVar3,0), lVar3 != 0)) &&
         ((*(long *)(lVar3 + 0x10) != 0 &&
          (uVar5 = FUN_069042b4(*(long *)(lVar3 + 0x10),0), lVar2 != 0)))) {
        *(undefined4 *)(lVar2 + 0x28) = uVar5;
        *(undefined4 *)(lVar2 + 0x2c) = param_2;
        *(float *)(lVar2 + 0x30) = param_3;
        if ((*(long *)(unaff_x19 + 0x68) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar2 != 0)) {
          lVar2 = FUN_03153f9c(lVar2,0);
          if ((((*(long *)(unaff_x19 + 0x68) != 0) &&
               (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar3 != 0)) &&
              (lVar3 = FUN_03153f9c(lVar3,0), lVar3 != 0)) &&
             ((*(long *)(lVar3 + 0x10) != 0 &&
              (uVar5 = FUN_069042b4(*(long *)(lVar3 + 0x10),0), lVar2 != 0)))) {
            *(undefined4 *)(lVar2 + 0x28) = uVar5;
            *(undefined4 *)(lVar2 + 0x2c) = param_2;
            *(float *)(lVar2 + 0x30) = param_3;
            if ((*(long *)(unaff_x19 + 0x68) != 0) &&
               (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar2 != 0)) {
                    /* try { // try from 03198b18 to 03298baf has its CatchHandler @ 03198ce0 */
              lVar2 = FUN_03153fa4(lVar2,0);
              if (((*(long *)(unaff_x19 + 0x68) != 0) &&
                  (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar3 != 0)) &&
                 ((lVar3 = FUN_03153fa4(lVar3,0), lVar3 != 0 &&
                  ((*(long *)(lVar3 + 0x10) != 0 &&
                   (uVar5 = FUN_069042b4(*(long *)(lVar3 + 0x10),0), lVar2 != 0)))))) {
                *(undefined4 *)(lVar2 + 0x28) = uVar5;
                *(undefined4 *)(lVar2 + 0x2c) = param_2;
                *(float *)(lVar2 + 0x30) = param_3;
                *(undefined4 *)(unaff_x19 + 0x50) = 0x3f800000;
                if (*(long *)(unaff_x19 + 0x60) != 0) {
                  fVar6 = (float)FUN_06974fac(*(long *)(unaff_x19 + 0x60),0);
                  fVar8 = param_3;
                  lVar2 = FUN_068f5d7c();
                  if (lVar2 != 0) {
                    fVar7 = (float)FUN_069042b4(lVar2,0);
                    lVar2 = *(long *)(unaff_x19 + 0x40);
                    if (DAT_0738e6c8 == '\0') {
                    /* try { // try from 03198bb0 to 03298bbb has its CatchHandler @ 03198aa8 */
                      FUN_02fe925c(PTR_DAT_06f6d508);
                    /* try { // try from 03198bbc to 03298bc3 has its CatchHandler @ 03198ca8 */
                      DAT_0738e6c8 = '\x01';
                    }
                    puVar1 = PTR_DAT_06f6d508;
                    if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
                    /* try { // try from 03198bd4 to 03298beb has its CatchHandler @ 03198ca0 */
                      thunk_FUN_02fdcff0();
                    }
                    if (lVar2 != 0) {
                      fVar6 = fVar6 - fVar7;
                      param_3 = param_3 - fVar8;
                    /* try { // try from 03198bec to 03298bff has its CatchHandler @ 03198ce0 */
                      fVar8 = SQRT(param_3 * param_3 + fVar6 * fVar6 + 0.0);
                    /* try { // try from 03198c00 to 03298c0b has its CatchHandler @ 03198aa8 */
                    /* try { // try from 03198c0c to 03298c13 has its CatchHandler @ 03198c9c */
                      fVar7 = (float)FUN_068b63c8(lVar2,0);
                      lVar2 = *(long *)(unaff_x19 + 0x60);
                      if (DAT_0738e668 == '\0') {
                    /* try { // try from 03198c24 to 03298c3b has its CatchHandler @ 03198c98 */
                        FUN_02fe925c(PTR_DAT_06f6d508);
                        DAT_0738e668 = '\x01';
                      }
                    /* try { // try from 03198c3c to 03298c4f has its CatchHandler @ 03198ce0 */
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_02fdcff0();
                      }
                      puVar1 = PTR_DAT_06f6d5d8;
                    /* try { // try from 03198c50 to 03298c5b has its CatchHandler @ 03198aa8 */
                    /* try { // try from 03198c5c to 03298c63 has its CatchHandler @ 03198c94 */
                      if (fVar8 <= DAT_01369fe0) {
                        if (DAT_0738e669 == '\0') {
                    /* try { // try from 03198c8c to 03298cfb has its CatchHandler @ 03198aa8 */
                    /* catch() { ... } // from try @ 03198c74 with catch @ 03198c90 */
                    /* catch() { ... } // from try @ 03198c5c with catch @ 03198c94 */
                          FUN_02fe925c(PTR_DAT_06f6d5d8);
                    /* catch() { ... } // from try @ 03198c24 with catch @ 03198c98 */
                    /* catch() { ... } // from try @ 03198c0c with catch @ 03198c9c */
                          DAT_0738e669 = '\x01';
                        }
                    /* catch() { ... } // from try @ 03198bd4 with catch @ 03198ca0 */
                        puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
                    /* catch() { ... } // from try @ 03198bbc with catch @ 03198ca8 */
                        uVar11 = *puVar4;
                        param_3 = *(float *)(puVar4 + 1);
                      }
                      else {
                        param_3 = param_3 / fVar8;
                    /* try { // try from 03198c74 to 03298c8b has its CatchHandler @ 03198c90 */
                        uVar11 = CONCAT44(0.0 / fVar8,fVar6 / fVar8);
                      }
                      if (DAT_0738e662 == '\0') {
                        FUN_02fe925c(PTR_DAT_06f6d5d8);
                        DAT_0738e662 = '\x01';
                      }
                      if (lVar2 != 0) {
                        fVar10 = *(float *)(unaff_x19 + 0x28);
                        fVar6 = *(float *)(unaff_x19 + 0x2c);
                    /* catch() { ... } // from try @ 03198b18 with catch @ 03198ce0
                       catch() { ... } // from try @ 03198bec with catch @ 03198ce0
                       catch() { ... } // from try @ 03198c3c with catch @ 03198ce0 */
                        lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
                        uVar9 = *(undefined8 *)(lVar3 + 0x18);
                    /* catch() { ... } // from try @ 03198df4 with catch @ 03198cfc
                       catch() { ... } // from try @ 03198e44 with catch @ 03198cfc
                       catch() { ... } // from try @ 03198e80 with catch @ 03198cfc */
                        fVar8 = ((float)((ulong)uVar11 >> 0x20) +
                                (float)((ulong)uVar9 >> 0x20) * fVar6) * fVar7 * fVar10;
                        FUN_0697442c(CONCAT44(fVar8,((float)uVar11 + (float)uVar9 * fVar6) * fVar7 *
                                                    fVar10),fVar8,
                                     fVar10 * fVar7 * (param_3 + fVar6 * *(float *)(lVar3 + 0x20)),
                                     lVar2,0);
                        fVar8 = *(float *)(unaff_x19 + 0x50);
                        if (fVar8 < 0.5) {
                          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03198de8;
                          if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x3c) != '\0') {
                            fVar6 = (float)FUN_068eec18(0);
                            fVar6 = fVar8 + fVar6 * -3.0;
                            fVar8 = fVar6;
                            if (1.0 < fVar6) {
                              fVar8 = 1.0;
                            }
                            if (fVar6 < 0.0) {
                              fVar8 = 0.0;
                            }
                            *(float *)(unaff_x19 + 0x50) = fVar8;
                          }
                        }
                        if (*(long *)(unaff_x19 + 0x38) != 0) {
                          FUN_068b63c8(fVar8,*(long *)(unaff_x19 + 0x38),0);
                          FUN_03198dec();
                          lVar2 = FUN_068f5d7c();
                          if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                             (fVar8 = (float)FUN_068b63c8(*(undefined4 *)(unaff_x19 + 0x50),
                                                          *(long *)(unaff_x19 + 0x48),0), lVar2 != 0
                             )) {
                    /* try { // try from 03198de0 to 03298df3 has its CatchHandler @ 03198ecc */
                            FUN_06904aa4(fVar8 * *(float *)(unaff_x19 + 0x54),
                                         fVar8 * *(float *)(unaff_x19 + 0x58),
                                         fVar8 * *(float *)(unaff_x19 + 0x5c),lVar2,0);
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
LAB_03198de8:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


