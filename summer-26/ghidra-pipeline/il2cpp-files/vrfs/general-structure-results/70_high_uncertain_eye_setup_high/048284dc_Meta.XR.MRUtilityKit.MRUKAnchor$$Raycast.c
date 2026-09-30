/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$Raycast
ENTRY_POINT: 048284dc
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__Raycast(long *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  float fVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  int iVar12;
  ulong *puVar13;
  ulong *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  char cVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  char cVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  
  fVar25 = *(float *)((long)param_1 + 0x34);
  if (DAT_0722a8a4 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06db0af8);
    DAT_0722a8a4 = '\x01';
  }
  puVar7 = PTR_DAT_06db0af8;
  if (*(int *)(*(long *)PTR_DAT_06db0af8 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    bVar8 = false;
    bVar9 = false;
    bVar10 = false;
    if ((uint)ABS(fVar25) < 0x7f800001) {
      bVar8 = false;
      bVar9 = false;
      bVar10 = true;
      if (!NAN(fVar25)) {
        bVar8 = fVar25 < 1.0;
        bVar9 = fVar25 == 1.0;
        bVar10 = false;
      }
    }
                    /* try { // try from 04828584 to 04928587 has its CatchHandler @ 048286a4 */
    if (!bVar9 && bVar8 == bVar10) {
      fVar25 = 1.0;
    }
    if (DAT_0722a8a4 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06db0af8);
      DAT_0722a8a4 = '\x01';
    }
  }
  else {
                    /* catch() { ... } // from try @ 048286a4 with catch @ 0482854c
                       catch() { ... } // from try @ 048286e0 with catch @ 0482854c
                       catch() { ... } // from try @ 0482871c with catch @ 0482854c
                       catch() { ... } // from try @ 04828748 with catch @ 0482854c
                       catch() { ... } // from try @ 048287cc with catch @ 0482854c */
    bVar8 = false;
    bVar9 = false;
    bVar10 = false;
    if ((uint)ABS(fVar25) < 0x7f800001) {
      bVar8 = false;
      bVar9 = false;
      bVar10 = true;
      if (!NAN(fVar25)) {
        bVar8 = fVar25 < 1.0;
        bVar9 = fVar25 == 1.0;
        bVar10 = false;
      }
    }
    if (!bVar9 && bVar8 == bVar10) {
      fVar25 = 1.0;
    }
  }
                    /* try { // try from 048285a0 to 049286a3 has its CatchHandler @ 048286b0 */
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  puVar7 = PTR_DAT_06e1a840;
  fVar6 = DAT_0534bb40;
  bVar8 = true;
  if (((uint)ABS(fVar25) < 0x7f800001) && (bVar8 = false, !NAN(fVar25))) {
    bVar8 = fVar25 < 0.0;
  }
  if (bVar8) {
    fVar25 = 0.0;
  }
  if (((0.0 < fVar25) && (iVar12 = (int)param_1[6], 0 < iVar12)) &&
     (uVar11 = (ulong)*(uint *)(param_1 + 5), *(uint *)(param_1 + 5) != 0)) {
    iVar15 = 0;
    do {
      if (0 < (int)uVar11) {
        lVar16 = 0;
        lVar17 = 0;
        do {
          piVar1 = (int *)(param_1[4] + lVar16);
          lVar2 = (long)*piVar1;
          lVar3 = (long)piVar1[1];
          fVar26 = (float)piVar1[3];
          puVar14 = (ulong *)(*param_1 + lVar2 * 0xc);
          puVar13 = (ulong *)(*param_1 + lVar3 * 0xc);
          uVar29 = *puVar14;
          uVar11 = *puVar13;
          fVar31 = *(float *)(puVar14 + 1);
          fVar30 = *(float *)(puVar13 + 1);
          fVar22 = (float)uVar11 - (float)uVar29;
          fVar28 = (float)(uVar11 >> 0x20);
          fVar20 = (float)(uVar29 >> 0x20);
          fVar23 = fVar28 - fVar20;
          fVar27 = fVar30 - fVar31;
          if (cRam000000000723812b == '\0') {
            thunk_FUN_0159f088(puVar7);
            cRam000000000723812b = '\x01';
          }
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          fVar19 = SQRT(fVar27 * fVar27 + fVar22 * fVar22 + fVar23 * fVar23) + fVar6;
          fVar19 = (fVar19 - fVar26) / fVar19;
          cVar4 = *(char *)(param_1[2] + lVar2);
          cVar5 = *(char *)(param_1[2] + lVar3);
          fVar26 = fVar25 * fVar22 * 0.5 * fVar19;
          fVar21 = fVar25 * fVar23 * 0.5 * fVar19;
          cVar24 = -(cVar4 == '\0');
          fVar23 = fVar25 * fVar27 * 0.5 * fVar19;
          cVar18 = -(cVar5 == '\0');
          fVar20 = fVar20 + fVar21;
          puVar13 = (ulong *)(*param_1 + lVar2 * 0xc);
          fVar22 = fVar31 + fVar23;
          if (cVar4 != '\0') {
            fVar22 = fVar31;
          }
          *(float *)(puVar13 + 1) = fVar22;
          *puVar13 = uVar29 ^ (uVar29 ^ CONCAT17((char)((uint)fVar20 >> 0x18),
                                                 CONCAT16((char)((uint)fVar20 >> 0x10),
                                                          CONCAT15((char)((uint)fVar20 >> 8),
                                                                   CONCAT14(SUB41(fVar20,0),
                                                                            (float)uVar29 + fVar26))
                                                         ))) &
                              CONCAT17(cVar24,CONCAT16(cVar24,CONCAT15(cVar24,CONCAT14(cVar24,
                                                  CONCAT13(cVar24,CONCAT12(cVar24,CONCAT11(cVar24,
                                                  cVar24)))))));
          fVar20 = fVar30 - fVar23;
          if (cVar5 != '\0') {
            fVar20 = fVar30;
          }
          puVar13 = (ulong *)(*param_1 + lVar3 * 0xc);
          *puVar13 = uVar11 ^ (uVar11 ^ CONCAT44(fVar28 - fVar21,(float)uVar11 - fVar26)) &
                              CONCAT17(cVar18,CONCAT16(cVar18,CONCAT15(cVar18,CONCAT14(cVar18,
                                                  CONCAT13(cVar18,CONCAT12(cVar18,CONCAT11(cVar18,
                                                  cVar18)))))));
          *(float *)(puVar13 + 1) = fVar20;
          uVar11 = (ulong)(int)param_1[5];
          lVar17 = lVar17 + 1;
          lVar16 = lVar16 + 0x10;
        } while (lVar17 < (long)uVar11);
        iVar12 = (int)param_1[6];
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar12);
  }
  return;
}


