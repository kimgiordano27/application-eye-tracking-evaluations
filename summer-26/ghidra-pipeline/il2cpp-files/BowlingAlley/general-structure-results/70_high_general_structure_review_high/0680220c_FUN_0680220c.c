/*
FUNCTION_NAME: FUN_0680220c
ENTRY_POINT: 0680220c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior
*/


byte FUN_0680220c(long param_1,long param_2,long *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_076e0c48 & 1) == 0) {
                    /* try { // try from 06802244 to 0690224b has its CatchHandler @ 068022a4 */
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>__ctor__
                      );
                    /* try { // try from 06802268 to 0690226f has its CatchHandler @ 068022a0 */
                    /* try { // try from 06802270 to 06902293 has its CatchHandler @ 06802184 */
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_Start__
                      );
                    /* try { // try from 06802294 to 06902297 has its CatchHandler @ 0680229c */
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>_Start__
                      );
                    /* try { // try from 06802298 to 069022bb has its CatchHandler @ 06802184 */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06802294 with catch @ 0680229c
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06802268 with catch @ 068022a0
                        */
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Interactable__
                      );
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06802244 with catch @ 068022a4
                        */
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072ab650);
                    /* try { // try from 068022bc to 069022bf has its CatchHandler @ 068022e0 */
                    /* try { // try from 068022c0 to 069022e7 has its CatchHandler @ 06802184 */
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_get_SelectedInteractable__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072a2270);
                    /* catch() { ... } // from try @ 068022bc with catch @ 068022e0 */
                    /* try { // try from 068022e8 to 069022ef has its CatchHandler @ 06802304 */
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                      );
                    /* try { // try from 068022f0 to 069022fb has its CatchHandler @ 06802184 */
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_RemoveInteractorByIdentifier__
                      );
                    /* try { // try from 068022fc to 06902303 has its CatchHandler @ 06802304 */
    thunk_FUN_032e1da0(PTR_DAT_072a6ae0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 068022e8 with catch @ 06802304
                       catch(type#2 @ 00000000) { ... } // from try @ 068022fc with catch @ 06802304
                        */
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<IXRInteractor,_GameObject>_Remove__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_get_SelectedInteractable__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072a2238);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_set_Selector__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>_Awake__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>_DoPreprocess__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>_OnDisable__
                      );
    DAT_076e0c48 = 1;
  }
  puVar5 = 
  Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>_OnDisable__
  ;
  local_70 = 0;
  local_68 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) || (*(int *)(param_1 + 0x48) == 0)) {
    iVar14 = *(int *)(param_1 + 0x48);
    uVar26 = FUN_06becffc(param_1,0);
    puVar22 = (undefined8 *)
              Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>_DoPreprocess__
    ;
    if (iVar14 != 0) {
      puVar22 = (undefined8 *)
                Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>_Awake__
      ;
    }
    uVar26 = FUN_057aaeec(*(undefined8 *)puVar5,uVar26,*puVar22,0);
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
    }
    FUN_06bb3070(uVar26,param_1,0);
    *param_3 = 0;
    param_2 = 0;
LAB_0680247c:
    thunk_FUN_0333a630(param_3,param_2);
    return 0;
  }
  uVar26 = *(undefined8 *)(param_1 + 0x40);
  uVar13 = FUN_06c5195c(param_1 + 0x50,0);
  puVar5 = 
  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
  ;
  if (*(int *)(*(long *)
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
              + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)
                        Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                      );
  }
  iVar14 = FUN_06c52168(uVar26,uVar13,0);
  if (iVar14 != 0) {
    param_2 = FUN_039a457c(param_2,*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Interactable__
                          );
    *param_3 = param_2;
    goto LAB_0680247c;
  }
  if ((*(long *)(param_1 + 200) == 0) || (*(long *)(param_1 + 0xb8) == 0)) {
    FUN_067fd16c(param_1);
  }
  lVar18 = *(long *)(param_1 + 0x1e8);
  if (lVar18 == 0) goto LAB_06802e80;
  *(undefined4 *)(lVar18 + 0x18) = 0;
  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
  puVar6 = 
  Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_get_SelectedInteractable__
  ;
  if (*(long *)(param_1 + 0x1f0) == 0) goto LAB_06802e80;
  FUN_03d1a5b0(*(long *)(param_1 + 0x1f0),
               *(undefined8 *)
                Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_get_SelectedInteractable__
              );
  lVar18 = *(long *)(param_1 + 0x1f8);
  if (lVar18 == 0) goto LAB_06802e80;
  iVar14 = *(int *)(lVar18 + 0x18);
  *(undefined4 *)(lVar18 + 0x18) = 0;
  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
  if (0 < iVar14) {
    FUN_05946274(*(undefined8 *)(lVar18 + 0x10),0,iVar14,0);
  }
  if (*(long *)(param_1 + 0x200) == 0) goto LAB_06802e80;
  FUN_03d1a5b0(*(long *)(param_1 + 0x200),*(undefined8 *)puVar6);
  lVar18 = *(long *)(param_1 + 0x208);
  if (lVar18 == 0) goto LAB_06802e80;
  *(undefined4 *)(lVar18 + 0x18) = 0;
  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
  puVar6 = Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>__ctor__;
  if (0 < (int)*(ulong *)(param_2 + 0x18)) {
    uVar19 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    if (uVar19 != 0) {
      bVar4 = 0;
      uVar27 = 0;
      do {
        if (*(long *)(param_1 + 200) == 0) goto LAB_06802e80;
        iVar14 = *(int *)(param_2 + 0x20 + uVar27 * 4);
        uVar16 = FUN_05188410(*(long *)(param_1 + 200),iVar14,*(undefined8 *)puVar6);
        if ((uVar16 & 1) == 0) {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          iVar15 = FUN_06c525ac(iVar14,0);
          if (iVar15 == 0) {
            if ((iVar14 == 0x2011) || (iVar14 == 0xad)) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar26 = 0x2d;
LAB_068025f4:
              iVar15 = FUN_06c525ac(uVar26,0);
              if (iVar15 != 0) goto LAB_06802604;
            }
            else if (iVar14 == 0xa0) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar26 = 0x20;
              goto LAB_068025f4;
            }
            lVar18 = *(long *)(param_1 + 0x208);
            if (lVar18 == 0) goto LAB_06802e80;
            lVar17 = *(long *)(lVar18 + 0x10);
            lVar20 = *(long *)PTR_DAT_072a2270;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar17 == 0) goto LAB_06802e80;
            uVar3 = *(uint *)(lVar18 + 0x18);
            if (uVar3 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar18 + 0x18) = uVar3 + 1;
              *(int *)(lVar17 + (long)(int)uVar3 * 4 + 0x20) = iVar14;
            }
            else {
              FUN_04260298(lVar18,iVar14,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            bVar4 = 1;
          }
          else {
LAB_06802604:
            lVar18 = thunk_FUN_032a56a0(*(undefined8 *)
                                         Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                       );
            FUN_067f6d50(lVar18,iVar14,iVar15);
            if (*(long *)(param_1 + 0xb8) == 0) goto LAB_06802e80;
            uVar16 = FUN_05188410(*(long *)(param_1 + 0xb8),iVar15,
                                  *(undefined8 *)
                                   Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                                 );
            if ((uVar16 & 1) == 0) {
              if (*(long *)(param_1 + 0x1f0) == 0) goto LAB_06802e80;
              uVar16 = FUN_03d1b120(*(long *)(param_1 + 0x1f0),iVar15,
                                    *(undefined8 *)PTR_DAT_072ab650);
              if ((uVar16 & 1) != 0) {
                lVar17 = *(long *)(param_1 + 0x1e8);
                if (lVar17 == 0) goto LAB_06802e80;
                lVar20 = *(long *)(lVar17 + 0x10);
                lVar23 = *(long *)PTR_DAT_072a2270;
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar20 == 0) goto LAB_06802e80;
                uVar3 = *(uint *)(lVar17 + 0x18);
                if (uVar3 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar17 + 0x18) = uVar3 + 1;
                  *(int *)(lVar20 + (long)(int)uVar3 * 4 + 0x20) = iVar15;
                }
                else {
                  FUN_04260298(lVar17,iVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                }
              }
              if (*(long *)(param_1 + 0x200) == 0) goto LAB_06802e80;
              uVar16 = FUN_03d1b120(*(long *)(param_1 + 0x200),iVar14,
                                    *(undefined8 *)PTR_DAT_072ab650);
              if ((uVar16 & 1) != 0) {
                lVar17 = *(long *)(param_1 + 0x1f8);
                if (lVar17 == 0) goto LAB_06802e80;
                lVar20 = *(long *)(lVar17 + 0x10);
                lVar23 = *(long *)
                          Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                ;
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar20 == 0) goto LAB_06802e80;
                uVar3 = *(uint *)(lVar17 + 0x18);
                if (uVar3 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar17 + 0x18) = uVar3 + 1;
                  plVar21 = (long *)(lVar20 + (long)(int)uVar3 * 8 + 0x20);
                  *plVar21 = lVar18;
                  thunk_FUN_0333a630(plVar21,lVar18);
                }
                else {
                  FUN_041e2c78(lVar17,lVar18,
                               *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            else {
              if ((*(long *)(param_1 + 0xb8) == 0) ||
                 (uVar26 = FUN_0518817c(*(long *)(param_1 + 0xb8),iVar15,
                                        *(undefined8 *)
                                         Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>_Start__
                                       ), lVar18 == 0)) goto LAB_06802e80;
              *(undefined8 *)(lVar18 + 0x20) = uVar26;
              thunk_FUN_0333a630();
              *(long *)(lVar18 + 0x18) = param_1;
                    /* try { // try from 0680267c to 069028cf has its CatchHandler @ 0680267c
                       catch() { ... } // from try @ 0680267c with catch @ 0680267c
                       catch() { ... } // from try @ 06802afc with catch @ 0680267c
                       catch() { ... } // from try @ 06802ba8 with catch @ 0680267c
                       catch() { ... } // from try @ 06802bb0 with catch @ 0680267c
                       catch() { ... } // from try @ 06802c9c with catch @ 0680267c */
              thunk_FUN_0333a630((long *)(lVar18 + 0x18),param_1);
              lVar17 = *(long *)(param_1 + 0xc0);
              if (lVar17 == 0) goto LAB_06802e80;
              lVar20 = *(long *)(lVar17 + 0x10);
              lVar23 = *(long *)
                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
              ;
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              if (lVar20 == 0) goto LAB_06802e80;
              uVar3 = *(uint *)(lVar17 + 0x18);
              if (uVar3 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar3 + 1;
                plVar21 = (long *)(lVar20 + (long)(int)uVar3 * 8 + 0x20);
                *plVar21 = lVar18;
                thunk_FUN_0333a630(plVar21,lVar18);
              }
              else {
                FUN_041e2c78(lVar17,lVar18,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
              if (*(long *)(param_1 + 200) == 0) goto LAB_06802e80;
              FUN_0518821c(*(long *)(param_1 + 200),iVar14,lVar18,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                          );
            }
          }
        }
        if (uVar19 - 1 == uVar27) goto LAB_068028ac;
        uVar27 = uVar27 + 1;
      } while (uVar27 < *(uint *)(param_2 + 0x18));
    }
    goto LAB_06802e84;
  }
  bVar4 = 0;
LAB_068028ac:
  if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_06802e80;
  if (*(int *)(*(long *)(param_1 + 0x1e8) + 0x18) == 0) {
    *param_3 = param_2;
    goto LAB_0680247c;
  }
  lVar18 = *(long *)(param_1 + 0xd8);
  if (lVar18 == 0) goto LAB_06802e80;
                    /* try { // try from 068028d0 to 069028f7 has its CatchHandler @ 06802c0c */
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_06802e84;
  plVar21 = *(long **)(lVar18 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
  if (plVar21 == (long *)0x0) goto LAB_06802e80;
  iVar14 = (**(code **)(*plVar21 + 0x188))(plVar21,*(undefined8 *)(*plVar21 + 400));
  if (iVar14 == 0) {
LAB_06802924:
    lVar18 = *(long *)(param_1 + 0xd8);
    if (lVar18 == 0) goto LAB_06802e80;
                    /* try { // try from 0680292c to 06902953 has its CatchHandler @ 06802c08 */
    if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_06802e84;
    lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (lVar18 == 0) goto LAB_06802e80;
    thunk_FUN_06bcf4ec(lVar18,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),0);
    lVar18 = *(long *)(param_1 + 0xd8);
    if (lVar18 == 0) goto LAB_06802e80;
                    /* try { // try from 06802968 to 0690296f has its CatchHandler @ 06802bfc */
    if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_06802e84;
    uVar26 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    /* try { // try from 06802984 to 06902987 has its CatchHandler @ 06802bdc */
      thunk_FUN_032cd7c0();
    }
                    /* try { // try from 06802988 to 06902997 has its CatchHandler @ 06802bf4 */
    FUN_06c53c54(uVar26,0);
  }
  else {
    lVar18 = *(long *)(param_1 + 0xd8);
    if (lVar18 == 0) goto LAB_06802e80;
    if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_06802e84;
    plVar21 = *(long **)(lVar18 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (plVar21 == (long *)0x0) goto LAB_06802e80;
    iVar14 = (**(code **)(*plVar21 + 0x1a8))(plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
    if (iVar14 == 0) goto LAB_06802924;
  }
  lVar18 = *(long *)(param_1 + 0xd8);
  if (lVar18 != 0) {
                    /* try { // try from 068029a8 to 069029af has its CatchHandler @ 06802bf8 */
    if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xe0)) {
LAB_06802e84:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06802e78 with catch @ 06802e84
                        */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar25 = *(undefined8 *)(param_1 + 0x1e8);
    uVar13 = *(undefined4 *)(param_1 + 0x110);
    uVar26 = *(undefined8 *)(param_1 + 0xe8);
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0x114);
                    /* try { // try from 068029c4 to 069029cb has its CatchHandler @ 06802bd0 */
    uVar28 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
                    /* try { // try from 068029dc to 069029e7 has its CatchHandler @ 06802bd8 */
    bVar12 = FUN_06c52f4c(uVar25,uVar13,0,uVar1,uVar26,uVar2,uVar28,&local_68,0);
    puVar7 = Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>__ctor__;
    puVar6 = Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
    puVar5 = PTR_DAT_072a2270;
    if (local_68 != 0) {
      lVar18 = 0;
      do {
        if ((int)*(uint *)(local_68 + 0x18) <= (int)(uint)lVar18) {
LAB_06802ba0:
          lVar18 = *(long *)(param_1 + 0x1e8);
                    /* try { // try from 06802ba4 to 06902ba7 has its CatchHandler @ 06802bc8 */
          if (lVar18 != 0) {
                    /* try { // try from 06802ba8 to 06902bab has its CatchHandler @ 0680267c */
                    /* try { // try from 06802bac to 06902baf has its CatchHandler @ 06802bb8 */
                    /* try { // try from 06802bb0 to 06902c23 has its CatchHandler @ 0680267c */
            *(undefined4 *)(lVar18 + 0x18) = 0;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            puVar10 = 
            Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>__ctor__
            ;
            puVar9 = 
            Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_Start__
            ;
            puVar8 = 
            Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_set_Selector__
            ;
            puVar7 = 
            Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
            ;
            puVar6 = 
            Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
            ;
            lVar18 = *(long *)(param_1 + 0x1f8);
                    /* catch() { ... } // from try @ 06802bac with catch @ 06802bb8 */
            if (lVar18 != 0) {
                    /* catch() { ... } // from try @ 06802ac8 with catch @ 06802bbc */
                    /* catch() { ... } // from try @ 06802ad4 with catch @ 06802bc0 */
                    /* catch() { ... } // from try @ 06802ab0 with catch @ 06802bc4 */
                    /* catch() { ... } // from try @ 06802ba4 with catch @ 06802bc8 */
                    /* catch() { ... } // from try @ 06802aa4 with catch @ 06802bcc */
                    /* catch() { ... } // from try @ 068029c4 with catch @ 06802bd0 */
                    /* catch() { ... } // from try @ 06802a68 with catch @ 06802bd4
                       catch() { ... } // from try @ 06802af0 with catch @ 06802bd4 */
                    /* catch() { ... } // from try @ 068029dc with catch @ 06802bd8 */
                    /* catch() { ... } // from try @ 06802984 with catch @ 06802bdc */
                    /* catch() { ... } // from try @ 06802b94 with catch @ 06802be0 */
                    /* catch() { ... } // from try @ 06802a8c with catch @ 06802be4 */
              iVar14 = 0;
              goto LAB_06802be8;
            }
          }
          break;
        }
        if (*(uint *)(local_68 + 0x18) <= (uint)lVar18) goto LAB_06802e84;
        lVar17 = *(long *)(local_68 + lVar18 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_06802ba0;
        uVar13 = FUN_06c51e68(lVar17,0);
        FUN_06c51ecc(lVar17,*(undefined4 *)(param_1 + 0xe0),0);
        lVar20 = *(long *)(param_1 + 0xb0);
                    /* try { // try from 06802a68 to 06902a6f has its CatchHandler @ 06802bd4 */
        if (lVar20 == 0) break;
        lVar23 = *(long *)(lVar20 + 0x10);
        lVar24 = *(long *)puVar6;
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                    /* try { // try from 06802a80 to 06902a87 has its CatchHandler @ 06802bec */
        if (lVar23 == 0) break;
        uVar3 = *(uint *)(lVar20 + 0x18);
                    /* try { // try from 06802a8c to 06902a93 has its CatchHandler @ 06802be4 */
        if (uVar3 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar20 + 0x18) = uVar3 + 1;
          plVar21 = (long *)(lVar23 + (long)(int)uVar3 * 8 + 0x20);
          *plVar21 = lVar17;
                    /* try { // try from 06802aa4 to 06902aab has its CatchHandler @ 06802bcc */
          thunk_FUN_0333a630(plVar21,lVar17);
                    /* try { // try from 06802ab0 to 06902ab7 has its CatchHandler @ 06802bc4 */
        }
        else {
          FUN_041e2c78(lVar20,lVar17,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
                    /* try { // try from 06802ac8 to 06902ad3 has its CatchHandler @ 06802bbc */
        if (*(long *)(param_1 + 0xb8) == 0) break;
                    /* try { // try from 06802ad4 to 06902adf has its CatchHandler @ 06802bc0 */
        FUN_0518821c(*(long *)(param_1 + 0xb8),uVar13,lVar17,*(undefined8 *)puVar7);
        lVar17 = *(long *)(param_1 + 0x1e0);
        if (lVar17 == 0) break;
        lVar20 = *(long *)(lVar17 + 0x10);
                    /* try { // try from 06802af0 to 06902afb has its CatchHandler @ 06802bd4 */
        lVar23 = *(long *)puVar5;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    /* try { // try from 06802afc to 06902b87 has its CatchHandler @ 0680267c */
        if (lVar20 == 0) break;
        uVar3 = *(uint *)(lVar17 + 0x18);
        if (uVar3 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar17 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar20 + (long)(int)uVar3 * 4 + 0x20) = uVar13;
        }
        else {
          FUN_04260298(lVar17,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        lVar17 = *(long *)(param_1 + 0x1d8);
        if (lVar17 == 0) break;
        lVar20 = *(long *)(lVar17 + 0x10);
        lVar23 = *(long *)puVar5;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar20 == 0) break;
        uVar3 = *(uint *)(lVar17 + 0x18);
        if (uVar3 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar17 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar20 + (long)(int)uVar3 * 4 + 0x20) = uVar13;
        }
        else {
                    /* try { // try from 06802b88 to 06902b8b has its CatchHandler @ 06802c04 */
                    /* try { // try from 06802b8c to 06902b8f has its CatchHandler @ 06802c00 */
          FUN_04260298(lVar17,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
                    /* try { // try from 06802b90 to 06902b93 has its CatchHandler @ 06802be8 */
                    /* try { // try from 06802b94 to 06902b9b has its CatchHandler @ 06802be0 */
        lVar18 = lVar18 + 1;
      } while (local_68 != 0);
    }
  }
LAB_06802e80:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06802e00 with catch @ 06802e80
                        */
  FUN_032d5ee8();
LAB_06802be8:
                    /* catch() { ... } // from try @ 06802b90 with catch @ 06802be8 */
                    /* catch() { ... } // from try @ 06802a80 with catch @ 06802bec */
                    /* catch() { ... } // from try @ 06802b9c with catch @ 06802bf0 */
  if (iVar14 < *(int *)(lVar18 + 0x18)) {
                    /* catch() { ... } // from try @ 06802988 with catch @ 06802bf4 */
                    /* catch() { ... } // from try @ 068029a8 with catch @ 06802bf8 */
                    /* catch() { ... } // from try @ 06802968 with catch @ 06802bfc */
    lVar18 = FUN_041e29a8(lVar18,iVar14,*(undefined8 *)puVar8);
                    /* catch() { ... } // from try @ 06802b8c with catch @ 06802c00 */
                    /* catch() { ... } // from try @ 06802b88 with catch @ 06802c04 */
                    /* catch() { ... } // from try @ 0680292c with catch @ 06802c08 */
                    /* catch() { ... } // from try @ 068028d0 with catch @ 06802c0c */
    if ((lVar18 == 0) || (*(long *)(param_1 + 0xb8) == 0)) goto LAB_06802e80;
    uVar19 = FUN_05189ccc(*(long *)(param_1 + 0xb8),*(undefined4 *)(lVar18 + 0x28),&local_70,
                          *(undefined8 *)puVar9);
    if ((uVar19 & 1) == 0) {
      lVar17 = *(long *)(param_1 + 0x1e8);
      if (lVar17 == 0) goto LAB_06802e80;
                    /* try { // try from 06802c9c to 06902ca7 has its CatchHandler @ 0680267c */
      uVar13 = *(undefined4 *)(lVar18 + 0x28);
      lVar18 = *(long *)(lVar17 + 0x10);
                    /* try { // try from 06802ca8 to 06902caf has its CatchHandler @ 06802cb0 */
      lVar20 = *(long *)puVar5;
                    /* catch() { ... } // from try @ 06802c74 with catch @ 06802cb0
                       catch() { ... } // from try @ 06802ca8 with catch @ 06802cb0 */
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    /* try { // try from 06802cb4 to 06902ddb has its CatchHandler @ 06802cb4
                       catch() { ... } // from try @ 06802cb4 with catch @ 06802cb4
                       catch() { ... } // from try @ 06802e50 with catch @ 06802cb4
                       catch() { ... } // from try @ 06802e7c with catch @ 06802cb4
                       catch() { ... } // from try @ 06802eb0 with catch @ 06802cb4
                       catch() { ... } // from try @ 06802ee0 with catch @ 06802cb4 */
      if (lVar18 == 0) goto LAB_06802e80;
      uVar3 = *(uint *)(lVar17 + 0x18);
      if (uVar3 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar17 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar18 + (long)(int)uVar3 * 4 + 0x20) = uVar13;
      }
      else {
        FUN_04260298(lVar17,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
                    /* try { // try from 06802c24 to 06902c27 has its CatchHandler @ 06802c34 */
      *(undefined8 *)(lVar18 + 0x20) = local_70;
      thunk_FUN_0333a630();
                    /* catch() { ... } // from try @ 06802c24 with catch @ 06802c34 */
      *(long *)(lVar18 + 0x18) = param_1;
      thunk_FUN_0333a630((long *)(lVar18 + 0x18),param_1);
      lVar17 = *(long *)(param_1 + 0xc0);
      if (lVar17 == 0) goto LAB_06802e80;
      lVar20 = *(long *)(lVar17 + 0x10);
      lVar23 = *(long *)puVar6;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      if (lVar20 == 0) goto LAB_06802e80;
      uVar3 = *(uint *)(lVar17 + 0x18);
      if (uVar3 < *(uint *)(lVar20 + 0x18)) {
                    /* try { // try from 06802c74 to 06902c9b has its CatchHandler @ 06802cb0 */
        *(uint *)(lVar17 + 0x18) = uVar3 + 1;
        plVar21 = (long *)(lVar20 + (long)(int)uVar3 * 8 + 0x20);
        *plVar21 = lVar18;
        thunk_FUN_0333a630(plVar21,lVar18);
      }
      else {
        FUN_041e2c78(lVar17,lVar18,
                     *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(param_1 + 200) == 0) goto LAB_06802e80;
      FUN_0518821c(*(long *)(param_1 + 200),*(undefined4 *)(lVar18 + 0x14),lVar18,
                   *(undefined8 *)puVar7);
      if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_06802e80;
      FUN_041e4460(*(long *)(param_1 + 0x1f8),iVar14,*(undefined8 *)puVar10);
      iVar14 = iVar14 + -1;
    }
    lVar18 = *(long *)(param_1 + 0x1f8);
    iVar14 = iVar14 + 1;
    if (lVar18 == 0) goto LAB_06802e80;
    goto LAB_06802be8;
  }
  bVar11 = *(char *)(param_1 + 0xe4) != '\0';
  if ((bVar12 & 1) == 0 && bVar11) {
    do {
      uVar19 = FUN_06802e88(param_1);
    } while ((uVar19 & 1) == 0);
    bVar12 = 1;
  }
  else {
    bVar12 = bVar12 | bVar11;
  }
  if ((param_4 & 1) != 0) {
    FUN_06801c14(param_1);
  }
  lVar18 = *(long *)(param_1 + 0x1f8);
  if (lVar18 != 0) {
    iVar14 = 0;
    while (iVar14 < *(int *)(lVar18 + 0x18)) {
      lVar18 = FUN_041e29a8(lVar18,iVar14,*(undefined8 *)puVar8);
      if ((lVar18 == 0) || (lVar17 = *(long *)(param_1 + 0x208), lVar17 == 0)) goto LAB_06802e80;
      uVar13 = *(undefined4 *)(lVar18 + 0x14);
      lVar18 = *(long *)(lVar17 + 0x10);
      lVar20 = *(long *)puVar5;
                    /* try { // try from 06802ddc to 06902de3 has its CatchHandler @ 06802e94 */
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_06802e80;
      uVar3 = *(uint *)(lVar17 + 0x18);
      if (uVar3 < *(uint *)(lVar18 + 0x18)) {
                    /* try { // try from 06802df8 to 06902dfb has its CatchHandler @ 06802e8c */
                    /* try { // try from 06802e00 to 06902e0b has its CatchHandler @ 06802e80 */
        *(uint *)(lVar17 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar18 + (long)(int)uVar3 * 4 + 0x20) = uVar13;
      }
      else {
                    /* try { // try from 06802e18 to 06902e1f has its CatchHandler @ 06802e88 */
        FUN_04260298(lVar17,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      lVar18 = *(long *)(param_1 + 0x1f8);
      iVar14 = iVar14 + 1;
      if (lVar18 == 0) goto LAB_06802e80;
    }
    *param_3 = 0;
    thunk_FUN_0333a630(param_3,0);
    lVar18 = *(long *)(param_1 + 0x208);
    if (lVar18 != 0) {
      if (0 < *(int *)(lVar18 + 0x18)) {
                    /* try { // try from 06802e50 to 06902e77 has its CatchHandler @ 06802cb4 */
        lVar18 = FUN_04261d64(lVar18,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<IXRInteractor,_GameObject>_Remove__
                             );
        *param_3 = lVar18;
        thunk_FUN_0333a630(param_3,lVar18);
      }
                    /* try { // try from 06802e78 to 06902e7b has its CatchHandler @ 06802e84 */
      return bVar12 & (bVar4 ^ 1);
                    /* try { // try from 06802e7c to 06902eab has its CatchHandler @ 06802cb4 */
    }
  }
  goto LAB_06802e80;
}


