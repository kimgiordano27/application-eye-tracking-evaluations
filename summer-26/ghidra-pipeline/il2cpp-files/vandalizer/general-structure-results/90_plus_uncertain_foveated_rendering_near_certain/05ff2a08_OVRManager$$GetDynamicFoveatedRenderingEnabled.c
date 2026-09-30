/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 05ff2a08
PROGRAM: vandalizer-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetDynamicFoveatedRenderingEnabled(long param_1)

{
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long lVar1;
  long unaff_x23;
  long *unaff_x24;
  float fVar2;
  float fVar3;
  float unaff_s9;
  float unaff_s10;
  float fVar4;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  if (param_1 != 0) {
    fVar2 = (float)(**(code **)(param_1 + 0x18))
                             (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    *(float *)(unaff_x19 + 0x6c) = unaff_s10;
    *(float *)(unaff_x19 + 0x70) = unaff_s11;
    *(float *)(unaff_x19 + 0x74) = unaff_s9;
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (*(char *)(unaff_x23 + 0x7a9) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      *(undefined1 *)(unaff_x23 + 0x7a9) = 1;
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (lVar1 != 0) {
      fVar3 = (float)FUN_06dd9bf4(SQRT(unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11 +
                                       unaff_s9 * unaff_s9),lVar1,0);
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        fVar2 = (float)FUN_06dd9bf4(SQRT(unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14 +
                                         unaff_s12 * unaff_s12) / fVar2,*(long *)(unaff_x19 + 0x40),
                                    0);
        if (fVar3 <= fVar2) {
          fVar2 = fVar3;
        }
        FUN_05ff2b70(fVar2);
        if (*(int *)(unaff_x21 + 0x20) - 2U < 3) {
          lVar1 = *(long *)(unaff_x19 + 0x48);
          if (DAT_07a3f7a9 == '\0') {
            FUN_031f20f4(PTR_DAT_0759b370);
            DAT_07a3f7a9 = '\x01';
          }
          fVar4 = *unaff_x20;
          fVar3 = unaff_x20[1];
          fVar2 = unaff_x20[2];
          if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          if (lVar1 == 0) goto LAB_05ff2b6c;
          FUN_06dd9bf4(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2),lVar1,0);
          FUN_05ff2b70();
        }
        return;
      }
    }
  }
LAB_05ff2b6c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


