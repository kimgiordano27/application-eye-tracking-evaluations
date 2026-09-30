/*
FUNCTION_NAME: OVRPlugin.OVRP_1_48_0$$ovrp_SetExternalCameraProperties
ENTRY_POINT: 069743cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_48_0__ovrp_SetExternalCameraProperties(uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x19;
  int iVar8;
  long *plVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 unaff_s8;
  float fVar14;
  float fVar15;
  
  FUN_07ca8818(0);
                    /* try { // try from 069743e8 to 06a74487 has its CatchHandler @ 069743e8
                       catch() { ... } // from try @ 069743e8 with catch @ 069743e8
                       catch() { ... } // from try @ 069744b0 with catch @ 069743e8
                       catch() { ... } // from try @ 06974544 with catch @ 069743e8
                       catch() { ... } // from try @ 0697458c with catch @ 069743e8 */
  uVar10 = FUN_07c8cea8(unaff_s8,unaff_x19 + 0xd8,0);
  lVar7 = *(long *)(unaff_x19 + 200);
  *(undefined4 *)(unaff_x19 + 0xd0) = uVar10;
  puVar6 = PTR_DAT_084b7418;
  fVar5 = DAT_015c5d58;
  fVar4 = DAT_015c5c9c;
  fVar3 = DAT_015c5b8c;
  fVar2 = DAT_015c5b5c;
  fVar1 = DAT_015c564c;
  if (lVar7 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar8) {
        return;
      }
      lVar7 = FUN_04de82e0(lVar7,iVar8,*(undefined8 *)puVar6);
      if ((lVar7 == 0) || (plVar9 = *(long **)(lVar7 + 0x18), plVar9 == (long *)0x0)) break;
      (**(code **)(*plVar9 + 0x1a8))(0,plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
      (**(code **)(*plVar9 + 0x188))(0,plVar9,*(undefined8 *)(*plVar9 + 400));
      if (*(char *)(lVar7 + 0x12) != '\0' && ((param_1 ^ 0xffffffff) & 1) == 0) {
        (**(code **)(*plVar9 + 0x1a8))
                  (*(undefined4 *)(unaff_x19 + 0xb4),plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
      }
      fVar11 = (float)FUN_06926538();
      if (((fVar11 < fVar1) && (fVar11 = *(float *)(unaff_x19 + 0xdc), fVar2 < fVar11)) ||
         ((fVar11 = (float)FUN_06926538(), fVar4 < fVar11 &&
          (fVar11 = *(float *)(unaff_x19 + 0xdc), fVar11 < fVar3)))) {
        (**(code **)(*plVar9 + 0x1a8))
                  (*(float *)(unaff_x19 + 0xb4) * ABS(fVar11),plVar9,
                   *(undefined8 *)(*plVar9 + 0x1b0));
      }
      if ((((*(char *)(lVar7 + 0x10) != '\0') && (fVar11 = (float)FUN_06926538(), -0.5 <= fVar11))
          && (fVar11 = *(float *)(unaff_x19 + 0xdc), fVar2 < fVar11)) ||
         ((fVar11 = (float)FUN_06926538(), fVar11 <= 0.5 &&
          (fVar11 = *(float *)(unaff_x19 + 0xdc), fVar11 < fVar3)))) {
        (**(code **)(*plVar9 + 0x188))
                  (*(float *)(unaff_x19 + 0xb8) * fVar11,plVar9,*(undefined8 *)(*plVar9 + 400));
      }
      if (*(char *)(lVar7 + 0x11) != '\0') {
        fVar15 = *(float *)(unaff_x19 + 0xbc);
        fVar14 = *(float *)(unaff_x19 + 0xc0);
        fVar12 = (float)FUN_06926524();
        fVar12 = fVar12 * fVar5;
        fVar11 = 1.0;
        if (fVar12 <= 1.0) {
          fVar11 = fVar12;
        }
        fVar13 = 0.0;
        if (0.0 <= fVar12) {
          fVar13 = fVar11;
        }
        (**(code **)(*plVar9 + 0x1f8))
                  (*(float *)(unaff_x19 + 0xd0) * (fVar15 + (fVar14 - fVar15) * fVar13),plVar9,
                   *(undefined8 *)(*plVar9 + 0x200));
      }
      lVar7 = *(long *)(unaff_x19 + 200);
      iVar8 = iVar8 + 1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


