/*
FUNCTION_NAME: Oculus.Interaction.TunnelingEffect$$LateUpdate
ENTRY_POINT: 0518cf5c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0518daf4) */
/* WARNING: Removing unreachable block (ram,0x0518dc70) */
/* WARNING: Removing unreachable block (ram,0x0518dc50) */

long * Oculus_Interaction_TunnelingEffect__LateUpdate(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 in_w8;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long *plVar16;
  long unaff_x20;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *plStack0000000000000028;
  undefined8 uStack0000000000000030;
  long *plStack0000000000000038;
  
                    /* try { // try from 0518cf5c to 0528cf77 has its CatchHandler @ 0518cde0 */
  *(undefined1 *)(unaff_x19 + 799) = in_w8;
  puVar4 = System_Collections_Generic_Dictionary<ulong,_MRUKTrackable>_TypeInfo;
  uStack0000000000000030 = 0;
  plStack0000000000000038 = (long *)0x0;
  plStack0000000000000028 = (long *)0x0;
  if (*(long *)(unaff_x20 + 0x98) == 0) {
    plVar16 = (long *)FUN_02f0880c(*(undefined8 *)
                                    System_Collections_Generic_Dictionary<Vector3,_ValueTuple<Vector3,_Vector3>>_TypeInfo
                                   ,1);
    if (plVar16 != (long *)0x0) {
      lVar11 = *(long *)(unaff_x20 + 0x90);
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0)) {
        uVar19 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar19,0);
      }
      puVar4 = System_Collections_Generic_Dictionary<XmlQualifiedName,_DataContract>_TypeInfo;
      if ((int)plVar16[3] != 0) {
        plVar16[4] = lVar11;
        plVar17 = (long *)thunk_FUN_02f45270(*(undefined8 *)puVar4);
        FUN_03abf234(plVar17,plVar16,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<XRBodyTransformer,_TeleportationMonitor_PoseContainer>_TypeInfo
                    );
        return plVar17;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    goto LAB_0518dc7c;
  }
  plVar16 = *(long **)(*(long *)(unaff_x20 + 0x98) + 0x18);
  if (plVar16 != (long *)0x0) {
                    /* try { // try from 0518cf78 to 0528cf87 has its CatchHandler @ 0518cf88 */
    lVar11 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* catch() { ... } // from try @ 0518cf0c with catch @ 0518cf88
                       catch() { ... } // from try @ 0518cf78 with catch @ 0518cf88 */
                    /* try { // try from 0518cf8c to 0528cf8f has its CatchHandler @ 0518cf98 */
    if (uVar14 != 0) {
                    /* try { // try from 0518cf90 to 0528cf9b has its CatchHandler @ 0518cde0 */
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0518cf8c with catch @ 0518cf98
                        */
        if (*(long *)(piVar15 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<ulong,_MRUKTrackable>_TypeInfo) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0518d03c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02f421d0(plVar16,*(long *)
                                   System_Collections_Generic_Dictionary<ulong,_MRUKTrackable>_TypeInfo
                          ,0);
LAB_0518d03c:
    iVar7 = (*(code *)*puVar8)(plVar16,puVar8[1]);
    if (iVar7 != 0) {
      lVar11 = *(long *)(unaff_x20 + 0x98);
      if (lVar11 == 0) {
LAB_0518dc7c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      iVar7 = *(int *)(lVar11 + 0x10);
      if (iVar7 < 2) {
        if (iVar7 == 0) {
          return *(long **)(lVar11 + 0x18);
        }
        if (iVar7 == 1) {
          if (*(long *)(lVar11 + 0x28) == 0) {
            thunk_FUN_02f6ef30(Unity_Properties_ContainerPropertyBag<Vector2Int>_TypeInfo);
            uVar19 = thunk_FUN_02f45270();
            uVar10 = thunk_FUN_02f6ef30(
                                       System_Collections_Generic_Dictionary<XmlQualifiedName,_Type>_TypeInfo
                                       );
            thunk_FUN_0515dff4(uVar19,uVar10,0);
            uVar10 = thunk_FUN_02f6ef30(
                                       System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_TypeInfo
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar19,uVar10);
          }
          plVar16 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                                System_Collections_Generic_Dictionary<XmlQualifiedName,_DataContract>_TypeInfo
                                              );
          FUN_03abf108(plVar16,*(undefined8 *)
                                System_Collections_Generic_Dictionary<VisualElement,_DataBindingManager_BindingDataCollection>_TypeInfo
                      );
          if ((*(long *)(unaff_x20 + 0x98) != 0) &&
             (plVar17 = *(long **)(*(long *)(unaff_x20 + 0x98) + 0x18), plVar17 != (long *)0x0)) {
            lVar11 = *plVar17;
            uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)System_Collections_Generic_Dictionary<ulong,_Vector3>_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                  goto Oculus_Interaction_PokeInteractable__set_ExitHoverNormal;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_02f421d0(plVar17,*(long *)
                                           System_Collections_Generic_Dictionary<ulong,_Vector3>_TypeInfo
                                  ,0);
Oculus_Interaction_PokeInteractable__set_ExitHoverNormal:
            plVar17 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
            puVar6 = 
            System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>_TypeInfo
            ;
            puVar5 = 
            System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_TypeInfo
            ;
            puVar3 = PTR_DAT_067ce3a0;
            puVar2 = PTR_DAT_067c91b8;
            in_stack_00000020 = &stack0x00000038;
            in_stack_00000018 = 0;
            do {
              plStack0000000000000038 = plVar17;
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar12 = *plVar17;
              lVar11 = *(long *)puVar2;
              uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar11) {
                    puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0518d72c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar8 = (undefined8 *)FUN_02f421d0(plVar17,lVar11,0);
LAB_0518d72c:
              uVar14 = (*(code *)*puVar8)(plVar17,puVar8[1]);
              plVar17 = plStack0000000000000038;
              if ((uVar14 & 1) == 0) {
                plVar17 = (long *)*in_stack_00000020;
                if (plVar17 == (long *)0x0) goto LAB_0518dec8;
                lVar11 = *plVar17;
                uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar14 == 0) goto LAB_0518dea0;
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                goto LAB_0518de88;
              }
              if (plStack0000000000000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar11 = *plStack0000000000000038;
              uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
                    puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0518d790;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar8 = (undefined8 *)FUN_02f421d0(plStack0000000000000038,*(long *)puVar6,0);
LAB_0518d790:
              lVar11 = (*(code *)*puVar8)(plVar17,puVar8[1]);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              plVar17 = *(long **)(lVar11 + 0x80);
              if (plVar17 != (long *)0x0) {
                if (*(long *)(unaff_x20 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                lVar12 = *plVar17;
                uVar19 = *(undefined8 *)(*(long *)(unaff_x20 + 0x98) + 0x28);
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) ==
                        *(long *)
                         System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_TypeInfo) {
                      puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 7) * 0x10 + 0x138);
                      goto LAB_0518d810;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_02f421d0(plVar17,*(long *)
                                               System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_TypeInfo
                                      ,7);
LAB_0518d810:
                uVar14 = (*(code *)*puVar8)(plVar17,uVar19,&stack0x00000030,puVar8[1]);
                uVar19 = uStack0000000000000030;
                if ((uVar14 & 1) != 0) {
                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  lVar12 = *plVar16;
                  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                        goto LAB_0518d880;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_02f421d0(plVar16,*(long *)puVar4,2);
LAB_0518d880:
                  (*(code *)*puVar8)(plVar16,uVar19,puVar8[1]);
                }
              }
              plVar17 = *(long **)(lVar11 + 0x88);
              if (plVar17 != (long *)0x0) {
                lVar12 = *plVar17;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) ==
                        *(long *)System_Collections_Generic_Dictionary<ulong,_Request>_TypeInfo) {
                      puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_0518d8ec;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_02f421d0(plVar17,*(long *)
                                               System_Collections_Generic_Dictionary<ulong,_Request>_TypeInfo
                                      ,0);
LAB_0518d8ec:
                plVar17 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
joined_r0x0518d908:
                plStack0000000000000028 = plVar17;
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                lVar13 = *plVar17;
                lVar12 = *(long *)puVar2;
                uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar12) {
                      puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_0518d958;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar8 = (undefined8 *)FUN_02f421d0(plVar17,lVar12,0);
LAB_0518d958:
                uVar14 = (*(code *)*puVar8)(plVar17,puVar8[1]);
                plVar17 = plStack0000000000000028;
                if ((uVar14 & 1) != 0) {
                  if (plStack0000000000000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  lVar12 = *plStack0000000000000028;
                  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                        puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_0518d9bc;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_02f421d0(plStack0000000000000028,*(long *)puVar5,0);
LAB_0518d9bc:
                  auVar20 = (*(code *)*puVar8)(plVar17,puVar8[1]);
                  if (*(long *)(unaff_x20 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  uVar19 = *(undefined8 *)(*(long *)(unaff_x20 + 0x98) + 0x28);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar14 = FUN_0589a6bc(uVar19,auVar20._0_8_,0);
                  plVar17 = plStack0000000000000028;
                  if ((uVar14 & 1) != 0) {
                    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    lVar12 = *plVar16;
                    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                          goto LAB_0518da54;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_02f421d0(plVar16,*(long *)puVar4,2);
LAB_0518da54:
                    (*(code *)*puVar8)(plVar16,auVar20._8_8_,puVar8[1]);
                    plVar17 = plStack0000000000000028;
                  }
                  goto joined_r0x0518d908;
                }
                if (plStack0000000000000028 != (long *)0x0) {
                  lVar12 = *plStack0000000000000028;
                  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_067c91b0) {
                        puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_0518dadc;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar8 = (undefined8 *)
                           FUN_02f421d0(plStack0000000000000028,*(long *)PTR_DAT_067c91b0,0);
LAB_0518dadc:
                  (*(code *)*puVar8)(plVar17,puVar8[1]);
                }
              }
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar12 = *plVar16;
              uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                    puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0518db48;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar8 = (undefined8 *)FUN_02f421d0(plVar16,*(long *)puVar4,0);
LAB_0518db48:
              iVar7 = (*(code *)*puVar8)(plVar16,puVar8[1]);
              plVar17 = plStack0000000000000038;
              if (((iVar7 == 0) && (*(char *)(lVar11 + 0xa1) != '\0')) &&
                 (lVar11 = *(long *)(lVar11 + 0x90), lVar11 != 0)) {
                lVar12 = *plVar16;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                      puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                      goto LAB_0518dbc4;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar8 = (undefined8 *)FUN_02f421d0(plVar16,*(long *)puVar4,2);
LAB_0518dbc4:
                (*(code *)*puVar8)(plVar16,lVar11,puVar8[1]);
                plVar17 = plStack0000000000000038;
              }
            } while( true );
          }
          goto LAB_0518dc7c;
        }
      }
      else {
        if (iVar7 == 2) {
          plVar16 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                                System_Collections_Generic_Dictionary<XmlQualifiedName,_DataContract>_TypeInfo
                                              );
          FUN_03abf108(plVar16,*(undefined8 *)
                                System_Collections_Generic_Dictionary<VisualElement,_DataBindingManager_BindingDataCollection>_TypeInfo
                      );
          if ((*(long *)(unaff_x20 + 0x98) != 0) &&
             (plVar17 = *(long **)(*(long *)(unaff_x20 + 0x98) + 0x18), plVar17 != (long *)0x0)) {
            lVar11 = *plVar17;
            uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)System_Collections_Generic_Dictionary<ulong,_Vector3>_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0518d1d8;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_02f421d0(plVar17,*(long *)
                                           System_Collections_Generic_Dictionary<ulong,_Vector3>_TypeInfo
                                  ,0);
LAB_0518d1d8:
            plVar17 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
            puVar5 = 
            System_Collections_Generic_Dictionary<ulong,_TMP_DynamicFontAssetUtilities_FontReference>_TypeInfo
            ;
            puVar3 = 
            System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>_TypeInfo
            ;
            puVar2 = PTR_DAT_067c91b8;
            in_stack_00000020 = &stack0x00000038;
            in_stack_00000018 = 0;
            do {
              plStack0000000000000038 = plVar17;
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar11 = *plVar17;
              uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0518d25c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar8 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)puVar2,0);
LAB_0518d25c:
              uVar14 = (*(code *)*puVar8)(plVar17,puVar8[1]);
              plVar17 = plStack0000000000000038;
              if ((uVar14 & 1) == 0) {
                if (plStack0000000000000038 == (long *)0x0) {
                  return plVar16;
                }
                lVar11 = *plStack0000000000000038;
                uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar14 == 0) goto LAB_0518d684;
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                goto LAB_0518d66c;
              }
              if (plStack0000000000000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar11 = *plStack0000000000000038;
              uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                    puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0518d2c0;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar8 = (undefined8 *)FUN_02f421d0(plStack0000000000000038,*(long *)puVar3,0);
LAB_0518d2c0:
              lVar11 = (*(code *)*puVar8)(plVar17,puVar8[1]);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              plVar18 = *(long **)(lVar11 + 0x78);
              if (*(char *)(lVar11 + 0xa0) == '\0') {
                plVar17 = plStack0000000000000038;
                if (plVar18 != (long *)0x0) {
                  lVar12 = *plVar18;
                  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                        puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_0518d454;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_02f421d0(plVar18,*(long *)puVar4,0);
LAB_0518d454:
                  iVar7 = (*(code *)*puVar8)(plVar18,puVar8[1]);
                  plVar17 = plStack0000000000000038;
                  if (0 < iVar7) {
                    plVar17 = *(long **)(lVar11 + 0x78);
                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    lVar12 = *plVar17;
                    lVar11 = *(long *)puVar5;
                    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == lVar11) {
                          puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_0518d4bc;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_02f421d0(plVar17,lVar11,0);
LAB_0518d4bc:
                    uVar19 = (*(code *)*puVar8)(plVar17,0,puVar8[1]);
                    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    lVar11 = *plVar16;
                    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                          goto LAB_0518d524;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_02f421d0(plVar16,*(long *)puVar4,2);
LAB_0518d524:
                    (*(code *)*puVar8)(plVar16,uVar19,puVar8[1]);
                    plVar17 = plStack0000000000000038;
                  }
                }
              }
              else {
                if (plVar18 != (long *)0x0) {
                  lVar12 = *plVar18;
                  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                        puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                        goto Oculus_Interaction_TunnelingEffect___ctor;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_02f421d0(plVar18,*(long *)puVar4,0);
Oculus_Interaction_TunnelingEffect___ctor:
                  iVar7 = (*(code *)*puVar8)(plVar18,puVar8[1]);
                  if (0 < iVar7) {
                    plVar17 = *(long **)(lVar11 + 0x78);
                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    lVar12 = *plVar17;
                    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                          puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_0518d3dc;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)puVar4,0);
LAB_0518d3dc:
                    iVar7 = (*(code *)*puVar8)(plVar17,puVar8[1]);
                    if (*(long *)(unaff_x20 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    iVar1 = *(int *)(*(long *)(unaff_x20 + 0x98) + 0x30) + -1;
                    if (iVar1 < iVar7) {
                      plVar17 = *(long **)(lVar11 + 0x78);
                      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                      lVar13 = *plVar17;
                      lVar12 = *(long *)puVar5;
                      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                      if (uVar14 != 0) {
                        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == lVar12) {
                            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                            goto LAB_0518d544;
                          }
                          uVar14 = uVar14 - 1;
                          piVar15 = piVar15 + 4;
                        } while (uVar14 != 0);
                      }
                      puVar8 = (undefined8 *)FUN_02f421d0(plVar17,lVar12,0);
LAB_0518d544:
                      uVar19 = (*(code *)*puVar8)(plVar17,iVar1,puVar8[1]);
                      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                      lVar12 = *plVar16;
                      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar14 != 0) {
                        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                            goto LAB_0518d5ac;
                          }
                          uVar14 = uVar14 - 1;
                          piVar15 = piVar15 + 4;
                        } while (uVar14 != 0);
                      }
                      puVar8 = (undefined8 *)FUN_02f421d0(plVar16,*(long *)puVar4,2);
LAB_0518d5ac:
                      (*(code *)*puVar8)(plVar16,uVar19,puVar8[1]);
                    }
                  }
                }
                plVar17 = plStack0000000000000038;
                if ((*(char *)(lVar11 + 0xa2) != '\0') &&
                   (lVar11 = *(long *)(lVar11 + 0x98), lVar11 != 0)) {
                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  lVar12 = *plVar16;
                  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                        goto LAB_0518d620;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_02f421d0(plVar16,*(long *)puVar4,2);
LAB_0518d620:
                  (*(code *)*puVar8)(plVar16,lVar11,puVar8[1]);
                  plVar17 = plStack0000000000000038;
                }
              }
            } while( true );
          }
          goto LAB_0518dc7c;
        }
        if (iVar7 == 3) goto LAB_0518d100;
      }
      thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
      FUN_02a7d698();
      uVar19 = FUN_050656a0(0);
      lVar11 = *(long *)(unaff_x20 + 0x98);
      FUN_02a7da48(lVar11);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(lVar11 + 0x10));
      uVar10 = thunk_FUN_02f6ef30(
                                 System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_TypeInfo
                                 );
      uVar10 = thunk_FUN_02f44ec4(uVar10,&stack0x00000018);
      uVar9 = thunk_FUN_02f6ef30(
                                System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaAttDef>_TypeInfo
                                );
      uVar19 = FUN_051b937c(uVar9,uVar19,uVar10,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c9678);
      uVar10 = thunk_FUN_02f45270();
      uVar9 = thunk_FUN_02f6ef30(
                                System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_TypeInfo
                                );
      FUN_0505262c(uVar10,uVar9,uVar19,0);
      uVar19 = thunk_FUN_02f6ef30(
                                 System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar10,uVar19);
    }
  }
LAB_0518d100:
  puVar4 = System_Collections_Generic_Dictionary<VectorImage,_VectorImageRenderInfo>_TypeInfo;
  lVar11 = *(long *)
            System_Collections_Generic_Dictionary<VectorImage,_VectorImageRenderInfo>_TypeInfo;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar11 = *(long *)puVar4;
  }
  return (long *)**(undefined8 **)(lVar11 + 0xb8);
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0518de88:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0518debc;
    }
  }
LAB_0518dea0:
  puVar8 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)PTR_DAT_067c91b0,0);
LAB_0518debc:
  (*(code *)*puVar8)(plVar17,puVar8[1]);
LAB_0518dec8:
  if (in_stack_00000018 == 0) {
    return plVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c0();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0518d66c:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto FUN_0518dc40;
    }
  }
LAB_0518d684:
  puVar8 = (undefined8 *)FUN_02f421d0(plStack0000000000000038,*(long *)PTR_DAT_067c91b0,0);
FUN_0518dc40:
  (*(code *)*puVar8)(plVar17,puVar8[1]);
  return plVar16;
}


