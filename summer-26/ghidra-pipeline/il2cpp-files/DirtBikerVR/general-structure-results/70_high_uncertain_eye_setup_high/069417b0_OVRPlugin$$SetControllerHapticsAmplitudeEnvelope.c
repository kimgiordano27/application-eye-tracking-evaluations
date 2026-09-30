/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsAmplitudeEnvelope
ENTRY_POINT: 069417b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerHapticsAmplitudeEnvelope(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *unaff_x19;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar1 = PTR_DAT_08486738;
  if (((param_1 != 0) && (lVar5 = *(long *)(param_1 + 0xd0), lVar5 != 0)) &&
     (*(long *)(lVar5 + 0x18) != 0)) {
    if (*(char *)(*(long *)(lVar5 + 0x18) + 0x18) == '\0') {
      return;
    }
    lVar5 = *(long *)(lVar5 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = FUN_07c9e200(lVar5,0,0);
    if ((uVar3 & 1) != 0) {
LAB_06941a64:
      puVar7 = (undefined8 *)(*unaff_x19 + 0x328);
LAB_06941a70:
                    /* WARNING: Could not recover jumptable at 0x06941a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar7)();
      return;
    }
    if (lVar5 != 0) {
      uVar9 = *(undefined8 *)(lVar5 + 0x88);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar3 = FUN_07c9e200(uVar9,0,0);
      if (((uVar3 & 1) != 0) || (*(char *)(lVar5 + 0x81) == '\0')) goto LAB_06941a64;
      if (unaff_x19[6] != 0) {
        thunk_FUN_07c3556c(unaff_x19[6],*(undefined8 *)(lVar5 + 0x88),0);
        puVar1 = PTR_DAT_084b5d60;
        fVar12 = DAT_015c5bbc;
        lVar6 = unaff_x19[2];
        if (lVar6 != 0) {
          fVar14 = 0.0;
          fVar13 = 0.0;
          iVar8 = 0;
          do {
            if (*(long *)(lVar6 + 0xe8) == 0) break;
            iVar2 = FUN_06936294();
            lVar6 = unaff_x19[2];
            if (iVar2 <= iVar8) {
              if (lVar6 == 0) break;
              fVar10 = *(float *)(lVar6 + 0x13c) * 20.0;
              fVar12 = 1.0;
              if (fVar10 <= 1.0) {
                fVar12 = fVar10;
              }
              fVar15 = 0.0;
              if (0.0 <= fVar10) {
                fVar15 = fVar12;
              }
              fVar12 = *(float *)((long)unaff_x19 + 0x3c) +
                       (fVar14 - *(float *)((long)unaff_x19 + 0x3c)) * fVar15;
              (**(code **)(*unaff_x19 + 0x318))(fVar12);
              *(float *)((long)unaff_x19 + 0x3c) = fVar12;
              if (unaff_x19[2] == 0) break;
              fVar10 = *(float *)(unaff_x19[2] + 0x13c) * 20.0;
              fVar14 = 1.0;
              if (fVar10 <= 1.0) {
                fVar14 = fVar10;
              }
              fVar15 = 0.0;
              if (0.0 <= fVar10) {
                fVar15 = fVar14;
              }
              fVar14 = *(float *)(unaff_x19 + 7) + (fVar13 - *(float *)(unaff_x19 + 7)) * fVar15;
              (**(code **)(*unaff_x19 + 0x308))(fVar14);
              *(float *)(unaff_x19 + 7) = fVar14;
              if (fVar12 < DAT_015c5994) {
                if (unaff_x19[6] == 0) break;
                uVar3 = FUN_07c35ac4(unaff_x19[6],0);
                if ((uVar3 & 1) != 0) goto LAB_06941a64;
              }
              if (unaff_x19[6] != 0) {
                uVar3 = FUN_07c35ac4(unaff_x19[6],0);
                if ((uVar3 & 1) != 0) {
                  return;
                }
                puVar7 = (undefined8 *)(*unaff_x19 + 0x2e8);
                goto LAB_06941a70;
              }
              break;
            }
            if (((lVar6 == 0) || (*(long *)(lVar6 + 0xe8) == 0)) ||
               ((lVar6 = *(long *)(*(long *)(lVar6 + 0xe8) + 0x58), lVar6 == 0 ||
                ((lVar6 = FUN_04de82e0(lVar6,iVar8,*(undefined8 *)puVar1), lVar6 == 0 ||
                 (plVar4 = *(long **)(lVar6 + 0x80), plVar4 == (long *)0x0)))))) break;
            uVar3 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
            if ((uVar3 & 1) != 0) {
              if (*(char *)(lVar5 + 0x80) == '\0') {
                lVar6 = unaff_x19[2];
                if (lVar6 == 0) break;
LAB_06941920:
                fVar15 = 1.0;
              }
              else {
                plVar4 = *(long **)(lVar6 + 0x80);
                if (plVar4 == (long *)0x0) break;
                fVar10 = (float)(**(code **)(*plVar4 + 0x528))
                                          (plVar4,*(undefined8 *)(*plVar4 + 0x530));
                lVar6 = unaff_x19[2];
                if (lVar6 == 0) break;
                fVar10 = fVar10 / *(float *)(lVar6 + 0x10c);
                fVar15 = 0.0;
                if ((0.0 <= fVar10) && (fVar15 = fVar10, 1.0 < fVar10)) goto LAB_06941920;
              }
              fVar11 = (float)FUN_06926524(lVar6,0);
              fVar11 = fVar11 * fVar12;
              fVar10 = 0.0;
              if ((0.0 <= fVar11) && (fVar10 = fVar11, 1.0 < fVar11)) {
                fVar10 = 1.0;
              }
              fVar11 = fVar10 * fVar15 * *(float *)(lVar5 + 0x94);
              fVar15 = 0.0;
              if ((0.0 <= fVar11) && (fVar15 = fVar11, 1.0 < fVar11)) {
                fVar15 = 1.0;
              }
              if (fVar14 <= fVar15) {
                fVar14 = fVar15;
              }
              fVar10 = fVar10 + *(float *)(lVar5 + 0x90) * 0.5;
              if (fVar13 <= fVar10) {
                fVar13 = fVar10;
              }
            }
            lVar6 = unaff_x19[2];
            iVar8 = iVar8 + 1;
          } while (lVar6 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


