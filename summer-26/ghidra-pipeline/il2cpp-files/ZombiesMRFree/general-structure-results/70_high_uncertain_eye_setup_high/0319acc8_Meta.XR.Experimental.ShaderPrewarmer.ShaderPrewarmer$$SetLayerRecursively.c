/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.ShaderPrewarmer$$SetLayerRecursively
ENTRY_POINT: 0319acc8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0319af24) */

void Meta_XR_Experimental_ShaderPrewarmer_ShaderPrewarmer__SetLayerRecursively
               (float param_1,float param_2,float param_3,float param_4,float param_5,
               undefined1 param_6 [16],undefined1 param_7 [16],float param_8)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float in_s16;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_stack_00000028;
  
  param_4 = param_4 - param_8;
  param_5 = param_5 - in_s19;
  fVar10 = (in_s20 + in_s16) - in_s21;
  param_3 = (param_1 - param_2) - param_3;
  fVar12 = (unaff_s9 * param_5 + unaff_s11 * fVar10 + unaff_s8 * param_3) - unaff_s10 * param_4;
  fVar5 = (unaff_s8 * param_4 + unaff_s11 * param_5 + unaff_s10 * param_3) - unaff_s9 * fVar10;
  FUN_06904520((unaff_s10 * fVar10 + unaff_s11 * param_4 + unaff_s9 * param_3) - unaff_s8 * param_5,
               fVar5,fVar12,
               ((unaff_s11 * param_3 - unaff_s9 * param_4) - unaff_s10 * param_5) -
               unaff_s8 * fVar10);
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    lVar1 = FUN_068f5d7c(*(long *)(unaff_x19 + 0x68),0);
    if ((*(long *)(unaff_x19 + 0x68) != 0) &&
       (lVar2 = FUN_068f5d7c(*(long *)(unaff_x19 + 0x68),0), lVar2 != 0)) {
      fVar10 = (float)FUN_069042b4(lVar2,0);
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        fVar6 = *(float *)(unaff_x19 + 0xa4);
        fVar8 = *(float *)(unaff_x19 + 0xa8);
        fVar3 = (float)FUN_06905ae4(*(undefined4 *)(unaff_x19 + 0xa0),fVar6,fVar8,
                                    *(long *)(unaff_x19 + 0x48),0);
        if ((*(long *)(unaff_x19 + 0x40) != 0) &&
           (lVar2 = FUN_068f5d7c(*(long *)(unaff_x19 + 0x40),0), lVar2 != 0)) {
          fVar7 = *(float *)(unaff_x19 + 0xa4);
          fVar9 = *(float *)(unaff_x19 + 0xa8);
          fVar4 = (float)FUN_06905ae4(*(undefined4 *)(unaff_x19 + 0xa0),fVar7,fVar9,lVar2,0);
          fVar11 = *(float *)(unaff_x19 + 0x78);
          if (fVar11 < 0.0) {
            fVar11 = 0.0;
          }
          if (lVar1 != 0) {
            FUN_06904354(fVar10 + in_stack_00000028 * ((fVar3 + (fVar4 - fVar3) * fVar11) - fVar10),
                         fVar5 + in_stack_00000028 * ((fVar6 + (fVar7 - fVar6) * fVar11) - fVar5),
                         fVar12 + in_stack_00000028 * ((fVar8 + (fVar9 - fVar8) * fVar11) - fVar12),
                         lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


