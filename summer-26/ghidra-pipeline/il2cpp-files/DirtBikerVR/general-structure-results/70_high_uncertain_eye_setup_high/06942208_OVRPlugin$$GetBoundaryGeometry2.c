/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryGeometry2
ENTRY_POINT: 06942208
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetBoundaryGeometry2(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  
  fVar4 = (float)FUN_0692a968();
  if (*(float *)(unaff_x20 + 0x94) <= fVar4) {
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (((lVar2 == 0) || (*(long *)(lVar2 + 0xe8) == 0)) ||
       (lVar3 = *(long *)(*(long *)(lVar2 + 0xe8) + 0x48), lVar3 == 0)) goto LAB_069423e8;
    if (*(char *)(lVar3 + 0xe1) == '\0') {
      if (*(long *)(lVar2 + 0xd8) == 0) goto LAB_069423e8;
      fVar5 = (float)FUN_06960778(*(long *)(lVar2 + 0xd8),0);
      fVar8 = *(float *)(unaff_x19 + 0x70);
      fVar9 = *(float *)(unaff_x19 + 0x74);
      fVar4 = (float)FUN_0692a968(*(undefined4 *)(unaff_x19 + 0x3c),0);
      fVar6 = (float)FUN_0692a968(*(undefined4 *)(unaff_x19 + 0x40),0);
      if (fVar4 <= fVar6) {
        fVar4 = fVar6;
      }
      fVar4 = (fVar4 - (fVar8 + fVar5 * fVar5 * fVar9)) / *(float *)(unaff_x19 + 0x8c);
      if (*(float *)(unaff_x19 + 0x78) < fVar4) {
        fVar6 = unaff_s9 * 15.0;
        fVar5 = 1.0;
        if (fVar6 <= 1.0) {
          fVar5 = fVar6;
        }
        fVar8 = 0.0;
        if (0.0 <= fVar6) {
          fVar8 = fVar5;
        }
        fVar5 = fVar8 * fVar8 * 3.0 - fVar8 * fVar8 * (fVar8 + fVar8);
        fVar4 = (1.0 - fVar5) * *(float *)(unaff_x19 + 0x78) + fVar5 * fVar4;
      }
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
      uVar7 = *(undefined4 *)(unaff_x20 + 0x40);
      fVar6 = 0.0;
      if (0.0 <= fVar4) {
        fVar6 = fVar5;
      }
      *(float *)(unaff_x19 + 0x78) = fVar6;
      fVar4 = (float)FUN_0692a968(uVar7,0);
      if (*(float *)(unaff_x20 + 0x94) * DAT_015c57dc < fVar4) {
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_069423e8;
        fVar4 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
        if (3.0 < fVar4) {
          *(undefined4 *)(unaff_x19 + 0x78) = 0x3f800000;
        }
      }
    }
    else {
      fVar4 = cosf(*(float *)(lVar3 + 0xe4) * DAT_015c5bb8);
      *(float *)(unaff_x19 + 0x78) = ABS(fVar4);
    }
  }
  else {
    *(undefined4 *)(unaff_x19 + 0x78) = 0;
  }
  plVar1 = *(long **)(unaff_x19 + 0x60);
  *(float *)(unaff_x19 + 0x40) = *(float *)(unaff_x19 + 0x3c) * *(float *)(unaff_x19 + 0x9c);
  if (plVar1 != (long *)0x0) {
    fVar4 = (float)(**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    return fVar4 * *(float *)(unaff_x19 + 0x9c) + (1.0 - *(float *)(unaff_x19 + 0x9c)) * unaff_s8;
  }
LAB_069423e8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


