/*
FUNCTION_NAME: System.Xml.XmlConverter$$IsWhitespace
ENTRY_POINT: 05558940
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05559248) */
/* WARNING: Removing unreachable block (ram,0x05559134) */

void System_Xml_XmlConverter__IsWhitespace(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  FUN_02f08768(UnityEngine_UIElements_BackgroundPosition_PropertyBag_KeywordProperty_TypeInfo);
  FUN_02f08768(UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo);
  FUN_02f08768(
              UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
              );
  FUN_02f08768(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_XProperty_TypeInfo);
  FUN_02f08768(UnityEngine_Awaitable_AwaitableAsyncMethodBuilder_IStateMachineBox_TypeInfo);
  FUN_02f08768(
              UnityEngine_Pool_CollectionPool<List<ValueTuple<int,_int>>,_ValueTuple<int,_int>>_TypeInfo
              );
  FUN_02f08768(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo);
  FUN_02f08768(UnityEngine_UIElements_BackgroundSize_PropertyBag_SizeTypeProperty_TypeInfo);
  FUN_02f08768(UnityEngine_UIElements_Angle_PropertyBag_ValueProperty_TypeInfo);
  FUN_02f08768(Oculus_Interaction_AudioPhysics_CollisionEvents_<>c_TypeInfo);
  FUN_02f08768(PTR_DAT_067cc748);
  *(undefined1 *)(unaff_x19 + 0x7dc) = 1;
  if (unaff_x22 == (long *)0x0) goto LAB_05559244;
  iVar7 = (**(code **)(*unaff_x22 + 0x1f8))();
  lVar19 = unaff_x20[4];
  if (*(char *)((long)unaff_x20 + 0x16f) == '\0') {
    if (lVar19 == 0) {
      bVar6 = *(char *)((long)unaff_x20 + 0x16e) != '\0';
      goto LAB_05558a30;
    }
    bVar6 = *(char *)(lVar19 + 0x58) != '\0';
  }
  else {
    bVar6 = false;
    if (lVar19 == 0) {
LAB_05558a30:
      if (*(char *)((long)unaff_x20 + 0x16e) != '\0') {
        *(undefined1 *)((long)unaff_x20 + 0x16e) = 0;
      }
    }
  }
  plVar10 = (long *)unaff_x20[7];
  if (plVar10 == (long *)0x0) goto LAB_05559244;
  iVar8 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
  plVar10 = unaff_x20;
  if (iVar8 != 0) {
    plVar10 = (long *)(**(code **)(*unaff_x20 + 0x238))();
    if (plVar10 == (long *)0x0) goto LAB_05559244;
    if ((plVar10[4] == 0) && (*(char *)((long)plVar10 + 0x16e) != '\0')) {
      *(undefined1 *)((long)plVar10 + 0x16e) = 0;
    }
  }
  if (plVar10[7] == 0) goto LAB_05559244;
  *(undefined4 *)(plVar10[7] + 0x20) = 0;
  puVar3 = Oculus_Interaction_AudioPhysics_CollisionEvents_<>c_TypeInfo;
  (**(code **)(*unaff_x22 + 0x538))();
  uVar11 = (**(code **)(*unaff_x22 + 0x1b8))();
  uVar12 = FUN_04f6dc3c(uVar11,*(undefined8 *)puVar3,0);
  if ((uVar12 & 1) != 0) {
    uVar11 = (**(code **)(*unaff_x22 + 0x1c8))();
    uVar12 = FUN_04f6dc3c(uVar11,*(undefined8 *)
                                  UnityEngine_UIElements_Angle_PropertyBag_ValueProperty_TypeInfo,0)
    ;
    if ((uVar12 & 1) != 0) {
      return;
    }
  }
  (**(code **)(*unaff_x22 + 0x458))();
  iVar9 = (**(code **)(*unaff_x22 + 0x198))();
  if (iVar9 == 0xd) {
    (**(code **)(*unaff_x22 + 0x1f8))();
    FUN_0555a658();
  }
  *(undefined1 *)((long)plVar10 + 0x172) = 1;
  iVar9 = (**(code **)(*unaff_x22 + 0x1f8))();
  if (iVar7 < iVar9) {
    uVar11 = (**(code **)(*unaff_x22 + 0x1c8))();
    puVar3 = UnityEngine_UIElements_Angle_PropertyBag_ValueProperty_TypeInfo;
    uVar12 = FUN_04f6dc3c(uVar11,*(undefined8 *)
                                  UnityEngine_UIElements_Angle_PropertyBag_ValueProperty_TypeInfo,0)
    ;
    if ((uVar12 & 1) != 0) {
      uVar11 = (**(code **)(*unaff_x22 + 0x1c8))();
      uVar12 = FUN_04f6dc3c(uVar11,*(undefined8 *)
                                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                            ,0);
      if ((uVar12 & 1) != 0) {
        plVar13 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                              UnityEngine_Pool_CollectionPool<List<ValueTuple<int,_int>>,_ValueTuple<int,_int>>_TypeInfo
                                            );
        FUN_057fac70(plVar13,0);
        uVar11 = (**(code **)(*unaff_x22 + 0x1d8))();
        uVar14 = (**(code **)(*unaff_x22 + 0x1b8))();
        uVar15 = (**(code **)(*unaff_x22 + 0x1c8))();
        if (plVar13 == (long *)0x0) goto LAB_05559244;
        uVar11 = (**(code **)(*plVar13 + 0x5f8))
                           (plVar13,uVar11,uVar14,uVar15,*(undefined8 *)(*plVar13 + 0x600));
        (**(code **)(*unaff_x22 + 0x458))();
        iVar9 = (**(code **)(*unaff_x22 + 0x1f8))();
        if (iVar7 < iVar9 + -1) {
          lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                       UnityEngine_Awaitable_AwaitableAsyncMethodBuilder_IStateMachineBox_TypeInfo
                                     );
          FUN_055c5998(lVar19,plVar10,0,uVar11,0,0);
          if (lVar19 == 0) goto LAB_05559244;
          *(undefined1 *)(lVar19 + 0x39) = 1;
          FUN_055c7d24(lVar19);
        }
        FUN_05559298();
      }
    }
    uVar11 = (**(code **)(*unaff_x22 + 0x1b8))();
    uVar12 = thunk_FUN_04f6d944(uVar11,*(undefined8 *)PTR_DAT_067cc748,0);
    if ((uVar12 & 1) == 0) {
LAB_05558d04:
      uVar11 = (**(code **)(*unaff_x22 + 0x1b8))();
      uVar12 = thunk_FUN_04f6d944(uVar11,*(undefined8 *)
                                          UnityEngine_UIElements_BackgroundSize_PropertyBag_SizeTypeProperty_TypeInfo
                                  ,0);
      if ((uVar12 & 1) != 0) {
        uVar11 = (**(code **)(*unaff_x22 + 0x1c8))();
        uVar12 = thunk_FUN_04f6d944(uVar11,*(undefined8 *)puVar3,0);
        if ((uVar12 & 1) != 0) goto LAB_05558d4c;
      }
    }
    else {
      uVar11 = (**(code **)(*unaff_x22 + 0x1c8))();
      uVar12 = thunk_FUN_04f6d944(uVar11,*(undefined8 *)puVar3,0);
      if ((uVar12 & 1) == 0) goto LAB_05558d04;
LAB_05558d4c:
      lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_XProperty_TypeInfo
                                 );
      FUN_055b5d70(lVar19,0);
      if (lVar19 == 0) goto LAB_05559244;
      FUN_055b43e8(lVar19,plVar10);
    }
    while (iVar9 = (**(code **)(*unaff_x22 + 0x1f8))(), iVar7 < iVar9) {
      (**(code **)(*unaff_x22 + 0x458))();
    }
    FUN_05559298();
  }
  puVar4 = 
  UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
  ;
  puVar3 = 
  UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall_TypeInfo
  ;
  if (plVar10[7] != 0) {
    if (0 < *(int *)(plVar10[7] + 0x20)) {
      FUN_02a7da48(plVar10);
      uVar11 = FUN_05566538(plVar10[0x12],0);
      uVar14 = thunk_FUN_02f6ef30(
                                 UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar11,uVar14);
    }
    *(undefined1 *)((long)plVar10 + 0x172) = 0;
    lVar19 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
    FUN_03abf108(lVar19,*(undefined8 *)puVar3);
    if (lVar19 != 0) {
      lVar20 = *(long *)(lVar19 + 0x10);
      lVar23 = *(long *)
                UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
      ;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      if (lVar20 != 0) {
        uVar2 = *(uint *)(lVar19 + 0x18);
        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar19 + 0x18) = uVar2 + 1;
          *(long **)(lVar20 + (long)(int)uVar2 * 8 + 0x20) = unaff_x20;
        }
        else {
          FUN_03abf904(lVar19,unaff_x20,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        FUN_055570fc(unaff_x20,unaff_x20,lVar19);
        puVar5 = UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo;
        puVar4 = System_Collections_Generic_List<BsonReader_ContainerContext>_TypeInfo;
        puVar3 = PTR_DAT_067c91b8;
        if (0 < *(int *)(lVar19 + 0x18)) {
          iVar7 = 0;
          do {
            lVar20 = FUN_03abf644(lVar19,iVar7,*(undefined8 *)puVar5);
            if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x188), lVar20 == 0))
            goto LAB_05559244;
            if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
              uVar12 = 0;
              uVar21 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
              do {
                if (uVar21 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                plVar13 = *(long **)(lVar20 + uVar12 * 8 + 0x20);
                if (plVar13 != (long *)0x0) {
                  lVar23 = (**(code **)(*plVar13 + 0x1b8))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                  lVar16 = FUN_03abf644(lVar19,iVar7,*(undefined8 *)puVar5);
                  if (lVar23 == lVar16) {
                    lVar23 = FUN_03abf644(lVar19,iVar7,*(undefined8 *)puVar5);
                    if ((lVar23 == 0) ||
                       (plVar13 = *(long **)(lVar23 + 0x38), plVar13 == (long *)0x0))
                    goto LAB_05559244;
                    plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))
                                                (plVar13,*(undefined8 *)(*plVar13 + 0x1f0));
joined_r0x05558f44:
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    lVar16 = *plVar13;
                    lVar23 = *(long *)puVar3;
                    uVar21 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    if (uVar21 != 0) {
                      piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar24 + -2) == lVar23) {
                          puVar17 = (undefined8 *)(lVar16 + (long)*piVar24 * 0x10 + 0x138);
                          goto LAB_05558f94;
                        }
                        uVar21 = uVar21 - 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar21 != 0);
                    }
                    puVar17 = (undefined8 *)FUN_02f421d0(plVar13,lVar23,0);
LAB_05558f94:
                    uVar21 = (*(code *)*puVar17)(plVar13,puVar17[1]);
                    if ((uVar21 & 1) != 0) {
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                      lVar16 = *plVar13;
                      lVar23 = *(long *)puVar3;
                      uVar21 = (ulong)*(ushort *)(lVar16 + 0x12e);
                      if (uVar21 != 0) {
                        piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) == lVar23) {
                            puVar17 = (undefined8 *)(lVar16 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                            goto LAB_05558ffc;
                          }
                          uVar21 = uVar21 - 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar21 != 0);
                      }
                      puVar17 = (undefined8 *)FUN_02f421d0(plVar13,lVar23,1);
LAB_05558ffc:
                      plVar18 = (long *)(*(code *)*puVar17)(plVar13,puVar17[1]);
                      if (plVar18 != (long *)0x0) {
                        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
                        if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
                           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
                            *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f08d48(plVar18);
                        }
                      }
                      if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
                        uVar21 = 0;
                        uVar22 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
                        do {
                          if (uVar22 <= uVar21) {
                    /* WARNING: Subroutine does not return */
                            FUN_02f089d0();
                          }
                          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02f089c8();
                          }
                          FUN_0558478c(plVar18,*(undefined8 *)(lVar20 + 0x20 + uVar21 * 8),0);
                          uVar22 = (ulong)*(uint *)(lVar20 + 0x18);
                          uVar21 = uVar21 + 1;
                        } while ((long)uVar21 < (long)(int)*(uint *)(lVar20 + 0x18));
                      }
                      goto joined_r0x05558f44;
                    }
                    plVar13 = (long *)thunk_FUN_02f45174(plVar13,*(undefined8 *)PTR_DAT_067c91b0);
                    if (plVar13 != (long *)0x0) {
                      lVar23 = *plVar13;
                      uVar21 = (ulong)*(ushort *)(lVar23 + 0x12e);
                      if (uVar21 != 0) {
                        piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_067c91b0) {
                            puVar17 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
                            goto LAB_0555911c;
                          }
                          uVar21 = uVar21 - 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar21 != 0);
                      }
                      puVar17 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)PTR_DAT_067c91b0,0);
LAB_0555911c:
                      (*(code *)*puVar17)(plVar13,puVar17[1]);
                    }
                  }
                }
                uVar21 = (ulong)*(uint *)(lVar20 + 0x18);
                uVar12 = uVar12 + 1;
              } while ((long)uVar12 < (long)(int)*(uint *)(lVar20 + 0x18));
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar19 + 0x18));
        }
        if (iVar8 != 0) {
          FUN_05556a24(unaff_x20,plVar10,0,1);
        }
        if ((unaff_x20[4] == 0) && ((bool)*(char *)((long)unaff_x20 + 0x16e) != bVar6)) {
          if (bVar6 != false) {
            FUN_0554c230(unaff_x20);
          }
          *(bool *)((long)unaff_x20 + 0x16e) = bVar6;
        }
        return;
      }
    }
  }
LAB_05559244:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


