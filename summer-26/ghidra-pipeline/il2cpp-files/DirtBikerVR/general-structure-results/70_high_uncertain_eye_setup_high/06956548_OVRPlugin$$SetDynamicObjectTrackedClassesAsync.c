/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClassesAsync
ENTRY_POINT: 06956548
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetDynamicObjectTrackedClassesAsync(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  int iVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = FUN_06936c7c();
  if ((uVar3 & 1) == 0) {
    return 1.0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    fVar8 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
    if (fVar8 < *(float *)(unaff_x19 + 0x34)) {
      return 1.0;
    }
    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xc0), lVar4 != 0)) {
      uVar3 = FUN_06936c7c(lVar4,0);
      if ((uVar3 & 1) == 0) {
        return 1.0;
      }
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (((lVar4 != 0) && (*(long *)(lVar4 + 0xe8) != 0)) &&
         (lVar5 = *(long *)(*(long *)(lVar4 + 0xe8) + 0x40), lVar5 != 0)) {
        if (*(char *)(lVar5 + 0xe0) != '\0') {
          return 1.0;
        }
        if (*(long *)(lVar4 + 0xd8) != 0) {
          fVar8 = (float)FUN_06960818(*(long *)(lVar4 + 0xd8),0);
          puVar1 = PTR_DAT_084b5d60;
          if (DAT_015c5bc8 < fVar8) {
            return 1.0;
          }
          lVar4 = *(long *)(unaff_x19 + 0x10);
          if (lVar4 != 0) {
            iVar6 = 0;
            do {
              if (*(long *)(lVar4 + 0xe8) == 0) break;
              iVar2 = FUN_06936294(*(long *)(lVar4 + 0xe8),0);
              if (iVar2 <= iVar6) {
                return 1.0;
              }
              if (((*(long *)(unaff_x19 + 0x10) == 0) ||
                  (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar4 == 0)) ||
                 ((lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0 ||
                  ((lVar4 = FUN_04de82e0(lVar4,iVar6,*(undefined8 *)puVar1), lVar4 == 0 ||
                   (plVar7 = *(long **)(lVar4 + 0x80), plVar7 == (long *)0x0)))))) break;
              uVar3 = (**(code **)(*plVar7 + 0x2e8))(plVar7,*(undefined8 *)(*plVar7 + 0x2f0));
              if (((uVar3 & 1) != 0) &&
                 (fVar8 = (float)(**(code **)(*plVar7 + 0x4b8))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x4c0)),
                 *(float *)(unaff_x19 + 0x3c) <= fVar8)) {
                *(undefined1 *)(unaff_x19 + 0x30) = 1;
                if (*(long *)(unaff_x19 + 0x28) != 0) {
                  FUN_07cb2910(*(long *)(unaff_x19 + 0x28),0);
                  fVar9 = (float)(**(code **)(*plVar7 + 0x4b8))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x4c0));
                  fVar9 = fVar9 - *(float *)(unaff_x19 + 0x3c);
                  fVar8 = 1.0;
                  if (fVar9 <= 1.0) {
                    fVar8 = fVar9;
                  }
                  fVar10 = 0.0;
                  if (0.0 <= fVar9) {
                    fVar10 = fVar8;
                  }
                  return fVar10 / *(float *)(unaff_x19 + 0x38);
                }
                break;
              }
              lVar4 = *(long *)(unaff_x19 + 0x10);
              iVar6 = iVar6 + 1;
            } while (lVar4 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


