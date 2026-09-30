/*
FUNCTION_NAME: OVRManager$$get_suggestedCpuPerfLevel
ENTRY_POINT: 05ff1c80
PROGRAM: vandalizer-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_17;weak_xr_or_state_hits_12;validity_or_gating_hits_13;strong_foveation_hits_5;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_suggestedCpuPerfLevel
               (ulong param_1,float param_2,float param_3,float param_4,long param_5,float *param_6)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x20;
  long *plVar6;
  ulong uVar7;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  fStack0000000000000044 = param_2;
  fStack0000000000000048 = param_3;
  fStack000000000000004c = param_4;
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d64f0);
    FUN_031f20f4(PTR_DAT_075f2f08);
    *(undefined1 *)(unaff_x20 + 0x86f) = 1;
  }
  puVar2 = PTR_DAT_075d64f0;
  plVar6 = (long *)(param_5 + 0x68);
  if ((*plVar6 == 0) || (*(int *)(param_5 + 0x50) != *(int *)(*plVar6 + 0x18))) {
    lVar3 = FUN_031f21dc(*(undefined8 *)PTR_DAT_075f2f08);
    *plVar6 = lVar3;
    thunk_FUN_0329bf60(plVar6,lVar3);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar8 = (float)FUN_06e6836c(param_6,0);
  if (DAT_07a3caf2 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3caf2 = '\x01';
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
  fVar17 = *(float *)(lVar3 + 0x18);
  fVar22 = *(float *)(lVar3 + 0x1c);
  fVar21 = *(float *)(lVar3 + 0x20);
  fVar8 = param_4 * fVar21 + fVar8 * fVar17 + param_3 * fVar22;
  fVar8 = powf(1.0 - fVar8 * fVar8,-0.25);
  fVar16 = *param_6;
  fVar19 = param_6[1];
  fVar20 = param_6[2];
  if (DAT_07a44545 == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a44545 = '\x01';
  }
  fVar16 = fStack0000000000000044 - fVar16;
  fVar19 = fStack0000000000000048 - fVar19;
  fVar14 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8);
  fVar9 = fVar21 * fVar21 + fVar17 * fVar17 + fVar22 * fVar22;
  fVar20 = fStack000000000000004c - fVar20;
  if (fVar14 <= fVar9) {
    fVar12 = fVar20 * fVar21 + fVar16 * fVar17 + fVar19 * fVar22;
    fVar14 = (fVar17 * fVar12) / fVar9;
    fVar16 = fVar16 - fVar14;
    fVar19 = fVar19 - (fVar22 * fVar12) / fVar9;
    fVar20 = fVar20 - (fVar21 * fVar12) / fVar9;
  }
  if (DAT_07a3f7a9 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3f7a9 = '\x01';
  }
  puVar2 = PTR_DAT_0759b370;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar18 = *param_6;
  fVar13 = param_6[1];
  fStack0000000000000024 = param_6[2];
  fVar17 = fVar13;
  fStack000000000000003c = (float)FUN_06e6836c(param_6,0);
  fVar12 = *param_6;
  fVar15 = param_6[1];
  fStack0000000000000034 = param_6[2];
  fVar21 = fVar17;
  fStack000000000000001c = fVar14;
  fVar10 = (float)FUN_06e6836c(param_6,0);
  fVar22 = fVar21;
  fVar9 = fVar14;
  lVar3 = FUN_06e5502c(param_5,0);
  if (lVar3 != 0) {
    fVar11 = (float)FUN_06e6e3cc(lVar3,0);
    lVar3 = FUN_06e5502c(param_5,0);
    if (lVar3 != 0) {
      FUN_06e6e3cc(lVar3,0);
      lVar3 = FUN_06e5502c(param_5,0);
      if (lVar3 != 0) {
        FUN_06e6e3cc(lVar3,0);
        fVar1 = DAT_014ba9b8;
        if (0 < *(int *)(param_5 + 0x50)) {
          fStack0000000000000040 = 0.0;
          fVar14 = fStack0000000000000034 - fVar14;
          fVar8 = fVar8 + -0.5;
          fStack0000000000000034 = 1.0 / fVar22;
          fVar20 = SQRT(fVar16 * fVar16 + fVar19 * fVar19 + fVar20 * fVar20);
          fStack000000000000003c = fVar18 + fVar8 * fVar20 * fStack000000000000003c;
          uVar7 = 0;
          lVar3 = 0x38;
          fVar22 = fStack0000000000000024 + fVar8 * fVar20 * fStack000000000000001c;
          fVar16 = fVar12 - fVar10;
          fVar19 = fVar15 - fVar21;
          do {
            fVar12 = param_6[1];
            fVar10 = param_6[2];
            fVar21 = (float)FUN_05ff240c(*param_6,fVar12,fVar10,fStack000000000000003c,
                                         fVar13 + fVar8 * fVar20 * fVar17,fVar22);
            lVar4 = *plVar6;
            if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
            if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_05ff226c;
            lVar4 = lVar4 + lVar3;
            *(float *)(lVar4 + -0x10) = (1.0 / fVar9) * fVar10;
            *(float *)(lVar4 + -0x18) = (1.0 / fVar11) * fVar21;
            *(float *)(lVar4 + -0x14) = fStack0000000000000034 * fVar12;
            lVar4 = *plVar6;
            if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
            if (DAT_07a3ca81 == '\0') {
              FUN_031f20f4(puVar2);
              DAT_07a3ca81 = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            fVar16 = fVar21 - fVar16;
            fVar19 = fVar12 - fVar19;
            fVar14 = fVar10 - fVar14;
            fVar18 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar19 * fVar19);
            fVar15 = fVar1;
            if (fVar18 <= fVar1) {
              if (DAT_07a3ca82 == '\0') {
                FUN_031f20f4(PTR_DAT_0759b378);
                DAT_07a3ca82 = '\x01';
              }
              pfVar5 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
              fVar16 = *pfVar5;
              fVar19 = pfVar5[1];
              fVar14 = pfVar5[2];
            }
            else {
              fVar16 = fVar16 / fVar18;
              fVar19 = fVar19 / fVar18;
              fVar14 = fVar14 / fVar18;
            }
            fVar16 = (float)FUN_06e46264(fVar16,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_05ff226c;
            pfVar5 = (float *)(lVar4 + lVar3);
            pfVar5[-3] = fVar16;
            pfVar5[-2] = fVar19;
            pfVar5[-1] = fVar14;
            *pfVar5 = fVar15;
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
            uVar7 = uVar7 + 1;
            lVar3 = lVar3 + 0x20;
            fVar16 = fVar21;
            fVar19 = fVar12;
            fVar14 = fVar10;
          } while ((long)uVar7 < (long)*(int *)(param_5 + 0x50));
          if (1 < *(int *)(param_5 + 0x50)) {
            lVar4 = *plVar6;
            lVar3 = 0x5c;
            uVar7 = 1;
            do {
              if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar7 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar7)) {
LAB_05ff226c:
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              lVar4 = lVar4 + lVar3;
              fVar16 = *(float *)(lVar4 + -0x38);
              fVar17 = *(float *)(lVar4 + -0x34);
              fVar8 = *(float *)(lVar4 + -0x3c);
              fVar21 = *(float *)(lVar4 + -0x1c);
              fVar20 = *(float *)(lVar4 + -0x18);
              fVar19 = *(float *)(lVar4 + -0x14);
              if (DAT_07a3f7a9 == '\0') {
                FUN_031f20f4(puVar2);
                DAT_07a3f7a9 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              lVar4 = *plVar6;
              if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar7 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar7)) goto LAB_05ff226c;
              fVar8 = fVar8 - fVar21;
              fVar16 = fVar16 - fVar20;
              fVar17 = fVar17 - fVar19;
              *(float *)(lVar4 + lVar3) =
                   SQRT(fVar8 * fVar8 + fVar16 * fVar16 + fVar17 * fVar17) / fStack0000000000000040
                   + ((float *)(lVar4 + lVar3))[-8];
              uVar7 = uVar7 + 1;
              lVar3 = lVar3 + 0x20;
            } while ((long)uVar7 < (long)*(int *)(param_5 + 0x50));
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


