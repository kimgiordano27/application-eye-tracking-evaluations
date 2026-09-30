/*
FUNCTION_NAME: OVRManager$$get_gpuLevel
ENTRY_POINT: 05ff1fd4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_8;validity_or_gating_hits_7;strong_foveation_hits_3;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_gpuLevel(void)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar5;
  long unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  long unaff_x29;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_s4;
  float in_s5;
  float unaff_s9;
  float fVar12;
  float unaff_s10;
  float fVar13;
  float unaff_s11;
  undefined4 uStack0000000000000004;
  float fStack0000000000000010;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  undefined4 in_stack_00000048;
  
  while( true ) {
    fStack0000000000000010 = (float)(int)unaff_x25 / (in_s4 + in_s5);
    fVar8 = (float)unaff_x21[1];
    fVar10 = (float)unaff_x21[2];
    uStack0000000000000004 = in_stack_00000048;
    fVar6 = (float)FUN_05ff240c(*unaff_x21,fVar8,fVar10,uStack000000000000003c);
    lVar2 = *unaff_x20;
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x25) goto LAB_05ff226c;
    lVar2 = lVar2 + unaff_x26;
    *(float *)(lVar2 + -0x10) = fStack0000000000000030 * fVar10;
    *(float *)(lVar2 + -0x18) = fStack0000000000000038 * fVar6;
    *(float *)(lVar2 + -0x14) = fStack0000000000000034 * fVar8;
    lVar2 = *unaff_x20;
    if (lVar2 == 0) break;
    if (*(char *)(unaff_x27 + 0xa81) == '\0') {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x27 + 0xa81) = unaff_w28;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar7 = fVar6 - unaff_s9;
    fVar9 = fVar8 - unaff_s10;
    fVar11 = fVar10 - unaff_s11;
    fVar12 = SQRT(fVar11 * fVar11 + fVar7 * fVar7 + fVar9 * fVar9);
    fVar13 = in_stack_00000028._4_4_;
    if (fVar12 <= in_stack_00000028._4_4_) {
      if (*(char *)(unaff_x29 + 0xa82) == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        *(undefined1 *)(unaff_x29 + 0xa82) = unaff_w28;
      }
      pfVar3 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
      fVar7 = *pfVar3;
      fVar9 = pfVar3[1];
      fVar11 = pfVar3[2];
    }
    else {
      fVar7 = fVar7 / fVar12;
      fVar9 = fVar9 / fVar12;
      fVar11 = fVar11 / fVar12;
    }
    fVar7 = (float)FUN_06e46264(fVar7,0);
    if (*(uint *)(lVar2 + 0x18) <= unaff_x25) goto LAB_05ff226c;
    pfVar3 = (float *)(lVar2 + unaff_x26);
    pfVar3[-3] = fVar7;
    pfVar3[-2] = fVar9;
    pfVar3[-1] = fVar11;
    *pfVar3 = fVar13;
    if (unaff_x26 != 0x38) {
      if (*(char *)(unaff_x24 + 0x7a9) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x24 + 0x7a9) = unaff_w28;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      in_stack_00000040 = in_stack_00000040 + fVar12;
    }
    iVar1 = *(int *)(unaff_x19 + 0x50);
    unaff_x25 = unaff_x25 + 1;
    unaff_x26 = unaff_x26 + 0x20;
    if ((long)iVar1 <= (long)unaff_x25) {
      if (iVar1 < 2) {
        return;
      }
      lVar4 = *unaff_x20;
      lVar2 = 0x5c;
      uVar5 = 1;
      goto LAB_05ff2180;
    }
    in_s4 = (float)iVar1;
    in_s5 = -1.0;
    unaff_s9 = fVar6;
    unaff_s10 = fVar8;
    unaff_s11 = fVar10;
  }
OVRManager__GetEyeTrackedFoveatedRenderingSupported:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
LAB_05ff2180:
  if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
  if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar4 + 0x18) <= uVar5)) {
LAB_05ff226c:
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  lVar4 = lVar4 + lVar2;
  fVar8 = *(float *)(lVar4 + -0x38);
  fVar10 = *(float *)(lVar4 + -0x34);
  fVar6 = *(float *)(lVar4 + -0x3c);
  fVar9 = *(float *)(lVar4 + -0x1c);
  fVar7 = *(float *)(lVar4 + -0x18);
  fVar13 = *(float *)(lVar4 + -0x14);
  if (*(char *)(unaff_x24 + 0x7a9) == '\0') {
    FUN_031f20f4();
    *(undefined1 *)(unaff_x24 + 0x7a9) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar4 = *unaff_x20;
  if (lVar4 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
  if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar4 + 0x18) <= uVar5))
  goto LAB_05ff226c;
  fVar6 = fVar6 - fVar9;
  fVar8 = fVar8 - fVar7;
  fVar10 = fVar10 - fVar13;
  *(float *)(lVar4 + lVar2) =
       SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar10 * fVar10) / in_stack_00000040 +
       ((float *)(lVar4 + lVar2))[-8];
  uVar5 = uVar5 + 1;
  lVar2 = lVar2 + 0x20;
  if ((long)*(int *)(unaff_x19 + 0x50) <= (long)uVar5) {
    return;
  }
  goto LAB_05ff2180;
}


