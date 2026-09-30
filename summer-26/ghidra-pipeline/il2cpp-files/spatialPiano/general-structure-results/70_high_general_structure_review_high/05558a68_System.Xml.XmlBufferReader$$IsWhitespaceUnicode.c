/*
FUNCTION_NAME: System.Xml.XmlBufferReader$$IsWhitespaceUnicode
ENTRY_POINT: 05558a68
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05559248) */
/* WARNING: Removing unreachable block (ram,0x05559134) */

void System_Xml_XmlBufferReader__IsWhitespaceUnicode(long param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  code *in_x9;
  long lVar20;
  int *piVar21;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  uint in_stack_00000000;
  int iStack0000000000000004;
  
  lVar7 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x240));
  if (lVar7 == 0) goto LAB_05559244;
  if ((*(long *)(lVar7 + 0x20) == 0) && (*(char *)(lVar7 + 0x16e) != '\0')) {
    *(undefined1 *)(lVar7 + 0x16e) = 0;
  }
  if (*(long *)(lVar7 + 0x38) == 0) goto LAB_05559244;
  *(undefined4 *)(*(long *)(lVar7 + 0x38) + 0x20) = 0;
  puVar3 = Oculus_Interaction_AudioPhysics_CollisionEvents_<>c_TypeInfo;
  iStack0000000000000004 = unaff_w21;
  (**(code **)(*unaff_x22 + 0x538))();
  uVar8 = (**(code **)(*unaff_x22 + 0x1b8))();
  uVar9 = FUN_04f6dc3c(uVar8,*(undefined8 *)puVar3,0);
  if ((uVar9 & 1) != 0) {
    uVar8 = (**(code **)(*unaff_x22 + 0x1c8))();
    uVar9 = FUN_04f6dc3c(uVar8,*(undefined8 *)
                                UnityEngine_UIElements_Angle_PropertyBag_ValueProperty_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  (**(code **)(*unaff_x22 + 0x458))();
  iVar6 = (**(code **)(*unaff_x22 + 0x198))();
  if (iVar6 == 0xd) {
    (**(code **)(*unaff_x22 + 0x1f8))();
    FUN_0555a658();
  }
  *(undefined1 *)(lVar7 + 0x172) = 1;
  iVar6 = (**(code **)(*unaff_x22 + 0x1f8))();
  if (unaff_w23 < iVar6) {
    uVar8 = (**(code **)(*unaff_x22 + 0x1c8))();
    puVar3 = UnityEngine_UIElements_Angle_PropertyBag_ValueProperty_TypeInfo;
    uVar9 = FUN_04f6dc3c(uVar8,*(undefined8 *)
                                UnityEngine_UIElements_Angle_PropertyBag_ValueProperty_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = (**(code **)(*unaff_x22 + 0x1c8))();
      uVar9 = FUN_04f6dc3c(uVar8,*(undefined8 *)
                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                           ,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                              UnityEngine_Pool_CollectionPool<List<ValueTuple<int,_int>>,_ValueTuple<int,_int>>_TypeInfo
                                            );
        FUN_057fac70(plVar10,0);
        uVar8 = (**(code **)(*unaff_x22 + 0x1d8))();
        uVar11 = (**(code **)(*unaff_x22 + 0x1b8))();
        uVar12 = (**(code **)(*unaff_x22 + 0x1c8))();
        if (plVar10 == (long *)0x0) goto LAB_05559244;
        uVar8 = (**(code **)(*plVar10 + 0x5f8))
                          (plVar10,uVar8,uVar11,uVar12,*(undefined8 *)(*plVar10 + 0x600));
        (**(code **)(*unaff_x22 + 0x458))();
        iVar6 = (**(code **)(*unaff_x22 + 0x1f8))();
        if (unaff_w23 < iVar6 + -1) {
          lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                       UnityEngine_Awaitable_AwaitableAsyncMethodBuilder_IStateMachineBox_TypeInfo
                                     );
          FUN_055c5998(lVar13,lVar7,0,uVar8,0,0);
          if (lVar13 == 0) goto LAB_05559244;
          *(undefined1 *)(lVar13 + 0x39) = 1;
          FUN_055c7d24(lVar13);
        }
        FUN_05559298();
      }
    }
    uVar8 = (**(code **)(*unaff_x22 + 0x1b8))();
    uVar9 = thunk_FUN_04f6d944(uVar8,*(undefined8 *)PTR_DAT_067cc748,0);
    if ((uVar9 & 1) == 0) {
LAB_05558d04:
      uVar8 = (**(code **)(*unaff_x22 + 0x1b8))();
      uVar9 = thunk_FUN_04f6d944(uVar8,*(undefined8 *)
                                        UnityEngine_UIElements_BackgroundSize_PropertyBag_SizeTypeProperty_TypeInfo
                                 ,0);
      if ((uVar9 & 1) != 0) {
        uVar8 = (**(code **)(*unaff_x22 + 0x1c8))();
        uVar9 = thunk_FUN_04f6d944(uVar8,*(undefined8 *)puVar3,0);
        if ((uVar9 & 1) != 0) goto LAB_05558d4c;
      }
    }
    else {
      uVar8 = (**(code **)(*unaff_x22 + 0x1c8))();
      uVar9 = thunk_FUN_04f6d944(uVar8,*(undefined8 *)puVar3,0);
      if ((uVar9 & 1) == 0) goto LAB_05558d04;
LAB_05558d4c:
      lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_XProperty_TypeInfo
                                 );
      FUN_055b5d70(lVar13,0);
      if (lVar13 == 0) goto LAB_05559244;
      FUN_055b43e8(lVar13,lVar7);
    }
    while (iVar6 = (**(code **)(*unaff_x22 + 0x1f8))(), unaff_w23 < iVar6) {
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
  if (*(long *)(lVar7 + 0x38) != 0) {
    if (0 < *(int *)(*(long *)(lVar7 + 0x38) + 0x20)) {
      FUN_02a7da48(lVar7);
      uVar8 = FUN_05566538(*(undefined8 *)(lVar7 + 0x90),0);
      uVar11 = thunk_FUN_02f6ef30(
                                 UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar8,uVar11);
    }
    *(undefined1 *)(lVar7 + 0x172) = 0;
    lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
    FUN_03abf108(lVar13,*(undefined8 *)puVar3);
    if (lVar13 != 0) {
      lVar17 = *(long *)(lVar13 + 0x10);
      lVar20 = *(long *)
                UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
      ;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar17 != 0) {
        uVar2 = *(uint *)(lVar13 + 0x18);
        if (uVar2 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar2 + 1;
          *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = unaff_x20;
        }
        else {
          FUN_03abf904(lVar13,unaff_x20,
                       *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
        FUN_055570fc(unaff_x20,unaff_x20,lVar13);
        puVar5 = UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo;
        puVar4 = System_Collections_Generic_List<BsonReader_ContainerContext>_TypeInfo;
        puVar3 = PTR_DAT_067c91b8;
        if (0 < *(int *)(lVar13 + 0x18)) {
          iVar6 = 0;
          do {
            lVar17 = FUN_03abf644(lVar13,iVar6,*(undefined8 *)puVar5);
            if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x188), lVar17 == 0))
            goto LAB_05559244;
            if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
              uVar9 = 0;
              uVar18 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
              do {
                if (uVar18 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                plVar10 = *(long **)(lVar17 + uVar9 * 8 + 0x20);
                if (plVar10 != (long *)0x0) {
                  lVar20 = (**(code **)(*plVar10 + 0x1b8))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                  lVar14 = FUN_03abf644(lVar13,iVar6,*(undefined8 *)puVar5);
                  if (lVar20 == lVar14) {
                    lVar20 = FUN_03abf644(lVar13,iVar6,*(undefined8 *)puVar5);
                    if ((lVar20 == 0) ||
                       (plVar10 = *(long **)(lVar20 + 0x38), plVar10 == (long *)0x0))
                    goto LAB_05559244;
                    plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))
                                                (plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
joined_r0x05558f44:
                    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    lVar14 = *plVar10;
                    lVar20 = *(long *)puVar3;
                    uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    if (uVar18 != 0) {
                      piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == lVar20) {
                          puVar15 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
                          goto LAB_05558f94;
                        }
                        uVar18 = uVar18 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar15 = (undefined8 *)FUN_02f421d0(plVar10,lVar20,0);
LAB_05558f94:
                    uVar18 = (*(code *)*puVar15)(plVar10,puVar15[1]);
                    if ((uVar18 & 1) != 0) {
                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                      lVar14 = *plVar10;
                      lVar20 = *(long *)puVar3;
                      uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
                      if (uVar18 != 0) {
                        piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar21 + -2) == lVar20) {
                            puVar15 = (undefined8 *)(lVar14 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                            goto LAB_05558ffc;
                          }
                          uVar18 = uVar18 - 1;
                          piVar21 = piVar21 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar15 = (undefined8 *)FUN_02f421d0(plVar10,lVar20,1);
LAB_05558ffc:
                      plVar16 = (long *)(*(code *)*puVar15)(plVar10,puVar15[1]);
                      if (plVar16 != (long *)0x0) {
                        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
                        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
                           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) !=
                            *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f08d48(plVar16);
                        }
                      }
                      if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
                        uVar18 = 0;
                        uVar19 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
                        do {
                          if (uVar19 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                            FUN_02f089d0();
                          }
                          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02f089c8();
                          }
                          FUN_0558478c(plVar16,*(undefined8 *)(lVar17 + 0x20 + uVar18 * 8),0);
                          uVar19 = (ulong)*(uint *)(lVar17 + 0x18);
                          uVar18 = uVar18 + 1;
                        } while ((long)uVar18 < (long)(int)*(uint *)(lVar17 + 0x18));
                      }
                      goto joined_r0x05558f44;
                    }
                    plVar10 = (long *)thunk_FUN_02f45174(plVar10,*(undefined8 *)PTR_DAT_067c91b0);
                    if (plVar10 != (long *)0x0) {
                      lVar20 = *plVar10;
                      uVar18 = (ulong)*(ushort *)(lVar20 + 0x12e);
                      if (uVar18 != 0) {
                        piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067c91b0) {
                            puVar15 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
                            goto LAB_0555911c;
                          }
                          uVar18 = uVar18 - 1;
                          piVar21 = piVar21 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar15 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067c91b0,0);
LAB_0555911c:
                      (*(code *)*puVar15)(plVar10,puVar15[1]);
                    }
                  }
                }
                uVar18 = (ulong)*(uint *)(lVar17 + 0x18);
                uVar9 = uVar9 + 1;
              } while ((long)uVar9 < (long)(int)*(uint *)(lVar17 + 0x18));
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(lVar13 + 0x18));
        }
        if (iStack0000000000000004 != 0) {
          FUN_05556a24(unaff_x20,lVar7,0,1);
        }
        if ((*unaff_x19 == 0) && (*(byte *)(unaff_x20 + 0x16e) != in_stack_00000000)) {
          if (in_stack_00000000 != 0) {
            FUN_0554c230(unaff_x20);
          }
          *(char *)(unaff_x20 + 0x16e) = (char)in_stack_00000000;
        }
        return;
      }
    }
  }
LAB_05559244:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


