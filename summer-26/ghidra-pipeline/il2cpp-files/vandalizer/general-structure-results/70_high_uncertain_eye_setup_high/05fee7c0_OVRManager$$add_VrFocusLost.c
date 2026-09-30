/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 05fee7c0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__add_VrFocusLost(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float unaff_s8;
  float fVar13;
  float unaff_s9;
  float fVar14;
  float unaff_s10;
  float fVar15;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar16;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  
  *(undefined1 *)(unaff_x21 + 0xa81) = 1;
  puVar1 = PTR_DAT_0759b370;
  fVar16 = unaff_s10 - unaff_s13;
  fVar15 = unaff_s9 - unaff_s12;
  fVar14 = unaff_s8 - unaff_s11;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar13 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15);
  if (fVar13 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fStack0000000000000054 = *pfVar4;
    in_stack_00000058 = pfVar4[1];
    fStack000000000000005c = pfVar4[2];
  }
  else {
    fStack0000000000000054 = fVar16 / fVar13;
    in_stack_00000058 = fVar15 / fVar13;
    fStack000000000000005c = fVar14 / fVar13;
  }
  plVar8 = *(long **)(unaff_x20 + 200);
  if (DAT_07a3f7a9 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3f7a9 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_075f3eb0) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_05fee8f4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)PTR_DAT_075f3eb0,1);
LAB_05fee8f4:
  uVar2 = (*(code *)*puVar3)(fVar13,plVar8,&stack0x00000048,&stack0x00000028,puVar3[1]);
  puVar1 = PTR_DAT_075f6b78;
  if ((uVar2 & 1) == 0) {
    lVar5 = *(long *)PTR_DAT_075f6b78;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar12 = puVar3[1];
    uVar11 = *puVar3;
    uVar10 = puVar3[3];
    uVar9 = puVar3[2];
    unaff_x19[4] = puVar3[4];
  }
  else {
    FUN_06e5502c();
    FUN_05fee0ec(uStack0000000000000028,uStack000000000000002c,uStack0000000000000030,
                 uStack0000000000000034,uStack0000000000000038,uStack000000000000003c);
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    unaff_x19[4] = 0;
  }
  unaff_x19[1] = uVar12;
  *unaff_x19 = uVar11;
  unaff_x19[3] = uVar10;
  unaff_x19[2] = uVar9;
  thunk_FUN_0329bf60();
  return uVar2 & 1;
}


