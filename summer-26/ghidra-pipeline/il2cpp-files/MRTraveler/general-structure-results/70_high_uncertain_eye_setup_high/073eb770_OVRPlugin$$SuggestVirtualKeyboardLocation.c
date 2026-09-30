/*
FUNCTION_NAME: OVRPlugin$$SuggestVirtualKeyboardLocation
ENTRY_POINT: 073eb770
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SuggestVirtualKeyboardLocation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  
  FUN_03c8f898();
                    /* try { // try from 073eb778 to 074eb77f has its CatchHandler @ 073eb780 */
  *(undefined1 *)(unaff_x21 + 0x7d4) = 1;
  puVar1 = PTR_DAT_08eb1b88;
  if (unaff_x20 != (long *)0x0) {
                    /* catch() { ... } // from try @ 073eb5d4 with catch @ 073eb780
                       catch() { ... } // from try @ 073eb63c with catch @ 073eb780
                       catch() { ... } // from try @ 073eb6a0 with catch @ 073eb780
                       catch() { ... } // from try @ 073eb708 with catch @ 073eb780
                       catch() { ... } // from try @ 073eb764 with catch @ 073eb780
                       catch() { ... } // from try @ 073eb778 with catch @ 073eb780 */
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e73668) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_073eb7dc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_073eb7dc:
    iVar3 = (*(code *)*puVar4)();
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar6);
      lVar6 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_08eb5f10;
    lVar6 = *(long *)(lVar6 + 0xb8);
    if (iVar3 == 0) {
      lVar5 = *(long *)PTR_DAT_08eb5f10;
      uVar17 = *(undefined8 *)(lVar6 + 0x54);
      fVar18 = *(float *)(lVar6 + 0x5c);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar5 = *(long *)puVar2;
        lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      pfVar8 = *(float **)(lVar5 + 0xb8);
      uVar13 = *(undefined8 *)(lVar6 + 0x6c);
      fVar12 = *pfVar8;
      fVar14 = pfVar8[1];
      fVar16 = pfVar8[2];
      fVar10 = (float)*(undefined8 *)(lVar6 + 0x84) * fVar14;
      fVar11 = (float)((ulong)*(undefined8 *)(lVar6 + 0x84) >> 0x20) * fVar14;
      fVar14 = *(float *)(lVar6 + 0x8c) * fVar14;
      fVar15 = *(float *)(lVar6 + 0x74);
    }
    else {
      lVar5 = *(long *)PTR_DAT_08eb5f10;
      uVar17 = *(undefined8 *)(lVar6 + 0xc);
      fVar18 = *(float *)(lVar6 + 0x14);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar5 = *(long *)puVar2;
        lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      pfVar8 = *(float **)(lVar5 + 0xb8);
      uVar13 = *(undefined8 *)(lVar6 + 0x24);
      fVar12 = *pfVar8;
      fVar14 = pfVar8[1];
      fVar16 = pfVar8[2];
      fVar10 = (float)*(undefined8 *)(lVar6 + 0x3c) * fVar14;
      fVar11 = (float)((ulong)*(undefined8 *)(lVar6 + 0x3c) >> 0x20) * fVar14;
      fVar14 = *(float *)(lVar6 + 0x44) * fVar14;
      fVar15 = *(float *)(lVar6 + 0x2c);
    }
    if (unaff_x19 != 0) {
      *(ulong *)(unaff_x19 + 0x10) =
           CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar12 + fVar11 +
                    (float)((ulong)uVar13 >> 0x20) * fVar16,
                    (float)uVar17 * fVar12 + fVar10 + (float)uVar13 * fVar16);
      *(float *)(unaff_x19 + 0x18) = fVar18 * fVar12 + fVar14 + fVar15 * fVar16;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


