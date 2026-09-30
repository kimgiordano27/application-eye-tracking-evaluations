/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$.cctor
ENTRY_POINT: 076e1cfc
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0___cctor
               (long param_1,float param_2,undefined1 param_3 [16],undefined4 param_4)

{
  float *pfVar1;
  long unaff_x19;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float fVar11;
  float unaff_s9;
  float unaff_s10;
  float fVar12;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  fVar5 = *(float *)(param_1 + 0xf28);
  param_2 = SQRT(param_2);
  if (param_2 <= fVar5) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar11 = *pfVar1;
    fVar12 = pfVar1[1];
    param_2 = pfVar1[2];
  }
  else {
    fVar11 = unaff_s8 / param_2;
    fVar12 = unaff_s10 / param_2;
    param_2 = unaff_s9 / param_2;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar3 = (float)FUN_08598d98(*(long *)(unaff_x19 + 0x20),0);
    fVar5 = (float)FUN_08575d1c(fVar11,fVar12,param_2,fVar3,fVar5,param_4,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar11 = fVar12;
      fVar7 = param_2;
      fVar9 = fVar3;
      FUN_08596a20(*(long *)(unaff_x19 + 0x20),0);
      fVar4 = (float)FUN_08575760(0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      fVar6 = (fVar5 * fVar7 + fVar12 * fVar9 + fVar3 * fVar11) - param_2 * fVar4;
      fVar8 = (fVar12 * fVar4 + param_2 * fVar9 + fVar3 * fVar7) - fVar5 * fVar11;
      fVar10 = ((fVar3 * fVar9 - fVar5 * fVar4) - fVar12 * fVar11) - param_2 * fVar7;
      fVar5 = (float)FUN_08575760((param_2 * fVar11 + fVar5 * fVar9 + fVar3 * fVar4) -
                                  fVar12 * fVar7,fVar6,fVar8,fVar10,0);
      if (lVar2 != 0) {
        fVar11 = (unaff_s12 * fVar5 + unaff_s11 * fVar10 + unaff_s14 * fVar8) - unaff_s13 * fVar6;
        fVar12 = (unaff_s13 * fVar8 + unaff_s12 * fVar10 + unaff_s14 * fVar6) - unaff_s11 * fVar5;
        FUN_08598b14((unaff_s11 * fVar6 + unaff_s13 * fVar10 + unaff_s14 * fVar5) -
                     unaff_s12 * fVar8,fVar12,fVar11,
                     ((unaff_s14 * fVar10 - unaff_s13 * fVar5) - unaff_s12 * fVar6) -
                     unaff_s11 * fVar8,lVar2,0);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          fVar5 = (float)FUN_08598884(lVar2,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar11;
            in_stack_00000068 = in_stack_00000068 + fVar12;
            fVar3 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x28),0);
            FUN_0859895c((in_stack_00000000 + fVar5) - fVar3,in_stack_00000068 - fVar12,
                         in_stack_00000008._4_4_ - fVar11,lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


