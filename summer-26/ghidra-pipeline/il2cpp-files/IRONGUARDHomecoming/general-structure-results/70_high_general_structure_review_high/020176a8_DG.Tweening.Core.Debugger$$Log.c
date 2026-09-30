/*
FUNCTION_NAME: DG.Tweening.Core.Debugger$$Log
ENTRY_POINT: 020176a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void DG_Tweening_Core_Debugger__Log(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long *unaff_x19;
  long unaff_x20;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  int *piVar21;
  long unaff_x28;
  uint *puVar22;
  float fVar23;
  undefined4 uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  thunk_FUN_01efb3a4();
                    /* try { // try from 020176ac to 021176d3 has its CatchHandler @ 020176ac
                       catch() { ... } // from try @ 020176ac with catch @ 020176ac
                       catch() { ... } // from try @ 020176d8 with catch @ 020176ac */
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
                    );
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__
                    );
                    /* try { // try from 020176d4 to 021176d7 has its CatchHandler @ 020176e8 */
                    /* try { // try from 020176d8 to 021176fb has its CatchHandler @ 020176ac */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  *(undefined1 *)(unaff_x20 + 0x3b) = 1;
                    /* catch() { ... } // from try @ 020176d4 with catch @ 020176e8 */
  plVar16 = (long *)(unaff_x28 + 0x20);
  lVar18 = *plVar16;
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* try { // try from 020176fc to 0211771f has its CatchHandler @ 020176fc
                       catch() { ... } // from try @ 020176fc with catch @ 020176fc
                       catch() { ... } // from try @ 02017728 with catch @ 020176fc */
  uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (lVar18,0,0);
  if ((uVar9 & 1) != 0) {
                    /* try { // try from 02017720 to 02117727 has its CatchHandler @ 0201774c */
    uVar10 = FUN_022c60a8();
                    /* try { // try from 02017728 to 0211775f has its CatchHandler @ 020176fc */
    *(undefined8 *)(unaff_x28 + 0x20) = uVar10;
    thunk_FUN_01f51358(plVar16,uVar10);
    uVar10 = *(undefined8 *)(unaff_x28 + 0x20);
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* catch() { ... } // from try @ 02017720 with catch @ 0201774c */
    uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar10,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x28 + 0x20) != 0) {
    fVar30 = *(float *)(unaff_x28 + 0x30);
    fVar23 = (float)FUN_040c21e0(*(long *)(unaff_x28 + 0x20),0);
    if (fVar30 == fVar23) {
      if (*plVar16 == 0) goto LAB_02018ef4;
      fVar30 = *(float *)(unaff_x28 + 0x34);
      fVar23 = (float)FUN_040c21a4(*plVar16,0);
      if (((fVar30 == fVar23) && (*(int *)(unaff_x28 + 0x40) == *(int *)(unaff_x28 + 0x38))) &&
         (*(int *)(unaff_x28 + 0x44) == *(int *)(unaff_x28 + 0x3c))) {
        return;
      }
    }
    if (*plVar16 != 0) {
      uVar24 = FUN_040c21e0(*plVar16,0);
      *(undefined4 *)(unaff_x28 + 0x30) = uVar24;
      puVar7 = 
      Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<GUIContent>>_System_IDisposable_Dispose__
      ;
      puVar8 = 
      Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
      ;
      if (*(long *)(unaff_x28 + 0x20) != 0) {
                    /* catch() { ... } // from try @ 02017854 with catch @ 0201780c */
        uVar24 = FUN_040c21a4(*(long *)(unaff_x28 + 0x20),0);
        *(undefined4 *)(unaff_x28 + 0x34) = uVar24;
        *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)(unaff_x28 + 0x38);
        lVar18 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
        FUN_0317f814(lVar18,*(undefined8 *)puVar7);
        puVar8 = 
        Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__
        ;
        if (lVar18 != 0) {
          fVar23 = *(float *)(unaff_x28 + 0x30);
          fVar30 = *(float *)(unaff_x28 + 0x34);
                    /* try { // try from 02017848 to 02117853 has its CatchHandler @ 02017870 */
          lVar11 = *(long *)(lVar18 + 0x10);
          lVar12 = *(long *)
                    Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__
          ;
                    /* try { // try from 02017854 to 02117893 has its CatchHandler @ 0201780c */
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar4 = *(uint *)(lVar18 + 0x18);
            fVar23 = fVar23 * 0.5;
                    /* catch() { ... } // from try @ 02017848 with catch @ 02017870 */
            if (uVar4 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar4 * 0xc;
              *(uint *)(lVar18 + 0x18) = uVar4 + 1;
              *(undefined4 *)(lVar11 + 0x20) = 0;
              *(float *)(lVar11 + 0x24) = fVar23;
              *(undefined4 *)(lVar11 + 0x28) = 0;
            }
            else {
              FUN_031800a8(0,fVar23,0,lVar18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            fVar6 = DAT_00c925e8;
            piVar2 = (int *)(unaff_x28 + 0x3c);
            iVar14 = *(int *)(unaff_x28 + 0x38) + -1;
            if (-1 < iVar14) {
              iVar15 = *piVar2;
              do {
                if (0 < iVar15) {
                  iVar25 = *(int *)(unaff_x28 + 0x38);
                  iVar20 = 0;
                  do {
                    /* catch() { ... } // from try @ 02017a0c with catch @ 02017914 */
                    fVar27 = ((float)iVar20 / (float)iVar15) * 360.0 * fVar6;
                    fVar28 = ((float)iVar14 / (float)iVar25) * 90.0 * fVar6;
                    FUN_040672cc(0,0);
                    fVar26 = (float)FUN_040677e4(0);
                    fVar29 = *(float *)(unaff_x28 + 0x34);
                    lVar11 = *(long *)(lVar18 + 0x10);
                    lVar12 = *(long *)puVar8;
                    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_02018ef4;
                    uVar4 = *(uint *)(lVar18 + 0x18);
                    if (uVar4 < *(uint *)(lVar11 + 0x18)) {
                      lVar11 = lVar11 + (long)(int)uVar4 * 0xc;
                      *(uint *)(lVar18 + 0x18) = uVar4 + 1;
                      *(float *)(lVar11 + 0x20) = fVar26 * fVar29 + 0.0;
                      *(float *)(lVar11 + 0x24) = (fVar23 - fVar30) + fVar27 * fVar29;
                      *(float *)(lVar11 + 0x28) = fVar28 * fVar29 + 0.0;
                    }
                    else {
                      FUN_031800a8(lVar18,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    iVar15 = *piVar2;
                    iVar20 = iVar20 + 1;
                  } while (iVar20 < iVar15);
                }
                iVar14 = iVar14 + -1;
              } while (-1 < iVar14);
              iVar14 = *(int *)(unaff_x28 + 0x38);
              if (0 < iVar14) {
                iVar20 = *piVar2;
                iVar15 = 0;
                do {
                  if (0 < iVar20) {
                    iVar25 = 0;
                    do {
                      fVar27 = (((float)iVar25 / (float)iVar20) * 360.0 + 180.0) * fVar6;
                      fVar28 = ((float)iVar15 / (float)iVar14) * 90.0 * fVar6;
                      FUN_040672cc(0,0);
                      fVar26 = (float)FUN_040677e4(0);
                      fVar29 = *(float *)(unaff_x28 + 0x34);
                      lVar11 = *(long *)(lVar18 + 0x10);
                      lVar12 = *(long *)puVar8;
                      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                      if (lVar11 == 0) goto LAB_02018ef4;
                      uVar4 = *(uint *)(lVar18 + 0x18);
                      if (uVar4 < *(uint *)(lVar11 + 0x18)) {
                        lVar11 = lVar11 + (long)(int)uVar4 * 0xc;
                        *(uint *)(lVar18 + 0x18) = uVar4 + 1;
                        *(float *)(lVar11 + 0x20) = 0.0 - fVar26 * fVar29;
                        *(float *)(lVar11 + 0x24) = (fVar30 - fVar23) - fVar27 * fVar29;
                        *(float *)(lVar11 + 0x28) = 0.0 - fVar28 * fVar29;
                      }
                      else {
                        FUN_031800a8(lVar18,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      iVar20 = *piVar2;
                      iVar25 = iVar25 + 1;
                    } while (iVar25 < iVar20);
                    iVar14 = *(int *)(unaff_x28 + 0x38);
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < iVar14);
              }
            }
            fVar23 = *(float *)(unaff_x28 + 0x30);
            lVar11 = *(long *)(lVar18 + 0x10);
            lVar12 = *(long *)puVar8;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            puVar7 = Method_Unity_Collections_NativeArray<BoneWeight>__ctor__;
            puVar8 = Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__;
            if (lVar11 != 0) {
              uVar4 = *(uint *)(lVar18 + 0x18);
              fVar23 = fVar23 * -0.5;
              if (uVar4 < *(uint *)(lVar11 + 0x18)) {
                lVar11 = lVar11 + (long)(int)uVar4 * 0xc;
                *(uint *)(lVar18 + 0x18) = uVar4 + 1;
                *(undefined4 *)(lVar11 + 0x20) = 0;
                *(float *)(lVar11 + 0x24) = fVar23;
                *(undefined4 *)(lVar11 + 0x28) = 0;
              }
              else {
                FUN_031800a8(0,fVar23,0,lVar18,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              lVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar7);
              FUN_030ba0b0(lVar11,*(undefined8 *)puVar8);
              puVar8 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
              if (lVar11 != 0) {
                iVar14 = *piVar2;
                piVar21 = (int *)(lVar11 + 0x1c);
                lVar12 = *(long *)(lVar11 + 0x10);
                lVar13 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
                *piVar21 = *piVar21 + 1;
                if (lVar12 != 0) {
                  iVar15 = 0;
                  puVar22 = (uint *)(lVar11 + 0x18);
                  bVar1 = 0 < iVar14;
                  do {
                    uVar4 = *puVar22;
                    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(undefined4 *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = 0;
                    }
                    else {
                      FUN_030ba904(lVar11,0,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                    }
                    if (!bVar1) {
                      iVar14 = *piVar2;
                      lVar12 = *(long *)(lVar11 + 0x10);
                      lVar13 = *(long *)puVar8;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar12 == 0) break;
                      uVar4 = *(uint *)(lVar11 + 0x18);
                      if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                        *puVar22 = uVar4 + 1;
                        *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
                        *piVar21 = *piVar21 + 1;
                      }
                      else {
                        FUN_030ba904(lVar11,iVar14,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                        lVar12 = *(long *)(lVar11 + 0x10);
                        lVar13 = *(long *)puVar8;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar12 == 0) break;
                      }
                      uVar4 = *puVar22;
                      if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                        *puVar22 = uVar4 + 1;
                        *(undefined4 *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = 1;
                      }
                      else {
                        FUN_030ba904(lVar11,1,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      iVar14 = *(int *)(unaff_x28 + 0x3c);
                      iVar15 = *(int *)(unaff_x28 + 0x38) + -1;
                      if (iVar15 < 1) goto LAB_02018258;
                      iVar20 = 0;
                      goto LAB_02017db8;
                    }
                    lVar12 = *(long *)(lVar11 + 0x10);
                    lVar13 = *(long *)puVar8;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar12 == 0) break;
                    uVar4 = *(uint *)(lVar11 + 0x18);
                    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar15;
                      *piVar21 = *piVar21 + 1;
                    }
                    else {
                      FUN_030ba904(lVar11,iVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      lVar12 = *(long *)(lVar11 + 0x10);
                      lVar13 = *(long *)puVar8;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar12 == 0) break;
                    }
                    uVar4 = *puVar22;
                    iVar15 = iVar15 + 1;
                    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar15;
                    }
                    else {
                      FUN_030ba904(lVar11,iVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar13 = *(long *)puVar8;
                    lVar12 = *(long *)(lVar11 + 0x10);
                    bVar1 = iVar15 < *piVar2;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  } while (lVar12 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_02018ef4;
  while( true ) {
    uVar4 = *(uint *)(lVar11 + 0x18);
    iVar25 = iVar14 + iVar15;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar25;
    }
    else {
      FUN_030ba904(lVar11,iVar25,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
      ;
      lVar12 = *(long *)puVar8;
      lVar13 = *(long *)(lVar11 + 0x10);
    }
    iVar3 = *piVar2;
    *piVar21 = *piVar21 + 1;
    if (lVar13 == 0) goto LAB_02018ef4;
    uVar4 = *puVar22;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar3 + iVar25;
    }
    else {
      FUN_030ba904(lVar11,iVar3 + iVar25,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      lVar12 = *(long *)puVar8;
      lVar13 = *(long *)(lVar11 + 0x10);
    }
    iVar3 = *piVar2;
    *piVar21 = *piVar21 + 1;
    if (lVar13 == 0) goto LAB_02018ef4;
    uVar4 = *puVar22;
    iVar14 = iVar14 + iVar15 + 1;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14 - iVar3;
    }
    else {
      FUN_030ba904(lVar11,iVar14 - iVar3,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      lVar12 = *(long *)puVar8;
      lVar13 = *(long *)(lVar11 + 0x10);
    }
    iVar15 = *piVar2;
    *piVar21 = *piVar21 + 1;
    if (lVar13 == 0) goto LAB_02018ef4;
    uVar4 = *puVar22;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14 - iVar15;
    }
    else {
      FUN_030ba904(lVar11,iVar14 - iVar15,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      lVar12 = *(long *)puVar8;
      lVar13 = *(long *)(lVar11 + 0x10);
    }
    iVar15 = *piVar2;
    *piVar21 = *piVar21 + 1;
    if (lVar13 == 0) goto LAB_02018ef4;
    uVar4 = *puVar22;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar15 + iVar25;
      *piVar21 = *piVar21 + 1;
    }
    else {
      FUN_030ba904(lVar11,iVar15 + iVar25,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      lVar13 = *(long *)(lVar11 + 0x10);
      lVar12 = *(long *)puVar8;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_02018ef4;
    }
    uVar4 = *puVar22;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
    }
    else {
      FUN_030ba904(lVar11,iVar14,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
      ;
    }
    iVar14 = *(int *)(unaff_x28 + 0x3c);
    iVar20 = iVar20 + 1;
    iVar15 = *(int *)(unaff_x28 + 0x38) + -1;
    if (iVar15 <= iVar20) break;
LAB_02017db8:
    iVar15 = iVar14 * iVar20;
    if (0 < iVar14 + -1) {
      iVar25 = 0;
      do {
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)puVar8;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_02018ef4;
        uVar4 = *(uint *)(lVar11 + 0x18);
        iVar14 = iVar15 + iVar25 + 1;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
        }
        else {
          FUN_030ba904(lVar11,iVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          lVar12 = *(long *)puVar8;
          lVar13 = *(long *)(lVar11 + 0x10);
        }
        iVar14 = *piVar2;
        *piVar21 = *piVar21 + 1;
        if (lVar13 == 0) goto LAB_02018ef4;
        uVar4 = *puVar22;
        iVar14 = iVar15 + iVar25 + iVar14 + 1;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
          *piVar21 = *piVar21 + 1;
        }
        else {
          FUN_030ba904(lVar11,iVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar12 = *(long *)puVar8;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_02018ef4;
        }
        uVar4 = *puVar22;
        iVar14 = iVar15 + iVar25 + 2;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
          *piVar21 = *piVar21 + 1;
        }
        else {
          FUN_030ba904(lVar11,iVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar12 = *(long *)puVar8;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_02018ef4;
        }
        uVar4 = *puVar22;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
        }
        else {
          FUN_030ba904(lVar11,iVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          lVar12 = *(long *)puVar8;
          lVar13 = *(long *)(lVar11 + 0x10);
        }
        iVar14 = *piVar2;
        *piVar21 = *piVar21 + 1;
        if (lVar13 == 0) goto LAB_02018ef4;
        uVar4 = *puVar22;
        iVar14 = iVar15 + iVar25 + iVar14 + 1;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
        }
        else {
          FUN_030ba904(lVar11,iVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          lVar12 = *(long *)puVar8;
          lVar13 = *(long *)(lVar11 + 0x10);
        }
        iVar14 = *piVar2;
        *piVar21 = *piVar21 + 1;
        if (lVar13 == 0) goto LAB_02018ef4;
        uVar4 = *puVar22;
        iVar14 = iVar15 + iVar25 + iVar14 + 2;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
        }
        else {
          FUN_030ba904(lVar11,iVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        iVar14 = *piVar2;
        iVar25 = iVar25 + 1;
      } while (iVar25 < iVar14 + -1);
    }
    lVar13 = *(long *)(lVar11 + 0x10);
    lVar12 = *(long *)puVar8;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_02018ef4;
  }
LAB_02018258:
  iVar15 = iVar14 * iVar15;
  if (0 < iVar14 + -1) {
    iVar20 = 0;
    do {
      lVar13 = *(long *)(lVar11 + 0x10);
      lVar12 = *(long *)puVar8;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_02018ef4;
      uVar4 = *(uint *)(lVar11 + 0x18);
      iVar14 = iVar15 + iVar20 + 1;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
      }
      else {
        FUN_030ba904(lVar11,iVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)puVar8;
        lVar13 = *(long *)(lVar11 + 0x10);
      }
      iVar14 = *piVar2;
      *piVar21 = *piVar21 + 1;
      if (lVar13 == 0) goto LAB_02018ef4;
      uVar4 = *puVar22;
      iVar14 = iVar15 + iVar20 + iVar14 + 1;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
        *piVar21 = *piVar21 + 1;
      }
      else {
        FUN_030ba904(lVar11,iVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)puVar8;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_02018ef4;
      }
      uVar4 = *puVar22;
      iVar14 = iVar15 + iVar20 + 2;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
        *piVar21 = *piVar21 + 1;
      }
      else {
        FUN_030ba904(lVar11,iVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)puVar8;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_02018ef4;
      }
      uVar4 = *puVar22;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
      }
      else {
        FUN_030ba904(lVar11,iVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)puVar8;
        lVar13 = *(long *)(lVar11 + 0x10);
      }
      iVar14 = *piVar2;
      *piVar21 = *piVar21 + 1;
      if (lVar13 == 0) goto LAB_02018ef4;
      uVar4 = *puVar22;
      iVar14 = iVar15 + iVar20 + iVar14 + 1;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
      }
      else {
        FUN_030ba904(lVar11,iVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)puVar8;
        lVar13 = *(long *)(lVar11 + 0x10);
      }
      iVar14 = *piVar2;
      *piVar21 = *piVar21 + 1;
      if (lVar13 == 0) goto LAB_02018ef4;
      uVar4 = *puVar22;
      iVar14 = iVar15 + iVar20 + iVar14 + 2;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
      }
      else {
        FUN_030ba904(lVar11,iVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      iVar14 = *piVar2;
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar14 + -1);
  }
  lVar13 = *(long *)(lVar11 + 0x10);
  lVar12 = *(long *)puVar8;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar13 != 0) {
    uVar4 = *(uint *)(lVar11 + 0x18);
    iVar20 = iVar14 + iVar15;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
    }
    else {
      FUN_030ba904(lVar11,iVar20,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
      ;
      lVar12 = *(long *)puVar8;
      lVar13 = *(long *)(lVar11 + 0x10);
    }
    iVar25 = *piVar2;
    *piVar21 = *piVar21 + 1;
    if (lVar13 != 0) {
      uVar4 = *puVar22;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar25 + iVar20;
      }
      else {
        FUN_030ba904(lVar11,iVar25 + iVar20,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)puVar8;
        lVar13 = *(long *)(lVar11 + 0x10);
      }
      iVar25 = *piVar2;
      *piVar21 = *piVar21 + 1;
      if (lVar13 != 0) {
        uVar4 = *puVar22;
        iVar14 = iVar14 + iVar15 + 1;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14 - iVar25;
        }
        else {
          FUN_030ba904(lVar11,iVar14 - iVar25,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          lVar12 = *(long *)puVar8;
          lVar13 = *(long *)(lVar11 + 0x10);
        }
        iVar15 = *piVar2;
        *piVar21 = *piVar21 + 1;
        if (lVar13 != 0) {
          uVar4 = *puVar22;
          if (uVar4 < *(uint *)(lVar13 + 0x18)) {
            *puVar22 = uVar4 + 1;
            *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14 - iVar15;
          }
          else {
            FUN_030ba904(lVar11,iVar14 - iVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            lVar12 = *(long *)puVar8;
            lVar13 = *(long *)(lVar11 + 0x10);
          }
          iVar15 = *piVar2;
          *piVar21 = *piVar21 + 1;
          if (lVar13 != 0) {
            uVar4 = *puVar22;
            if (uVar4 < *(uint *)(lVar13 + 0x18)) {
              *puVar22 = uVar4 + 1;
              *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar15 + iVar20;
              *piVar21 = *piVar21 + 1;
            }
            else {
              FUN_030ba904(lVar11,iVar15 + iVar20,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              lVar13 = *(long *)(lVar11 + 0x10);
              lVar12 = *(long *)puVar8;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_02018ef4;
            }
            uVar4 = *puVar22;
            if (uVar4 < *(uint *)(lVar13 + 0x18)) {
              *puVar22 = uVar4 + 1;
              *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
            }
            else {
              FUN_030ba904(lVar11,iVar14,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            iVar14 = *(int *)(unaff_x28 + 0x38);
            if (0 < iVar14 + -1) {
              iVar15 = 0;
              do {
                iVar20 = *piVar2;
                iVar14 = iVar20 * (iVar14 + iVar15);
                if (0 < iVar20 + -1) {
                  iVar25 = 0;
                  do {
                    lVar13 = *(long *)(lVar11 + 0x10);
                    lVar12 = *(long *)puVar8;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar13 == 0) goto LAB_02018ef4;
                    uVar4 = *(uint *)(lVar11 + 0x18);
                    iVar20 = iVar14 + iVar25 + 1;
                    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                    }
                    else {
                      FUN_030ba904(lVar11,iVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      lVar12 = *(long *)puVar8;
                      lVar13 = *(long *)(lVar11 + 0x10);
                    }
                    iVar20 = *piVar2;
                    *piVar21 = *piVar21 + 1;
                    if (lVar13 == 0) goto LAB_02018ef4;
                    uVar4 = *puVar22;
                    iVar20 = iVar14 + iVar25 + iVar20 + 1;
                    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                      *piVar21 = *piVar21 + 1;
                    }
                    else {
                      FUN_030ba904(lVar11,iVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      lVar13 = *(long *)(lVar11 + 0x10);
                      lVar12 = *(long *)puVar8;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar13 == 0) goto LAB_02018ef4;
                    }
                    uVar4 = *puVar22;
                    iVar20 = iVar14 + iVar25 + 2;
                    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                      *piVar21 = *piVar21 + 1;
                    }
                    else {
                      FUN_030ba904(lVar11,iVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      lVar13 = *(long *)(lVar11 + 0x10);
                      lVar12 = *(long *)puVar8;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar13 == 0) goto LAB_02018ef4;
                    }
                    uVar4 = *puVar22;
                    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                    }
                    else {
                      FUN_030ba904(lVar11,iVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      lVar12 = *(long *)puVar8;
                      lVar13 = *(long *)(lVar11 + 0x10);
                    }
                    iVar20 = *piVar2;
                    *piVar21 = *piVar21 + 1;
                    if (lVar13 == 0) goto LAB_02018ef4;
                    uVar4 = *puVar22;
                    iVar20 = iVar14 + iVar25 + iVar20 + 1;
                    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                    }
                    else {
                      FUN_030ba904(lVar11,iVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      lVar12 = *(long *)puVar8;
                      lVar13 = *(long *)(lVar11 + 0x10);
                    }
                    iVar20 = *piVar2;
                    *piVar21 = *piVar21 + 1;
                    if (lVar13 == 0) goto LAB_02018ef4;
                    uVar4 = *puVar22;
                    iVar20 = iVar14 + iVar25 + iVar20 + 2;
                    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                    }
                    else {
                      FUN_030ba904(lVar11,iVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    iVar20 = *piVar2;
                    iVar25 = iVar25 + 1;
                  } while (iVar25 < iVar20 + -1);
                }
                lVar13 = *(long *)(lVar11 + 0x10);
                lVar12 = *(long *)puVar8;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar13 == 0) goto LAB_02018ef4;
                uVar4 = *(uint *)(lVar11 + 0x18);
                iVar25 = iVar20 + iVar14;
                if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar25;
                }
                else {
                  FUN_030ba904(lVar11,iVar25,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  lVar12 = *(long *)puVar8;
                  lVar13 = *(long *)(lVar11 + 0x10);
                }
                iVar3 = *piVar2;
                *piVar21 = *piVar21 + 1;
                if (lVar13 == 0) goto LAB_02018ef4;
                uVar4 = *puVar22;
                if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar3 + iVar25;
                }
                else {
                  FUN_030ba904(lVar11,iVar3 + iVar25,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  lVar12 = *(long *)puVar8;
                  lVar13 = *(long *)(lVar11 + 0x10);
                }
                iVar3 = *piVar2;
                *piVar21 = *piVar21 + 1;
                if (lVar13 == 0) goto LAB_02018ef4;
                uVar4 = *puVar22;
                iVar20 = iVar20 + iVar14 + 1;
                if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20 - iVar3;
                }
                else {
                  FUN_030ba904(lVar11,iVar20 - iVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  lVar12 = *(long *)puVar8;
                  lVar13 = *(long *)(lVar11 + 0x10);
                }
                iVar14 = *piVar2;
                *piVar21 = *piVar21 + 1;
                if (lVar13 == 0) goto LAB_02018ef4;
                uVar4 = *puVar22;
                if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20 - iVar14;
                }
                else {
                  FUN_030ba904(lVar11,iVar20 - iVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  lVar12 = *(long *)puVar8;
                  lVar13 = *(long *)(lVar11 + 0x10);
                }
                iVar14 = *piVar2;
                *piVar21 = *piVar21 + 1;
                if (lVar13 == 0) goto LAB_02018ef4;
                uVar4 = *puVar22;
                if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14 + iVar25;
                  *piVar21 = *piVar21 + 1;
                }
                else {
                  FUN_030ba904(lVar11,iVar14 + iVar25,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  lVar13 = *(long *)(lVar11 + 0x10);
                  lVar12 = *(long *)puVar8;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar13 == 0) goto LAB_02018ef4;
                }
                uVar4 = *puVar22;
                if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                }
                else {
                  FUN_030ba904(lVar11,iVar20,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                iVar14 = *(int *)(unaff_x28 + 0x38);
                iVar15 = iVar15 + 1;
              } while (iVar15 < iVar14 + -1);
            }
            iVar14 = *(int *)(lVar18 + 0x18);
            iVar15 = *piVar2;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)puVar8;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 != 0) {
              iVar25 = iVar14 + -1;
              bVar1 = 0 < iVar15;
              iVar20 = 1;
              do {
                uVar4 = *puVar22;
                if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar25;
                }
                else {
                  FUN_030ba904(lVar11,iVar25,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
                if (!bVar1) {
                  lVar12 = *(long *)(lVar11 + 0x10);
                  lVar13 = *(long *)puVar8;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  puVar7 = 
                  Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__
                  ;
                  if (lVar12 == 0) break;
                  uVar4 = *(uint *)(lVar11 + 0x18);
                  if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                    *puVar22 = uVar4 + 1;
                    *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar25 - iVar15;
                    *piVar21 = *piVar21 + 1;
                  }
                  else {
                    FUN_030ba904(lVar11,iVar25 - iVar15,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                    ;
                    lVar12 = *(long *)(lVar11 + 0x10);
                    lVar13 = *(long *)puVar8;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar12 == 0) break;
                  }
                  uVar4 = *puVar22;
                  if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                    *puVar22 = uVar4 + 1;
                    *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar14 + -2;
                  }
                  else {
                    FUN_030ba904(lVar11,iVar14 + -2,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar10 = System_Collections_Generic_List<VisualTreeAsset_UsingEntry>__System_Collections_IEnumerable_GetEnumerator
                                     (lVar18,*(undefined8 *)
                                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_ToArray__
                                     );
                  puVar19 = (undefined8 *)(unaff_x28 + 0x48);
                  *puVar19 = uVar10;
                  thunk_FUN_01f51358(puVar19,uVar10);
                  uVar10 = FUN_030bc2e0(lVar11,*(undefined8 *)
                                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item__
                                       );
                  puVar17 = (undefined8 *)(unaff_x28 + 0x50);
                  *puVar17 = uVar10;
                  thunk_FUN_01f51358(puVar17,uVar10);
                  lVar18 = FUN_040703d4(unaff_x28,0);
                  if (lVar18 != 0) {
                    lVar18 = FUN_023361c8(lVar18,*(undefined8 *)
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Count__
                                         );
                    plVar16 = (long *)(unaff_x28 + 0x28);
                    *plVar16 = lVar18;
                    thunk_FUN_01f51358(plVar16,lVar18);
                    lVar18 = *plVar16;
                    uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar7);
                    FUN_04051010(uVar10,0);
                    if (lVar18 != 0) {
                      FUN_04050cd0(lVar18,uVar10,0);
                      if ((*plVar16 != 0) && (lVar18 = FUN_04050c14(*plVar16,0), lVar18 != 0)) {
                        FUN_0405251c(lVar18,*puVar19,0);
                        if ((*plVar16 != 0) && (lVar18 = FUN_04050c14(*plVar16,0), lVar18 != 0)) {
                          FUN_04053e40(lVar18,*puVar17,0);
                          if ((*plVar16 != 0) && (lVar18 = FUN_04050c14(*plVar16,0), lVar18 != 0)) {
                            FUN_04054de0(lVar18,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                  break;
                }
                lVar12 = *(long *)(lVar11 + 0x10);
                lVar13 = *(long *)puVar8;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar12 == 0) break;
                uVar4 = *(uint *)(lVar11 + 0x18);
                iVar3 = (iVar14 - iVar15) + iVar20;
                iVar5 = iVar3 + -1;
                if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar5;
                  *piVar21 = *piVar21 + 1;
                }
                else {
                  FUN_030ba904(lVar11,iVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                  lVar12 = *(long *)(lVar11 + 0x10);
                  lVar13 = *(long *)puVar8;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar12 == 0) break;
                }
                uVar4 = *puVar22;
                iVar3 = iVar3 + -2;
                if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar3;
                }
                else {
                  FUN_030ba904(lVar11,iVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                  lVar13 = *(long *)puVar8;
                  lVar12 = *(long *)(lVar11 + 0x10);
                }
                bVar1 = iVar20 < *piVar2;
                iVar20 = iVar20 + 1;
                *piVar21 = *piVar21 + 1;
              } while (lVar12 != 0);
            }
          }
        }
      }
    }
  }
LAB_02018ef4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


