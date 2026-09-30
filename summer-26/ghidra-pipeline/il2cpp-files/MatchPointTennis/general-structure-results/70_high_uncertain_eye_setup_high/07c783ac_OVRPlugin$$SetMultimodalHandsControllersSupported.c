/*
FUNCTION_NAME: OVRPlugin$$SetMultimodalHandsControllersSupported
ENTRY_POINT: 07c783ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c786d8) */

float OVRPlugin__SetMultimodalHandsControllersSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  float fVar4;
  int in_w8;
  long lVar5;
  long unaff_x19;
  float fVar6;
  undefined8 uVar7;
  double dVar8;
  float fVar9;
  float unaff_s9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 unaff_d10;
  float fVar13;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  float fStack0000000000000004;
  undefined4 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  undefined4 uStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  
  if (in_w8 == 0) {
    FUN_04447ba8(PTR_DAT_09f1e740);
    *(undefined1 *)(unaff_x19 + 0xf41) = 1;
  }
  puVar1 = PTR_DAT_09f1e740;
  uStack000000000000001c = FUN_09516eb8(0);
  uStack0000000000000014 = unaff_s13;
  if (*(char *)(unaff_x19 + 0xf41) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    *(undefined1 *)(unaff_x19 + 0xf41) = 1;
  }
  uVar7 = FUN_09516eb8(0);
  if (*(char *)(unaff_x19 + 0xf41) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    *(undefined1 *)(unaff_x19 + 0xf41) = 1;
  }
  lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
  fStack0000000000000024 = fStack0000000000000094;
  fVar6 = (float)FUN_09516eb8(uStack0000000000000090,fStack0000000000000094,fStack0000000000000098,
                              uStack000000000000009c,*(undefined4 *)(lVar5 + 0x48),
                              *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
  fVar13 = (float)unaff_d10;
  fVar10 = unaff_s9 * fStack0000000000000024;
  fVar11 = (float)uVar7;
  fVar12 = fVar11 * fStack0000000000000024;
  fStack000000000000002c = unaff_s9;
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  puVar2 = PTR_DAT_09f1e748;
  fVar10 = fVar13 * fStack0000000000000098 - fVar10;
  fVar9 = unaff_s9 * fVar6 - fVar11 * fStack0000000000000098;
  fVar12 = fVar12 - fVar13 * fVar6;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar4 = fStack000000000000002c;
  fVar10 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9);
  if (fVar10 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    fVar9 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 4);
  }
  else {
    fVar9 = fVar9 / fVar10;
  }
  uVar3 = uStack000000000000001c;
  fStack0000000000000004 = fVar9;
  fVar10 = (float)FUN_0770668c(uStack000000000000001c,unaff_s14,uStack0000000000000014,uVar7,
                               unaff_d10,fVar4,0);
  fStack0000000000000004 = fVar9;
  fVar12 = (float)FUN_0770668c(uVar3,unaff_s14,uStack0000000000000014,fVar6,fStack0000000000000024,
                               fStack0000000000000098,0);
  if (((0.0 <= fVar10) || (fVar9 = 1.0, 0.0 <= fVar12)) &&
     ((fVar10 <= 0.0 || (fVar9 = 0.0, fVar12 <= 0.0)))) {
    if (DAT_0a51bf3f == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf3f = '\x01';
    }
    fVar12 = fStack000000000000002c * fStack000000000000002c;
    fVar9 = fStack0000000000000024 * fStack0000000000000024;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar12 = SQRT((fVar12 + fVar11 * fVar11 + fVar13 * fVar13) *
                  (fStack0000000000000098 * fStack0000000000000098 + fVar6 * fVar6 + fVar9));
    fVar9 = 0.0;
    if (DAT_01c75bcc <= fVar12) {
      fVar12 = (fStack000000000000002c * fStack0000000000000098 +
               fVar11 * fVar6 + fVar13 * fStack0000000000000024) / fVar12;
      if (fVar12 < -1.0) {
        fVar12 = -1.0;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      dVar8 = acos((double)fVar12);
      fVar9 = (float)dVar8 * DAT_01c768e0;
    }
    fVar9 = ABS(fVar10) / fVar9;
  }
  return fVar9;
}


