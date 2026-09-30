/*
FUNCTION_NAME: FUN_05ff1c4c
ENTRY_POINT: 05ff1c4c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_10;validity_or_gating_hits_13;strong_foveation_hits_5;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_05ff1c4c(float param_1,float param_2,float param_3,long param_4,float *param_5)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_b0;
  
  fVar9 = param_2;
  fVar20 = param_3;
  if ((DAT_07a4686f & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d64f0);
    FUN_031f20f4(PTR_DAT_075f2f08);
    DAT_07a4686f = 1;
  }
  puVar2 = PTR_DAT_075d64f0;
  plVar6 = (long *)(param_4 + 0x68);
  if ((*plVar6 == 0) || (*(int *)(param_4 + 0x50) != *(int *)(*plVar6 + 0x18))) {
    lVar3 = FUN_031f21dc(*(undefined8 *)PTR_DAT_075f2f08);
    *plVar6 = lVar3;
    thunk_FUN_0329bf60(plVar6,lVar3);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar8 = (float)FUN_06e6836c(param_5,0);
  if (DAT_07a3caf2 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3caf2 = '\x01';
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
  fVar21 = *(float *)(lVar3 + 0x18);
  fVar26 = *(float *)(lVar3 + 0x1c);
  fVar25 = *(float *)(lVar3 + 0x20);
  fVar9 = fVar20 * fVar25 + fVar8 * fVar21 + fVar9 * fVar26;
  fVar9 = powf(1.0 - fVar9 * fVar9,-0.25);
  fVar20 = *param_5;
  fVar8 = param_5[1];
  fVar24 = param_5[2];
  if (DAT_07a44545 == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a44545 = '\x01';
  }
  param_1 = param_1 - fVar20;
  param_2 = param_2 - fVar8;
  fVar8 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8);
  fVar20 = fVar25 * fVar25 + fVar21 * fVar21 + fVar26 * fVar26;
  param_3 = param_3 - fVar24;
  if (fVar8 <= fVar20) {
    fVar24 = param_3 * fVar25 + param_1 * fVar21 + param_2 * fVar26;
    fVar8 = (fVar21 * fVar24) / fVar20;
    param_1 = param_1 - fVar8;
    param_2 = param_2 - (fVar26 * fVar24) / fVar20;
    param_3 = param_3 - (fVar25 * fVar24) / fVar20;
  }
  if (DAT_07a3f7a9 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3f7a9 = '\x01';
  }
  puVar2 = PTR_DAT_0759b370;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar22 = *param_5;
  fVar16 = param_5[1];
  fVar10 = param_5[2];
  fVar20 = fVar16;
  fVar11 = (float)FUN_06e6836c(param_5,0);
  fVar12 = *param_5;
  fVar18 = param_5[1];
  fVar13 = param_5[2];
  fVar21 = fVar20;
  fVar25 = fVar8;
  fVar14 = (float)FUN_06e6836c(param_5,0);
  fVar24 = fVar21;
  fVar26 = fVar25;
  lVar3 = FUN_06e5502c(param_4,0);
  if (lVar3 != 0) {
    fVar15 = (float)FUN_06e6e3cc(lVar3,0);
    lVar3 = FUN_06e5502c(param_4,0);
    if (lVar3 != 0) {
      FUN_06e6e3cc(lVar3,0);
      lVar3 = FUN_06e5502c(param_4,0);
      if (lVar3 != 0) {
        FUN_06e6e3cc(lVar3,0);
        fVar1 = DAT_014ba9b8;
        if (0 < *(int *)(param_4 + 0x50)) {
          local_b0 = 0.0;
          fVar9 = fVar9 + -0.5;
          fVar17 = SQRT(param_1 * param_1 + param_2 * param_2 + param_3 * param_3);
          uVar7 = 0;
          lVar3 = 0x38;
          fVar12 = fVar12 - fVar14;
          fVar21 = fVar18 - fVar21;
          fVar25 = fVar13 - fVar25;
          do {
            fVar14 = param_5[1];
            fVar18 = param_5[2];
            fVar13 = (float)FUN_05ff240c(*param_5,fVar14,fVar18,fVar22 + fVar9 * fVar17 * fVar11,
                                         fVar16 + fVar9 * fVar17 * fVar20,
                                         fVar10 + fVar9 * fVar17 * fVar8);
            lVar4 = *plVar6;
            if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
            if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_05ff226c;
            lVar4 = lVar4 + lVar3;
            *(float *)(lVar4 + -0x10) = (1.0 / fVar26) * fVar18;
            *(float *)(lVar4 + -0x18) = (1.0 / fVar15) * fVar13;
            *(float *)(lVar4 + -0x14) = (1.0 / fVar24) * fVar14;
            lVar4 = *plVar6;
            if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
            if (DAT_07a3ca81 == '\0') {
              FUN_031f20f4(puVar2);
              DAT_07a3ca81 = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            fVar12 = fVar13 - fVar12;
            fVar21 = fVar14 - fVar21;
            fVar25 = fVar18 - fVar25;
            fVar23 = SQRT(fVar25 * fVar25 + fVar12 * fVar12 + fVar21 * fVar21);
            fVar19 = fVar1;
            if (fVar23 <= fVar1) {
              if (DAT_07a3ca82 == '\0') {
                FUN_031f20f4(PTR_DAT_0759b378);
                DAT_07a3ca82 = '\x01';
              }
              pfVar5 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
              fVar12 = *pfVar5;
              fVar21 = pfVar5[1];
              fVar25 = pfVar5[2];
            }
            else {
              fVar12 = fVar12 / fVar23;
              fVar21 = fVar21 / fVar23;
              fVar25 = fVar25 / fVar23;
            }
            fVar12 = (float)FUN_06e46264(fVar12,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_05ff226c;
            pfVar5 = (float *)(lVar4 + lVar3);
            pfVar5[-3] = fVar12;
            pfVar5[-2] = fVar21;
            pfVar5[-1] = fVar25;
            *pfVar5 = fVar19;
            if (lVar3 != 0x38) {
              if (DAT_07a3f7a9 == '\0') {
                FUN_031f20f4(puVar2);
                DAT_07a3f7a9 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              local_b0 = local_b0 + fVar23;
            }
            uVar7 = uVar7 + 1;
            lVar3 = lVar3 + 0x20;
            fVar12 = fVar13;
            fVar21 = fVar14;
            fVar25 = fVar18;
          } while ((long)uVar7 < (long)*(int *)(param_4 + 0x50));
          if (1 < *(int *)(param_4 + 0x50)) {
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
              fVar20 = *(float *)(lVar4 + -0x38);
              fVar8 = *(float *)(lVar4 + -0x34);
              fVar9 = *(float *)(lVar4 + -0x3c);
              fVar25 = *(float *)(lVar4 + -0x1c);
              fVar24 = *(float *)(lVar4 + -0x18);
              fVar21 = *(float *)(lVar4 + -0x14);
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
              fVar9 = fVar9 - fVar25;
              fVar20 = fVar20 - fVar24;
              fVar8 = fVar8 - fVar21;
              *(float *)(lVar4 + lVar3) =
                   SQRT(fVar9 * fVar9 + fVar20 * fVar20 + fVar8 * fVar8) / local_b0 +
                   ((float *)(lVar4 + lVar3))[-8];
              uVar7 = uVar7 + 1;
              lVar3 = lVar3 + 0x20;
            } while ((long)uVar7 < (long)*(int *)(param_4 + 0x50));
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


