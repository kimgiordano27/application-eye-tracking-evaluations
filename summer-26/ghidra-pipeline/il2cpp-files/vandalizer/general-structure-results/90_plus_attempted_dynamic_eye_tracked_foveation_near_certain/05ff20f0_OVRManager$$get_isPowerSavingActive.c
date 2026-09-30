/*
FUNCTION_NAME: OVRManager$$get_isPowerSavingActive
ENTRY_POINT: 05ff20f0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_12;validity_or_gating_hits_6;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_isPowerSavingActive
               (float param_1,float param_2,float param_3,float param_4,undefined8 param_5)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long lVar3;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar4;
  long unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  long unaff_x29;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  
  while (fVar5 = (float)FUN_06e46264(param_1,param_5), unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
    pfVar1 = (float *)(unaff_x23 + unaff_x26);
    pfVar1[-3] = fVar5;
    pfVar1[-2] = param_2;
    pfVar1[-1] = param_3;
    *pfVar1 = param_4;
    if (unaff_x26 != 0x38) {
      if (*(char *)(unaff_x24 + 0x7a9) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x24 + 0x7a9) = unaff_w28;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      in_stack_00000040 = in_stack_00000040 + unaff_s9;
    }
    unaff_x25 = unaff_x25 + 1;
    unaff_x26 = unaff_x26 + 0x20;
    if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x25) {
      if (*(int *)(unaff_x19 + 0x50) < 2) {
        return;
      }
      lVar2 = *unaff_x20;
      lVar3 = 0x5c;
      uVar4 = 1;
      goto LAB_05ff2180;
    }
    fVar7 = (float)unaff_x21[1];
    fVar6 = (float)unaff_x21[2];
    fVar5 = (float)FUN_05ff240c(*unaff_x21,fVar7,fVar6,uStack000000000000003c);
    lVar3 = *unaff_x20;
    if (lVar3 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) break;
    lVar3 = lVar3 + unaff_x26;
    *(float *)(lVar3 + -0x10) = fStack0000000000000030 * fVar6;
    *(float *)(lVar3 + -0x18) = fStack0000000000000038 * fVar5;
    *(float *)(lVar3 + -0x14) = fStack0000000000000034 * fVar7;
    unaff_x23 = *unaff_x20;
    if (unaff_x23 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
    if (*(char *)(unaff_x27 + 0xa81) == '\0') {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x27 + 0xa81) = unaff_w28;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    param_1 = fVar5 - unaff_s14;
    param_2 = fVar7 - unaff_s15;
    param_3 = fVar6 - unaff_s8;
    unaff_s9 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
    param_4 = in_stack_00000028._4_4_;
    if (unaff_s9 <= in_stack_00000028._4_4_) {
      if (*(char *)(unaff_x29 + 0xa82) == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        *(undefined1 *)(unaff_x29 + 0xa82) = unaff_w28;
      }
      pfVar1 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
      param_1 = *pfVar1;
      param_2 = pfVar1[1];
      param_3 = pfVar1[2];
    }
    else {
      param_1 = param_1 / unaff_s9;
      param_2 = param_2 / unaff_s9;
      param_3 = param_3 / unaff_s9;
    }
    param_5 = 0;
    unaff_s14 = fVar5;
    unaff_s15 = fVar7;
    unaff_s8 = fVar6;
  }
LAB_05ff226c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
LAB_05ff2180:
  if (lVar2 == 0) {
OVRManager__GetEyeTrackedFoveatedRenderingSupported:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4))
  goto LAB_05ff226c;
  lVar2 = lVar2 + lVar3;
  fVar7 = *(float *)(lVar2 + -0x38);
  fVar6 = *(float *)(lVar2 + -0x34);
  fVar5 = *(float *)(lVar2 + -0x3c);
  fVar10 = *(float *)(lVar2 + -0x1c);
  fVar9 = *(float *)(lVar2 + -0x18);
  fVar8 = *(float *)(lVar2 + -0x14);
  if (*(char *)(unaff_x24 + 0x7a9) == '\0') {
    FUN_031f20f4();
    *(undefined1 *)(unaff_x24 + 0x7a9) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *unaff_x20;
  if (lVar2 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4))
  goto LAB_05ff226c;
  fVar5 = fVar5 - fVar10;
  fVar7 = fVar7 - fVar9;
  fVar6 = fVar6 - fVar8;
  *(float *)(lVar2 + lVar3) =
       SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6) / in_stack_00000040 +
       ((float *)(lVar2 + lVar3))[-8];
  uVar4 = uVar4 + 1;
  lVar3 = lVar3 + 0x20;
  if ((long)*(int *)(unaff_x19 + 0x50) <= (long)uVar4) {
    return;
  }
  goto LAB_05ff2180;
}


