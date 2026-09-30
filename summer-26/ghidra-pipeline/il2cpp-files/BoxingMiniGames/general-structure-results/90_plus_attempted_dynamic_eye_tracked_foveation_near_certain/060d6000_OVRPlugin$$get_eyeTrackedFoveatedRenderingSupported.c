/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 060d6000
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_0367cd30();
      goto LAB_060d602c;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_6);
  puVar5 = (undefined8 *)(param_1 + (long)(*piVar2 + 1) * 0x10 + 0x138);
LAB_060d602c:
  (*(code *)*puVar5)();
  if ((unaff_x20 != 0) && (FUN_060d4eec(), unaff_x21 != 0)) {
    FUN_071d043c();
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      uVar6 = FUN_0718a844(*(long *)(unaff_x19 + 0x48),0);
      if ((uVar6 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        fVar10 = (float)FUN_071d0360(*(long *)(unaff_x19 + 0x50),0);
        fVar14 = param_3;
        fVar12 = param_4;
        lVar7 = FUN_071bd0d0();
        if (lVar7 != 0) {
          fVar11 = (float)FUN_071d0360(lVar7,0);
          fVar15 = fVar12;
          if (DAT_07ed76b7 == '\0') {
            FUN_03642964(PTR_DAT_079f4df0);
            DAT_07ed76b7 = '\x01';
          }
          puVar4 = PTR_DAT_079f4df0;
          fVar10 = fVar10 - fVar11;
          param_3 = param_3 - fVar14;
          param_4 = param_4 - fVar12;
          if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          puVar3 = PTR_DAT_079f4dc0;
          fVar12 = SQRT(param_4 * param_4 + fVar10 * fVar10 + param_3 * param_3);
          fVar14 = DAT_01651354;
          if (fVar12 <= DAT_01651354) {
            if (DAT_07ed76b5 == '\0') {
              FUN_03642964(PTR_DAT_079f4dc0);
              DAT_07ed76b5 = '\x01';
            }
            pfVar9 = *(float **)(*(long *)puVar3 + 0xb8);
            fVar10 = *pfVar9;
            param_3 = pfVar9[1];
            param_4 = pfVar9[2];
          }
          else {
            fVar10 = fVar10 / fVar12;
            param_3 = param_3 / fVar12;
            param_4 = param_4 / fVar12;
          }
          lVar7 = FUN_071bd0d0();
          lVar8 = FUN_071bd0d0();
          if (lVar8 != 0) {
            fVar12 = (float)FUN_071d0360(lVar8,0);
            if (DAT_07ed76b6 == '\0') {
              FUN_03642964(PTR_DAT_079f4dc0);
              DAT_07ed76b6 = '\x01';
            }
            if (lVar7 != 0) {
              fVar14 = fVar14 - param_3;
              fVar15 = fVar15 - param_4;
              lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
              thunk_FUN_071d1b70(fVar12 - fVar10,fVar14,fVar15,*(undefined4 *)(lVar8 + 0x18),
                                 *(undefined4 *)(lVar8 + 0x1c),*(undefined4 *)(lVar8 + 0x20),lVar7,0
                                );
              if (*(char *)(unaff_x19 + 0x60) == '\0') {
                return;
              }
              lVar7 = FUN_071bd0d0();
              if (lVar7 != 0) {
                fVar12 = (float)FUN_071d0360(lVar7,0);
                if (*(long *)(unaff_x19 + 0x50) != 0) {
                  fVar10 = fVar14;
                  fVar11 = fVar15;
                  fVar13 = (float)FUN_071d0360(*(long *)(unaff_x19 + 0x50),0);
                  if (DAT_07ed78be == '\0') {
                    FUN_03642964(PTR_DAT_079f4df0);
                    DAT_07ed78be = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                  }
                  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                     (lVar7 = FUN_071bd0d0(*(long *)(unaff_x19 + 0x48),0), lVar7 != 0)) {
                    fVar14 = SQRT((fVar15 - fVar11) * (fVar15 - fVar11) +
                                  (fVar12 - fVar13) * (fVar12 - fVar13) +
                                  (fVar14 - fVar10) * (fVar14 - fVar10));
                    FUN_071d0c1c(fVar14 * *(float *)(unaff_x19 + 100),
                                 fVar14 * *(float *)(unaff_x19 + 0x68),
                                 fVar14 * *(float *)(unaff_x19 + 0x6c),lVar7,0);
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
  FUN_03642c18();
}


