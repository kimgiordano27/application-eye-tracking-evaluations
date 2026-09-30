/*
FUNCTION_NAME: OVRManager$$add_TrackingAcquired
ENTRY_POINT: 05d620dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_TrackingAcquired(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  long unaff_x21;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FUN_05d60f70();
  if (unaff_x21 != 0) {
    FUN_06bf4908();
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      uVar3 = FUN_06bc1ca0(*(long *)(unaff_x19 + 0x48),0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        fVar7 = (float)FUN_06bf4868(*(long *)(unaff_x19 + 0x50),0);
        fVar11 = param_2;
        fVar9 = param_3;
        lVar4 = FUN_06be6b04();
        if (lVar4 != 0) {
          fVar8 = (float)FUN_06bf4868(lVar4,0);
          if (DAT_076cd827 == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_07279c00);
            DAT_076cd827 = '\x01';
          }
          puVar2 = PTR_DAT_07279c00;
          fVar7 = fVar7 - fVar8;
          param_2 = param_2 - fVar11;
          param_3 = param_3 - fVar9;
          if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          puVar1 = PTR_DAT_072795b0;
          fVar8 = param_3 * param_3;
          fVar9 = SQRT(fVar8 + fVar7 * fVar7 + param_2 * param_2);
          fVar11 = DAT_013a01c0;
          if (fVar9 <= DAT_013a01c0) {
            if (DAT_076cd829 == '\0') {
              thunk_FUN_032e1da0(PTR_DAT_072795b0);
              DAT_076cd829 = '\x01';
            }
            pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
            fVar7 = *pfVar6;
            param_2 = pfVar6[1];
            param_3 = pfVar6[2];
          }
          else {
            fVar7 = fVar7 / fVar9;
            param_2 = param_2 / fVar9;
            param_3 = param_3 / fVar9;
          }
          lVar4 = FUN_06be6b04();
          lVar5 = FUN_06be6b04();
          if (lVar5 != 0) {
            fVar9 = (float)FUN_06bf4868(lVar5,0);
            if (DAT_076cd760 == '\0') {
              thunk_FUN_032e1da0(PTR_DAT_072795b0);
              DAT_076cd760 = '\x01';
            }
            if (lVar4 != 0) {
              fVar11 = fVar11 - param_2;
              fVar8 = fVar8 - param_3;
              lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
              thunk_FUN_06bf5c64(fVar9 - fVar7,fVar11,fVar8,*(undefined4 *)(lVar5 + 0x18),
                                 *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),lVar4,0
                                );
              if (*(char *)(unaff_x19 + 0x60) == '\0') {
                return;
              }
              lVar4 = FUN_06be6b04();
              if (lVar4 != 0) {
                fVar9 = (float)FUN_06bf4868(lVar4,0);
                if (*(long *)(unaff_x19 + 0x50) != 0) {
                  fVar7 = fVar11;
                  fVar12 = fVar8;
                  fVar10 = (float)FUN_06bf4868(*(long *)(unaff_x19 + 0x50),0);
                  if (DAT_076cd82b == '\0') {
                    thunk_FUN_032e1da0(PTR_DAT_07279c00);
                    DAT_076cd82b = '\x01';
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                     (lVar4 = FUN_06be6b04(*(long *)(unaff_x19 + 0x48),0), lVar4 != 0)) {
                    fVar11 = SQRT((fVar8 - fVar12) * (fVar8 - fVar12) +
                                  (fVar9 - fVar10) * (fVar9 - fVar10) +
                                  (fVar11 - fVar7) * (fVar11 - fVar7));
                    FUN_06bf4f28(fVar11 * *(float *)(unaff_x19 + 100),
                                 fVar11 * *(float *)(unaff_x19 + 0x68),
                                 fVar11 * *(float *)(unaff_x19 + 0x6c),lVar4,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


