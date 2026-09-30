/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 07477c88
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_foveatedRenderingLevel(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FUN_08a5d494();
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    uVar3 = FUN_08a20088(*(long *)(unaff_x19 + 0x48),0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      fVar7 = (float)FUN_08a5d3f4(*(long *)(unaff_x19 + 0x50),0);
      fVar11 = param_2;
      fVar9 = param_3;
      lVar4 = FUN_08a4d98c();
      if (lVar4 != 0) {
        fVar8 = (float)FUN_08a5d3f4(lVar4,0);
        if (DAT_0983637d == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a1008);
          DAT_0983637d = '\x01';
        }
        puVar2 = PTR_DAT_091a1008;
        fVar7 = fVar7 - fVar8;
        param_2 = param_2 - fVar11;
        param_3 = param_3 - fVar9;
        if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        puVar1 = PTR_DAT_091a0f88;
        fVar8 = param_3 * param_3;
        fVar9 = SQRT(fVar8 + fVar7 * fVar7 + param_2 * param_2);
        fVar11 = DAT_0191476c;
        if (fVar9 <= DAT_0191476c) {
          if (DAT_098362c7 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091a0f88);
            DAT_098362c7 = '\x01';
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
        lVar4 = FUN_08a4d98c();
        lVar5 = FUN_08a4d98c();
        if (lVar5 != 0) {
          fVar9 = (float)FUN_08a5d3f4(lVar5,0);
          if (DAT_09836325 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091a0f88);
            DAT_09836325 = '\x01';
          }
          if (lVar4 != 0) {
            fVar11 = fVar11 - param_2;
            fVar8 = fVar8 - param_3;
            lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
            thunk_FUN_08a5ecd4(fVar9 - fVar7,fVar11,fVar8,*(undefined4 *)(lVar5 + 0x18),
                               *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),lVar4,0);
            if (*(char *)(unaff_x19 + 0x60) == '\0') {
              return;
            }
            lVar4 = FUN_08a4d98c();
            if (lVar4 != 0) {
              fVar9 = (float)FUN_08a5d3f4(lVar4,0);
              if (*(long *)(unaff_x19 + 0x50) != 0) {
                fVar7 = fVar11;
                fVar12 = fVar8;
                fVar10 = (float)FUN_08a5d3f4(*(long *)(unaff_x19 + 0x50),0);
                if (DAT_09836324 == '\0') {
                  FUN_03d2d2b0(PTR_DAT_091a1008);
                  DAT_09836324 = '\x01';
                }
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_03db619c();
                }
                if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                   (lVar4 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x48),0), lVar4 != 0)) {
                  fVar11 = SQRT((fVar8 - fVar12) * (fVar8 - fVar12) +
                                (fVar9 - fVar10) * (fVar9 - fVar10) +
                                (fVar11 - fVar7) * (fVar11 - fVar7));
                  FUN_08a5debc(fVar11 * *(float *)(unaff_x19 + 100),
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
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


