/*
FUNCTION_NAME: OVRManager$$set_gpuLevel
ENTRY_POINT: 05ff2060
PROGRAM: vandalizer-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_10;validity_or_gating_hits_6;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_gpuLevel(void)

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
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float fVar9;
  float unaff_s11;
  float fVar10;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  
  do {
    FUN_031f20f4();
    *(undefined1 *)(unaff_x27 + 0xa81) = unaff_w28;
    fVar5 = unaff_s9;
    fVar6 = unaff_s10;
    fVar7 = unaff_s11;
    do {
      unaff_s11 = unaff_s8;
      unaff_s10 = unaff_s15;
      unaff_s9 = unaff_s14;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar5 = unaff_s9 - fVar5;
      fVar6 = unaff_s10 - fVar6;
      fVar7 = unaff_s11 - fVar7;
      fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      fVar9 = in_stack_00000028._4_4_;
      if (fVar8 <= in_stack_00000028._4_4_) {
        if (*(char *)(unaff_x29 + 0xa82) == '\0') {
          FUN_031f20f4(PTR_DAT_0759b378);
          *(undefined1 *)(unaff_x29 + 0xa82) = unaff_w28;
        }
        pfVar1 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
        fVar5 = *pfVar1;
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
      }
      else {
        fVar5 = fVar5 / fVar8;
        fVar6 = fVar6 / fVar8;
        fVar7 = fVar7 / fVar8;
      }
      fVar5 = (float)FUN_06e46264(fVar5,0);
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_05ff226c;
      pfVar1 = (float *)(unaff_x23 + unaff_x26);
      pfVar1[-3] = fVar5;
      pfVar1[-2] = fVar6;
      pfVar1[-1] = fVar7;
      *pfVar1 = fVar9;
      if (unaff_x26 != 0x38) {
        if (*(char *)(unaff_x24 + 0x7a9) == '\0') {
          FUN_031f20f4();
          *(undefined1 *)(unaff_x24 + 0x7a9) = unaff_w28;
        }
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        in_stack_00000040 = in_stack_00000040 + fVar8;
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
      unaff_s15 = (float)unaff_x21[1];
      unaff_s8 = (float)unaff_x21[2];
      unaff_s14 = (float)FUN_05ff240c(*unaff_x21,unaff_s15,unaff_s8,uStack000000000000003c);
      lVar3 = *unaff_x20;
      if (lVar3 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_05ff226c;
      lVar3 = lVar3 + unaff_x26;
      *(float *)(lVar3 + -0x10) = fStack0000000000000030 * unaff_s8;
      *(float *)(lVar3 + -0x18) = fStack0000000000000038 * unaff_s14;
      *(float *)(lVar3 + -0x14) = fStack0000000000000034 * unaff_s15;
      unaff_x23 = *unaff_x20;
      if (unaff_x23 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
      fVar5 = unaff_s9;
      fVar6 = unaff_s10;
      fVar7 = unaff_s11;
    } while (*(char *)(unaff_x27 + 0xa81) != '\0');
  } while( true );
LAB_05ff2180:
  if (lVar2 == 0) {
OVRManager__GetEyeTrackedFoveatedRenderingSupported:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4)) {
LAB_05ff226c:
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  lVar2 = lVar2 + lVar3;
  fVar6 = *(float *)(lVar2 + -0x38);
  fVar7 = *(float *)(lVar2 + -0x34);
  fVar5 = *(float *)(lVar2 + -0x3c);
  fVar10 = *(float *)(lVar2 + -0x1c);
  fVar8 = *(float *)(lVar2 + -0x18);
  fVar9 = *(float *)(lVar2 + -0x14);
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
  fVar6 = fVar6 - fVar8;
  fVar7 = fVar7 - fVar9;
  *(float *)(lVar2 + lVar3) =
       SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7) / in_stack_00000040 +
       ((float *)(lVar2 + lVar3))[-8];
  uVar4 = uVar4 + 1;
  lVar3 = lVar3 + 0x20;
  if ((long)*(int *)(unaff_x19 + 0x50) <= (long)uVar4) {
    return;
  }
  goto LAB_05ff2180;
}


