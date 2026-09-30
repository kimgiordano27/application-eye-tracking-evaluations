/*
FUNCTION_NAME: OVRPlugin$$GetControllerState2
ENTRY_POINT: 06abbac4
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06abbaf8) */

void OVRPlugin__GetControllerState2(void)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar8;
  undefined8 uVar7;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  
  fVar4 = (float)FUN_06a716e8();
  fVar13 = *(float *)(unaff_x19 + 200);
  fVar14 = *(float *)(unaff_x19 + 0xf0);
  bVar2 = fVar13 < 0.0;
  if (1.0 < fVar13) {
    fVar13 = 1.0;
  }
  if (bVar2) {
    fVar13 = 0.0;
  }
  fVar9 = (float)*unaff_x20;
  fVar11 = (float)((ulong)*unaff_x20 >> 0x20);
  fVar15 = *(float *)(unaff_x19 + 0x110);
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  fVar5 = (float)*(undefined8 *)(unaff_x19 + 0x108);
  fVar8 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x108) >> 0x20);
  *unaff_x20 = CONCAT44(fVar8 + ((fVar11 + ((float)((ulong)*(undefined8 *)(unaff_x19 + 0xe8) >> 0x20
                                                   ) - fVar11) * fVar13) - fVar8) * fVar4,
                        fVar5 + ((fVar9 + ((float)*(undefined8 *)(unaff_x19 + 0xe8) - fVar9) *
                                          fVar13) - fVar5) * fVar4);
  *(float *)(unaff_x20 + 1) =
       fVar15 + fVar4 * ((*(float *)(unaff_x20 + 1) + (fVar14 - *(float *)(unaff_x20 + 1)) * fVar13)
                        - fVar15);
  if (*(char *)(unaff_x19 + 0x105) == '\0') {
    lVar3 = *(long *)(unaff_x19 + 0x98);
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x90);
  }
  if (lVar3 != 0) {
    FUN_06a716e8(lVar3,0);
    FUN_07a00640(*(undefined4 *)((long)unaff_x20 + 0xc),*(undefined4 *)(unaff_x20 + 2),
                 *(undefined4 *)((long)unaff_x20 + 0x14),*(undefined4 *)(unaff_x20 + 3),
                 *(undefined4 *)(unaff_x19 + 0xf4),*(undefined4 *)(unaff_x19 + 0xf8),
                 *(undefined4 *)(unaff_x19 + 0xfc),*(undefined4 *)(unaff_x19 + 0x100),0);
    uVar16 = *(undefined4 *)(unaff_x19 + 0x120);
                    /* try { // try from 06abbb84 to 06bbbd77 has its CatchHandler @ 06abbb84
                       catch() { ... } // from try @ 06abbb84 with catch @ 06abbb84
                       catch() { ... } // from try @ 06abbebc with catch @ 06abbb84
                       catch() { ... } // from try @ 06abbfd0 with catch @ 06abbb84
                       catch() { ... } // from try @ 06abbfd8 with catch @ 06abbb84
                       catch() { ... } // from try @ 06abc090 with catch @ 06abbb84 */
    uVar10 = *(undefined4 *)(unaff_x19 + 0x118);
    uVar12 = *(undefined4 *)(unaff_x19 + 0x11c);
    uVar6 = FUN_07a00640(*(undefined4 *)(unaff_x19 + 0x114),0);
    uVar1 = *(undefined4 *)(unaff_x20 + 1);
    *(undefined4 *)((long)unaff_x20 + 0xc) = uVar6;
    *(undefined4 *)(unaff_x20 + 2) = uVar10;
    *(undefined4 *)((long)unaff_x20 + 0x14) = uVar12;
    *(undefined4 *)(unaff_x20 + 3) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x124) = *unaff_x20;
    *(undefined4 *)(unaff_x19 + 300) = uVar1;
    uVar7 = *(undefined8 *)((long)unaff_x20 + 0xc);
    *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)((long)unaff_x20 + 0x14);
    *(undefined8 *)(unaff_x19 + 0x130) = uVar7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


