/*
FUNCTION_NAME: OVRPlugin$$GetLayerTexture
ENTRY_POINT: 0600907c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06009354) */

float OVRPlugin__GetLayerTexture(void)

{
  undefined *puVar1;
  float fVar2;
  int in_w8;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  float fVar7;
  float unaff_s9;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 unaff_d10;
  float fVar11;
  float fStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  undefined4 uStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  
  if (in_w8 == 0) {
    FUN_031f20f4(PTR_DAT_0759b378);
    *(undefined1 *)(unaff_x19 + 0xba6) = 1;
  }
  uVar5 = FUN_06e464bc(0);
  if (*(char *)(unaff_x19 + 0xba6) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    *(undefined1 *)(unaff_x19 + 0xba6) = 1;
  }
  lVar3 = *(long *)(*unaff_x20 + 0xb8);
  fStack0000000000000024 = fStack0000000000000094;
  fVar4 = (float)FUN_06e464bc(uStack0000000000000090,fStack0000000000000094,fStack0000000000000098,
                              uStack000000000000009c,*(undefined4 *)(lVar3 + 0x48),
                              *(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x50),0);
  fVar11 = (float)unaff_d10;
  fVar8 = unaff_s9 * fStack0000000000000024;
  fVar9 = (float)uVar5;
  fVar10 = fVar9 * fStack0000000000000024;
  fStack000000000000002c = unaff_s9;
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  puVar1 = PTR_DAT_0759b370;
  fVar8 = fVar11 * fStack0000000000000098 - fVar8;
  fVar7 = unaff_s9 * fVar4 - fVar9 * fStack0000000000000098;
  fVar10 = fVar10 - fVar11 * fVar4;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar2 = fStack000000000000002c;
  fVar8 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar7 * fVar7);
  if (fVar8 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    fVar7 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 4);
  }
  else {
    fVar7 = fVar7 / fVar8;
  }
  fStack0000000000000004 = fVar7;
  fVar8 = (float)FUN_05f58000(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              uVar5,unaff_d10,fVar2,0);
  fStack0000000000000004 = fVar7;
  fVar10 = (float)FUN_05f58000(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_
                               ,fVar4,fStack0000000000000024,fStack0000000000000098,0);
  if (((0.0 <= fVar8) || (fVar7 = 1.0, 0.0 <= fVar10)) &&
     ((fVar8 <= 0.0 || (fVar7 = 0.0, fVar10 <= 0.0)))) {
    if (DAT_07a444b2 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a444b2 = '\x01';
    }
    fVar10 = fStack000000000000002c * fStack000000000000002c;
    fVar7 = fStack0000000000000024 * fStack0000000000000024;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar10 = SQRT((fVar10 + fVar9 * fVar9 + fVar11 * fVar11) *
                  (fStack0000000000000098 * fStack0000000000000098 + fVar4 * fVar4 + fVar7));
    fVar7 = 0.0;
    if (DAT_014ba698 <= fVar10) {
      fVar10 = (fStack000000000000002c * fStack0000000000000098 +
               fVar9 * fVar4 + fVar11 * fStack0000000000000024) / fVar10;
      if (fVar10 < -1.0) {
        fVar10 = -1.0;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      dVar6 = acos((double)fVar10);
      fVar7 = (float)dVar6 * DAT_014baf34;
    }
    fVar7 = ABS(fVar8) / fVar7;
  }
  return fVar7;
}


