/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$IsLegacyInputActionTriggered
ENTRY_POINT: 052b3130
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x052b3324) */

void Meta_XR_BuildingBlocks_ControllerButtonsMapper__IsLegacyInputActionTriggered
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  
  FUN_066d4960();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    uVar7 = FUN_066d4d38(*(long *)(unaff_x19 + 0x28),0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      uVar15 = param_3;
      uVar8 = FUN_066d4d38(*(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_066d4c40(*(long *)(unaff_x19 + 0x28),0);
        fVar3 = (float)FUN_031b3810(uVar7,0,param_3,uVar8,param_2,uVar15,0);
        fVar11 = *(float *)(unaff_x19 + 0x34);
        if (fVar11 <= fVar3) {
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            fVar4 = (float)FUN_066d4d38(*(long *)(unaff_x19 + 0x28),0);
            uVar7 = param_3;
            fVar3 = fVar11;
            lVar2 = FUN_066c67b0();
            if (lVar2 != 0) {
              fVar5 = (float)FUN_066d4d38(lVar2,0);
              uVar15 = uVar7;
              if (DAT_071babf7 == '\0') {
                FUN_02f07e70(PTR_DAT_06d03010);
                DAT_071babf7 = '\x01';
              }
              puVar1 = PTR_DAT_06d03010;
              fVar18 = (float)param_3;
              fVar19 = (float)uVar7;
              if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              fVar6 = SQRT((fVar18 * fVar18 + fVar4 * fVar4 + fVar11 * fVar11) *
                           (fVar19 * fVar19 + fVar5 * fVar5 + fVar3 * fVar3));
              fVar12 = 0.0;
              if (DAT_013f6a8c <= fVar6) {
                uVar8 = (ulong)(uint)(fVar18 * fVar19);
                fVar6 = (fVar18 * fVar19 + fVar4 * fVar5 + fVar11 * fVar3) / fVar6;
                uVar15 = 0xbf800000;
                if (fVar6 < -1.0) {
                  fVar6 = -1.0;
                }
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                dVar9 = acos((double)fVar6);
                fVar12 = (float)dVar9 * DAT_013f6f10;
              }
              uVar13 = (ulong)(uint)fVar12;
              if (fVar12 <= *(float *)(unaff_x19 + 0x38)) {
                return;
              }
              lVar2 = FUN_066c67b0();
              if (lVar2 != 0) {
                uVar7 = FUN_066d320c(lVar2,0);
                if (*(long *)(unaff_x19 + 0x28) != 0) {
                  uVar14 = uVar13;
                  uVar16 = uVar15;
                  uVar17 = uVar8;
                  uVar10 = FUN_066d320c(*(long *)(unaff_x19 + 0x28),0);
                  FUN_066bfb3c(0);
                  fVar3 = (float)NEON_fminnm(ABS((float)uVar8 * (float)uVar17 +
                                                 (float)uVar15 * (float)uVar16 +
                                                 (float)uVar7 * (float)uVar10 +
                                                 (float)uVar13 * (float)uVar14),0x3f800000);
                  if ((fVar3 <= DAT_013f6c48) &&
                     (fVar3 = acosf(fVar3), (fVar3 + fVar3) * DAT_013f6f10 != 0.0)) {
                    uVar10 = FUN_066bd84c(uVar7,uVar13,uVar15,uVar8,uVar10,uVar14,uVar16,uVar17,0);
                    uVar14 = uVar13;
                    uVar16 = uVar15;
                    uVar17 = uVar8;
                  }
                  fVar3 = (float)FUN_066bda8c(uVar10,uVar14,uVar16,uVar17,0);
                  uVar8 = (ulong)(uint)((float)uVar14 * DAT_013f6f10);
                  FUN_066be0b4(fVar3 * DAT_013f6f10,uVar8,(float)uVar16 * DAT_013f6f10,0);
                  lVar2 = FUN_066c67b0();
                  if (lVar2 != 0) {
                    FUN_066d4ab0(0,uVar8,0,lVar2,0);
                    return;
                  }
                }
              }
            }
          }
        }
        else {
          lVar2 = FUN_066c67b0();
          fVar3 = (float)param_3;
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            FUN_066d320c(*(long *)(unaff_x19 + 0x28),0);
            fVar4 = (float)FUN_066bda8c(0);
            fVar11 = fVar11 * DAT_013f6f10;
            FUN_066be0b4(fVar4 * DAT_013f6f10,fVar11,fVar3 * DAT_013f6f10,0);
            FUN_066bd9f4(0,fVar11 * DAT_013f6ba4,0,0);
            if (lVar2 != 0) {
              FUN_066d4ae0(lVar2,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


