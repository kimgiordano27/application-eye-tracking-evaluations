/*
FUNCTION_NAME: OVRManager$$set_cpuLevel
ENTRY_POINT: 05ff1f44
PROGRAM: vandalizer-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_10;validity_or_gating_hits_7;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_cpuLevel
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,
               undefined1 param_5 [16],undefined1 param_6 [16],float param_7,float param_8,
               float param_9)

{
  long lVar1;
  float *pfVar2;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s9;
  float fVar14;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined4 uStack0000000000000004;
  float fStack0000000000000010;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  float in_stack_00000040;
  undefined4 in_stack_00000048;
  
  fStack0000000000000030 = 1.0 / param_4;
  fVar10 = *(float *)(in_x9 + 0x9b8);
  param_8 = param_8 + -0.5;
  fStack0000000000000034 = 1.0 / unaff_s12;
  fVar7 = SQRT(param_3 + unaff_s13 * unaff_s13);
  uVar3 = 0;
  lVar4 = 0x38;
  fVar12 = param_7 - unaff_s14;
  do {
    fStack0000000000000010 = (float)(int)uVar3 / ((float)(int)param_1 + -1.0);
    fVar8 = (float)unaff_x21[1];
    fVar11 = (float)unaff_x21[2];
    uStack0000000000000004 = in_stack_00000048;
    fVar5 = (float)FUN_05ff240c(*unaff_x21,fVar8,fVar11,
                                param_9 + param_8 * fVar7 * in_stack_00000038._4_4_,
                                fStack0000000000000028 + param_8 * fVar7 * fStack0000000000000020,
                                fStack0000000000000024 + param_8 * fVar7 * in_stack_00000018._4_4_);
    lVar1 = *unaff_x20;
    if (lVar1 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
    if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_05ff226c;
    lVar1 = lVar1 + lVar4;
    *(float *)(lVar1 + -0x10) = fStack0000000000000030 * fVar11;
    *(float *)(lVar1 + -0x18) = (1.0 / fStack000000000000002c) * fVar5;
    *(float *)(lVar1 + -0x14) = fStack0000000000000034 * fVar8;
    lVar1 = *unaff_x20;
    if (lVar1 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
    if (DAT_07a3ca81 == '\0') {
      FUN_031f20f4();
      DAT_07a3ca81 = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar6 = fVar5 - unaff_s9;
    fVar9 = fVar8 - unaff_s10;
    fVar12 = fVar11 - fVar12;
    fVar14 = SQRT(fVar12 * fVar12 + fVar6 * fVar6 + fVar9 * fVar9);
    fVar13 = fVar10;
    if (fVar14 <= fVar10) {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      pfVar2 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
      fVar6 = *pfVar2;
      fVar9 = pfVar2[1];
      fVar12 = pfVar2[2];
    }
    else {
      fVar6 = fVar6 / fVar14;
      fVar9 = fVar9 / fVar14;
      fVar12 = fVar12 / fVar14;
    }
    fVar6 = (float)FUN_06e46264(fVar6,0);
    if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_05ff226c;
    pfVar2 = (float *)(lVar1 + lVar4);
    pfVar2[-3] = fVar6;
    pfVar2[-2] = fVar9;
    pfVar2[-1] = fVar12;
    *pfVar2 = fVar13;
    if (lVar4 != 0x38) {
      if (*(char *)(unaff_x24 + 0x7a9) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x24 + 0x7a9) = 1;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      in_stack_00000040 = in_stack_00000040 + fVar14;
    }
    param_1 = (long)*(int *)(unaff_x19 + 0x50);
    uVar3 = uVar3 + 1;
    lVar4 = lVar4 + 0x20;
    fVar12 = fVar11;
    unaff_s9 = fVar5;
    unaff_s10 = fVar8;
  } while ((long)uVar3 < param_1);
  if (1 < *(int *)(unaff_x19 + 0x50)) {
    lVar1 = *unaff_x20;
    lVar4 = 0x5c;
    uVar3 = 1;
    do {
      if (lVar1 == 0) {
OVRManager__GetEyeTrackedFoveatedRenderingSupported:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (((ulong)*(uint *)(lVar1 + 0x18) <= uVar3 - 1) || (*(uint *)(lVar1 + 0x18) <= uVar3)) {
LAB_05ff226c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar1 = lVar1 + lVar4;
      fVar7 = *(float *)(lVar1 + -0x38);
      fVar10 = *(float *)(lVar1 + -0x34);
      fVar12 = *(float *)(lVar1 + -0x3c);
      fVar11 = *(float *)(lVar1 + -0x1c);
      fVar8 = *(float *)(lVar1 + -0x18);
      fVar5 = *(float *)(lVar1 + -0x14);
      if (*(char *)(unaff_x24 + 0x7a9) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x24 + 0x7a9) = 1;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar1 = *unaff_x20;
      if (lVar1 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
      if (((ulong)*(uint *)(lVar1 + 0x18) <= uVar3 - 1) || (*(uint *)(lVar1 + 0x18) <= uVar3))
      goto LAB_05ff226c;
      fVar12 = fVar12 - fVar11;
      fVar7 = fVar7 - fVar8;
      fVar10 = fVar10 - fVar5;
      *(float *)(lVar1 + lVar4) =
           SQRT(fVar12 * fVar12 + fVar7 * fVar7 + fVar10 * fVar10) / in_stack_00000040 +
           ((float *)(lVar1 + lVar4))[-8];
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while ((long)uVar3 < (long)*(int *)(unaff_x19 + 0x50));
  }
  return;
}


