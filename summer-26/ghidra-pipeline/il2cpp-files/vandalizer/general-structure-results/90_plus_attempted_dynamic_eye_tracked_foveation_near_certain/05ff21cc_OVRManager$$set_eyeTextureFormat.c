/*
FUNCTION_NAME: OVRManager$$set_eyeTextureFormat
ENTRY_POINT: 05ff21cc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_eyeTextureFormat(void)

{
  int in_w8;
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar2;
  ulong unaff_x26;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  do {
    uVar2 = unaff_x25;
    if (in_w8 == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar1 = *unaff_x20;
    if (lVar1 == 0) {
OVRManager__GetEyeTrackedFoveatedRenderingSupported:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((*(uint *)(lVar1 + 0x18) <= unaff_x26) || (*(uint *)(lVar1 + 0x18) <= uVar2)) {
LAB_05ff226c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *(float *)(lVar1 + unaff_x23) =
         SQRT((unaff_s11 - unaff_s13) * (unaff_s11 - unaff_s13) +
              (unaff_s9 - unaff_s12) * (unaff_s9 - unaff_s12) +
              (unaff_s8 - unaff_s10) * (unaff_s8 - unaff_s10)) / unaff_s14 +
         ((float *)(lVar1 + unaff_x23))[-8];
    unaff_x25 = uVar2 + 1;
    unaff_x23 = unaff_x23 + 0x20;
    if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x25) {
      return;
    }
    if (lVar1 == 0) goto OVRManager__GetEyeTrackedFoveatedRenderingSupported;
    if ((*(uint *)(lVar1 + 0x18) <= uVar2) || (*(uint *)(lVar1 + 0x18) <= unaff_x25))
    goto LAB_05ff226c;
    lVar1 = lVar1 + unaff_x23;
    unaff_s9 = *(float *)(lVar1 + -0x38);
    unaff_s8 = *(float *)(lVar1 + -0x34);
    unaff_s11 = *(float *)(lVar1 + -0x3c);
    unaff_s13 = *(float *)(lVar1 + -0x1c);
    unaff_s12 = *(float *)(lVar1 + -0x18);
    unaff_s10 = *(float *)(lVar1 + -0x14);
    if (*(char *)(unaff_x24 + 0x7a9) == '\0') {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x24 + 0x7a9) = unaff_w21;
    }
    in_w8 = *(int *)(*unaff_x22 + 0xe4);
    unaff_x26 = uVar2;
  } while( true );
}


