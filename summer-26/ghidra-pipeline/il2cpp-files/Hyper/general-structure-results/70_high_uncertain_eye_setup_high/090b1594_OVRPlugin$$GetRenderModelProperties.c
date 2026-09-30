/*
FUNCTION_NAME: OVRPlugin$$GetRenderModelProperties
ENTRY_POINT: 090b1594
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetRenderModelProperties(long param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  float fVar8;
  
  fVar6 = *(float *)(param_1 + 0xc4);
  fVar4 = SQRT(unaff_s10 * unaff_s10 + param_2 + param_3);
  if (fVar4 <= fVar6) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar7 = *pfVar3;
    fVar8 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  else {
    fVar7 = unaff_s8 / fVar4;
    fVar8 = unaff_s9 / fVar4;
    fVar4 = unaff_s10 / fVar4;
  }
  lVar1 = FUN_0a17834c();
  lVar2 = FUN_0a17834c();
  if (lVar2 != 0) {
    fVar5 = (float)FUN_0a18a1a0(lVar2,0);
    if (DAT_0b31f3e4 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e4 = '\x01';
    }
    if (lVar1 != 0) {
      fVar6 = fVar6 - fVar8;
      param_4 = param_4 - fVar4;
      lVar2 = *(long *)(*unaff_x22 + 0xb8);
      thunk_FUN_0a18b828(fVar5 - fVar7,fVar6,param_4,*(undefined4 *)(lVar2 + 0x18),
                         *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),lVar1,0);
      if (*(char *)(unaff_x19 + 0x60) == '\0') {
        return;
      }
      lVar1 = FUN_0a17834c();
      if (lVar1 != 0) {
        fVar4 = (float)FUN_0a18a1a0(lVar1,0);
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          fVar7 = fVar6;
          fVar8 = param_4;
          fVar5 = (float)FUN_0a18a1a0(*(long *)(unaff_x19 + 0x50),0);
          if (DAT_0b32413d == '\0') {
            FUN_04947ee4(PTR_DAT_0ac0a830);
            DAT_0b32413d = '\x01';
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          if ((*(long *)(unaff_x19 + 0x48) != 0) &&
             (lVar1 = FUN_0a17834c(*(long *)(unaff_x19 + 0x48),0), lVar1 != 0)) {
            fVar4 = SQRT((param_4 - fVar8) * (param_4 - fVar8) +
                         (fVar4 - fVar5) * (fVar4 - fVar5) + (fVar6 - fVar7) * (fVar6 - fVar7));
            FUN_0a18aa1c(fVar4 * *(float *)(unaff_x19 + 100),fVar4 * *(float *)(unaff_x19 + 0x68),
                         fVar4 * *(float *)(unaff_x19 + 0x6c),lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


