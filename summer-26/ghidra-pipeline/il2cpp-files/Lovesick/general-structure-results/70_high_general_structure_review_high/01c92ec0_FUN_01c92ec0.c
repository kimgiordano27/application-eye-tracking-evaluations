/*
FUNCTION_NAME: FUN_01c92ec0
ENTRY_POINT: 01c92ec0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_01c92ec0(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  if ((DAT_0377ecbb & 1) == 0) {
    thunk_FUN_00d48444(OVRAnchor_DeferredKey_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzq_s16__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                      );
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass0_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                      );
    thunk_FUN_00d48444(StringLiteral_13063);
    thunk_FUN_00d48444(StringLiteral_5525);
    thunk_FUN_00d48444(StringLiteral_2823);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<PlayableDirector>__);
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Quaternion>__);
    thunk_FUN_00d48444(System_Xml_DomNameTable_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_InputSystem_InputControl___TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_add_WhenPostprocessed__
                      );
    thunk_FUN_00d48444(StringLiteral_7305);
    DAT_0377ecbb = 1;
  }
  puVar4 = Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__;
  puVar2 = 
  System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
  ;
  plVar8 = (long *)param_1[3];
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    lVar19 = *(long *)puVar2;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar19);
    }
    lVar19 = FUN_01c93550(uVar9,*(undefined8 *)puVar4);
    puVar5 = StringLiteral_7305;
    puVar4 = Method_OVRGLTFAnimatinonNode_CopyData<Quaternion>__;
    puVar1 = (undefined8 *)System_Xml_DomNameTable_TypeInfo;
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      lVar10 = FUN_01c93550(uVar9,*(undefined8 *)puVar5);
      iVar7 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
      if (iVar7 != 3) {
        puVar1 = (undefined8 *)puVar4;
      }
      uVar9 = *puVar1;
      plVar8 = (long *)(**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
      puVar5 = Method_UnityEngine_Component_GetComponent<PlayableDirector>__;
      puVar4 = DG_Tweening_ShortcutExtensions_<>c__DisplayClass0_0_TypeInfo;
      if (plVar8 != (long *)0x0) {
        uVar11 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
                    /* try { // try from 01c93080 to 01d9308b has its CatchHandler @ 01c9339c */
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    /* try { // try from 01c9308c to 01d93273 has its CatchHandler @ 01c92da4 */
          thunk_FUN_00d32864(*(long *)puVar5);
        }
        uVar9 = FUN_01d07d10(uVar11,uVar9,0);
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,1);
        if (plVar8 != (long *)0x0) {
          if ((lVar19 != 0) &&
             (lVar12 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
          goto LAB_01c93544;
          puVar5 = StringLiteral_5525;
          if ((int)plVar8[3] == 0) goto LAB_01c93540;
          plVar8[4] = lVar19;
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
          puVar6 = StringLiteral_13063;
          puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzq_s16__;
          if (lVar12 != 0) {
            FUN_013d1804(lVar12,plVar8,*(undefined8 *)StringLiteral_13063);
            plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,2);
            lVar20 = *(long *)puVar2;
            lVar21 = param_1[3];
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar20);
            }
            lVar20 = FUN_01c92578(lVar19,lVar21);
            if (plVar8 != (long *)0x0) {
              if ((lVar20 != 0) &&
                 (lVar21 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar8 + 0x40)), lVar21 == 0))
              goto LAB_01c93544;
              puVar2 = UnityEngine_InputSystem_InputControl___TypeInfo;
              if ((int)plVar8[3] == 0) goto LAB_01c93540;
              plVar8[4] = lVar20;
              puVar3 = OVRAnchor_DeferredKey_TypeInfo;
              uVar11 = FUN_01c935fc(lVar19,*(undefined8 *)puVar2);
              lVar21 = *(long *)puVar3;
              lVar20 = *(long *)(lVar21 + 0x38);
              if (lVar20 == 0) {
                FUN_00d59478(lVar21);
                lVar20 = *(long *)(lVar21 + 0x38);
              }
              lVar20 = *(long *)(lVar20 + 0x10);
              if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                lVar20 = FUN_00d5941c();
              }
              if (*(int *)(lVar20 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              puVar3 = 
              Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_add_WhenPostprocessed__
              ;
              lVar20 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
              if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                lVar20 = FUN_00d5941c();
              }
              uVar13 = FUN_01c93770(lVar19,*(undefined8 *)puVar3,0,**(undefined8 **)(lVar20 + 0xb8))
              ;
              uVar9 = FUN_01c938d0(uVar9,uVar13);
              plVar14 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,1);
              if (plVar14 == (long *)0x0) goto LAB_01c9353c;
              if ((lVar10 != 0) &&
                 (lVar20 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar14 + 0x40)), lVar20 == 0)
                 ) goto LAB_01c93544;
              if ((int)plVar14[3] == 0) goto LAB_01c93540;
              plVar14[4] = lVar10;
              lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
              if (lVar20 != 0) {
                FUN_013d1804(lVar20,plVar14,*(undefined8 *)puVar6);
                    /* try { // try from 01c93274 to 01d9327f has its CatchHandler @ 01c93390 */
                plVar14 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzq_s16__,
                                               2);
                    /* try { // try from 01c93280 to 01d932cb has its CatchHandler @ 01c92da4 */
                lVar21 = FUN_01c92578(lVar10,param_1[2]);
                if (plVar14 != (long *)0x0) {
                  if ((lVar21 != 0) &&
                     (lVar15 = thunk_FUN_00d6225c(lVar21,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar15 == 0)) {
LAB_01c93544:
                    uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar9,0);
                  }
                  if ((int)plVar14[3] != 0) {
                    plVar14[4] = lVar21;
                    uVar13 = FUN_01c935fc(lVar10,*(undefined8 *)puVar2);
                    /* try { // try from 01c932cc to 01d932d7 has its CatchHandler @ 01c9338c */
                    uVar16 = (**(code **)(*param_1 + 0x1d8))
                                       (param_1,*(undefined8 *)(*param_1 + 0x1e0));
                    lVar15 = *(long *)OVRAnchor_DeferredKey_TypeInfo;
                    lVar21 = *(long *)(lVar15 + 0x38);
                    /* try { // try from 01c932f0 to 01d932ff has its CatchHandler @ 01c93398 */
                    if (lVar21 == 0) {
                      FUN_00d59478(lVar15);
                      lVar21 = *(long *)(lVar15 + 0x38);
                    }
                    /* try { // try from 01c93300 to 01d9330b has its CatchHandler @ 01c93394 */
                    lVar21 = *(long *)(lVar21 + 0x10);
                    if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
                      lVar21 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar21 + 0xe0) == 0) {
                    /* try { // try from 01c93318 to 01d93347 has its CatchHandler @ 01c93458 */
                      thunk_FUN_00d32864();
                    }
                    lVar21 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
                    if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
                      lVar21 = FUN_00d5941c();
                    }
                    /* try { // try from 01c93348 to 01d933b3 has its CatchHandler @ 01c92da4 */
                    uVar17 = FUN_01c93770(lVar19,*(undefined8 *)puVar3,0,
                                          **(undefined8 **)(lVar21 + 0xb8));
                    lVar15 = *(long *)OVRAnchor_DeferredKey_TypeInfo;
                    lVar21 = *(long *)(lVar15 + 0x38);
                    if (lVar21 == 0) {
                      FUN_00d59478(lVar15);
                      lVar21 = *(long *)(lVar15 + 0x38);
                    }
                    lVar21 = *(long *)(lVar21 + 0x10);
                    if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
                      lVar21 = FUN_00d5941c();
                    }
                    /* catch() { ... } // from try @ 01c932cc with catch @ 01c9338c */
                    /* catch() { ... } // from try @ 01c93274 with catch @ 01c93390 */
                    if (*(int *)(lVar21 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 01c93300 with catch @ 01c93394 */
                      thunk_FUN_00d32864();
                    }
                    /* catch() { ... } // from try @ 01c932f0 with catch @ 01c93398 */
                    /* catch() { ... } // from try @ 01c93080 with catch @ 01c9339c */
                    lVar21 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
                    if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
                      lVar21 = FUN_00d5941c();
                    }
                    /* try { // try from 01c933b4 to 01d933cb has its CatchHandler @ 01c9344c */
                    uVar18 = FUN_01c93770(lVar10,*(undefined8 *)puVar3,0,
                                          **(undefined8 **)(lVar21 + 0xb8));
                    /* try { // try from 01c933cc to 01d93437 has its CatchHandler @ 01c92da4 */
                    uVar16 = FUN_01c93a1c(uVar16,uVar17,uVar18);
                    uVar17 = (**(code **)(*param_1 + 0x188))
                                       (param_1,*(undefined8 *)(*param_1 + 400));
                    uVar16 = FUN_01c93bd0(uVar16,uVar17);
                    uVar17 = (**(code **)(*param_1 + 0x188))
                                       (param_1,*(undefined8 *)(*param_1 + 400));
                    uVar17 = FUN_01c93c38(0,uVar17);
                    lVar10 = FUN_01c93e80(uVar13,uVar16,uVar17);
                    /* try { // try from 01c93438 to 01d93447 has its CatchHandler @ 01c9344c */
                    if ((lVar10 != 0) &&
                       (lVar21 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar21 == 0)) goto LAB_01c93544;
                    puVar2 = StringLiteral_2823;
                    /* catch() { ... } // from try @ 01c933b4 with catch @ 01c9344c
                       catch() { ... } // from try @ 01c93438 with catch @ 01c9344c */
                    if (1 < *(uint *)(plVar14 + 3)) {
                    /* try { // try from 01c93450 to 01d93453 has its CatchHandler @ 01c93514 */
                    /* try { // try from 01c93454 to 01d9346f has its CatchHandler @ 01c92da4 */
                    /* catch() { ... } // from try @ 01c93318 with catch @ 01c93458 */
                      plVar14[5] = lVar10;
                      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                      puVar4 = 
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                      ;
                      if (lVar10 != 0) {
                    /* try { // try from 01c93470 to 01d93487 has its CatchHandler @ 01c93504 */
                        FUN_013d1804(lVar10,plVar14,
                                     *(undefined8 *)
                                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                                    );
                    /* try { // try from 01c93488 to 01d934f3 has its CatchHandler @ 01c92da4 */
                        uVar13 = FUN_01c92988(lVar20,lVar10);
                        uVar9 = FUN_01c93e80(uVar9,lVar19,uVar13);
                        uVar13 = (**(code **)(*param_1 + 0x188))
                                           (param_1,*(undefined8 *)(*param_1 + 400));
                        uVar13 = FUN_01c93c38(0,uVar13);
                        lVar19 = FUN_01c93e80(uVar11,uVar9,uVar13);
                        if ((lVar19 != 0) &&
                           (lVar10 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar10 == 0)) goto LAB_01c93544;
                        if (*(uint *)(plVar8 + 3) < 2) goto LAB_01c93540;
                    /* try { // try from 01c934f4 to 01d93503 has its CatchHandler @ 01c93504 */
                        plVar8[5] = lVar19;
                        lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                        if (lVar19 != 0) {
                    /* catch() { ... } // from try @ 01c93470 with catch @ 01c93504
                       catch() { ... } // from try @ 01c934f4 with catch @ 01c93504 */
                    /* try { // try from 01c93508 to 01d9350b has its CatchHandler @ 01c93514 */
                    /* try { // try from 01c9350c to 01d93517 has its CatchHandler @ 01c92da4 */
                          FUN_013d1804(lVar19,plVar8,*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 01c93450 with catch @ 01c93514
                       catch() { ... } // from try @ 01c93508 with catch @ 01c93514 */
                          FUN_01c92988(lVar12,lVar19);
                          return;
                        }
                      }
                      goto LAB_01c9353c;
                    }
                  }
LAB_01c93540:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01c9353c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


