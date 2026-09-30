/*
FUNCTION_NAME: OVRManager$$set_chromatic
ENTRY_POINT: 05ba4f94
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_chromatic
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_0754e9b1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c1b68);
    DAT_0754e9b1 = 1;
  }
  if (DAT_075457aa == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_075457aa = '\x01';
  }
                    /* try { // try from 05ba4fe8 to 05ca4fef has its CatchHandler @ 05ba5034 */
  if (*(long *)(param_5 + 0x20) != 0) {
                    /* try { // try from 05ba4ff0 to 05ca504f has its CatchHandler @ 05ba4cbc */
    lVar3 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
    fVar14 = *(float *)(lVar3 + 0x1c);
    fVar15 = *(float *)(lVar3 + 0x20);
    fVar16 = *(float *)(lVar3 + 0x18);
    fVar5 = (float)FUN_06a577c0(*(long *)(param_5 + 0x20),0);
    fVar6 = fVar5 * 0.5 + *(float *)(param_5 + 0x28);
    fVar9 = 0.0;
    fVar5 = 0.0;
    if (0.0 <= fVar6) {
      fVar5 = fVar6;
    }
    if ((*(long *)(param_5 + 0x20) != 0) &&
       (lVar3 = FUN_069d3a80(*(long *)(param_5 + 0x20),0), lVar3 != 0)) {
      fVar6 = (float)FUN_069e6fbc(lVar3,0);
      if ((*(long *)(param_5 + 0x20) != 0) &&
         (fVar12 = param_3, fVar10 = fVar9, lVar3 = FUN_069d3a80(*(long *)(param_5 + 0x20),0),
         lVar3 != 0)) {
        fVar7 = (float)FUN_069e6fbc(lVar3,0);
        if ((*(long *)(param_5 + 0x20) != 0) &&
           (fVar13 = fVar12, fVar11 = fVar10, lVar3 = FUN_069d3a80(*(long *)(param_5 + 0x20),0),
           puVar1 = PTR_DAT_070c1b68, lVar3 != 0)) {
          uVar8 = FUN_069e5200(lVar3,0);
          uVar4 = *(undefined8 *)(param_5 + 0x40);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          fVar16 = fVar16 * fVar5;
          fVar14 = fVar14 * fVar5;
          fVar15 = fVar15 * fVar5;
          uVar2 = FUN_069d69b8(uVar4,0,0);
          if ((uVar2 & 1) != 0) {
            if ((*(long *)(param_5 + 0x40) == 0) ||
               (lVar3 = FUN_069d3a80(*(long *)(param_5 + 0x40),0), lVar3 == 0)) goto LAB_05ba51ac;
            FUN_069e7c88(fVar16 + fVar6,fVar14 + fVar9,fVar15 + param_3,uVar8,fVar11,fVar13,param_4,
                         lVar3,0);
          }
          uVar4 = *(undefined8 *)(param_5 + 0x48);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar2 = FUN_069d69b8(uVar4,0,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if ((*(long *)(param_5 + 0x48) != 0) &&
             (lVar3 = FUN_069d3a80(*(long *)(param_5 + 0x48),0), lVar3 != 0)) {
            FUN_069e7c88(fVar7 - fVar16,fVar10 - fVar14,fVar12 - fVar15,uVar8,fVar11,fVar13,param_4,
                         lVar3,0);
            return;
          }
        }
      }
    }
  }
LAB_05ba51ac:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


