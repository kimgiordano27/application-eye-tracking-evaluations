/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 090a4320
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_17;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetHandTrackingEnabled(void)

{
  float fVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar12;
  long *plVar13;
  long *unaff_x23;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  puVar3 = PTR_DAT_0ac78f60;
  uStack0000000000000008 = 0;
  uVar12 = 0;
  bVar2 = false;
  uStack0000000000000000 = 0;
  uStack0000000000000010 = 0;
  do {
    lVar8 = *(long *)(unaff_x20 + 0xd0);
    if (lVar8 == 0) goto LAB_090a4580;
    uStack0000000000000008 = *(undefined8 *)(lVar8 + 200);
    uStack0000000000000000 = *(undefined8 *)(lVar8 + 0xc0);
    uStack0000000000000010 = *(undefined8 *)(lVar8 + 0xd0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    iVar4 = FUN_090bdfa0();
    if (iVar4 == 0) {
      lVar8 = *unaff_x19;
      if (lVar8 == 0) goto LAB_090a4580;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_090a4584;
      *(undefined4 *)(lVar8 + uVar12 * 4 + 0x20) = 0;
    }
    else {
      plVar13 = *(long **)(unaff_x20 + 0x130);
      if (plVar13 == (long *)0x0) {
LAB_090a4580:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar8 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
                    /* try { // try from 090a43a0 to 091a43af has its CatchHandler @ 090a43b0 */
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_090a43f0;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
                    /* catch() { ... } // from try @ 090a4304 with catch @ 090a43b0
                       catch() { ... } // from try @ 090a43a0 with catch @ 090a43b0 */
        } while (uVar9 != 0);
      }
                    /* try { // try from 090a43b4 to 091a43b7 has its CatchHandler @ 090a43c0 */
                    /* try { // try from 090a43b8 to 091a43c3 has its CatchHandler @ 090a3d30 */
      puVar5 = (undefined8 *)FUN_04980e68(plVar13,*(long *)puVar3,0);
                    /* catch() { ... } // from try @ 090a43b4 with catch @ 090a43c0 */
LAB_090a43f0:
      fVar14 = (float)(*(code *)*puVar5)(plVar13,uVar12 & 0xffffffff,puVar5[1]);
      lVar8 = *(long *)(unaff_x20 + 0xd0);
      if (lVar8 == 0) goto LAB_090a4580;
      lVar10 = *unaff_x19;
      fVar15 = (fVar14 - *(float *)(lVar8 + 0xd8)) / (unaff_s11 - *(float *)(lVar8 + 0xd8));
      fVar14 = unaff_s11;
      if (fVar15 <= unaff_s11) {
        fVar14 = fVar15;
      }
      fVar1 = unaff_s8;
      if (0.0 <= fVar15) {
        fVar1 = fVar14;
      }
      if (lVar10 == 0) goto LAB_090a4580;
      if (*(uint *)(lVar10 + 0x18) <= uVar12) {
LAB_090a4584:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      lVar6 = *unaff_x23;
      *(float *)(lVar10 + uVar12 * 4 + 0x20) = fVar1;
      uStack0000000000000008 = *(undefined8 *)(lVar8 + 200);
      uStack0000000000000000 = *(undefined8 *)(lVar8 + 0xc0);
      uStack0000000000000010 = *(undefined8 *)(lVar8 + 0xd0);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      iVar4 = FUN_090bdfa0();
      if (iVar4 == 2) {
        lVar8 = *unaff_x19;
        if (lVar8 == 0) goto LAB_090a4580;
        if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_090a4584;
        bVar2 = true;
        fVar14 = *(float *)(lVar8 + uVar12 * 4 + 0x20);
        if (fVar14 <= unaff_s10) {
          unaff_s10 = fVar14;
        }
      }
      else {
        lVar8 = *(long *)(unaff_x20 + 0xd0);
        if (lVar8 == 0) goto LAB_090a4580;
        uStack0000000000000008 = *(undefined8 *)(lVar8 + 200);
        uStack0000000000000000 = *(undefined8 *)(lVar8 + 0xc0);
        uStack0000000000000010 = *(undefined8 *)(lVar8 + 0xd0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        iVar4 = FUN_090bdfa0();
        lVar8 = *unaff_x19;
        if (iVar4 == 1) {
          if (lVar8 == 0) goto LAB_090a4580;
          if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_090a4584;
          fVar14 = *(float *)(lVar8 + uVar12 * 4 + 0x20);
          if (unaff_s9 <= fVar14) {
            unaff_s9 = fVar14;
          }
        }
        else if (lVar8 == 0) goto LAB_090a4580;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_090a4584;
      uVar7 = 1 << (ulong)((uint)uVar12 & 0x1f);
      if (*(float *)(lVar8 + uVar12 * 4 + 0x20) <= 0.0) {
        uVar7 = *(uint *)(unaff_x20 + 0x158) & (uVar7 ^ 0xffffffff);
      }
      else {
        uVar7 = *(uint *)(unaff_x20 + 0x158) | uVar7;
      }
      *(uint *)(unaff_x20 + 0x158) = uVar7;
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == 5) {
      if (!bVar2) {
        unaff_s10 = unaff_s9;
      }
      return unaff_s10;
    }
  } while( true );
}


