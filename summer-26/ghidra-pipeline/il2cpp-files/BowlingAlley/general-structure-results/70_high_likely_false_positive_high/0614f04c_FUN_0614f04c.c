/*
FUNCTION_NAME: FUN_0614f04c
ENTRY_POINT: 0614f04c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_15;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0614f834) */
/* WARNING: Removing unreachable block (ram,0x0614f838) */
/* WARNING: Removing unreachable block (ram,0x0614fc64) */

void FUN_0614f04c(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  
                    /* try { // try from 0614f064 to 0624f073 has its CatchHandler @ 061501e4 */
  if ((DAT_076dda79 & 1) == 0) {
                    /* try { // try from 0614f084 to 0624f093 has its CatchHandler @ 061501bc */
    thunk_FUN_032e1da0(System_Collections_Generic_List<Camera>_TypeInfo);
    thunk_FUN_032e1da0(
                      Nova_InternalNamespace_0_InternalNamespace_4_InternalType_156<InternalType_157<InternalType_125>,_InternalType_125>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_07291838);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(System_Collections_Generic_List<NativeArray<XRRaycastHit>>_TypeInfo);
                    /* try { // try from 0614f0b8 to 0624f0bb has its CatchHandler @ 0614ffbc */
    thunk_FUN_032e1da0(PTR_DAT_07295890);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(PTR_DAT_0727ea28);
    thunk_FUN_032e1da0(System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionStartEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UIHoverEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<CanvasGroup>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<CategoryButton>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FingerFeature,_Nullable<float>>_TypeInfo);
    DAT_076dda79 = 1;
  }
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x30) != '\0') {
      return;
    }
    lVar3 = *(long *)(param_2 + 0x58);
    *(undefined1 *)(param_2 + 0x30) = 1;
    if (lVar3 != 0) {
      iVar12 = 0;
      plVar17 = (long *)System_Func<TransitionStartEvent>_TypeInfo;
      plVar9 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
      do {
        iVar2 = FUN_058f278c(lVar3,0);
        if (iVar2 <= iVar12) {
          return;
        }
        plVar4 = *(long **)(param_2 + 0x58);
        if ((plVar4 == (long *)0x0) ||
           (plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                                       (plVar4,iVar12,*(undefined8 *)(*plVar4 + 0x310)),
           plVar4 == (long *)0x0)) break;
        bVar1 = *(byte *)(*plVar17 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar4);
        }
        plVar16 = plVar4 + 9;
        lVar3 = *plVar16;
        if (lVar3 == 0) {
          lVar3 = plVar4[7];
          if (lVar3 == 0) {
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = (long *)FUN_06152444(param_1,param_2,lVar3);
          }
          if ((int)plVar4[0xc] == 2) {
            bVar1 = *(byte *)(*plVar9 + 0x130);
            if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *plVar9)) break;
            lVar6 = plVar4[0xd];
            if (lVar6 == 0) {
              lVar6 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
            }
            plVar8 = (long *)FUN_0619bc48(param_2,0);
            if (plVar8 == (long *)0x0) break;
            uVar5 = (**(code **)(*plVar8 + 0x348))(plVar8,lVar6,*(undefined8 *)(*plVar8 + 0x350));
            if ((uVar5 & 1) == 0) {
              plVar8 = (long *)FUN_0619bc48(param_2,0);
              if (plVar8 == (long *)0x0) break;
              (**(code **)(*plVar8 + 0x308))(plVar8,lVar6,*(undefined8 *)(*plVar8 + 0x310));
            }
            uVar5 = thunk_FUN_057aa644(lVar6,*(undefined8 *)
                                              System_Func<FingerFeature,_Nullable<float>>_TypeInfo,0
                                      );
            if ((uVar5 & 1) == 0) goto LAB_0614f3c0;
            if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar5 = FUN_062ac390(plVar7,0,0);
            if ((uVar5 & 1) == 0) goto LAB_0614f3c0;
            plVar4 = (long *)FUN_06151d7c();
            *plVar16 = (long)plVar4;
LAB_0614f4b0:
            thunk_FUN_0333a630(plVar16,plVar4);
          }
          else {
LAB_0614f3c0:
            if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar5 = FUN_062ac390(plVar7,0,0);
            if ((uVar5 & 1) == 0) {
              plVar8 = *(long **)(param_1 + 0x78);
              if (plVar8 == (long *)0x0) break;
              lVar3 = (**(code **)(*plVar8 + 0x308))(plVar8,plVar7,*(undefined8 *)(*plVar8 + 0x310))
              ;
              if (lVar3 != 0) {
                plVar4 = *(long **)(param_1 + 0x78);
                if (plVar4 != (long *)0x0) {
                  plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                                             (plVar4,plVar7,*(undefined8 *)(*plVar4 + 0x310));
                  if (plVar4 != (long *)0x0) {
                    bVar1 = *(byte *)(*(long *)
                                       System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                                     + 0x130);
                    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)
                         System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                       )) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d618c(plVar4);
                    }
                  }
                  *plVar16 = (long)plVar4;
                  goto LAB_0614f4b0;
                }
                break;
              }
              plVar9 = *(long **)(param_1 + 0xb8);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              plVar8 = (long *)(**(code **)(*plVar9 + 0x178))
                                         (plVar9,plVar7,0,0,*(undefined8 *)(*plVar9 + 0x180));
              plVar9 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
              if (plVar8 == (long *)0x0) {
                lVar3 = plVar4[3];
                uVar13 = (undefined4)plVar4[2];
                uVar14 = *(undefined4 *)((long)plVar4 + 0x14);
                uVar15 = thunk_FUN_032a56a0(*(undefined8 *)
                                             UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo
                                           );
                uVar11 = *(undefined8 *)System_Collections_Generic_List<CategoryButton>_TypeInfo;
                goto System_Xml_Serialization_CodeIdentifier__MakePascal;
              }
              plVar4[8] = (long)plVar7;
              thunk_FUN_0333a630(plVar4 + 8,plVar7);
              plVar9 = (long *)thunk_FUN_032f70fc(plVar8,0);
              uVar15 = *(undefined8 *)System_Collections_Generic_List<CanvasGroup>_TypeInfo;
              if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
                thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
              }
              plVar10 = (long *)FUN_059324dc(uVar15,0);
              if (plVar10 == (long *)0x0) break;
              uVar5 = (**(code **)(*plVar10 + 0x2b8))
                                (plVar10,plVar9,*(undefined8 *)(*plVar10 + 0x2c0));
              if ((uVar5 & 1) != 0) {
                bVar1 = *(byte *)(*(long *)
                                   System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                                 + 0x130);
                if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)
                     System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                   )) {
LAB_0614fc5c:
                    /* WARNING: Subroutine does not return */
                  FUN_032d618c(plVar8);
                }
                *plVar16 = (long)plVar8;
                thunk_FUN_0333a630(plVar16,plVar8);
                plVar9 = *(long **)(param_1 + 0x78);
                if (plVar9 != (long *)0x0) {
                  (**(code **)(*plVar9 + 0x2a8))
                            (plVar9,plVar7,*plVar16,*(undefined8 *)(*plVar9 + 0x2b0));
                  FUN_0614f04c(param_1,*plVar16);
                  plVar9 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
                  goto LAB_0614f288;
                }
                break;
              }
              uVar15 = *(undefined8 *)
                        Nova_InternalNamespace_0_InternalNamespace_4_InternalType_156<InternalType_157<InternalType_125>,_InternalType_125>_TypeInfo
              ;
              if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar15 = FUN_059324dc(uVar15,0);
              if (plVar9 == (long *)0x0) break;
              uVar5 = (**(code **)(*plVar9 + 0x2a8))(plVar9,uVar15,*(undefined8 *)(*plVar9 + 0x2b0))
              ;
              if ((uVar5 & 1) == 0) {
                uVar15 = *(undefined8 *)
                          System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo;
                if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                uVar15 = FUN_059324dc(uVar15,0);
                uVar5 = (**(code **)(*plVar9 + 0x2a8))
                                  (plVar9,uVar15,*(undefined8 *)(*plVar9 + 0x2b0));
                if ((uVar5 & 1) != 0) {
                  bVar1 = *(byte *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo
                                   + 0x130);
                  if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo))
                  goto LAB_0614fc5c;
                  goto LAB_0614f748;
                }
                uVar15 = *(undefined8 *)
                          System_Collections_Generic_List<NativeArray<XRRaycastHit>>_TypeInfo;
                if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                uVar15 = FUN_059324dc(uVar15,0);
                uVar5 = (**(code **)(*plVar9 + 0x2a8))
                                  (plVar9,uVar15,*(undefined8 *)(*plVar9 + 0x2b0));
                if ((uVar5 & 1) != 0) {
                  if (*(long *)(param_1 + 0xa0) != 0) {
                    FUN_061fdb5c(*(long *)(param_1 + 0xa0),1,0);
                    if ((*(long *)(param_1 + 0xa0) != 0) &&
                       (FUN_061fd57c(*(long *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb8),0),
                       plVar7 != (long *)0x0)) {
                      uVar11 = *(undefined8 *)(param_1 + 0xa0);
                      uVar15 = (**(code **)(*plVar7 + 0x168))
                                         (plVar7,*(undefined8 *)(*plVar7 + 0x170));
                      if (*(int *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo +
                                  0xe0) == 0) {
                        thunk_FUN_032cd7c0(*(long *)
                                            System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo);
                      }
                      bVar1 = *(byte *)(*(long *)PTR_DAT_07295890 + 0x130);
                      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)PTR_DAT_07295890)) goto LAB_0614fc5c;
                      plVar8 = (long *)FUN_061fcd98(plVar8,uVar11,uVar15,0);
                      goto LAB_0614f748;
                    }
                  }
                  break;
                }
              }
              else {
                if (*(long *)(param_1 + 0xa0) == 0) break;
                FUN_061fdb5c(*(long *)(param_1 + 0xa0),1,0);
                if ((*(long *)(param_1 + 0xa0) == 0) ||
                   (FUN_061fd57c(*(long *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb8),0),
                   plVar7 == (long *)0x0)) break;
                uVar11 = *(undefined8 *)(param_1 + 0xa0);
                uVar15 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                if (*(int *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0xe0)
                    == 0) {
                  thunk_FUN_032cd7c0(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo
                                    );
                }
                bVar1 = *(byte *)(*(long *)PTR_DAT_07291838 + 0x130);
                if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07291838)) goto LAB_0614fc5c;
                plVar8 = (long *)FUN_061fcb60(plVar8,uVar11,uVar15,0);
LAB_0614f748:
                if (plVar8 != (long *)0x0) {
                  uVar11 = *(undefined8 *)(param_1 + 0x10);
                  uVar15 = FUN_062806ac(param_1,0);
                  uVar18 = *(undefined8 *)(param_1 + 0x20);
                  lVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                              System_Collections_Generic_List<Camera>_TypeInfo);
                  FUN_0614d090(lVar3,3,uVar11,uVar15,uVar18);
                  plVar17 = (long *)System_Func<TransitionStartEvent>_TypeInfo;
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_0614d18c(lVar3,plVar8,0);
                  do {
                    uVar5 = (**(code **)(*plVar8 + 0x328))(plVar8,*(undefined8 *)(*plVar8 + 0x330));
                  } while ((uVar5 & 1) != 0);
                  lVar3 = *(long *)(lVar3 + 0x60);
                  *plVar16 = lVar3;
                  thunk_FUN_0333a630(plVar16,lVar3);
                  plVar9 = *(long **)(param_1 + 0x78);
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  (**(code **)(*plVar9 + 0x2a8))
                            (plVar9,plVar7,lVar3,*(undefined8 *)(*plVar9 + 0x2b0));
                  FUN_0614f04c(param_1,lVar3);
                  (**(code **)(*plVar8 + 0x348))(plVar8,*(undefined8 *)(*plVar8 + 0x350));
                  plVar9 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
                  goto LAB_0614f288;
                }
              }
              FUN_06281398(param_1,*(undefined8 *)
                                    System_Collections_Generic_List<CategoryButton>_TypeInfo,plVar4,
                           1,0);
              plVar9 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
            }
            else if (lVar3 != 0) {
              lVar3 = plVar4[3];
              uVar13 = (undefined4)plVar4[2];
              uVar14 = *(undefined4 *)((long)plVar4 + 0x14);
              uVar15 = thunk_FUN_032a56a0(*(undefined8 *)
                                           UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo
                                         );
              uVar11 = *(undefined8 *)System_Collections_Generic_List<CategoryButton>_TypeInfo;
System_Xml_Serialization_CodeIdentifier__MakePascal:
              FUN_061a16a8(uVar15,uVar11,0,0,lVar3,uVar13,uVar14,plVar4,0);
              FUN_06281014(param_1,uVar15,1,0);
            }
          }
        }
        else {
          uVar15 = *(undefined8 *)(lVar3 + 0xd0);
          if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar5 = FUN_062a8838(uVar15,0,0);
          if ((uVar5 & 1) != 0) {
            plVar4 = *(long **)(param_1 + 0x78);
            if (plVar4 == (long *)0x0) break;
            lVar6 = (**(code **)(*plVar4 + 0x308))(plVar4,uVar15,*(undefined8 *)(*plVar4 + 0x310));
            if (lVar6 == 0) {
              plVar4 = *(long **)(param_1 + 0x78);
              if (plVar4 == (long *)0x0) break;
              (**(code **)(*plVar4 + 0x2a8))(plVar4,uVar15,lVar3,*(undefined8 *)(*plVar4 + 0x2b0));
            }
          }
          FUN_0614f04c(param_1,lVar3);
        }
LAB_0614f288:
        lVar3 = *(long *)(param_2 + 0x58);
        iVar12 = iVar12 + 1;
      } while (lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


