/*
FUNCTION_NAME: OVRPlugin$$LoadRenderModel
ENTRY_POINT: 069556cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__LoadRenderModel(float param_1,float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s11;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s15;
  float fVar10;
  float fVar11;
  float fStack0000000000000014;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  fVar2 = (float)FUN_06960788(param_4,0);
  fVar8 = *(float *)(unaff_x19 + 0x38);
  fVar7 = *(float *)(unaff_x19 + 0x3c);
  fVar9 = *(float *)(unaff_x19 + 0x30);
  fVar3 = (float)FUN_07ca88b8(0);
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar1 = FUN_07c98f88(*(long *)(unaff_x19 + 0x10),0), lVar1 != 0)) {
    fStack0000000000000014 = unaff_s15;
    fStack000000000000001c = unaff_s8;
    fVar4 = (float)FUN_07cac7a8(lVar1,0);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      fVar6 = *(float *)(unaff_x19 + 0x34);
      fVar10 = *(float *)(unaff_x19 + 0x38);
      fVar5 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
      if ((*(long *)(unaff_x19 + 0x10) != 0) &&
         (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20), lVar1 != 0)) {
        fVar11 = *(float *)(unaff_x19 + 0x28);
        fVar5 = fVar5 / 3.0;
        fVar8 = ABS(fVar8) - ABS(param_1 + fVar2 * fVar9);
        fVar3 = fVar8 + (fVar8 - fVar7) / fVar3;
        fVar2 = 90.0;
        if (fVar3 <= 90.0) {
          fVar2 = fVar3;
        }
        fVar7 = 0.0;
        if (0.0 <= fVar3) {
          fVar7 = fVar2;
        }
        fVar2 = -fVar7;
        if (0.0 <= fVar10) {
          fVar2 = fVar7;
        }
        fVar3 = 1.0;
        if (fVar5 <= 1.0) {
          fVar3 = fVar5;
        }
        fVar6 = fVar6 * fVar2;
        fVar2 = 0.0;
        if (0.0 <= fVar5) {
          fVar2 = fVar3;
        }
        FUN_07d32a2c(fVar4 * fVar6 * fVar2 * fVar11,param_2 * fVar6 * fVar2 * fVar11,
                     param_3 * fVar6 * fVar2 * fVar11,
                     (fStack000000000000001c + fStack000000000000002c) * 0.5,
                     (unaff_s11 + fStack0000000000000028) * 0.5,
                     (fStack0000000000000014 + in_stack_00000020._4_4_) * 0.5,lVar1,0);
        *(float *)(unaff_x19 + 0x3c) = fVar8;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


