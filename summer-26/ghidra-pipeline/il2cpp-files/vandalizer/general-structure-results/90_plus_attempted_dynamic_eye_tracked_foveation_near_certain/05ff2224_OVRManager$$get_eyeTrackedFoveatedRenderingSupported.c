/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05ff2224
PROGRAM: vandalizer-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingSupported(long param_1,float param_2)

{
  ulong uVar1;
  float *in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s14;
  
  while( true ) {
    *in_x9 = param_2;
    uVar1 = unaff_x25 + 1;
    unaff_x23 = unaff_x23 + 0x20;
    if ((long)*(int *)(unaff_x19 + 0x50) <= (long)uVar1) {
      return;
    }
    if (param_1 == 0) break;
    if ((*(uint *)(param_1 + 0x18) <= unaff_x25) || (*(uint *)(param_1 + 0x18) <= uVar1)) {
LAB_05ff226c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    param_1 = param_1 + unaff_x23;
    fVar3 = *(float *)(param_1 + -0x38);
    fVar2 = *(float *)(param_1 + -0x34);
    fVar5 = *(float *)(param_1 + -0x3c);
    fVar7 = *(float *)(param_1 + -0x1c);
    fVar6 = *(float *)(param_1 + -0x18);
    fVar4 = *(float *)(param_1 + -0x14);
    if (*(char *)(unaff_x24 + 0x7a9) == '\0') {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x24 + 0x7a9) = unaff_w21;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    param_1 = *unaff_x20;
    if (param_1 == 0) break;
    if ((*(uint *)(param_1 + 0x18) <= unaff_x25) || (*(uint *)(param_1 + 0x18) <= uVar1))
    goto LAB_05ff226c;
    fVar5 = fVar5 - fVar7;
    fVar3 = fVar3 - fVar6;
    fVar2 = fVar2 - fVar4;
    in_x9 = (float *)(param_1 + unaff_x23);
    param_2 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) / unaff_s14 + in_x9[-8];
    unaff_x25 = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


