/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.Debug$$LogWarning
ENTRY_POINT: 0319c808
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


/* WARNING: Removing unreachable block (ram,0x0319c85c) */
/* WARNING: Removing unreachable block (ram,0x0319c96c) */

void Meta_XR_Experimental_ShaderPrewarmer_Debug__LogWarning(undefined1 param_1 [16],float param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float fVar12;
  float in_stack_00000020;
  
  FUN_069042b4();
  if ((((*unaff_x21 != 0) && (lVar1 = *(long *)(*unaff_x21 + 0x48), lVar1 != 0)) &&
      (lVar1 = FUN_03153e2c(lVar1,0), lVar1 != 0)) &&
     ((*unaff_x21 != 0 && (lVar2 = *(long *)(*unaff_x21 + 0x48), lVar2 != 0)))) {
    fVar12 = *(float *)(lVar1 + 0x30);
    lVar1 = FUN_03153e2c(lVar2,0);
    if (lVar1 != 0) {
      fVar4 = *(float *)(unaff_x19 + 0x3c) * unaff_s8;
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      if (unaff_x20 != 0) {
        fVar7 = *(float *)(lVar1 + 0x30);
        fVar8 = (float)*(undefined8 *)(lVar1 + 0x28) - in_stack_00000020;
        *(ulong *)(unaff_x20 + 0x28) =
             CONCAT44(param_2 + ((float)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20) - param_2) *
                                fVar4,in_stack_00000020 + fVar8 * fVar4);
        *(float *)(unaff_x20 + 0x30) = fVar12 + fVar4 * (fVar7 - fVar12);
        if ((*unaff_x21 != 0) && (lVar1 = *(long *)(*unaff_x21 + 0x48), lVar1 != 0)) {
          lVar1 = FUN_03153e2c(lVar1,0);
          if ((*unaff_x21 != 0) &&
             (((lVar2 = *(long *)(*unaff_x21 + 0x48), lVar2 != 0 &&
               (lVar2 = FUN_03153e2c(lVar2,0), lVar2 != 0)) && (*(long *)(lVar2 + 0x10) != 0)))) {
            fVar12 = (float)FUN_069042b4(*(long *)(lVar2 + 0x10),0);
            if ((((*unaff_x21 != 0) && (lVar2 = *(long *)(*unaff_x21 + 0x48), lVar2 != 0)) &&
                (lVar2 = FUN_03153e2c(lVar2,0), lVar2 != 0)) &&
               ((*unaff_x21 != 0 && (lVar3 = *(long *)(*unaff_x21 + 0x48), lVar3 != 0)))) {
              fVar4 = *(float *)(lVar2 + 0x2c);
              lVar2 = FUN_03153e2c(lVar3,0);
              if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
                FUN_069042b4(*(long *)(lVar2 + 0x10),0);
                if (((*unaff_x21 != 0) && (lVar2 = *(long *)(*unaff_x21 + 0x48), lVar2 != 0)) &&
                   (lVar2 = FUN_03153e2c(lVar2,0), lVar2 != 0)) {
                  fVar7 = *(float *)(unaff_x19 + 0x38) * unaff_s8;
                  if (fVar7 < 0.0) {
                    fVar7 = 0.0;
                  }
                  if (lVar1 != 0) {
                    fVar9 = (float)*(undefined8 *)(lVar2 + 0x28) - fVar12;
                    fVar8 = fVar8 + fVar7 * (*(float *)(lVar2 + 0x30) - fVar8);
                    *(ulong *)(lVar1 + 0x28) =
                         CONCAT44(fVar4 + ((float)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20) -
                                          fVar4) * fVar7,fVar12 + fVar9 * fVar7);
                    *(float *)(lVar1 + 0x30) = fVar8;
                    if ((*unaff_x21 != 0) && (lVar1 = *(long *)(*unaff_x21 + 0x48), lVar1 != 0)) {
                      lVar1 = FUN_03153f8c(lVar1,0);
                      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                         (uVar5 = FUN_069042b4(*(long *)(unaff_x19 + 0x28),0), lVar1 != 0)) {
                        *(undefined4 *)(lVar1 + 0x28) = uVar5;
                        *(float *)(lVar1 + 0x2c) = fVar8;
                        *(float *)(lVar1 + 0x30) = fVar9;
                        if ((*unaff_x21 != 0) && (lVar1 = *(long *)(*unaff_x21 + 0x48), lVar1 != 0))
                        {
                          lVar1 = FUN_03153f94(lVar1,0);
                          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                             (uVar5 = FUN_069042b4(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
                            *(undefined4 *)(lVar1 + 0x28) = uVar5;
                            *(float *)(lVar1 + 0x2c) = fVar8;
                            *(float *)(lVar1 + 0x30) = fVar9;
                            if ((*unaff_x21 != 0) &&
                               (lVar1 = *(long *)(*unaff_x21 + 0x48), lVar1 != 0)) {
                              lVar1 = FUN_03153f8c(lVar1,0);
                              if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                                 (uVar5 = FUN_0690449c(*(long *)(unaff_x19 + 0x28),0), lVar1 != 0))
                              {
                                *(undefined4 *)(lVar1 + 0x34) = uVar5;
                                *(float *)(lVar1 + 0x38) = fVar8;
                                *(float *)(lVar1 + 0x3c) = fVar9;
                                *(float *)(lVar1 + 0x40) = fVar12;
                                if ((*unaff_x21 != 0) &&
                                   (lVar1 = *(long *)(*unaff_x21 + 0x48), lVar1 != 0)) {
                                  lVar1 = FUN_03153f94(lVar1,0);
                                  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                     (uVar5 = FUN_0690449c(*(long *)(unaff_x19 + 0x30),0),
                                     lVar1 != 0)) {
                                    *(undefined4 *)(lVar1 + 0x34) = uVar5;
                                    *(float *)(lVar1 + 0x38) = fVar8;
                                    *(float *)(lVar1 + 0x3c) = fVar9;
                                    *(float *)(lVar1 + 0x40) = fVar12;
                                    lVar1 = FUN_0319cd8c();
                                    if (lVar1 != 0) {
                                      uVar5 = FUN_0690449c(lVar1,0);
                                      *(undefined4 *)(unaff_x19 + 0x54) = uVar5;
                                      *(float *)(unaff_x19 + 0x58) = fVar8;
                                      *(float *)(unaff_x19 + 0x5c) = fVar9;
                                      *(float *)(unaff_x19 + 0x60) = fVar12;
                                      if ((*(long *)(unaff_x19 + 0x10) != 0) &&
                                         (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x48),
                                         lVar1 != 0)) {
                                        FUN_0314b9f8(lVar1,0);
                                        lVar1 = FUN_0319cd8c();
                                        lVar2 = FUN_0319cd8c();
                                        if (lVar2 != 0) {
                                          FUN_0690449c(lVar2,0);
                                          FUN_068eca84(0);
                                          if (lVar1 != 0) {
                                            FUN_06904520(lVar1,0);
                                            if ((*unaff_x21 != 0) &&
                                               (lVar1 = *(long *)(*unaff_x21 + 0x40), lVar1 != 0)) {
                                              fVar4 = *(float *)(unaff_x19 + 0x48);
                                              fVar7 = *(float *)(unaff_x19 + 0x4c);
                                              fVar8 = *(float *)(unaff_x19 + 0x50);
                                              lVar1 = *(long *)(lVar1 + 0x80);
                                              fVar12 = (float)
                                                  UnityEngine_UIElements_BackgroundRepeat__Initial
                                                            (*(float *)(unaff_x19 + 0x44) * unaff_s8
                                                             ,fVar4,fVar7,fVar8,0);
                                              if ((*(long *)(unaff_x19 + 0x10) != 0) &&
                                                 (((lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) +
                                                                     0x40), lVar2 != 0 &&
                                                   (lVar2 = *(long *)(lVar2 + 0x80), lVar2 != 0)) &&
                                                  (fVar9 = fVar4, fVar11 = fVar8, fVar10 = fVar7,
                                                  fVar6 = (float)FUN_0690459c(lVar2,0), lVar1 != 0))
                                                 )) {
                                                UnityEngine_UIElements_BaseVerticalCollectionView_Selection__AddIndex
                                                          ((fVar4 * fVar10 +
                                                           fVar8 * fVar6 + fVar12 * fVar11) -
                                                           fVar7 * fVar9,
                                                           (fVar7 * fVar6 +
                                                           fVar8 * fVar9 + fVar4 * fVar11) -
                                                           fVar12 * fVar10,
                                                           (fVar12 * fVar9 +
                                                           fVar8 * fVar10 + fVar7 * fVar11) -
                                                           fVar4 * fVar6,
                                                           ((fVar8 * fVar11 - fVar12 * fVar6) -
                                                           fVar4 * fVar9) - fVar7 * fVar10,lVar1,0);
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


