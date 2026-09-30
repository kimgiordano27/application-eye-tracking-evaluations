/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.ShaderPrewarmer$$CopyMeshRendererProperties
ENTRY_POINT: 0319c8e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0319c96c) */

void Meta_XR_Experimental_ShaderPrewarmer_ShaderPrewarmer__CopyMeshRendererProperties
               (float param_1,undefined1 param_2 [16],float param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  
  if ((((*unaff_x21 != 0) && (lVar1 = *(long *)(*unaff_x21 + 0x48), lVar1 != 0)) &&
      (lVar1 = FUN_03153e2c(lVar1,0), lVar1 != 0)) &&
     ((*unaff_x21 != 0 && (lVar2 = *(long *)(*unaff_x21 + 0x48), lVar2 != 0)))) {
    fVar3 = *(float *)(lVar1 + 0x2c);
    lVar1 = FUN_03153e2c(lVar2,0);
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      FUN_069042b4(*(long *)(lVar1 + 0x10),0);
      if (((*unaff_x21 != 0) && (lVar1 = *(long *)(*unaff_x21 + 0x48), lVar1 != 0)) &&
         (lVar1 = FUN_03153e2c(lVar1,0), lVar1 != 0)) {
        fVar4 = *(float *)(unaff_x19 + 0x38) * unaff_s8;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        if (unaff_x20 != 0) {
          fVar8 = (float)*(undefined8 *)(lVar1 + 0x28) - param_1;
          param_3 = param_3 + fVar4 * (*(float *)(lVar1 + 0x30) - param_3);
          *(ulong *)(unaff_x20 + 0x28) =
               CONCAT44(fVar3 + ((float)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20) - fVar3) *
                                fVar4,param_1 + fVar8 * fVar4);
          *(float *)(unaff_x20 + 0x30) = param_3;
          if ((*unaff_x21 != 0) && (lVar1 = *(long *)(*unaff_x21 + 0x48), lVar1 != 0)) {
            lVar1 = FUN_03153f8c(lVar1,0);
            if ((*(long *)(unaff_x19 + 0x28) != 0) &&
               (uVar5 = FUN_069042b4(*(long *)(unaff_x19 + 0x28),0), lVar1 != 0)) {
              *(undefined4 *)(lVar1 + 0x28) = uVar5;
              *(float *)(lVar1 + 0x2c) = param_3;
              *(float *)(lVar1 + 0x30) = fVar8;
              if ((*unaff_x21 != 0) && (lVar1 = *(long *)(*unaff_x21 + 0x48), lVar1 != 0)) {
                lVar1 = FUN_03153f94(lVar1,0);
                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                   (uVar5 = FUN_069042b4(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
                  *(undefined4 *)(lVar1 + 0x28) = uVar5;
                  *(float *)(lVar1 + 0x2c) = param_3;
                  *(float *)(lVar1 + 0x30) = fVar8;
                  if ((*unaff_x21 != 0) && (lVar1 = *(long *)(*unaff_x21 + 0x48), lVar1 != 0)) {
                    lVar1 = FUN_03153f8c(lVar1,0);
                    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                       (uVar5 = FUN_0690449c(*(long *)(unaff_x19 + 0x28),0), lVar1 != 0)) {
                      *(undefined4 *)(lVar1 + 0x34) = uVar5;
                      *(float *)(lVar1 + 0x38) = param_3;
                      *(float *)(lVar1 + 0x3c) = fVar8;
                      *(float *)(lVar1 + 0x40) = param_1;
                      if ((*unaff_x21 != 0) && (lVar1 = *(long *)(*unaff_x21 + 0x48), lVar1 != 0)) {
                        lVar1 = FUN_03153f94(lVar1,0);
                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                           (uVar5 = FUN_0690449c(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
                          *(undefined4 *)(lVar1 + 0x34) = uVar5;
                          *(float *)(lVar1 + 0x38) = param_3;
                          *(float *)(lVar1 + 0x3c) = fVar8;
                          *(float *)(lVar1 + 0x40) = param_1;
                          lVar1 = FUN_0319cd8c();
                          if (lVar1 != 0) {
                            uVar5 = FUN_0690449c(lVar1,0);
                            *(undefined4 *)(unaff_x19 + 0x54) = uVar5;
                            *(float *)(unaff_x19 + 0x58) = param_3;
                            *(float *)(unaff_x19 + 0x5c) = fVar8;
                            *(float *)(unaff_x19 + 0x60) = param_1;
                            if ((*(long *)(unaff_x19 + 0x10) != 0) &&
                               (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x48), lVar1 != 0))
                            {
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
                                    fVar8 = *(float *)(unaff_x19 + 0x4c);
                                    fVar10 = *(float *)(unaff_x19 + 0x50);
                                    lVar1 = *(long *)(lVar1 + 0x80);
                                    fVar3 = (float)UnityEngine_UIElements_BackgroundRepeat__Initial
                                                             (*(float *)(unaff_x19 + 0x44) *
                                                              unaff_s8,fVar4,fVar8,fVar10,0);
                                    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
                                       (((lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40),
                                         lVar2 != 0 && (lVar2 = *(long *)(lVar2 + 0x80), lVar2 != 0)
                                         ) && (fVar7 = fVar4, fVar11 = fVar10, fVar9 = fVar8,
                                              fVar6 = (float)FUN_0690459c(lVar2,0), lVar1 != 0)))) {
                                      UnityEngine_UIElements_BaseVerticalCollectionView_Selection__AddIndex
                                                ((fVar4 * fVar9 + fVar10 * fVar6 + fVar3 * fVar11) -
                                                 fVar8 * fVar7,
                                                 (fVar8 * fVar6 + fVar10 * fVar7 + fVar4 * fVar11) -
                                                 fVar3 * fVar9,
                                                 (fVar3 * fVar7 + fVar10 * fVar9 + fVar8 * fVar11) -
                                                 fVar4 * fVar6,
                                                 ((fVar10 * fVar11 - fVar3 * fVar6) - fVar4 * fVar7)
                                                 - fVar8 * fVar9,lVar1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


