/*
FUNCTION_NAME: OVRManager$$get_suggestedGpuPerfLevel
ENTRY_POINT: 05ff1d9c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_17;weak_xr_or_state_hits_12;validity_or_gating_hits_12;strong_foveation_hits_5;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_suggestedGpuPerfLevel(long param_1)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  long *unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_s8;
  float unaff_s9;
  float fVar19;
  float fVar20;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar21;
  float unaff_s14;
  float unaff_s15;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x420));
  *(undefined1 *)(unaff_x22 + 0x545) = 1;
  fStack0000000000000044 = fStack0000000000000044 - unaff_s8;
  fStack0000000000000048 = fStack0000000000000048 - unaff_s10;
  fVar16 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8);
  fVar7 = unaff_s14 * unaff_s14 + unaff_s9 * unaff_s9 + unaff_s15 * unaff_s15;
  fStack000000000000004c = fStack000000000000004c - unaff_s11;
  if (fVar16 <= fVar7) {
    fVar13 = fStack000000000000004c * unaff_s14 +
             fStack0000000000000044 * unaff_s9 + fStack0000000000000048 * unaff_s15;
    fVar16 = (unaff_s9 * fVar13) / fVar7;
    fStack0000000000000044 = fStack0000000000000044 - fVar16;
    fStack0000000000000048 = fStack0000000000000048 - (unaff_s15 * fVar13) / fVar7;
    fStack000000000000004c = fStack000000000000004c - (unaff_s14 * fVar13) / fVar7;
  }
  if (DAT_07a3f7a9 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3f7a9 = '\x01';
  }
  puVar2 = PTR_DAT_0759b370;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar19 = *unaff_x21;
  fVar14 = unaff_x21[1];
  fStack0000000000000024 = unaff_x21[2];
  fVar7 = fVar14;
  fStack000000000000003c = (float)FUN_06e6836c();
  fVar8 = *unaff_x21;
  fVar17 = unaff_x21[1];
  fStack0000000000000034 = unaff_x21[2];
  fVar13 = fVar7;
  fStack000000000000001c = fVar16;
  fVar9 = (float)FUN_06e6836c();
  fVar12 = fVar13;
  fVar21 = fVar16;
  lVar3 = FUN_06e5502c();
  if (lVar3 != 0) {
    fVar10 = (float)FUN_06e6e3cc(lVar3,0);
    lVar3 = FUN_06e5502c();
    if (lVar3 != 0) {
      FUN_06e6e3cc(lVar3,0);
      lVar3 = FUN_06e5502c();
      if (lVar3 != 0) {
        FUN_06e6e3cc(lVar3,0);
        fVar1 = DAT_014ba9b8;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fStack0000000000000040 = 0.0;
          fVar16 = fStack0000000000000034 - fVar16;
          fVar11 = unaff_s12 + -0.5;
          fStack0000000000000034 = 1.0 / fVar12;
          fVar15 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                        fStack0000000000000048 * fStack0000000000000048 +
                        fStack000000000000004c * fStack000000000000004c);
          fStack000000000000003c = fVar19 + fVar11 * fVar15 * fStack000000000000003c;
          uVar6 = 0;
          lVar3 = 0x38;
          fVar19 = fStack0000000000000024 + fVar11 * fVar15 * fStack000000000000001c;
          fVar12 = fVar8 - fVar9;
          fVar13 = fVar17 - fVar13;
          do {
            fVar9 = unaff_x21[1];
            fVar17 = unaff_x21[2];
            fVar8 = (float)FUN_05ff240c(*unaff_x21,fVar9,fVar17,fStack000000000000003c,
                                        fVar14 + fVar11 * fVar15 * fVar7,fVar19);
            lVar4 = *unaff_x20;
            if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_05ff226c;
            lVar4 = lVar4 + lVar3;
            *(float *)(lVar4 + -0x10) = (1.0 / fVar21) * fVar17;
            *(float *)(lVar4 + -0x18) = (1.0 / fVar10) * fVar8;
            *(float *)(lVar4 + -0x14) = fStack0000000000000034 * fVar9;
            lVar4 = *unaff_x20;
            if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
            if (DAT_07a3ca81 == '\0') {
              FUN_031f20f4(puVar2);
              DAT_07a3ca81 = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            fVar12 = fVar8 - fVar12;
            fVar13 = fVar9 - fVar13;
            fVar16 = fVar17 - fVar16;
            fVar20 = SQRT(fVar16 * fVar16 + fVar12 * fVar12 + fVar13 * fVar13);
            fVar18 = fVar1;
            if (fVar20 <= fVar1) {
              if (DAT_07a3ca82 == '\0') {
                FUN_031f20f4(PTR_DAT_0759b378);
                DAT_07a3ca82 = '\x01';
              }
              pfVar5 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
              fVar12 = *pfVar5;
              fVar13 = pfVar5[1];
              fVar16 = pfVar5[2];
            }
            else {
              fVar12 = fVar12 / fVar20;
              fVar13 = fVar13 / fVar20;
              fVar16 = fVar16 / fVar20;
            }
            fVar12 = (float)FUN_06e46264(fVar12,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_05ff226c;
            pfVar5 = (float *)(lVar4 + lVar3);
            pfVar5[-3] = fVar12;
            pfVar5[-2] = fVar13;
            pfVar5[-1] = fVar16;
            *pfVar5 = fVar18;
            if (lVar3 != 0x38) {
              if (DAT_07a3f7a9 == '\0') {
                FUN_031f20f4(puVar2);
                DAT_07a3f7a9 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              fStack0000000000000040 = fStack0000000000000040 + fVar20;
            }
            uVar6 = uVar6 + 1;
            lVar3 = lVar3 + 0x20;
            fVar12 = fVar8;
            fVar13 = fVar9;
            fVar16 = fVar17;
          } while ((long)uVar6 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar4 = *unaff_x20;
            lVar3 = 0x5c;
            uVar6 = 1;
            do {
              if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar6 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar6)) {
LAB_05ff226c:
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              lVar4 = lVar4 + lVar3;
              fVar7 = *(float *)(lVar4 + -0x38);
              fVar13 = *(float *)(lVar4 + -0x34);
              fVar16 = *(float *)(lVar4 + -0x3c);
              fVar8 = *(float *)(lVar4 + -0x1c);
              fVar21 = *(float *)(lVar4 + -0x18);
              fVar12 = *(float *)(lVar4 + -0x14);
              if (DAT_07a3f7a9 == '\0') {
                FUN_031f20f4(puVar2);
                DAT_07a3f7a9 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              lVar4 = *unaff_x20;
              if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar6 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar6)) goto LAB_05ff226c;
              fVar16 = fVar16 - fVar8;
              fVar7 = fVar7 - fVar21;
              fVar13 = fVar13 - fVar12;
              *(float *)(lVar4 + lVar3) =
                   SQRT(fVar16 * fVar16 + fVar7 * fVar7 + fVar13 * fVar13) / fStack0000000000000040
                   + ((float *)(lVar4 + lVar3))[-8];
              uVar6 = uVar6 + 1;
              lVar3 = lVar3 + 0x20;
            } while ((long)uVar6 < (long)*(int *)(unaff_x19 + 0x50));
          }
        }
        return;
      }
    }
  }
OVRManager__GetEyeTrackedFoveatedRenderingSupported:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


