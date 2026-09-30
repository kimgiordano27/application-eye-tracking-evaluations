/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 05ff2914
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


void OVRManager__get_fixedFoveatedRenderingLevel(long param_1,long param_2,float *param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fStack0000000000000000 = 0.0;
  fStack0000000000000004 = 0.0;
  _fStack0000000000000008 = 0;
  if (*(int *)(param_2 + 0x24) == 1) {
    FUN_06e46048(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                 *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
    fVar6 = fStack000000000000000c * DAT_014baf34;
    _fStack0000000000000008 = CONCAT44(fVar6,fStack0000000000000008);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_05ff2b6c;
    FUN_06dd9bf4(ABS(fVar6),*(long *)(param_1 + 0x38),0);
    FUN_05ff2b70(param_1);
  }
  iVar4 = *(int *)(param_2 + 0x20);
  if (iVar4 == 1) {
    fVar9 = *param_3;
    fVar10 = param_3[1];
    fVar8 = param_3[2];
    fStack0000000000000000 = fVar9 - *(float *)(param_1 + 0x6c);
    fStack0000000000000004 = fVar10 - *(float *)(param_1 + 0x70);
    fVar6 = fVar8 - *(float *)(param_1 + 0x74);
    _fStack0000000000000008 = CONCAT44(fStack000000000000000c,fVar6);
    if (DAT_07a3f7a9 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3f7a9 = '\x01';
      fVar6 = fStack0000000000000008;
    }
    fVar3 = fStack0000000000000004;
    fVar2 = fStack0000000000000000;
    puVar1 = PTR_DAT_0759b370;
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 == 0) goto LAB_05ff2b6c;
    fVar7 = (float)(**(code **)(lVar5 + 0x18))
                             (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    *(float *)(param_1 + 0x6c) = fVar9;
    *(float *)(param_1 + 0x70) = fVar10;
    *(float *)(param_1 + 0x74) = fVar8;
    lVar5 = *(long *)(param_1 + 0x48);
    if (DAT_07a3f7a9 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3f7a9 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (lVar5 == 0) goto LAB_05ff2b6c;
    fVar8 = (float)FUN_06dd9bf4(SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8),lVar5,0);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_05ff2b6c;
    fVar6 = (float)FUN_06dd9bf4(SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar6 * fVar6) / fVar7,
                                *(long *)(param_1 + 0x40),0);
    if (fVar8 <= fVar6) {
      fVar6 = fVar8;
    }
    FUN_05ff2b70(fVar6,param_1);
    iVar4 = *(int *)(param_2 + 0x20);
  }
  if (iVar4 - 2U < 3) {
    lVar5 = *(long *)(param_1 + 0x48);
    if (DAT_07a3f7a9 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3f7a9 = '\x01';
    }
    fVar9 = *param_3;
    fVar8 = param_3[1];
    fVar6 = param_3[2];
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (lVar5 == 0) {
LAB_05ff2b6c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_06dd9bf4(SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6),lVar5,0);
    FUN_05ff2b70(param_1);
  }
  return;
}


