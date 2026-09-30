/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetMixedRealityInitialized
ENTRY_POINT: 076e2538
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


void OVRPlugin_OVRP_1_15_0__ovrp_GetMixedRealityInitialized
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(long *)(param_4 + 0x28) != 0) {
    fVar2 = (float)FUN_08598d98(*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x28) != 0) {
      fVar8 = param_5[1];
      fVar7 = param_5[2];
      fVar9 = *param_5;
      fVar4 = param_2;
      fVar5 = param_3;
      fVar3 = (float)FUN_08598884(*(long *)(param_4 + 0x28),0);
      fVar6 = fVar5;
      if (DAT_09539e18 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e18 = '\x01';
      }
      fVar9 = fVar9 - fVar3;
      fVar8 = fVar8 - fVar4;
      fVar7 = fVar7 - fVar5;
      if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar4 = SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8);
      if (fVar4 <= DAT_01a2ef28) {
        if (DAT_09539c10 == '\0') {
          FUN_0403162c(PTR_DAT_08f65568);
          DAT_09539c10 = '\x01';
        }
        pfVar1 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
        fVar9 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar7 = pfVar1[2];
      }
      else {
        fVar9 = fVar9 / fVar4;
        fVar8 = fVar8 / fVar4;
        fVar7 = fVar7 / fVar4;
      }
      fVar4 = fVar7 * fVar7;
      if (fVar9 * fVar9 + fVar8 * fVar8 + fVar4 == 0.0) {
        if (*(long *)(param_4 + 0x28) == 0) goto LAB_076e271c;
        fVar9 = (float)FUN_08598e98(*(long *)(param_4 + 0x28),0);
        fVar8 = fVar4;
        fVar7 = fVar6;
      }
      FUN_08575dd0(fVar9,fVar8,fVar7,0);
      if (*(long *)(param_4 + 0x38) != 0) {
        FUN_0852b5fc((param_3 * fVar7 + fVar2 * fVar9 + param_2 * fVar8) * 0.5 + 0.5,
                     *(long *)(param_4 + 0x38),0);
        fVar4 = param_5[4];
        fVar5 = param_5[5];
        fVar6 = param_5[6];
        fVar2 = (float)FUN_085759a8(param_5[3],0);
        param_5[3] = fVar2;
        param_5[4] = fVar4;
        param_5[5] = fVar5;
        param_5[6] = fVar6;
        return;
      }
    }
  }
LAB_076e271c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


