/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 05ff29bc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFoveatedRendering
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  int in_w8;
  long lVar2;
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s9;
  float fVar6;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  
  fStack0000000000000004 = unaff_s11 - param_2;
  fStack0000000000000008 = unaff_s9 - param_3;
  if (in_w8 == 0) {
    fStack0000000000000000 = unaff_s13;
    FUN_031f20f4(PTR_DAT_0759b370);
    *(undefined1 *)(unaff_x23 + 0x7a9) = 1;
    unaff_s13 = fStack0000000000000000;
  }
  fVar6 = fStack0000000000000008;
  fVar5 = fStack0000000000000004;
  puVar1 = PTR_DAT_0759b370;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x19 + 0x58);
  if (lVar2 != 0) {
    fVar3 = (float)(**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    *(float *)(unaff_x19 + 0x6c) = unaff_s10;
    *(float *)(unaff_x19 + 0x70) = unaff_s11;
    *(float *)(unaff_x19 + 0x74) = unaff_s9;
    lVar2 = *(long *)(unaff_x19 + 0x48);
    if (*(char *)(unaff_x23 + 0x7a9) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      *(undefined1 *)(unaff_x23 + 0x7a9) = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (lVar2 != 0) {
      fVar4 = (float)FUN_06dd9bf4(SQRT(unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11 +
                                       unaff_s9 * unaff_s9),lVar2,0);
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        fVar5 = (float)FUN_06dd9bf4(SQRT(unaff_s13 * unaff_s13 + fVar5 * fVar5 + fVar6 * fVar6) /
                                    fVar3,*(long *)(unaff_x19 + 0x40),0);
        if (fVar4 <= fVar5) {
          fVar5 = fVar4;
        }
        FUN_05ff2b70(fVar5);
        if (*(int *)(unaff_x21 + 0x20) - 2U < 3) {
          lVar2 = *(long *)(unaff_x19 + 0x48);
          if (DAT_07a3f7a9 == '\0') {
            FUN_031f20f4(PTR_DAT_0759b370);
            DAT_07a3f7a9 = '\x01';
          }
          fVar3 = *unaff_x20;
          fVar6 = unaff_x20[1];
          fVar5 = unaff_x20[2];
          if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          if (lVar2 == 0) goto LAB_05ff2b6c;
          FUN_06dd9bf4(SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5),lVar2,0);
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


