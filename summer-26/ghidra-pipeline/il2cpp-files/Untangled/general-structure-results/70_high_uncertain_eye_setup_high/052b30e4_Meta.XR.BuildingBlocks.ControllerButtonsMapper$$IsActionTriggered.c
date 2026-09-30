/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$IsActionTriggered
ENTRY_POINT: 052b30e4
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x052b3324) */

void Meta_XR_BuildingBlocks_ControllerButtonsMapper__IsActionTriggered
               (undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  ulong uVar7;
  double dVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (param_4 != 0) {
    uVar6 = FUN_066d48c0(param_4,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_066d48c0(*(long *)(unaff_x19 + 0x28),0);
      fVar18 = *(float *)(unaff_x19 + 0x30);
      lVar2 = FUN_066c67b0();
      if (lVar2 != 0) {
        uVar12 = (ulong)(uint)(param_2 - fVar18);
        FUN_066d4960(uVar6,lVar2,0);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          uVar6 = FUN_066d4d38(*(long *)(unaff_x19 + 0x28),0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            uVar14 = param_3;
            uVar7 = FUN_066d4d38(*(long *)(unaff_x19 + 0x28),0);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              FUN_066d4c40(*(long *)(unaff_x19 + 0x28),0);
              fVar18 = (float)FUN_031b3810(uVar6,0,param_3,uVar7,uVar12,uVar14,0);
              fVar10 = *(float *)(unaff_x19 + 0x34);
              if (fVar10 <= fVar18) {
                if (*(long *)(unaff_x19 + 0x28) != 0) {
                  fVar3 = (float)FUN_066d4d38(*(long *)(unaff_x19 + 0x28),0);
                  uVar6 = param_3;
                  fVar18 = fVar10;
                  lVar2 = FUN_066c67b0();
                  if (lVar2 != 0) {
                    fVar4 = (float)FUN_066d4d38(lVar2,0);
                    uVar14 = uVar6;
                    if (DAT_071babf7 == '\0') {
                      FUN_02f07e70(PTR_DAT_06d03010);
                      DAT_071babf7 = '\x01';
                    }
                    puVar1 = PTR_DAT_06d03010;
                    fVar17 = (float)param_3;
                    fVar19 = (float)uVar6;
                    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    fVar5 = SQRT((fVar17 * fVar17 + fVar3 * fVar3 + fVar10 * fVar10) *
                                 (fVar19 * fVar19 + fVar4 * fVar4 + fVar18 * fVar18));
                    fVar11 = 0.0;
                    if (DAT_013f6a8c <= fVar5) {
                      uVar7 = (ulong)(uint)(fVar17 * fVar19);
                      fVar5 = (fVar17 * fVar19 + fVar3 * fVar4 + fVar10 * fVar18) / fVar5;
                      uVar14 = 0xbf800000;
                      if (fVar5 < -1.0) {
                        fVar5 = -1.0;
                      }
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_02f12b58();
                      }
                      dVar8 = acos((double)fVar5);
                      fVar11 = (float)dVar8 * DAT_013f6f10;
                    }
                    uVar12 = (ulong)(uint)fVar11;
                    if (fVar11 <= *(float *)(unaff_x19 + 0x38)) {
                      return;
                    }
                    lVar2 = FUN_066c67b0();
                    if (lVar2 != 0) {
                      uVar6 = FUN_066d320c(lVar2,0);
                      if (*(long *)(unaff_x19 + 0x28) != 0) {
                        uVar13 = uVar12;
                        uVar15 = uVar14;
                        uVar16 = uVar7;
                        uVar9 = FUN_066d320c(*(long *)(unaff_x19 + 0x28),0);
                        FUN_066bfb3c(0);
                        fVar18 = (float)NEON_fminnm(ABS((float)uVar7 * (float)uVar16 +
                                                        (float)uVar14 * (float)uVar15 +
                                                        (float)uVar6 * (float)uVar9 +
                                                        (float)uVar12 * (float)uVar13),0x3f800000);
                        if ((fVar18 <= DAT_013f6c48) &&
                           (fVar18 = acosf(fVar18), (fVar18 + fVar18) * DAT_013f6f10 != 0.0)) {
                          uVar9 = FUN_066bd84c(uVar6,uVar12,uVar14,uVar7,uVar9,uVar13,uVar15,uVar16,
                                               0);
                          uVar13 = uVar12;
                          uVar15 = uVar14;
                          uVar16 = uVar7;
                        }
                        fVar18 = (float)FUN_066bda8c(uVar9,uVar13,uVar15,uVar16,0);
                        uVar12 = (ulong)(uint)((float)uVar13 * DAT_013f6f10);
                        FUN_066be0b4(fVar18 * DAT_013f6f10,uVar12,(float)uVar15 * DAT_013f6f10,0);
                        lVar2 = FUN_066c67b0();
                        if (lVar2 != 0) {
                          FUN_066d4ab0(0,uVar12,0,lVar2,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
              else {
                lVar2 = FUN_066c67b0();
                fVar18 = (float)param_3;
                if (*(long *)(unaff_x19 + 0x28) != 0) {
                  FUN_066d320c(*(long *)(unaff_x19 + 0x28),0);
                  fVar3 = (float)FUN_066bda8c(0);
                  fVar10 = fVar10 * DAT_013f6f10;
                  FUN_066be0b4(fVar3 * DAT_013f6f10,fVar10,fVar18 * DAT_013f6f10,0);
                  FUN_066bd9f4(0,fVar10 * DAT_013f6ba4,0,0);
                  if (lVar2 != 0) {
                    FUN_066d4ae0(lVar2,0);
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
  FUN_02f080c0();
}


