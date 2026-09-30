/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 05ff2964
PROGRAM: vandalizer-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_fixedFoveatedRenderingLevel(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000008;
  
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_05ff2b6c;
  FUN_06dd9bf4(ABS(in_stack_00000008._4_4_ * DAT_014baf34),*(long *)(unaff_x19 + 0x38),0);
  FUN_05ff2b70();
  iVar2 = *(int *)(unaff_x21 + 0x20);
  if (iVar2 == 1) {
    fVar6 = *unaff_x20;
    fVar7 = unaff_x20[1];
    fVar5 = unaff_x20[2];
    fVar9 = fVar6 - *(float *)(unaff_x19 + 0x6c);
    fVar10 = fVar7 - *(float *)(unaff_x19 + 0x70);
    fVar8 = fVar5 - *(float *)(unaff_x19 + 0x74);
    if (DAT_07a3f7a9 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3f7a9 = '\x01';
    }
    puVar1 = PTR_DAT_0759b370;
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar3 = *(long *)(unaff_x19 + 0x58);
    if (lVar3 == 0) goto LAB_05ff2b6c;
    fVar4 = (float)(**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    *(float *)(unaff_x19 + 0x6c) = fVar6;
    *(float *)(unaff_x19 + 0x70) = fVar7;
    *(float *)(unaff_x19 + 0x74) = fVar5;
    lVar3 = *(long *)(unaff_x19 + 0x48);
    if (DAT_07a3f7a9 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3f7a9 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (lVar3 == 0) goto LAB_05ff2b6c;
    fVar5 = (float)FUN_06dd9bf4(SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5),lVar3,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05ff2b6c;
    fVar6 = (float)FUN_06dd9bf4(SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8) / fVar4,
                                *(long *)(unaff_x19 + 0x40),0);
    if (fVar5 <= fVar6) {
      fVar6 = fVar5;
    }
    FUN_05ff2b70(fVar6);
    iVar2 = *(int *)(unaff_x21 + 0x20);
  }
  if (iVar2 - 2U < 3) {
    lVar3 = *(long *)(unaff_x19 + 0x48);
    if (DAT_07a3f7a9 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3f7a9 = '\x01';
    }
    fVar7 = *unaff_x20;
    fVar6 = unaff_x20[1];
    fVar5 = unaff_x20[2];
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (lVar3 == 0) {
LAB_05ff2b6c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_06dd9bf4(SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5),lVar3,0);
    FUN_05ff2b70();
  }
  return;
}


