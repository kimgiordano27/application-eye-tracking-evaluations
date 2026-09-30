/*
FUNCTION_NAME: FUN_055a570c
ENTRY_POINT: 055a570c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x055a6514) */
/* WARNING: Removing unreachable block (ram,0x055a64f8) */
/* WARNING: Removing unreachable block (ram,0x055a6478) */
/* WARNING: Removing unreachable block (ram,0x055a6124) */
/* WARNING: Removing unreachable block (ram,0x055a6534) */
/* WARNING: Removing unreachable block (ram,0x055a5c80) */
/* WARNING: Removing unreachable block (ram,0x055a6268) */
/* WARNING: Removing unreachable block (ram,0x055a6538) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_055a570c(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  int iVar21;
  
  if ((DAT_06bbfacf & 1) == 0) {
    FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(UnityEngine_UIElements_Cursor_PropertyBag_HotspotProperty_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_Cursor_PropertyBag_TextureProperty_TypeInfo);
    FUN_02f08768(
                UnityEngine_UIElements_DataBindingManager_HierarchyBindingTracker_HierarchicalBindingsSorter_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_UIElements_DataBindingManager_HierarchyDataSourceTracker_InvalidateDataSourcesTraversal_TypeInfo
                );
    DAT_06bbfacf = 1;
  }
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == param_2) {
    return;
  }
  if (lVar10 == 0) goto LAB_055a5d40;
  cVar1 = *(char *)(lVar10 + 0x58);
  FUN_0556b66c(lVar10,0,0);
  if ((*(long *)(param_1 + 0x10) == 0) || (param_2 == 0)) goto LAB_055a5d40;
  bVar8 = FUN_04f6dc3c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50),
                       *(undefined8 *)(param_2 + 0x50),0);
  lVar10 = 0;
  *(byte *)(param_1 + 0x29) = bVar8 & 1;
  if (*(int *)(param_1 + 0x24) == 1) {
    lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                 UnityEngine_UIElements_DataBindingManager_HierarchyDataSourceTracker_InvalidateDataSourcesTraversal_TypeInfo
                               );
    FUN_03abf108(lVar10,*(undefined8 *)
                         UnityEngine_UIElements_DataBindingManager_HierarchyBindingTracker_HierarchicalBindingsSorter_TypeInfo
                );
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (plVar11 = *(long **)(*(long *)(param_1 + 0x10) + 0x28), plVar11 != (long *)0x0)) {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
      puVar7 = UnityEngine_UIElements_Cursor_PropertyBag_HotspotProperty_TypeInfo;
      puVar5 = System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo;
      puVar6 = PTR_DAT_067c91b8;
      puVar3 = PTR_DAT_067c91b0;
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_055a58d0;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar6,0);
LAB_055a58d0:
        uVar18 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        puVar4 = PTR_DAT_067c91b0;
        if ((uVar18 & 1) == 0) {
          plVar11 = (long *)thunk_FUN_02f45174(plVar11,*(undefined8 *)PTR_DAT_067c91b0);
          if (plVar11 == (long *)0x0) goto LAB_055a5c84;
          lVar17 = *plVar11;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 == 0) goto LAB_055a5c48;
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_055a5c30;
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
              puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_055a5938;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar6,1);
LAB_055a5938:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        bVar8 = *(byte *)(*(long *)
                           System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar8) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar8 * 8 + -8) !=
            *(long *)System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48();
        }
        plVar13 = (long *)plVar13[8];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))(plVar13,*(undefined8 *)(*plVar13 + 0x1f0))
        ;
joined_r0x055a59a0:
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *plVar13;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_055a59f0;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar6,0);
LAB_055a59f0:
        uVar18 = (*(code *)*puVar12)(plVar13,puVar12[1]);
        if ((uVar18 & 1) != 0) {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar17 = *plVar13;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_055a5a58;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar6,1);
LAB_055a5a58:
          plVar14 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
          if (plVar14 != (long *)0x0) {
            bVar8 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar8) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar8 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar14);
            }
          }
          if (lVar10 == 0) {
LAB_055a5b8c:
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar17 = *(long *)(lVar10 + 0x10);
          lVar19 = *(long *)puVar7;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_055a5b8c;
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            *(long **)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = plVar14;
          }
          else {
            FUN_03abf904(lVar10,plVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          goto joined_r0x055a59a0;
        }
        plVar13 = (long *)thunk_FUN_02f45174(plVar13,*(undefined8 *)puVar3);
        if (plVar13 != (long *)0x0) {
          lVar19 = *plVar13;
          lVar17 = *(long *)puVar3;
          uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == lVar17) {
                puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_055a5b70;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_02f421d0(plVar13,lVar17,0);
LAB_055a5b70:
          (*(code *)*puVar12)(plVar13,puVar12[1]);
        }
      } while( true );
    }
    goto LAB_055a5d40;
  }
  goto LAB_055a5c84;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
LAB_055a5c30:
    if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_055a5c64;
    }
  }
LAB_055a5c48:
  puVar12 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar4,0);
LAB_055a5c64:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_055a5c84:
  plVar11 = *(long **)(param_2 + 0x28);
  if (plVar11 != (long *)0x0) {
    iVar21 = 0;
    do {
      iVar9 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
      if (iVar9 <= iVar21) {
        if (*(int *)(param_1 + 0x24) == 2) goto LAB_055a626c;
        FUN_055a673c(param_1,param_2);
        plVar11 = *(long **)(param_2 + 0x30);
        if (plVar11 != (long *)0x0) {
          iVar21 = 0;
          goto LAB_055a5cf8;
        }
        break;
      }
      if (*(long *)(param_2 + 0x28) == 0) break;
      uVar15 = FUN_0558c44c(*(long *)(param_2 + 0x28),iVar21,0);
      FUN_055a6688(param_1,uVar15);
      plVar11 = *(long **)(param_2 + 0x28);
      iVar21 = iVar21 + 1;
    } while (plVar11 != (long *)0x0);
  }
  goto LAB_055a5d40;
  while( true ) {
    plVar11 = *(long **)(param_2 + 0x30);
    if (plVar11 == (long *)0x0) break;
    uVar15 = (**(code **)(*plVar11 + 0x208))(plVar11,iVar21,*(undefined8 *)(*plVar11 + 0x210));
    FUN_055a67ac(param_1,uVar15);
    plVar11 = *(long **)(param_2 + 0x30);
    iVar21 = iVar21 + 1;
    if (plVar11 == (long *)0x0) break;
LAB_055a5cf8:
    iVar9 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
    if (iVar9 <= iVar21) {
      if (*(int *)(param_1 + 0x24) != 1) goto LAB_055a626c;
      plVar11 = *(long **)(param_2 + 0x28);
      if (plVar11 != (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0))
        ;
        puVar7 = UnityEngine_UIElements_Cursor_PropertyBag_TextureProperty_TypeInfo;
        puVar5 = System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo;
        puVar6 = PTR_DAT_067c91b8;
        puVar3 = PTR_DAT_067c91b0;
        goto joined_r0x055a5d7c;
      }
      break;
    }
  }
  goto LAB_055a5d40;
joined_r0x055a5d7c:
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar17 = *plVar11;
  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
        puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_055a5df0;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar6,0);
LAB_055a5df0:
  uVar18 = (*(code *)*puVar12)(plVar11,puVar12[1]);
  puVar4 = PTR_DAT_067c91b0;
  if ((uVar18 & 1) == 0) {
    plVar11 = (long *)thunk_FUN_02f45174(plVar11,*(undefined8 *)PTR_DAT_067c91b0);
    if (plVar11 == (long *)0x0) goto LAB_055a626c;
    lVar10 = *plVar11;
    uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar18 == 0) goto LAB_055a6230;
    piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    goto System_Runtime_Serialization_XmlObjectSerializer__get_KnownDataContracts;
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar17 = *plVar11;
  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
        puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
        goto LAB_055a5e58;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar6,1);
LAB_055a5e58:
  plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
  if (plVar13 != (long *)0x0) {
    bVar8 = *(byte *)(*(long *)
                       System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar13 + 0x130) < bVar8) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar8 * 8 + -8) !=
        *(long *)System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar13);
    }
  }
  lVar17 = *(long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x29) == '\0') {
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar17 = *(long *)(lVar17 + 0x28);
    lVar19 = plVar13[0x12];
    uVar15 = FUN_05546520(plVar13,0);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar17 = FUN_05585154(lVar17,lVar19,uVar15,0);
  }
  else {
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar17 = FUN_0558c57c(*(long *)(lVar17 + 0x28),plVar13[0x12],0);
  }
  plVar13 = (long *)plVar13[8];
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))(plVar13,*(undefined8 *)(*plVar13 + 0x1f0));
joined_r0x055a5f2c:
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar19 = *plVar13;
  uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
        puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_055a5f7c;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar6,0);
LAB_055a5f7c:
  uVar18 = (*(code *)*puVar12)(plVar13,puVar12[1]);
  if ((uVar18 & 1) != 0) {
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar19 = *plVar13;
    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
          puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_055a5fe4;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar6,1);
LAB_055a5fe4:
    plVar14 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    bVar8 = *(byte *)(*(long *)puVar5 + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar8) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar8 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar14);
    }
    uVar18 = FUN_0555ecf0(plVar14,0);
    if ((uVar18 & 1) != 0) {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(long *)(lVar17 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar19 = FUN_0557e3c8(*(long *)(lVar17 + 0x40),plVar14[6],0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar18 = FUN_03abfc98(lVar10,lVar19,*(undefined8 *)puVar7);
      if ((uVar18 & 1) == 0) {
        uVar15 = FUN_0555f7d8(plVar14,0);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8(uVar15,uVar15);
        }
        FUN_0555c54c(lVar19,uVar15,0);
      }
    }
    goto joined_r0x055a5f2c;
  }
  plVar13 = (long *)thunk_FUN_02f45174(plVar13,*(undefined8 *)puVar3);
  if (plVar13 != (long *)0x0) {
    lVar19 = *plVar13;
    lVar17 = *(long *)puVar3;
    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar17) {
          puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_055a610c;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_02f421d0(plVar13,lVar17,0);
LAB_055a610c:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  goto joined_r0x055a5d7c;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
System_Runtime_Serialization_XmlObjectSerializer__get_KnownDataContracts:
    if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
      puVar12 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_055a624c;
    }
  }
LAB_055a6230:
  puVar12 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar4,0);
LAB_055a624c:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_055a626c:
  uVar15 = FUN_0556b5dc(param_2,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar16 = FUN_0556b5dc(*(long *)(param_1 + 0x10),0);
    FUN_055a6fd0(param_1,uVar15,uVar16);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (plVar11 = *(long **)(*(long *)(param_1 + 0x10) + 0x28), plVar11 != (long *)0x0)) {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
      puVar6 = System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo;
      puVar3 = PTR_DAT_067c91b8;
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *plVar11;
        lVar10 = *(long *)puVar3;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar10) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_055a6334;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_02f421d0(plVar11,lVar10,0);
LAB_055a6334:
        uVar18 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        puVar5 = PTR_DAT_067c91b0;
        if ((uVar18 & 1) == 0) {
          plVar11 = (long *)thunk_FUN_02f45174(plVar11,*(undefined8 *)PTR_DAT_067c91b0);
          if (plVar11 == (long *)0x0) goto LAB_055a646c;
          lVar10 = *plVar11;
          uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar18 == 0) goto LAB_055a6444;
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_055a642c;
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *plVar11;
        lVar10 = *(long *)puVar3;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar10) {
              puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_055a639c;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_02f421d0(plVar11,lVar10,1);
LAB_055a639c:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        bVar8 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar8) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar8 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48();
        }
        FUN_0555b568(plVar13,0);
      } while( true );
    }
  }
  goto LAB_055a5d40;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
LAB_055a642c:
    if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
      puVar12 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_055a6460;
    }
  }
LAB_055a6444:
  puVar12 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar5,0);
LAB_055a6460:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_055a646c:
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0556b66c(*(long *)(param_1 + 0x10),cVar1 != '\0',0);
    return;
  }
LAB_055a5d40:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


