/*
FUNCTION_NAME: OVRManager$$set_suggestedGpuPerfLevel
ENTRY_POINT: 05ff1e28
PROGRAM: vandalizer-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_17;weak_xr_or_state_hits_12;validity_or_gating_hits_11;strong_foveation_hits_5;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_suggestedGpuPerfLevel(float param_1,undefined1 param_2 [16],float param_3)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  long *unaff_x20;
  float *unaff_x21;
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
  float unaff_s8;
  float fVar17;
  float fVar18;
  float unaff_s10;
  float fVar19;
  float fVar20;
  float unaff_s12;
  float unaff_s13;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  
  if (DAT_07a3f7a9 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3f7a9 = '\x01';
  }
  puVar2 = PTR_DAT_0759b370;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar17 = *unaff_x21;
  fVar12 = unaff_x21[1];
  fStack0000000000000024 = unaff_x21[2];
  fVar20 = fVar12;
  fStack000000000000003c = (float)FUN_06e6836c();
  fVar7 = *unaff_x21;
  fVar15 = unaff_x21[1];
  fStack0000000000000034 = unaff_x21[2];
  fVar14 = fVar20;
  fStack000000000000001c = param_3;
  fVar8 = (float)FUN_06e6836c();
  fVar11 = fVar14;
  fVar19 = param_3;
  lVar3 = FUN_06e5502c();
  if (lVar3 != 0) {
    fVar9 = (float)FUN_06e6e3cc(lVar3,0);
    lVar3 = FUN_06e5502c();
    if (lVar3 != 0) {
      FUN_06e6e3cc(lVar3,0);
      lVar3 = FUN_06e5502c();
      if (lVar3 != 0) {
        FUN_06e6e3cc(lVar3,0);
        fVar1 = DAT_014ba9b8;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fStack0000000000000040 = 0.0;
          param_3 = fStack0000000000000034 - param_3;
          fVar10 = unaff_s12 + -0.5;
          fStack0000000000000034 = 1.0 / fVar11;
          fVar13 = SQRT(unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 +
                        (unaff_s13 - param_1) * (unaff_s13 - param_1));
          fStack000000000000003c = fVar17 + fVar10 * fVar13 * fStack000000000000003c;
          uVar6 = 0;
          lVar3 = 0x38;
          fVar17 = fStack0000000000000024 + fVar10 * fVar13 * fStack000000000000001c;
          fVar11 = fVar7 - fVar8;
          fVar14 = fVar15 - fVar14;
          do {
            fVar8 = unaff_x21[1];
            fVar15 = unaff_x21[2];
            fVar7 = (float)FUN_05ff240c(*unaff_x21,fVar8,fVar15,fStack000000000000003c,
                                        fVar12 + fVar10 * fVar13 * fVar20,fVar17);
            lVar4 = *unaff_x20;
            if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_05ff226c;
            lVar4 = lVar4 + lVar3;
            *(float *)(lVar4 + -0x10) = (1.0 / fVar19) * fVar15;
            *(float *)(lVar4 + -0x18) = (1.0 / fVar9) * fVar7;
            *(float *)(lVar4 + -0x14) = fStack0000000000000034 * fVar8;
            lVar4 = *unaff_x20;
            if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
            if (DAT_07a3ca81 == '\0') {
              FUN_031f20f4(puVar2);
              DAT_07a3ca81 = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            fVar11 = fVar7 - fVar11;
            fVar14 = fVar8 - fVar14;
            param_3 = fVar15 - param_3;
            fVar18 = SQRT(param_3 * param_3 + fVar11 * fVar11 + fVar14 * fVar14);
            fVar16 = fVar1;
            if (fVar18 <= fVar1) {
              if (DAT_07a3ca82 == '\0') {
                FUN_031f20f4(PTR_DAT_0759b378);
                DAT_07a3ca82 = '\x01';
              }
              pfVar5 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
              fVar11 = *pfVar5;
              fVar14 = pfVar5[1];
              param_3 = pfVar5[2];
            }
            else {
              fVar11 = fVar11 / fVar18;
              fVar14 = fVar14 / fVar18;
              param_3 = param_3 / fVar18;
            }
            fVar11 = (float)FUN_06e46264(fVar11,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_05ff226c;
            pfVar5 = (float *)(lVar4 + lVar3);
            pfVar5[-3] = fVar11;
            pfVar5[-2] = fVar14;
            pfVar5[-1] = param_3;
            *pfVar5 = fVar16;
            if (lVar3 != 0x38) {
              if (DAT_07a3f7a9 == '\0') {
                FUN_031f20f4(puVar2);
                DAT_07a3f7a9 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              fStack0000000000000040 = fStack0000000000000040 + fVar18;
            }
            uVar6 = uVar6 + 1;
            lVar3 = lVar3 + 0x20;
            fVar11 = fVar7;
            fVar14 = fVar8;
            param_3 = fVar15;
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
              fVar14 = *(float *)(lVar4 + -0x38);
              fVar11 = *(float *)(lVar4 + -0x34);
              fVar20 = *(float *)(lVar4 + -0x3c);
              fVar8 = *(float *)(lVar4 + -0x1c);
              fVar7 = *(float *)(lVar4 + -0x18);
              fVar19 = *(float *)(lVar4 + -0x14);
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
              fVar20 = fVar20 - fVar8;
              fVar14 = fVar14 - fVar7;
              fVar11 = fVar11 - fVar19;
              *(float *)(lVar4 + lVar3) =
                   SQRT(fVar20 * fVar20 + fVar14 * fVar14 + fVar11 * fVar11) /
                   fStack0000000000000040 + ((float *)(lVar4 + lVar3))[-8];
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


