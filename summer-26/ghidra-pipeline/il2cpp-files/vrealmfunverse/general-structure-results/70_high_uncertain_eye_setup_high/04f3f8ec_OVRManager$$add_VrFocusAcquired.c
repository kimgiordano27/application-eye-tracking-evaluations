/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 04f3f8ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusAcquired
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s9;
  float unaff_s10;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(char *)(param_4 + 0x7c) != '\0') {
    if (DAT_066c1caa == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1caa = '\x01';
    }
    puVar1 = PTR_DAT_06312438;
    lVar4 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
    fVar10 = *(float *)(lVar4 + 0x18);
    fVar9 = *(float *)(lVar4 + 0x1c);
    fVar8 = *(float *)(lVar4 + 0x20);
    if (DAT_066c298e == '\0') {
      FUN_02b3c81c(PTR_DAT_06315600);
      DAT_066c298e = '\x01';
    }
    puVar2 = PTR_DAT_06315600;
    fVar5 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
    fVar6 = **(float **)(*(long *)PTR_DAT_06315600 + 0xb8);
    fVar7 = param_2;
    if (fVar6 <= fVar5) {
      fVar7 = unaff_s9 * fVar8 + unaff_s10 * fVar10 + param_2 * fVar9;
      fVar6 = fVar8 * fVar7;
      param_3 = (fVar10 * fVar7) / fVar5;
      unaff_s10 = unaff_s10 - param_3;
      fVar7 = param_2 - (fVar9 * fVar7) / fVar5;
      unaff_s9 = unaff_s9 - fVar6 / fVar5;
    }
    fVar8 = (float)FUN_05d1b860(param_4 + 0x50,0);
    if (DAT_066c298e == '\0') {
      FUN_02b3c81c(PTR_DAT_06315600);
      DAT_066c298e = '\x01';
    }
    fVar9 = param_3 * param_3 + fVar8 * fVar8 + fVar6 * fVar6;
    if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar9) {
      fVar10 = unaff_s9 * param_3 + unaff_s10 * fVar8 + fVar7 * fVar6;
      unaff_s10 = unaff_s10 - (fVar8 * fVar10) / fVar9;
      fVar7 = fVar7 - (fVar6 * fVar10) / fVar9;
      unaff_s9 = unaff_s9 - (param_3 * fVar10) / fVar9;
    }
    if (DAT_066c1caa == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1caa = '\x01';
    }
    lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
    unaff_s9 = unaff_s9 + param_2 * *(float *)(lVar4 + 0x20);
    unaff_s10 = unaff_s10 + param_2 * *(float *)(lVar4 + 0x18);
    param_2 = fVar7 + param_2 * *(float *)(lVar4 + 0x1c);
  }
  fVar8 = param_2;
  fVar9 = (float)FUN_04f3fb4c(unaff_s10,param_2,unaff_s9,param_4,*(undefined4 *)(param_4 + 0x38));
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (fVar10 = fVar8, fVar7 = unaff_s9, lVar4 = FUN_05c89340(*(long *)(param_4 + 0x20),0),
     lVar4 != 0)) {
    fVar5 = (float)FUN_05c9bf94(lVar4,0);
    FUN_05c9c070(fVar9 + fVar5,fVar8 + fVar10,unaff_s9 + fVar7,lVar4,0);
    bVar3 = false;
    if ((param_2 < 0.0) && (param_2 < fVar8)) {
      bVar3 = ABS(fVar8) < DAT_010328d0;
    }
    FUN_04f3fdc8(param_4,bVar3);
    FUN_04f3eb7c(param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


