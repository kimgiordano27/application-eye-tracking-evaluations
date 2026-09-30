/*
FUNCTION_NAME: OVRManager$$set_suggestedCpuPerfLevel
ENTRY_POINT: 053052c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_suggestedCpuPerfLevel(long param_1,long param_2,float *param_3)

{
  undefined *puVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  int in_w8;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fStack0000000000000000 = 0.0;
  fStack0000000000000004 = 0.0;
  _fStack0000000000000008 = 0;
  if (in_w8 == 1) {
    FUN_060df738(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                 *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
    fVar7 = fStack000000000000000c * DAT_011b0124;
    _fStack0000000000000008 = CONCAT44(fVar7,fStack0000000000000008);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_053054f8;
    FUN_0609fe3c(ABS(fVar7),*(long *)(param_1 + 0x38),0);
    FUN_053054fc(param_1);
  }
  iVar5 = *(int *)(param_2 + 0x20);
  if (iVar5 == 1) {
    fVar9 = *param_3;
    fVar11 = param_3[1];
    fVar12 = param_3[2];
    fStack0000000000000000 = fVar9 - *(float *)(param_1 + 0x6c);
    fStack0000000000000004 = fVar11 - *(float *)(param_1 + 0x70);
    fVar7 = fVar12 - *(float *)(param_1 + 0x74);
    _fStack0000000000000008 = CONCAT44(fStack000000000000000c,fVar7);
    if (DAT_06bb42c7 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bb42c7 = '\x01';
      fVar7 = fStack0000000000000008;
    }
    fVar4 = fStack0000000000000004;
    fVar3 = fStack0000000000000000;
    puVar1 = PTR_DAT_067c8f80;
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 == 0) goto LAB_053054f8;
    fVar8 = (float)(**(code **)(lVar6 + 0x18))
                             (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    cVar2 = DAT_06bb42c7;
    lVar6 = *(long *)(param_1 + 0x48);
    *(float *)(param_1 + 0x6c) = fVar9;
    *(float *)(param_1 + 0x70) = fVar11;
    *(float *)(param_1 + 0x74) = fVar12;
    if (cVar2 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bb42c7 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (lVar6 == 0) goto LAB_053054f8;
    fVar9 = (float)FUN_0609fe3c(SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12),lVar6,0);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_053054f8;
    fVar7 = (float)FUN_0609fe3c(SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar7 * fVar7) / fVar8,
                                *(long *)(param_1 + 0x40),0);
    if (fVar9 <= fVar7) {
      fVar7 = fVar9;
    }
    FUN_053054fc(fVar7,param_1);
    iVar5 = *(int *)(param_2 + 0x20);
  }
  if (iVar5 - 2U < 3) {
    lVar6 = *(long *)(param_1 + 0x48);
    if (DAT_06bb42c7 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bb42c7 = '\x01';
    }
    fVar7 = *param_3;
    uVar10 = *(undefined8 *)(param_3 + 1);
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (lVar6 == 0) {
LAB_053054f8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    fVar9 = (float)uVar10;
    fVar11 = (float)((ulong)uVar10 >> 0x20);
    FUN_0609fe3c(SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar11 * fVar11),lVar6,0);
    FUN_053054fc(param_1);
  }
  return;
}


