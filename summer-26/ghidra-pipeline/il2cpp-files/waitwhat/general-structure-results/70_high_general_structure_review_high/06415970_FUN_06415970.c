/*
FUNCTION_NAME: FUN_06415970
ENTRY_POINT: 06415970
PROGRAM: waitwhat-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_06415970(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  puVar1 = PTR_DAT_070c48c8;
  puVar2 = PTR_DAT_070c2638;
                    /* try { // try from 0641597c to 0651597f has its CatchHandler @ 064159bc */
                    /* try { // try from 06415980 to 065159ab has its CatchHandler @ 064157f0 */
  if ((bRam00000000075567e1 & 1) == 0) {
                    /* try { // try from 064159ac to 065159bb has its CatchHandler @ 064159bc */
    FUN_03188a78(PTR_DAT_070c2638);
    FUN_03188a78(PTR_DAT_070c48c8);
                    /* catch() { ... } // from try @ 0641597c with catch @ 064159bc
                       catch() { ... } // from try @ 064159ac with catch @ 064159bc */
                    /* try { // try from 064159c0 to 065159c3 has its CatchHandler @ 064159cc */
                    /* try { // try from 064159c4 to 065159cf has its CatchHandler @ 064157f0 */
    FUN_03188a78(System_Xml_Linq_NamespaceCache_var);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 064159c0 with catch @ 064159cc
                        */
    FUN_03188a78(System_Xml_Linq_NamespaceResolver_var);
    FUN_03188a78(UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassData_var
                );
    FUN_03188a78(UnityEngine_TextCore_Text_NativeTextInfo_var);
    FUN_03188a78(UnityEngine_UI_Navigation_var);
                    /* try { // try from 064159fc to 06515a93 has its CatchHandler @ 064159fc
                       catch() { ... } // from try @ 064159fc with catch @ 064159fc
                       catch() { ... } // from try @ 06415f94 with catch @ 064159fc
                       catch() { ... } // from try @ 06416070 with catch @ 064159fc
                       catch() { ... } // from try @ 064160cc with catch @ 064159fc */
    FUN_03188a78(UnityEngine_InputSystem_UI_NavigationModel_var);
    FUN_03188a78(Fusion_NetworkArray<T>_var);
    FUN_03188a78(Fusion_NetworkBehaviour_var);
    FUN_03188a78(Fusion_NetworkBehaviourBufferInterpolator_var);
    FUN_03188a78(Fusion_NetworkBehaviourId_var);
    FUN_03188a78(Meta_XR_MultiplayerBlocks_Shared_NetworkBootstrapperParams_var);
    FUN_03188a78(Fusion_NetworkBufferSerializerInfo_var);
    FUN_03188a78(Fusion_NetworkDictionary<K,_V>_var);
    bRam00000000075567e1 = 1;
  }
  plVar4 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar1);
  FUN_057c92b0(plVar4,0);
  plVar5 = (long *)FUN_03188b1c(*(undefined8 *)puVar2,2);
  if (plVar5 == (long *)0x0) goto LAB_06416238;
  lVar8 = *(long *)(param_1 + 0x28);
  if ((lVar8 != 0) &&
     (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_0641622c:
    uVar7 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar7,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar8;
    lVar8 = FUN_059752e8(0);
    if ((lVar8 != 0) &&
       (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_0641622c;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = lVar8;
      if (plVar4 != (long *)0x0) {
        FUN_057ccb50(plVar4,*(undefined8 *)System_Xml_Linq_NamespaceResolver_var,plVar5,0);
        plVar5 = (long *)FUN_03188b1c(*(undefined8 *)puVar2,2);
        if (plVar5 != (long *)0x0) {
          lVar8 = *(long *)(param_1 + 0x38);
          if ((lVar8 != 0) &&
             (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_0641622c;
          if ((int)plVar5[3] != 0) {
            plVar5[4] = lVar8;
            lVar8 = FUN_059752e8(0);
            if ((lVar8 != 0) &&
               (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
            goto LAB_0641622c;
            puVar1 = Fusion_NetworkArray<T>_var;
            if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
              plVar5[5] = lVar8;
              FUN_057ccb50(plVar4,*(undefined8 *)puVar1,plVar5,0);
              plVar5 = (long *)FUN_03188b1c(*(undefined8 *)puVar2,2);
              if (plVar5 == (long *)0x0) goto LAB_06416238;
              lVar8 = *(long *)(param_1 + 0x58);
              if ((lVar8 != 0) &&
                 (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
              goto LAB_0641622c;
              if ((int)plVar5[3] != 0) {
                plVar5[4] = lVar8;
                lVar8 = FUN_059752e8(0);
                if ((lVar8 != 0) &&
                   (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
                goto LAB_0641622c;
                puVar1 = Fusion_NetworkDictionary<K,_V>_var;
                if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                  plVar5[5] = lVar8;
                  FUN_057ccb50(plVar4,*(undefined8 *)puVar1,plVar5,0);
                  plVar5 = (long *)FUN_03188b1c(*(undefined8 *)puVar2,2);
                  if (plVar5 == (long *)0x0) goto LAB_06416238;
                  lVar8 = *(long *)(param_1 + 0x30);
                  if ((lVar8 != 0) &&
                     (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)
                     ) goto LAB_0641622c;
                  if ((int)plVar5[3] != 0) {
                    plVar5[4] = lVar8;
                    lVar8 = FUN_059752e8(0);
                    if ((lVar8 != 0) &&
                       (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar6 == 0)) goto LAB_0641622c;
                    puVar1 = UnityEngine_TextCore_Text_NativeTextInfo_var;
                    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                      plVar5[5] = lVar8;
                      FUN_057ccb50(plVar4,*(undefined8 *)puVar1,plVar5,0);
                      plVar5 = (long *)FUN_03188b1c(*(undefined8 *)puVar2,2);
                      if (plVar5 == (long *)0x0) goto LAB_06416238;
                      lVar8 = *(long *)(param_1 + 0x20);
                      if ((lVar8 != 0) &&
                         (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)),
                         lVar6 == 0)) goto LAB_0641622c;
                      if ((int)plVar5[3] != 0) {
                        plVar5[4] = lVar8;
                        lVar8 = FUN_059752e8(0);
                        if ((lVar8 != 0) &&
                           (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)),
                           lVar6 == 0)) goto LAB_0641622c;
                        puVar1 = Fusion_NetworkBehaviour_var;
                        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                          plVar5[5] = lVar8;
                          FUN_057ccb50(plVar4,*(undefined8 *)puVar1,plVar5,0);
                          plVar5 = (long *)FUN_03188b1c(*(undefined8 *)puVar2,2);
                          if (plVar5 == (long *)0x0) goto LAB_06416238;
                          lVar8 = *(long *)(param_1 + 0x68);
                          if ((lVar8 != 0) &&
                             (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)),
                             lVar6 == 0)) goto LAB_0641622c;
                          if ((int)plVar5[3] != 0) {
                            plVar5[4] = lVar8;
                            lVar8 = FUN_059752e8(0);
                            if ((lVar8 != 0) &&
                               (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)),
                               lVar6 == 0)) goto LAB_0641622c;
                            puVar1 = Fusion_NetworkBehaviourBufferInterpolator_var;
                            if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                              plVar5[5] = lVar8;
                              FUN_057ccb50(plVar4,*(undefined8 *)puVar1,plVar5,0);
                              plVar5 = (long *)FUN_03188b1c(*(undefined8 *)puVar2,2);
                              if (plVar5 == (long *)0x0) goto LAB_06416238;
                              lVar8 = *(long *)(param_1 + 0x70);
                              if ((lVar8 != 0) &&
                                 (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)),
                                 lVar6 == 0)) goto LAB_0641622c;
                              if ((int)plVar5[3] != 0) {
                                plVar5[4] = lVar8;
                                lVar8 = FUN_059752e8(0);
                                if ((lVar8 != 0) &&
                                   (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar5 + 0x40)
                                                              ), lVar6 == 0)) goto LAB_0641622c;
                                puVar1 = System_Xml_Linq_NamespaceCache_var;
                                if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                                  plVar5[5] = lVar8;
                                  FUN_057ccb50(plVar4,*(undefined8 *)puVar1,plVar5,0);
                                  plVar5 = (long *)FUN_03188b1c(*(undefined8 *)puVar2,2);
                                  puVar1 = PTR_DAT_070c1958;
                                  auStack_34[0] = *(undefined1 *)(param_1 + 0x80);
                                  lVar8 = thunk_FUN_031c39fc(*(undefined8 *)
                                                              (PTR_DAT_070c1958 + 0x28),auStack_34);
                                  if (plVar5 == (long *)0x0) goto LAB_06416238;
                                  if ((lVar8 != 0) &&
                                     (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)
                                                                        (*plVar5 + 0x40)),
                                     lVar6 == 0)) goto LAB_0641622c;
                                  if ((int)plVar5[3] != 0) {
                                    plVar5[4] = lVar8;
                                    lVar8 = FUN_059752e8(0);
                                    if ((lVar8 != 0) &&
                                       (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)
                                                                          (*plVar5 + 0x40)),
                                       lVar6 == 0)) goto LAB_0641622c;
                                    puVar3 = UnityEngine_UI_Navigation_var;
                                    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                                      plVar5[5] = lVar8;
                                      FUN_057ccb50(plVar4,*(undefined8 *)puVar3,plVar5,0);
                                      plVar5 = (long *)FUN_03188b1c(*(undefined8 *)puVar2,2);
                                      auStack_38[0] = *(undefined1 *)(param_1 + 0x81);
                                      lVar8 = thunk_FUN_031c39fc(*(undefined8 *)(puVar1 + 0x28),
                                                                 auStack_38);
                                      if (plVar5 == (long *)0x0) goto LAB_06416238;
                                      if ((lVar8 != 0) &&
                                         (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)
                                                                            (*plVar5 + 0x40)),
                                         lVar6 == 0)) goto LAB_0641622c;
                                      if ((int)plVar5[3] != 0) {
                                        plVar5[4] = lVar8;
                                        lVar8 = FUN_059752e8(0);
                                        if ((lVar8 != 0) &&
                                           (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)
                                                                              (*plVar5 + 0x40)),
                                           lVar6 == 0)) goto LAB_0641622c;
                                        puVar3 = Fusion_NetworkBehaviourId_var;
                                        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                                          plVar5[5] = lVar8;
                                          FUN_057ccb50(plVar4,*(undefined8 *)puVar3,plVar5,0);
                                          plVar5 = (long *)FUN_03188b1c(*(undefined8 *)puVar2,2);
                                          auStack_44[0] = *(undefined1 *)(param_1 + 0x82);
                                          lVar8 = thunk_FUN_031c39fc(*(undefined8 *)(puVar1 + 0x28),
                                                                     auStack_44);
                                          if (plVar5 == (long *)0x0) goto LAB_06416238;
                                          if ((lVar8 != 0) &&
                                             (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)
                                                                                (*plVar5 + 0x40)),
                                             lVar6 == 0)) goto LAB_0641622c;
                                          if ((int)plVar5[3] != 0) {
                                            plVar5[4] = lVar8;
                                            lVar8 = FUN_059752e8(0);
                                            if ((lVar8 != 0) &&
                                               (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)
                                                                                  (*plVar5 + 0x40)),
                                               lVar6 == 0)) goto LAB_0641622c;
                                            puVar3 = Fusion_NetworkBufferSerializerInfo_var;
                                            if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                                              plVar5[5] = lVar8;
                                              FUN_057ccb50(plVar4,*(undefined8 *)puVar3,plVar5,0);
                                              plVar5 = (long *)FUN_03188b1c(*(undefined8 *)puVar2,2)
                                              ;
                                              auStack_48[0] = *(undefined1 *)(param_1 + 0x83);
                                              lVar8 = thunk_FUN_031c39fc(*(undefined8 *)
                                                                          (puVar1 + 0x28),auStack_48
                                                                        );
                                              if (plVar5 == (long *)0x0) goto LAB_06416238;
                                              if ((lVar8 != 0) &&
                                                 (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            ), lVar6 == 0))
                                              goto LAB_0641622c;
                                              if ((int)plVar5[3] != 0) {
                                                plVar5[4] = lVar8;
                                                lVar8 = FUN_059752e8(0);
                                                if ((lVar8 != 0) &&
                                                   (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40)),
                                                   lVar6 == 0)) goto LAB_0641622c;
                                                puVar3 = 
                                                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassData_var
                                                ;
                                                if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                                                  plVar5[5] = lVar8;
                                                  FUN_057ccb50(plVar4,*(undefined8 *)puVar3,plVar5,0
                                                              );
                                                  plVar5 = (long *)FUN_03188b1c(*(undefined8 *)
                                                                                 puVar2,2);
                                                  auStack_4c[0] = *(undefined1 *)(param_1 + 0x84);
                                                  lVar8 = thunk_FUN_031c39fc(*(undefined8 *)
                                                                              (puVar1 + 0x28),
                                                                             auStack_4c);
                                                  if (plVar5 == (long *)0x0) goto LAB_06416238;
                                                  if ((lVar8 != 0) &&
                                                     (lVar6 = thunk_FUN_031c3cac(lVar8,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40)), lVar6 == 0)) goto LAB_0641622c;
                                                  if ((int)plVar5[3] != 0) {
                                                    plVar5[4] = lVar8;
                                                    lVar8 = FUN_059752e8(0);
                                                    if ((lVar8 != 0) &&
                                                       (lVar6 = thunk_FUN_031c3cac(lVar8,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
                                                  goto LAB_0641622c;
                                                  puVar1 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_NetworkBootstrapperParams_var
                                                  ;
                                                  if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                                                    plVar5[5] = lVar8;
                                                    FUN_057ccb50(plVar4,*(undefined8 *)puVar1,plVar5
                                                                 ,0);
                                                    plVar5 = (long *)FUN_03188b1c(*(undefined8 *)
                                                                                   puVar2,2);
                                                    if (plVar5 == (long *)0x0) goto LAB_06416238;
                                                    lVar8 = *(long *)(param_1 + 0x40);
                                                    if ((lVar8 != 0) &&
                                                       (lVar6 = thunk_FUN_031c3cac(lVar8,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
                                                  goto LAB_0641622c;
                                                  if ((int)plVar5[3] != 0) {
                                                    plVar5[4] = lVar8;
                                                    lVar8 = FUN_059752e8(0);
                                                    if ((lVar8 != 0) &&
                                                       (lVar6 = thunk_FUN_031c3cac(lVar8,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
                                                  goto LAB_0641622c;
                                                  puVar2 = 
                                                  UnityEngine_InputSystem_UI_NavigationModel_var;
                                                  if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                                                    plVar5[5] = lVar8;
                                                    FUN_057ccb50(plVar4,*(undefined8 *)puVar2,plVar5
                                                                 ,0);
                                                    (**(code **)(*plVar4 + 0x168))
                                                              (plVar4,*(undefined8 *)
                                                                       (*plVar4 + 0x170));
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
                }
              }
            }
          }
          goto LAB_06416228;
        }
      }
LAB_06416238:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
LAB_06416228:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


