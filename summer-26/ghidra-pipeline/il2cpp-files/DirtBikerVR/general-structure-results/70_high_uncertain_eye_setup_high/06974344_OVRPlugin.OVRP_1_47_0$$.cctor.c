/*
FUNCTION_NAME: OVRPlugin.OVRP_1_47_0$$.cctor
ENTRY_POINT: 06974344
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


void OVRPlugin_OVRP_1_47_0___cctor(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 *puVar10;
  int iVar11;
  long unaff_x21;
  undefined8 *puVar12;
  long unaff_x22;
  long *plVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  
  puVar12 = *(undefined8 **)(unaff_x21 + 0xe18);
  puVar10 = *(undefined8 **)(unaff_x20 + 0xe20);
  if ((*(byte *)(unaff_x22 + 0x116) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b7410);
    FUN_03a8a718(PTR_DAT_084b7418);
    FUN_03a8a718(PTR_DAT_08487e20);
    FUN_03a8a718(PTR_DAT_08487e18);
    *(undefined1 *)(unaff_x22 + 0x116) = 1;
  }
  FUN_0692661c(param_1,0);
  uVar14 = thunk_FUN_07d18368(*puVar12,0);
  uVar8 = *puVar10;
  *(undefined4 *)(param_1 + 0xd4) = uVar14;
  uVar14 = thunk_FUN_07d18368(uVar8,0);
  *(undefined4 *)(param_1 + 0xdc) = uVar14;
  uVar7 = FUN_07d18c18(0x20,0);
  uVar18 = *(undefined4 *)(param_1 + 0xd0);
  uVar19 = *(undefined4 *)(param_1 + 0xd4);
  uVar14 = FUN_07ca8818(0);
  uVar14 = FUN_07c8cea8(uVar18,uVar19,DAT_015c5840,0x7f800000,uVar14,param_1 + 0xd8,0);
  lVar9 = *(long *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xd0) = uVar14;
  puVar6 = PTR_DAT_084b7418;
  fVar5 = DAT_015c5d58;
  fVar4 = DAT_015c5c9c;
  fVar3 = DAT_015c5b8c;
  fVar2 = DAT_015c5b5c;
  fVar1 = DAT_015c564c;
  if (lVar9 != 0) {
    iVar11 = 0;
    do {
      if (*(int *)(lVar9 + 0x18) <= iVar11) {
        return;
      }
      lVar9 = FUN_04de82e0(lVar9,iVar11,*(undefined8 *)puVar6);
      if ((lVar9 == 0) || (plVar13 = *(long **)(lVar9 + 0x18), plVar13 == (long *)0x0)) break;
      (**(code **)(*plVar13 + 0x1a8))(0,plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
      (**(code **)(*plVar13 + 0x188))(0,plVar13,*(undefined8 *)(*plVar13 + 400));
      if (*(char *)(lVar9 + 0x12) != '\0' && ((uVar7 ^ 0xffffffff) & 1) == 0) {
        (**(code **)(*plVar13 + 0x1a8))
                  (*(undefined4 *)(param_1 + 0xb4),plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
      }
      fVar15 = (float)FUN_06926538(param_1,0);
      if (((fVar15 < fVar1) && (fVar15 = *(float *)(param_1 + 0xdc), fVar2 < fVar15)) ||
         ((fVar15 = (float)FUN_06926538(param_1,0), fVar4 < fVar15 &&
          (fVar15 = *(float *)(param_1 + 0xdc), fVar15 < fVar3)))) {
        (**(code **)(*plVar13 + 0x1a8))
                  (*(float *)(param_1 + 0xb4) * ABS(fVar15),plVar13,
                   *(undefined8 *)(*plVar13 + 0x1b0));
      }
      if ((((*(char *)(lVar9 + 0x10) != '\0') &&
           (fVar15 = (float)FUN_06926538(param_1,0), -0.5 <= fVar15)) &&
          (fVar15 = *(float *)(param_1 + 0xdc), fVar2 < fVar15)) ||
         ((fVar15 = (float)FUN_06926538(param_1,0), fVar15 <= 0.5 &&
          (fVar15 = *(float *)(param_1 + 0xdc), fVar15 < fVar3)))) {
        (**(code **)(*plVar13 + 0x188))
                  (*(float *)(param_1 + 0xb8) * fVar15,plVar13,*(undefined8 *)(*plVar13 + 400));
      }
      if (*(char *)(lVar9 + 0x11) != '\0') {
        fVar21 = *(float *)(param_1 + 0xbc);
        fVar20 = *(float *)(param_1 + 0xc0);
        fVar16 = (float)FUN_06926524(param_1,0);
        fVar16 = fVar16 * fVar5;
        fVar15 = 1.0;
        if (fVar16 <= 1.0) {
          fVar15 = fVar16;
        }
        fVar17 = 0.0;
        if (0.0 <= fVar16) {
          fVar17 = fVar15;
        }
        (**(code **)(*plVar13 + 0x1f8))
                  (*(float *)(param_1 + 0xd0) * (fVar21 + (fVar20 - fVar21) * fVar17),plVar13,
                   *(undefined8 *)(*plVar13 + 0x200));
      }
      lVar9 = *(long *)(param_1 + 200);
      iVar11 = iVar11 + 1;
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


