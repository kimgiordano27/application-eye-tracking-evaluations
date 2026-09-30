/*
FUNCTION_NAME: OVRPlugin$$set_ipd
ENTRY_POINT: 073d9918
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073d9c88) */

float OVRPlugin__set_ipd(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if (DAT_09410146 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_09410146 = '\x01';
  }
  puVar1 = PTR_DAT_08e68e18;
  lVar2 = *(long *)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  uVar3 = FUN_085d2bd4(param_1,param_2,param_3,param_4,*(undefined4 *)(lVar2 + 0x48),
                       *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_09410146 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_09410146 = '\x01';
  }
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  uVar5 = FUN_085d2bd4(param_5,param_6,param_7,param_8,*(undefined4 *)(lVar2 + 0x48),
                       *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_09410146 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_09410146 = '\x01';
  }
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar4 = (float)FUN_085d2bd4(uStack0000000000000000,fStack0000000000000004,fStack0000000000000008,
                              uStack000000000000000c,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  fVar10 = (float)param_6;
  fVar11 = (float)param_7;
  fVar9 = (float)uVar5;
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  puVar1 = PTR_DAT_08e6a6b8;
  fVar8 = fVar10 * fStack0000000000000008 - fVar11 * fStack0000000000000004;
  fVar7 = fVar11 * fVar4 - fVar9 * fStack0000000000000008;
  fVar12 = fVar9 * fStack0000000000000004 - fVar10 * fVar4;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if ((SQRT(fVar12 * fVar12 + fVar8 * fVar8 + fVar7 * fVar7) <= DAT_018b0528) &&
     (DAT_0940fff5 == '\0')) {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fff5 = '\x01';
  }
  fVar7 = (float)FUN_03f04c24(uVar3,(int)param_2,param_3 & 0xffffffff,uVar5,param_6,fVar11,0);
  fVar8 = (float)FUN_03f04c24(uVar3,(int)param_2,param_3 & 0xffffffff,fVar4,fStack0000000000000004,
                              fStack0000000000000008,0);
  if (((0.0 <= fVar7) || (fVar12 = 1.0, 0.0 <= fVar8)) &&
     ((fVar7 <= 0.0 || (fVar12 = 0.0, fVar8 <= 0.0)))) {
    if (DAT_094108d3 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094108d3 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar8 = SQRT((fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10) *
                 (fStack0000000000000008 * fStack0000000000000008 +
                 fVar4 * fVar4 + fStack0000000000000004 * fStack0000000000000004));
    fVar12 = 0.0;
    if (DAT_018aff20 <= fVar8) {
      fVar8 = (fVar11 * fStack0000000000000008 + fVar9 * fVar4 + fVar10 * fStack0000000000000004) /
              fVar8;
      if (fVar8 < -1.0) {
        fVar8 = -1.0;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      dVar6 = acos((double)fVar8);
      fVar12 = (float)dVar6 * DAT_018b1028;
    }
    fVar12 = ABS(fVar7) / fVar12;
  }
  return fVar12;
}


