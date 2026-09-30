/*
FUNCTION_NAME: FUN_056e6d18
ENTRY_POINT: 056e6d18
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


undefined8 FUN_056e6d18(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long *plVar20;
  long *plVar21;
  undefined4 local_54;
  
  if ((DAT_06bc05cd & 1) == 0) {
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
                );
    FUN_02f08768(System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<VisualTreeAsset_SlotDefinition>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<VisualTreeAsset_UxmlObjectEntry>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<XRDebugLineVisualizer_DebugLine>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_TypeInfo);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<Event,_TextSelectOp>_get_Item__);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<Event,_TextSelectOp>_set_Item__);
    DAT_06bc05cd = 1;
  }
  if (param_3 == (long *)0x0) goto LAB_056e7850;
  uVar8 = (**(code **)(*param_3 + 0x208))(param_3,*(undefined8 *)(*param_3 + 0x210));
  iVar5 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
  if (iVar5 < 10) {
    if (iVar5 < 5) {
      if (iVar5 == 1) {
        lVar12 = *(long *)(param_1 + 0x10);
        lVar17 = *(long *)(param_1 + 0x18);
        lVar18 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
        if (lVar17 != lVar18) {
          lVar12 = FUN_056e9dc0();
        }
        uVar9 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
        if (lVar12 == 0) goto LAB_056e7850;
        uVar9 = FUN_056e7c38(lVar12,uVar9);
        lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                     System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo
                                   );
        FUN_056e7c94(lVar12,uVar9);
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (uVar13 = FUN_04f6dc3c(*(long *)(param_1 + 0x40),uVar8,0), (uVar13 & 1) != 0)) {
          if (lVar12 == 0) goto LAB_056e7850;
          FUN_056e7e4c(lVar12,uVar8);
        }
        puVar2 = 
        Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
        ;
        plVar20 = *(long **)(param_1 + 0x30);
        if (plVar20 != (long *)0x0) {
          lVar17 = *plVar20;
          uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar13 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) ==
                  *(long *)
                   Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
                 ) {
                puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_056e7408;
              }
              uVar13 = uVar13 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)
                    FUN_02f421d0(plVar20,*(long *)
                                          Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
                                 ,0);
LAB_056e7408:
          uVar13 = (*(code *)*puVar14)(plVar20,puVar14[1]);
          if ((uVar13 & 1) != 0) {
            plVar20 = *(long **)(param_1 + 0x30);
            if (plVar20 == (long *)0x0) goto LAB_056e7850;
            lVar18 = *plVar20;
            lVar17 = *(long *)puVar2;
            uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar13 != 0) {
              piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == lVar17) {
                  puVar14 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_056e74c0;
                }
                uVar13 = uVar13 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar13 != 0);
            }
            puVar14 = (undefined8 *)FUN_02f421d0(plVar20,lVar17,1);
LAB_056e74c0:
            uVar6 = (*(code *)*puVar14)(plVar20,puVar14[1]);
            plVar20 = *(long **)(param_1 + 0x30);
            if (plVar20 == (long *)0x0) goto LAB_056e7850;
            lVar18 = *plVar20;
            lVar17 = *(long *)puVar2;
            uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar13 != 0) {
              piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == lVar17) {
                  puVar14 = (undefined8 *)(lVar18 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                  goto LAB_056e7528;
                }
                uVar13 = uVar13 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar13 != 0);
            }
            puVar14 = (undefined8 *)FUN_02f421d0(plVar20,lVar17,2);
LAB_056e7528:
            uVar7 = (*(code *)*puVar14)(plVar20,puVar14[1]);
            if (lVar12 == 0) goto LAB_056e7850;
            FUN_056e7eb8(lVar12,uVar6,uVar7);
          }
        }
        uVar13 = (**(code **)(*param_3 + 0x418))(param_3,*(undefined8 *)(*param_3 + 0x420));
        puVar4 = 
        Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
        ;
        puVar3 = System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_TypeInfo;
        puVar2 = PTR_DAT_067c9338;
        if ((uVar13 & 1) != 0) {
          do {
            lVar17 = *(long *)(param_1 + 0x20);
            lVar18 = *(long *)(param_1 + 0x28);
            lVar15 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
            if (lVar15 == 0) goto LAB_056e7850;
            if (*(int *)(lVar15 + 0x10) == 0) {
              lVar15 = **(long **)(*(long *)(puVar2 + 0x90) + 0xb8);
            }
            else {
              lVar15 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
            }
            if (lVar18 != lVar15) {
              lVar17 = FUN_056e9dc0();
            }
            uVar9 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
            if (lVar17 == 0) goto LAB_056e7850;
            uVar9 = FUN_056e7c38(lVar17,uVar9);
            uVar16 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
            lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
            FUN_056e37c8(lVar17,uVar9,uVar16);
            plVar20 = *(long **)(param_1 + 0x30);
            if (plVar20 != (long *)0x0) {
              lVar18 = *plVar20;
              uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar13 != 0) {
                piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                    puVar14 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_056e7670;
                  }
                  uVar13 = uVar13 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar13 != 0);
              }
              puVar14 = (undefined8 *)FUN_02f421d0(plVar20,*(long *)puVar4,0);
LAB_056e7670:
              uVar13 = (*(code *)*puVar14)(plVar20,puVar14[1]);
              if ((uVar13 & 1) != 0) {
                plVar20 = *(long **)(param_1 + 0x30);
                if (plVar20 == (long *)0x0) goto LAB_056e7850;
                lVar18 = *plVar20;
                uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar13 != 0) {
                  piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                      puVar14 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                      goto LAB_056e76d8;
                    }
                    uVar13 = uVar13 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar13 != 0);
                }
                puVar14 = (undefined8 *)FUN_02f421d0(plVar20,*(long *)puVar4,1);
LAB_056e76d8:
                uVar6 = (*(code *)*puVar14)(plVar20,puVar14[1]);
                plVar20 = *(long **)(param_1 + 0x30);
                if (plVar20 == (long *)0x0) goto LAB_056e7850;
                lVar18 = *plVar20;
                uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar13 != 0) {
                  piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                      puVar14 = (undefined8 *)(lVar18 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                      goto LAB_056e7740;
                    }
                    uVar13 = uVar13 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar13 != 0);
                }
                puVar14 = (undefined8 *)FUN_02f421d0(plVar20,*(long *)puVar4,2);
LAB_056e7740:
                uVar7 = (*(code *)*puVar14)(plVar20,puVar14[1]);
                if (lVar17 == 0) goto LAB_056e7850;
                FUN_056e7eb8(lVar17,uVar6,uVar7);
              }
            }
            if ((lVar12 == 0) || (lVar17 == 0)) goto LAB_056e7850;
            lVar18 = *(long *)(lVar12 + 0x38);
            *(long *)(lVar17 + 0x10) = lVar12;
            if (lVar18 == 0) {
              plVar20 = (long *)(lVar17 + 0x20);
            }
            else {
              plVar20 = (long *)(lVar18 + 0x20);
              *(long *)(lVar17 + 0x20) = *plVar20;
            }
            *plVar20 = lVar17;
            *(long *)(lVar12 + 0x38) = lVar17;
            uVar13 = (**(code **)(*param_3 + 0x428))(param_3,*(undefined8 *)(*param_3 + 0x430));
          } while ((uVar13 & 1) != 0);
          (**(code **)(*param_3 + 0x438))(param_3,*(undefined8 *)(*param_3 + 0x440));
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          FUN_056e5fa4(*(long *)(param_1 + 0x38),lVar12);
          uVar13 = (**(code **)(*param_3 + 0x218))(param_3,*(undefined8 *)(*param_3 + 0x220));
          if ((uVar13 & 1) != 0) {
            return 1;
          }
          *(long *)(param_1 + 0x38) = lVar12;
          if (*(long *)(param_1 + 0x40) == 0) {
            return 1;
          }
          *(undefined8 *)(param_1 + 0x40) = uVar8;
          return 1;
        }
        goto LAB_056e7850;
      }
      if (iVar5 == 3) goto LAB_056e6e4c;
      if (iVar5 != 4) goto LAB_056e789c;
      uVar9 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
      puVar14 = (undefined8 *)
                System_Collections_Generic_List<VisualTreeAsset_SlotDefinition>_TypeInfo;
      goto LAB_056e7210;
    }
    if (iVar5 == 5) {
      uVar13 = (**(code **)(*param_3 + 0x4c8))(param_3,*(undefined8 *)(*param_3 + 0x4d0));
      if ((uVar13 & 1) != 0) {
        (**(code **)(*param_3 + 0x4d8))(param_3,*(undefined8 *)(*param_3 + 0x4e0));
        return 1;
      }
      thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
      uVar8 = thunk_FUN_02f45270();
      uVar9 = thunk_FUN_02f6ef30(
                                Method_System_Collections_Generic_Dictionary<string,_Type>_set_Item__
                                );
      FUN_050d5404(uVar8,uVar9,0);
      uVar9 = thunk_FUN_02f6ef30(
                                Method_System_Collections_Generic_Dictionary<string,_UriParser>_set_Item__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar8,uVar9);
    }
    if (iVar5 == 7) {
      uVar9 = (**(code **)(*param_3 + 0x1a8))(param_3,*(undefined8 *)(*param_3 + 0x1b0));
      uVar16 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
      lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                   System_Collections_Generic_List<XRDebugLineVisualizer_DebugLine>_TypeInfo
                                 );
      FUN_056e7d3c(lVar12,uVar9,uVar16);
    }
    else {
      if (iVar5 != 8) goto LAB_056e789c;
      uVar9 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
      lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                   System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo
                                 );
      FUN_056e4a10(lVar12,uVar9);
    }
  }
  else {
    if (0xe < iVar5) {
      if (iVar5 != 0xf) {
        if (iVar5 == 0x10) {
          return 1;
        }
LAB_056e789c:
        FUN_02a7da48(param_3);
        local_54 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
        uVar8 = thunk_FUN_02f6ef30(Unity_Collections_NativeArray<Pose>_TypeInfo);
        uVar8 = thunk_FUN_02f44ec4(uVar8,&local_54);
        uVar9 = thunk_FUN_02f6ef30(
                                  Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__
                                  );
        uVar8 = FUN_056e3660(uVar9,uVar8);
        thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
        uVar9 = thunk_FUN_02f45270();
        FUN_050d5404(uVar9,uVar8,0);
        uVar8 = thunk_FUN_02f6ef30(
                                  Method_System_Collections_Generic_Dictionary<string,_UriParser>_set_Item__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar9,uVar8);
      }
      plVar20 = *(long **)(param_1 + 0x38);
      if (plVar20 != (long *)0x0) {
        if (plVar20[5] == 0) {
          plVar20[5] = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
        }
        puVar2 = 
        Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
        ;
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo
                         + 0x130);
        if (((bVar1 <= *(byte *)(*plVar20 + 0x130)) &&
            (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) ==
             *(long *)System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo)) &&
           (plVar21 = *(long **)(param_1 + 0x30), plVar21 != (long *)0x0)) {
          lVar12 = *plVar21;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) ==
                  *(long *)
                   Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
                 ) {
                puVar14 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_056e7800;
              }
              uVar13 = uVar13 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)
                    FUN_02f421d0(plVar21,*(long *)
                                          Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
                                 ,0);
LAB_056e7800:
          uVar13 = (*(code *)*puVar14)(plVar21,puVar14[1]);
          if ((uVar13 & 1) != 0) {
            if ((*(long *)(param_1 + 0x30) == 0) ||
               (uVar6 = FUN_02a81978(1,*(undefined8 *)puVar2), *(long *)(param_1 + 0x30) == 0))
            goto LAB_056e7850;
            uVar7 = FUN_02a81978(2,*(undefined8 *)puVar2);
            FUN_056e7f28(plVar20,uVar6,uVar7);
          }
        }
        lVar12 = *(long *)(param_1 + 0x38);
        if (lVar12 == param_2) {
          return 0;
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          if (lVar12 == 0) goto LAB_056e7850;
          uVar13 = FUN_056e7f98();
          lVar12 = *(long *)(param_1 + 0x38);
          if ((uVar13 & 1) != 0) {
            if ((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0)) goto LAB_056e7850;
            uVar8 = FUN_056e7fec();
            lVar12 = *(long *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x40) = uVar8;
          }
        }
        if (lVar12 != 0) {
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar12 + 0x10);
          return 1;
        }
      }
      goto LAB_056e7850;
    }
    if (1 < iVar5 - 0xdU) {
      if (iVar5 != 10) goto LAB_056e789c;
      uVar9 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
      uVar16 = (**(code **)(*param_3 + 0x3b8))
                         (param_3,*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<Event,_TextSelectOp>_get_Item__
                          ,*(undefined8 *)(*param_3 + 0x3c0));
      uVar10 = (**(code **)(*param_3 + 0x3b8))
                         (param_3,*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<Event,_TextSelectOp>_set_Item__
                          ,*(undefined8 *)(*param_3 + 0x3c0));
      uVar11 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
      lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                   System_Collections_Generic_List<VisualTreeAsset_UxmlObjectEntry>_TypeInfo
                                 );
      FUN_056e7dbc(lVar12,uVar9,uVar16,uVar10,uVar11);
      goto joined_r0x056e7014;
    }
LAB_056e6e4c:
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (uVar13 = FUN_04f6dc3c(*(long *)(param_1 + 0x40),uVar8,0), (uVar13 & 1) == 0)) {
      plVar20 = *(long **)(param_1 + 0x30);
      if (plVar20 != (long *)0x0) {
        lVar12 = *plVar20;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
               ) {
              puVar14 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_056e71e8;
            }
            uVar13 = uVar13 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)
                  FUN_02f421d0(plVar20,*(long *)
                                        Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
                               ,0);
LAB_056e71e8:
        uVar13 = (*(code *)*puVar14)(plVar20,puVar14[1]);
        if ((uVar13 & 1) != 0) goto LAB_056e71f8;
      }
      lVar12 = *(long *)(param_1 + 0x38);
      uVar8 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
      if (lVar12 != 0) {
        FUN_056e6024(lVar12,uVar8);
        return 1;
      }
      goto LAB_056e7850;
    }
LAB_056e71f8:
    uVar9 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
    puVar14 = (undefined8 *)System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_TypeInfo;
LAB_056e7210:
    lVar12 = thunk_FUN_02f45270(*puVar14);
    FUN_056e4854(lVar12,uVar9);
  }
joined_r0x056e7014:
  if (lVar12 != 0) {
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar13 = FUN_04f6dc3c(*(long *)(param_1 + 0x40),uVar8,0), (uVar13 & 1) != 0)) {
      FUN_056e7e4c(lVar12,uVar8);
    }
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
    ;
    plVar20 = *(long **)(param_1 + 0x30);
    if (plVar20 != (long *)0x0) {
      lVar17 = *plVar20;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
             ) {
            puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_056e72d8;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)
                FUN_02f421d0(plVar20,*(long *)
                                      Method_System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_get_Item__
                             ,0);
LAB_056e72d8:
      uVar13 = (*(code *)*puVar14)(plVar20,puVar14[1]);
      if ((uVar13 & 1) != 0) {
        plVar20 = *(long **)(param_1 + 0x30);
        if (plVar20 == (long *)0x0) goto LAB_056e7850;
        lVar18 = *plVar20;
        lVar17 = *(long *)puVar2;
        uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar13 != 0) {
          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar17) {
              puVar14 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_056e7348;
            }
            uVar13 = uVar13 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_02f421d0(plVar20,lVar17,1);
LAB_056e7348:
        uVar6 = (*(code *)*puVar14)(plVar20,puVar14[1]);
        plVar20 = *(long **)(param_1 + 0x30);
        if (plVar20 == (long *)0x0) goto LAB_056e7850;
        lVar18 = *plVar20;
        lVar17 = *(long *)puVar2;
        uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar13 != 0) {
          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar17) {
              puVar14 = (undefined8 *)(lVar18 + (long)(*piVar19 + 2) * 0x10 + 0x138);
              goto LAB_056e73b0;
            }
            uVar13 = uVar13 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_02f421d0(plVar20,lVar17,2);
LAB_056e73b0:
        uVar7 = (*(code *)*puVar14)(plVar20,puVar14[1]);
        FUN_056e7eb8(lVar12,uVar6,uVar7);
      }
    }
    if (*(long *)(param_1 + 0x38) == 0) {
LAB_056e7850:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_056e5fa4(*(long *)(param_1 + 0x38),lVar12);
  }
  return 1;
}


