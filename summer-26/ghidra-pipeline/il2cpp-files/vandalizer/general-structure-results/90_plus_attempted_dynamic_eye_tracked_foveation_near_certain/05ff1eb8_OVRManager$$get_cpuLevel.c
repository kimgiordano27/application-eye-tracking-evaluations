/*
FUNCTION_NAME: OVRManager$$get_cpuLevel
ENTRY_POINT: 05ff1eb8
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


void OVRManager__get_cpuLevel(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  
  lVar1 = FUN_06e5502c();
  if (lVar1 != 0) {
    fVar5 = (float)FUN_06e6e3cc(lVar1,0);
    lVar1 = FUN_06e5502c();
    if (lVar1 != 0) {
      FUN_06e6e3cc(lVar1,0);
      lVar1 = FUN_06e5502c();
      if (lVar1 != 0) {
        FUN_06e6e3cc(lVar1,0);
        fVar16 = DAT_014ba9b8;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fVar14 = in_stack_00000040 - unaff_s15;
          in_stack_00000040 = 0.0;
          fVar6 = unaff_s12 + -0.5;
          fVar8 = SQRT(unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s13 * unaff_s13);
          uVar4 = 0;
          lVar1 = 0x38;
          fVar10 = fStack0000000000000038 - unaff_s11;
          fVar12 = in_stack_00000030._4_4_ - unaff_s14;
          do {
            fVar9 = (float)unaff_x21[1];
            fVar11 = (float)unaff_x21[2];
            fVar7 = (float)FUN_05ff240c(*unaff_x21,fVar9,fVar11,
                                        unaff_s9 + fVar6 * fVar8 * fStack000000000000003c,
                                        in_stack_00000028 + fVar6 * fVar8 * fStack0000000000000020,
                                        fStack0000000000000024 +
                                        fVar6 * fVar8 * in_stack_00000018._4_4_);
            lVar2 = *unaff_x20;
            if (lVar2 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
            if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_05ff226c;
            lVar2 = lVar2 + lVar1;
            *(float *)(lVar2 + -0x10) = (1.0 / param_3) * fVar11;
            *(float *)(lVar2 + -0x18) = (1.0 / fVar5) * fVar7;
            *(float *)(lVar2 + -0x14) = (1.0 / param_2) * fVar9;
            lVar2 = *unaff_x20;
            if (lVar2 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
            if (DAT_07a3ca81 == '\0') {
              FUN_031f20f4();
              DAT_07a3ca81 = '\x01';
            }
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            fVar14 = fVar7 - fVar14;
            fVar10 = fVar9 - fVar10;
            fVar12 = fVar11 - fVar12;
            fVar15 = SQRT(fVar12 * fVar12 + fVar14 * fVar14 + fVar10 * fVar10);
            fVar13 = fVar16;
            if (fVar15 <= fVar16) {
              if (DAT_07a3ca82 == '\0') {
                FUN_031f20f4(PTR_DAT_0759b378);
                DAT_07a3ca82 = '\x01';
              }
              pfVar3 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
              fVar14 = *pfVar3;
              fVar10 = pfVar3[1];
              fVar12 = pfVar3[2];
            }
            else {
              fVar14 = fVar14 / fVar15;
              fVar10 = fVar10 / fVar15;
              fVar12 = fVar12 / fVar15;
            }
            fVar14 = (float)FUN_06e46264(fVar14,0);
            if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_05ff226c;
            pfVar3 = (float *)(lVar2 + lVar1);
            pfVar3[-3] = fVar14;
            pfVar3[-2] = fVar10;
            pfVar3[-1] = fVar12;
            *pfVar3 = fVar13;
            if (lVar1 != 0x38) {
              if (*(char *)(unaff_x24 + 0x7a9) == '\0') {
                FUN_031f20f4();
                *(undefined1 *)(unaff_x24 + 0x7a9) = 1;
              }
              if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              in_stack_00000040 = in_stack_00000040 + fVar15;
            }
            uVar4 = uVar4 + 1;
            lVar1 = lVar1 + 0x20;
            fVar14 = fVar7;
            fVar10 = fVar9;
            fVar12 = fVar11;
          } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar2 = *unaff_x20;
            lVar1 = 0x5c;
            uVar4 = 1;
            do {
              if (lVar2 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
              if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) ||
                 (*(uint *)(lVar2 + 0x18) <= uVar4)) {
LAB_05ff226c:
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              lVar2 = lVar2 + lVar1;
              fVar16 = *(float *)(lVar2 + -0x38);
              fVar14 = *(float *)(lVar2 + -0x34);
              fVar5 = *(float *)(lVar2 + -0x3c);
              fVar6 = *(float *)(lVar2 + -0x1c);
              fVar12 = *(float *)(lVar2 + -0x18);
              fVar10 = *(float *)(lVar2 + -0x14);
              if (*(char *)(unaff_x24 + 0x7a9) == '\0') {
                FUN_031f20f4();
                *(undefined1 *)(unaff_x24 + 0x7a9) = 1;
              }
              if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              lVar2 = *unaff_x20;
              if (lVar2 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
              if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) ||
                 (*(uint *)(lVar2 + 0x18) <= uVar4)) goto LAB_05ff226c;
              fVar5 = fVar5 - fVar6;
              fVar16 = fVar16 - fVar12;
              fVar14 = fVar14 - fVar10;
              *(float *)(lVar2 + lVar1) =
                   SQRT(fVar5 * fVar5 + fVar16 * fVar16 + fVar14 * fVar14) / in_stack_00000040 +
                   ((float *)(lVar2 + lVar1))[-8];
              uVar4 = uVar4 + 1;
              lVar1 = lVar1 + 0x20;
            } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
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


