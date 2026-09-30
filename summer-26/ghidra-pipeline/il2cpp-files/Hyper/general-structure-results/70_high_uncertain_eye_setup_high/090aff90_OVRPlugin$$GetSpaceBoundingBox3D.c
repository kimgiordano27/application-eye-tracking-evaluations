/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundingBox3D
ENTRY_POINT: 090aff90
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundingBox3D(void)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  
  FUN_04947ee4();
  *(undefined1 *)(unaff_x21 + 0x2fb) = 1;
  plVar5 = (long *)(unaff_x20 + 0x70);
  if (*plVar5 == 0) {
                    /* try { // try from 090affbc to 091affbf has its CatchHandler @ 090affc0 */
    if (unaff_x19 == 0) goto LAB_090b0208;
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090afee0 with catch @ 090affc0
                       catch(type#1 @ 0a568bf8) { ... } // from try @ 090affbc with catch @ 090affc0
                       try { // try from 090affc0 to 091affe3 has its CatchHandler @ 090afde8 */
    uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
  }
  else {
    if (unaff_x19 == 0) {
LAB_090b0208:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
                    /* try { // try from 090affb0 to 091affb3 has its CatchHandler @ 090affc8 */
                    /* try { // try from 090affb4 to 091affbb has its CatchHandler @ 090afde8 */
    if ((int)*(uint *)(unaff_x19 + 0x18) <= *(int *)(*plVar5 + 0x18)) goto LAB_090affe8;
  }
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090aff08 with catch @ 090affc4
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090affb0 with catch @ 090affc8
                        */
  lVar8 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac758e8,uVar3);
  *plVar5 = lVar8;
  thunk_FUN_049ee3d8(plVar5,lVar8);
                    /* try { // try from 090affe4 to 091affe7 has its CatchHandler @ 090afff4 */
  uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
LAB_090affe8:
  puVar2 = PTR_DAT_0ac0a830;
  fVar15 = 0.0;
                    /* catch() { ... } // from try @ 090affe4 with catch @ 090afff4 */
                    /* try { // try from 090afff8 to 091affff has its CatchHandler @ 090b0008 */
  if (1 < (int)uVar3) {
                    /* try { // try from 090b0000 to 091b000b has its CatchHandler @ 090afde8 */
    pfVar6 = (float *)(unaff_x19 + 0x34);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 090afff8 with catch @ 090b0008
                        */
    uVar7 = 1;
    do {
      if ((uVar3 & 0xffffffff) <= uVar7) goto LAB_090b0204;
      fVar14 = *pfVar6;
      uVar16 = *(undefined8 *)(pfVar6 + -2);
      uVar17 = *(undefined8 *)(pfVar6 + -5);
      fVar18 = pfVar6[-3];
      if (DAT_0b32d33b == '\0') {
        FUN_04947ee4(puVar2);
        DAT_0b32d33b = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      fVar9 = (float)uVar16 - (float)uVar17;
      fVar11 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
      uVar3 = *(ulong *)(unaff_x19 + 0x18);
      uVar7 = uVar7 + 1;
      pfVar6 = pfVar6 + 3;
      fVar15 = fVar15 + SQRT(fVar9 * fVar9 + fVar11 * fVar11 + (fVar14 - fVar18) * (fVar14 - fVar18)
                            );
    } while ((long)uVar7 < (long)(int)uVar3);
  }
  if (0 < (int)uVar3) {
    uVar7 = 0;
    pfVar6 = (float *)(unaff_x19 + 0x28);
    lVar8 = 0x20;
    do {
      if (lVar8 == 0x20) {
        if ((uint)uVar3 < 2) goto LAB_090b0204;
        fVar18 = *(float *)(unaff_x19 + 0x34);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar17 = *(undefined8 *)(unaff_x19 + 0x20);
        fVar14 = *(float *)(unaff_x19 + 0x28);
      }
      else {
        if ((uVar3 & 0xffffffff) <= uVar7) {
LAB_090b0204:
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        fVar18 = *pfVar6;
        uVar16 = *(undefined8 *)(pfVar6 + -2);
        uVar17 = *(undefined8 *)(pfVar6 + -5);
        fVar14 = pfVar6[-3];
      }
      fVar9 = (float)uVar16 - (float)uVar17;
      fVar11 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
      fVar18 = fVar18 - fVar14;
      lVar4 = *plVar5;
      if (lVar4 == 0) goto LAB_090b0208;
      if (((uVar3 & 0xffffffff) <= uVar7) || (*(uint *)(lVar4 + 0x18) <= uVar7)) goto LAB_090b0204;
      fVar12 = *pfVar6;
      *(undefined8 *)(lVar4 + lVar8) = *(undefined8 *)(pfVar6 + -2);
      *(float *)((undefined8 *)(lVar4 + lVar8) + 1) = fVar12;
      lVar4 = *plVar5;
      if (lVar4 == 0) goto LAB_090b0208;
      fVar12 = fVar11;
      fVar13 = fVar18;
      uVar10 = FUN_0a16abe8(0);
      if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_090b0204;
      lVar4 = lVar4 + lVar8;
      *(undefined4 *)(lVar4 + 0xc) = uVar10;
      *(float *)(lVar4 + 0x10) = fVar12;
      *(float *)(lVar4 + 0x14) = fVar13;
      *(float *)(lVar4 + 0x18) = fVar14;
      lVar4 = *plVar5;
      if (lVar4 == 0) goto LAB_090b0208;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (lVar8 == 0x20) {
        fVar14 = 0.0;
        if ((ulong)uVar1 == 0) goto LAB_090b0204;
      }
      else {
        if ((uVar1 <= uVar7) || (uVar1 <= (int)uVar7 - 1U)) goto LAB_090b0204;
        fVar14 = *(float *)(lVar4 + lVar8 + -4);
        if (DAT_0b32d33b == '\0') {
          FUN_04947ee4(puVar2);
          DAT_0b32d33b = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        fVar14 = SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar18 * fVar18) / fVar15 + fVar14;
      }
      uVar3 = *(ulong *)(unaff_x19 + 0x18);
      uVar7 = uVar7 + 1;
      lVar4 = lVar4 + lVar8;
      lVar8 = lVar8 + 0x20;
      pfVar6 = pfVar6 + 3;
      *(float *)(lVar4 + 0x1c) = fVar14;
    } while ((long)uVar7 < (long)(int)uVar3);
  }
  return;
}


