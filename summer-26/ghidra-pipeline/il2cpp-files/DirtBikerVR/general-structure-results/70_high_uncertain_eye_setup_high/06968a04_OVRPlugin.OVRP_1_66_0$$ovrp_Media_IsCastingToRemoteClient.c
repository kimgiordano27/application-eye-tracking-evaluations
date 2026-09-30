/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_Media_IsCastingToRemoteClient
ENTRY_POINT: 06968a04
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0__ovrp_Media_IsCastingToRemoteClient
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  float *pfVar4;
  long unaff_x19;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 unaff_s8;
  float unaff_s9;
  
  if (*(long *)(unaff_x19 + 0x160) == 0) {
LAB_06968ce4:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  fVar7 = *(float *)(unaff_x19 + 0x78);
  fVar5 = *(float *)(*(long *)(unaff_x19 + 0x160) + 0x2c);
  if ((fVar5 < fVar7) && (fVar7 = *(float *)(unaff_x19 + 0xc0), fVar7 <= fVar5)) {
    *(undefined1 *)(unaff_x19 + 0x112) = 1;
  }
  fVar5 = (float)FUN_06968ce8(unaff_s8);
  fVar10 = param_3 - *(float *)(unaff_x19 + 0xa4);
  fVar6 = (float)*(undefined8 *)(unaff_x19 + 0x9c);
  fVar8 = fVar5 - fVar6;
  fVar11 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x9c) >> 0x20);
  fVar9 = fVar7 - fVar11;
  if (*(float *)(unaff_x19 + 0xf0) <= fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10) {
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_06968ce4;
    fVar8 = *(float *)(*(long *)(unaff_x19 + 0x160) + 0x2c);
    if (fVar8 < unaff_s9) {
      if ((*(char *)(unaff_x19 + 0x112) != '\0') || (*(char *)(unaff_x19 + 0x111) != '\0')) {
        fVar8 = *(float *)(unaff_x19 + 0xa4) + *(float *)(unaff_x19 + 0x68) * DAT_015c56e8;
        *(ulong *)(unaff_x19 + 0x9c) =
             CONCAT44(fVar11 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x60) >> 0x20) * -0.001,
                      fVar6 + (float)*(undefined8 *)(unaff_x19 + 0x60) * -0.001);
        *(float *)(unaff_x19 + 0xa4) = fVar8;
      }
      if ((-1 < *(int *)(unaff_x19 + 0x8c)) && (*(char *)(unaff_x19 + 0xd8) != '\0')) {
        fVar9 = fVar7;
        if (*(char *)(unaff_x19 + 0x110) != '\0') {
          FUN_0696829c();
        }
        if ((*(long *)(unaff_x19 + 0x108) != 0) &&
           (plVar2 = *(long **)(*(long *)(unaff_x19 + 0x108) + 0x80), plVar2 != (long *)0x0)) {
          fVar10 = (float)(**(code **)(*plVar2 + 0x588))(plVar2,*(undefined8 *)(*plVar2 + 0x590));
          *(float *)(unaff_x19 + 0x48) = fVar10;
          *(float *)(unaff_x19 + 0x4c) = fVar9;
          *(float *)(unaff_x19 + 0x58) = fVar7;
          *(float *)(unaff_x19 + 0x5c) = param_3;
          *(float *)(unaff_x19 + 0x50) = fVar8;
          *(float *)(unaff_x19 + 0x54) = fVar5;
          if ((*(char *)(unaff_x19 + 0x112) == '\0') && (*(char *)(unaff_x19 + 0x111) == '\0')) {
            fVar6 = *(float *)(unaff_x19 + 0x9c);
            fVar11 = *(float *)(unaff_x19 + 0xa0);
            fVar12 = *(float *)(unaff_x19 + 0xa4);
          }
          else {
            if (((*(long *)(unaff_x19 + 0x108) == 0) ||
                (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x80), lVar3 == 0)) ||
               (lVar3 = FUN_07c98f88(lVar3,0), lVar3 == 0)) goto LAB_06968ce4;
            fVar6 = (float)FUN_07cac924(lVar3,0);
            *(undefined8 *)(unaff_x19 + 0xc0) = 0;
            *(undefined8 *)(unaff_x19 + 200) = 0;
            fVar10 = DAT_015c5c68;
            *(undefined4 *)(unaff_x19 + 0xd0) = 0;
            fVar6 = fVar5 - fVar6 * fVar10;
            fVar12 = param_3 - fVar8 * fVar10;
            param_3 = *(float *)(unaff_x19 + 0x5c);
            fVar11 = fVar7 - fVar9 * fVar10;
            fVar10 = *(float *)(unaff_x19 + 0x48);
            fVar9 = *(float *)(unaff_x19 + 0x4c);
            fVar8 = *(float *)(unaff_x19 + 0x50);
            fVar5 = *(float *)(unaff_x19 + 0x54);
            *(float *)(unaff_x19 + 0xa4) = fVar12;
            *(float *)(unaff_x19 + 0x9c) = fVar6;
            *(float *)(unaff_x19 + 0xa0) = fVar11;
            fVar7 = *(float *)(unaff_x19 + 0x58);
          }
          cVar1 = DAT_08974d8c;
          fVar7 = fVar7 - fVar11;
          param_3 = param_3 - fVar12;
          fVar5 = fVar5 - fVar6;
          *(float *)(unaff_x19 + 0x68) = param_3;
          *(float *)(unaff_x19 + 0x60) = fVar5;
          *(float *)(unaff_x19 + 100) = fVar7;
          if (cVar1 == '\0') {
            FUN_03a8a718(PTR_DAT_08486c60);
            DAT_08974d8c = '\x01';
          }
          fVar6 = fVar7 * fVar8 - param_3 * fVar9;
          fVar8 = param_3 * fVar10 - fVar5 * fVar8;
          fVar7 = fVar5 * fVar9 - fVar7 * fVar10;
          if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          fVar5 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
          if (fVar5 <= DAT_015c5ce0) {
            if (DAT_08974d8f == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d8f = '\x01';
            }
            pfVar4 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
            fVar6 = *pfVar4;
            fVar8 = pfVar4[1];
            fVar7 = pfVar4[2];
          }
          else {
            fVar6 = fVar6 / fVar5;
            fVar8 = fVar8 / fVar5;
            fVar7 = fVar7 / fVar5;
          }
          *(float *)(unaff_x19 + 0x6c) = fVar6;
          *(float *)(unaff_x19 + 0x70) = fVar8;
          *(float *)(unaff_x19 + 0x74) = fVar7;
          *(undefined4 *)(unaff_x19 + 0x88) = *(undefined4 *)(unaff_x19 + 0x78);
          FUN_06968e24();
          if (*(long *)(unaff_x19 + 0x160) != 0) {
            if (*(int *)(*(long *)(unaff_x19 + 0x160) + 0x30) <= *(int *)(unaff_x19 + 0x148) + 2) {
              FUN_0696829c();
            }
            *(undefined2 *)(unaff_x19 + 0x110) = 0;
            *(undefined1 *)(unaff_x19 + 0x112) = 0;
            return;
          }
        }
        goto LAB_06968ce4;
      }
    }
  }
  return;
}


