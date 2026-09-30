/*
FUNCTION_NAME: FUN_09872128
ENTRY_POINT: 09872128
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_09872128(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar5 = System_Collections_Generic_List<Attribute>_TypeInfo;
  puVar4 = System_Collections_Generic_List<AtlasPadding>_TypeInfo;
  puVar3 = System_Collections_Generic_List<AtlasPackingResult>_TypeInfo;
  puVar2 = System_Collections_Generic_List<AsyncOperationHandle>_TypeInfo;
  puVar1 = System_Collections_Generic_List<AsyncGPUReadbackRequest>_TypeInfo;
                    /* try { // try from 09872140 to 09972167 has its CatchHandler @ 0987217c */
                    /* try { // try from 09872168 to 09972173 has its CatchHandler @ 09871370 */
  if ((DAT_0a548beb & 1) == 0) {
                    /* try { // try from 09872174 to 0997217b has its CatchHandler @ 0987217c */
    FUN_04447ba8(System_Collections_Generic_List<AsyncGPUReadbackRequest>_TypeInfo);
                    /* catch() { ... } // from try @ 09871ee4 with catch @ 0987217c
                       catch() { ... } // from try @ 09871f20 with catch @ 0987217c
                       catch() { ... } // from try @ 09871f68 with catch @ 0987217c
                       catch() { ... } // from try @ 09872044 with catch @ 0987217c
                       catch() { ... } // from try @ 098720ac with catch @ 0987217c
                       catch() { ... } // from try @ 09872140 with catch @ 0987217c
                       catch() { ... } // from try @ 09872174 with catch @ 0987217c */
                    /* try { // try from 09872180 to 099722c3 has its CatchHandler @ 09872180
                       catch() { ... } // from try @ 09872180 with catch @ 09872180
                       catch() { ... } // from try @ 0987253c with catch @ 09872180
                       catch() { ... } // from try @ 09872630 with catch @ 09872180
                       catch() { ... } // from try @ 09872638 with catch @ 09872180
                       catch() { ... } // from try @ 098726f8 with catch @ 09872180 */
    FUN_04447ba8(System_Collections_Generic_List<AsyncOperationHandle>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<AudioAffordanceThemeData>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<AtlasPadding>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<AudioClip>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<AutoMoveTowardsTarget>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<Ball>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BaseInputModule>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BaseInvokableCall>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BaseRaycaster>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BaseRpcTarget>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BezierControlPoint>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BezierKnot>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BezierPoint>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<MetricKind[]>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<object[]>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<string[]>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<AtlasPackingResult>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<Type[]>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<Attribute>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BillingPlan>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BlockedUser>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<UIVertex[]>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<XmlEventCache_XmlEvent[]>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BoneCapsule>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BoneWeight>_TypeInfo);
                    /* try { // try from 098722c4 to 099722eb has its CatchHandler @ 09872670 */
    FUN_04447ba8(System_Collections_Generic_List<bool>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BoxCollider>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<AICapabilityProfile>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_List<BranchLabel>_TypeInfo);
    DAT_0a548beb = 1;
  }
  plVar6 = (long *)FUN_04447c90(*(undefined8 *)puVar1,10);
  lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                    /* try { // try from 09872320 to 09972347 has its CatchHandler @ 0987266c */
  FUN_09872744(lVar7,*(undefined8 *)puVar3,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_09872734:
    uVar9 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar9,0);
  }
  puVar4 = System_Collections_Generic_List<BezierControlPoint>_TypeInfo;
  puVar3 = System_Collections_Generic_List<AudioAffordanceThemeData>_TypeInfo;
  puVar1 = System_Collections_Generic_List<string[]>_TypeInfo;
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    thunk_FUN_044bb4b4(plVar6 + 4,lVar7);
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    FUN_09872744(lVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar4,*(undefined8 *)puVar3);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_09872734;
    puVar4 = System_Collections_Generic_List<BoxCollider>_TypeInfo;
    puVar3 = System_Collections_Generic_List<BaseInvokableCall>_TypeInfo;
    puVar1 = System_Collections_Generic_List<AICapabilityProfile>_TypeInfo;
                    /* try { // try from 098723ac to 099723b7 has its CatchHandler @ 09872644 */
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar7;
      thunk_FUN_044bb4b4(plVar6 + 5,lVar7);
      lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
      FUN_09872744(lVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar4,*(undefined8 *)puVar3);
                    /* try { // try from 09872404 to 09972427 has its CatchHandler @ 09872648 */
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_09872734;
      puVar4 = System_Collections_Generic_List<BoneWeight>_TypeInfo;
      puVar3 = System_Collections_Generic_List<BezierKnot>_TypeInfo;
      puVar1 = System_Collections_Generic_List<object[]>_TypeInfo;
      if (2 < *(uint *)(plVar6 + 3)) {
                    /* try { // try from 09872438 to 0997243f has its CatchHandler @ 09872644 */
        plVar6[6] = lVar7;
        thunk_FUN_044bb4b4(plVar6 + 6,lVar7);
        lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
        FUN_09872744(lVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_09872734;
        puVar4 = System_Collections_Generic_List<BranchLabel>_TypeInfo;
        puVar3 = System_Collections_Generic_List<BaseInputModule>_TypeInfo;
        puVar1 = System_Collections_Generic_List<Type[]>_TypeInfo;
        if (3 < *(uint *)(plVar6 + 3)) {
                    /* try { // try from 09872490 to 099724b3 has its CatchHandler @ 09872650 */
          plVar6[7] = lVar7;
          thunk_FUN_044bb4b4(plVar6 + 7,lVar7);
          lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
          FUN_09872744(lVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar4,*(undefined8 *)puVar3);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_09872734;
          puVar4 = System_Collections_Generic_List<BoneCapsule>_TypeInfo;
          puVar3 = System_Collections_Generic_List<BaseRpcTarget>_TypeInfo;
          puVar1 = System_Collections_Generic_List<UIVertex[]>_TypeInfo;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar7;
            thunk_FUN_044bb4b4(plVar6 + 8,lVar7);
                    /* try { // try from 09872518 to 0997253b has its CatchHandler @ 0987264c */
            lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
            FUN_09872744(lVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar4,*(undefined8 *)puVar3);
                    /* try { // try from 0987253c to 09972607 has its CatchHandler @ 09872180 */
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_09872734;
            puVar4 = System_Collections_Generic_List<bool>_TypeInfo;
            puVar3 = System_Collections_Generic_List<AutoMoveTowardsTarget>_TypeInfo;
            puVar1 = System_Collections_Generic_List<ABSSequentiable>_TypeInfo;
            if (5 < *(uint *)(plVar6 + 3)) {
              plVar6[9] = lVar7;
              thunk_FUN_044bb4b4(plVar6 + 9,lVar7);
              lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
              FUN_09872744(lVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar4,*(undefined8 *)puVar3);
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
              goto LAB_09872734;
              puVar4 = System_Collections_Generic_List<BlockedUser>_TypeInfo;
              puVar3 = System_Collections_Generic_List<BezierPoint>_TypeInfo;
              puVar1 = System_Collections_Generic_List<MetricKind[]>_TypeInfo;
              if (6 < *(uint *)(plVar6 + 3)) {
                plVar6[10] = lVar7;
                thunk_FUN_044bb4b4(plVar6 + 10,lVar7);
                lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                FUN_09872744(lVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar4,*(undefined8 *)puVar3
                            );
                    /* try { // try from 09872608 to 0997260b has its CatchHandler @ 09872668 */
                    /* try { // try from 0987260c to 0997260f has its CatchHandler @ 09872658 */
                    /* try { // try from 09872610 to 09972617 has its CatchHandler @ 09872664 */
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                goto LAB_09872734;
                puVar4 = System_Collections_Generic_List<BaseRaycaster>_TypeInfo;
                puVar3 = System_Collections_Generic_List<AudioClip>_TypeInfo;
                puVar1 = System_Collections_Generic_List<Matrix4x4[]>_TypeInfo;
                    /* try { // try from 09872618 to 0997261f has its CatchHandler @ 09872660 */
                    /* try { // try from 09872620 to 09972627 has its CatchHandler @ 0987265c */
                if (7 < *(uint *)(plVar6 + 3)) {
                    /* try { // try from 09872628 to 0997262f has its CatchHandler @ 09872654 */
                    /* try { // try from 09872630 to 09972633 has its CatchHandler @ 09872180 */
                    /* try { // try from 09872634 to 09972637 has its CatchHandler @ 09872640 */
                    /* try { // try from 09872638 to 09972687 has its CatchHandler @ 09872180 */
                    /* catch() { ... } // from try @ 09872634 with catch @ 09872640 */
                  plVar6[0xb] = lVar7;
                    /* catch() { ... } // from try @ 098723ac with catch @ 09872644
                       catch() { ... } // from try @ 09872438 with catch @ 09872644 */
                    /* catch() { ... } // from try @ 09872404 with catch @ 09872648 */
                  thunk_FUN_044bb4b4(plVar6 + 0xb,lVar7);
                    /* catch() { ... } // from try @ 09872518 with catch @ 0987264c */
                    /* catch() { ... } // from try @ 09872490 with catch @ 09872650 */
                  lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 09872628 with catch @ 09872654 */
                    /* catch() { ... } // from try @ 0987260c with catch @ 09872658 */
                    /* catch() { ... } // from try @ 09872620 with catch @ 0987265c */
                    /* catch() { ... } // from try @ 09872618 with catch @ 09872660 */
                    /* catch() { ... } // from try @ 09872610 with catch @ 09872664 */
                  FUN_09872744(lVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar4,
                               *(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 09872608 with catch @ 09872668 */
                    /* catch() { ... } // from try @ 09872320 with catch @ 0987266c */
                    /* catch() { ... } // from try @ 098722c4 with catch @ 09872670 */
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)
                     ) goto LAB_09872734;
                  puVar4 = System_Collections_Generic_List<BillingPlan>_TypeInfo;
                  puVar3 = System_Collections_Generic_List<Ball>_TypeInfo;
                  puVar1 = System_Collections_Generic_List<XmlEventCache_XmlEvent[]>_TypeInfo;
                    /* try { // try from 09872688 to 0997268b has its CatchHandler @ 09872698 */
                  if (8 < *(uint *)(plVar6 + 3)) {
                    /* catch() { ... } // from try @ 09872688 with catch @ 09872698 */
                    plVar6[0xc] = lVar7;
                    thunk_FUN_044bb4b4(plVar6 + 0xc,lVar7);
                    lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                    FUN_09872744(lVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar4,
                                 *(undefined8 *)puVar3);
                    /* try { // try from 098726d0 to 099726f7 has its CatchHandler @ 0987270c */
                    if ((lVar7 != 0) &&
                       (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar8 == 0)) goto LAB_09872734;
                    if (9 < *(uint *)(plVar6 + 3)) {
                    /* try { // try from 098726f8 to 09972703 has its CatchHandler @ 09872180 */
                      plVar6[0xd] = lVar7;
                      thunk_FUN_044bb4b4(plVar6 + 0xd,lVar7);
                    /* try { // try from 09872704 to 0997270b has its CatchHandler @ 0987270c */
                      *(long *)(param_1 + 0x20) = (long)plVar6;
                    /* catch() { ... } // from try @ 098726d0 with catch @ 0987270c
                       catch() { ... } // from try @ 09872704 with catch @ 0987270c */
                    /* try { // try from 09872710 to 09972837 has its CatchHandler @ 09872710
                       catch() { ... } // from try @ 09872710 with catch @ 09872710
                       catch() { ... } // from try @ 098728bc with catch @ 09872710
                       catch() { ... } // from try @ 0987298c with catch @ 09872710
                       catch() { ... } // from try @ 09872994 with catch @ 09872710
                       catch() { ... } // from try @ 09872a2c with catch @ 09872710 */
                      thunk_FUN_044bb4b4((long *)(param_1 + 0x20),plVar6);
                      FUN_0952dd08(param_1,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


