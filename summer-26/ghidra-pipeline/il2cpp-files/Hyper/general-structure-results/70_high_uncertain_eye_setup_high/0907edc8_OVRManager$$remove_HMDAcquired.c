/*
FUNCTION_NAME: OVRManager$$remove_HMDAcquired
ENTRY_POINT: 0907edc8
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HMDAcquired
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined4 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
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
  
  if ((*(byte *)(unaff_x20 + 0x136) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09788);
    *(undefined1 *)(unaff_x20 + 0x136) = 1;
  }
  if (DAT_0b31f3e4 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e4 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
    fVar14 = *(float *)(lVar3 + 0x1c);
    fVar15 = *(float *)(lVar3 + 0x20);
    fVar16 = *(float *)(lVar3 + 0x18);
    fVar5 = (float)FUN_0a1ecf3c(*(long *)(unaff_x19 + 0x20),0);
    fVar6 = fVar5 * 0.5 + *(float *)(unaff_x19 + 0x28);
    fVar9 = 0.0;
    fVar5 = 0.0;
    if (0.0 <= fVar6) {
      fVar5 = fVar6;
    }
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (lVar3 = FUN_0a17834c(*(long *)(unaff_x19 + 0x20),0), lVar3 != 0)) {
      fVar6 = (float)FUN_0a18a1a0(lVar3,0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (fVar12 = param_3, fVar10 = fVar9, lVar3 = FUN_0a17834c(*(long *)(unaff_x19 + 0x20),0),
         lVar3 != 0)) {
        fVar7 = (float)FUN_0a18a1a0(lVar3,0);
        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
           (fVar13 = fVar12, fVar11 = fVar10, lVar3 = FUN_0a17834c(*(long *)(unaff_x19 + 0x20),0),
           puVar1 = PTR_DAT_0ac09788, lVar3 != 0)) {
          uVar8 = FUN_0a1884ac(lVar3,0);
          uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          fVar16 = fVar16 * fVar5;
          fVar14 = fVar14 * fVar5;
          fVar15 = fVar15 * fVar5;
          uVar2 = FUN_0a17b398(uVar4,0,0);
          if ((uVar2 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x40) == 0) ||
               (lVar3 = FUN_0a17834c(*(long *)(unaff_x19 + 0x40),0), lVar3 == 0)) goto LAB_0907efcc;
            FUN_0a18aea0(fVar16 + fVar6,fVar14 + fVar9,fVar15 + param_3,uVar8,fVar11,fVar13,param_4,
                         lVar3,0);
          }
          uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar2 = FUN_0a17b398(uVar4,0,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if ((*(long *)(unaff_x19 + 0x48) != 0) &&
             (lVar3 = FUN_0a17834c(*(long *)(unaff_x19 + 0x48),0), lVar3 != 0)) {
            FUN_0a18aea0(fVar7 - fVar16,fVar10 - fVar14,fVar12 - fVar15,uVar8,fVar11,fVar13,param_4,
                         lVar3,0);
            return;
          }
        }
      }
    }
  }
LAB_0907efcc:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


