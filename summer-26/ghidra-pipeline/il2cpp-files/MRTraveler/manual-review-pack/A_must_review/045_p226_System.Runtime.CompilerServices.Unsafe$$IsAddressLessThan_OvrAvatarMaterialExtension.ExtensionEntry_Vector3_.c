/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$IsAddressLessThan<OvrAvatarMaterialExtension.ExtensionEntry<Vector3>>
ENTRY_POINT: 047a16fc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 144
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047a2658) */

long System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>
               (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar15;
  long *plVar16;
  long *unaff_x27;
  long unaff_x28;
  long *plVar17;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  plVar17 = *(long **)(unaff_x28 + 0x5f0);
  uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
  if (*(int *)(*plVar17 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = FUN_0710fcf0(uVar15,0);
  if (lVar5 == 0) goto LAB_047a2660;
  uVar6 = FUN_0711b200(lVar5,0);
  uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
  if (*(int *)(*plVar17 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*plVar17);
  }
  plVar7 = (long *)FUN_0710fcf0(uVar15,0);
  if (plVar7 == (long *)0x0) goto LAB_047a2660;
  lVar5 = *plVar7;
  if ((uVar6 & 1) == 0) {
    uVar6 = (**(code **)(lVar5 + 1000))(plVar7,*(undefined8 *)(lVar5 + 0x3f0));
    if ((uVar6 & 1) != 0) {
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar7 = (long *)FUN_0710fcf0(uVar15,0);
      if (plVar7 == (long *)0x0) goto LAB_047a2660;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
      uVar15 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e80b50,0);
      if (plVar7 == (long *)0x0) goto LAB_047a2660;
      uVar6 = (**(code **)(*plVar7 + 0x2c8))(plVar7,uVar15,*(undefined8 *)(*plVar7 + 0x2d0));
      if ((uVar6 & 1) == 0) goto LAB_047a1868;
      plVar7 = *(long **)(unaff_x19 + 0x48);
FUN_047a191c:
      plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,1);
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*plVar17);
      }
      plVar17 = (long *)FUN_0710fcf0(uVar15,0);
      if (plVar17 == (long *)0x0) goto LAB_047a2660;
      uVar15 = (**(code **)(*plVar17 + 0x498))(plVar17,*(undefined8 *)(*plVar17 + 0x4a0));
      lVar5 = FUN_0461aa48(uVar15,*(undefined8 *)PTR_DAT_08e81dd8);
      goto joined_r0x047a1980;
    }
LAB_047a1868:
    uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*plVar17 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar7 = (long *)FUN_0710fcf0(uVar15,0);
    if (plVar7 == (long *)0x0) goto LAB_047a2660;
    uVar6 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
    if ((uVar6 & 1) != 0) {
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar7 = (long *)FUN_0710fcf0(uVar15,0);
      if (plVar7 == (long *)0x0) goto LAB_047a2660;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
      uVar15 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81df8,0);
      if (plVar7 == (long *)0x0) goto LAB_047a2660;
      uVar6 = (**(code **)(*plVar7 + 0x2c8))(plVar7,uVar15,*(undefined8 *)(*plVar7 + 0x2d0));
      if ((uVar6 & 1) != 0) {
        plVar7 = *(long **)(unaff_x19 + 0x50);
        goto FUN_047a191c;
      }
    }
    uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*plVar17 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar7 = (long *)FUN_0710fcf0(uVar15,0);
    if (plVar7 == (long *)0x0) goto LAB_047a2660;
    uVar6 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
    if ((uVar6 & 1) == 0) {
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<long>:
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar7 = (long *)FUN_0710fcf0(uVar15,0);
      if (plVar7 == (long *)0x0) goto LAB_047a2660;
      uVar6 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
      if ((uVar6 & 1) != 0) {
        uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*plVar17 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        plVar7 = (long *)FUN_0710fcf0(uVar15,0);
        if (plVar7 == (long *)0x0) goto LAB_047a2660;
        plVar7 = (long *)(**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
        uVar15 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e18,0);
        if (plVar7 == (long *)0x0) goto LAB_047a2660;
        uVar6 = (**(code **)(*plVar7 + 0x2c8))(plVar7,uVar15,*(undefined8 *)(*plVar7 + 0x2d0));
        if ((uVar6 & 1) == 0) goto LAB_047a1bf8;
        plVar7 = *(long **)(unaff_x19 + 0x20);
FUN_047a1cac:
        plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
        uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*plVar17 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*plVar17);
        }
        lVar5 = FUN_0710fcf0(uVar15,0);
        if (plVar8 == (long *)0x0) goto LAB_047a2660;
        if ((lVar5 != 0) &&
           (lVar9 = thunk_FUN_03cf5138(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_047a2720;
        if ((int)plVar8[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
        plVar8[4] = lVar5;
        thunk_FUN_03d233cc(plVar8 + 4,lVar5);
        plVar17 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
        if (plVar17 == (long *)0x0) goto LAB_047a2660;
        uVar15 = (**(code **)(*plVar17 + 0x498))(plVar17,*(undefined8 *)(*plVar17 + 0x4a0));
        lVar5 = FUN_0461aa48(uVar15,*(undefined8 *)PTR_DAT_08e81dd8);
        goto joined_r0x047a21c0;
      }
LAB_047a1bf8:
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar7 = (long *)FUN_0710fcf0(uVar15,0);
      if (plVar7 == (long *)0x0) goto LAB_047a2660;
      uVar6 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
      if ((uVar6 & 1) != 0) {
        uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*plVar17 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        plVar7 = (long *)FUN_0710fcf0(uVar15,0);
        if (plVar7 == (long *)0x0) goto LAB_047a2660;
        plVar7 = (long *)(**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
        uVar15 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e20,0);
        if (plVar7 == (long *)0x0) goto LAB_047a2660;
        uVar6 = (**(code **)(*plVar7 + 0x2c8))(plVar7,uVar15,*(undefined8 *)(*plVar7 + 0x2d0));
        if ((uVar6 & 1) != 0) {
          plVar7 = *(long **)(unaff_x19 + 0x28);
          goto FUN_047a1cac;
        }
      }
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar7 = (long *)FUN_0710fcf0(uVar15,0);
      if (plVar7 == (long *)0x0) goto LAB_047a2660;
      uVar6 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
      if ((uVar6 & 1) == 0) {

        System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>
        :
        uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*plVar17 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        plVar7 = (long *)FUN_0710fcf0(uVar15,0);
        if (plVar7 == (long *)0x0) goto LAB_047a2660;
        uVar6 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
        lVar5 = *unaff_x27;
        if ((uVar6 & 1) != 0) {
          uVar15 = *(undefined8 *)(lVar5 + 0x18);
          if (*(int *)(*plVar17 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar7 = (long *)FUN_0710fcf0(uVar15,0);
          if (plVar7 == (long *)0x0) goto LAB_047a2660;
          plVar7 = (long *)(**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
          uVar15 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e28,0);
          if (plVar7 == (long *)0x0) goto LAB_047a2660;
          uVar6 = (**(code **)(*plVar7 + 0x2c8))(plVar7,uVar15,*(undefined8 *)(*plVar7 + 0x2d0));
          lVar5 = *unaff_x27;
          if ((uVar6 & 1) != 0) {
            uVar15 = *(undefined8 *)(lVar5 + 0x18);
            if (*(int *)(*plVar17 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            plVar17 = (long *)FUN_0710fcf0(uVar15,0);
            if (plVar17 == (long *)0x0) goto LAB_047a2660;
            uVar15 = (**(code **)(*plVar17 + 0x498))(plVar17,*(undefined8 *)(*plVar17 + 0x4a0));
            lVar5 = FUN_046337ac(uVar15,*(undefined8 *)PTR_DAT_08e81de0);
            plVar7 = *(long **)(unaff_x19 + 0x38);
            plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
            if (lVar5 == 0) goto LAB_047a2660;
            if (*(int *)(lVar5 + 0x18) == 0)
            goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
            if (plVar8 == (long *)0x0) goto LAB_047a2660;
            lVar9 = *(long *)(lVar5 + 0x20);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_047a2720;
            if ((int)plVar8[3] == 0)
            goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
            plVar8[4] = lVar9;
            thunk_FUN_03d233cc(plVar8 + 4,lVar9);
            if (*(uint *)(lVar5 + 0x18) < 2)
            goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
            lVar5 = *(long *)(lVar5 + 0x28);
            goto joined_r0x047a21c0;
          }
        }
        if ((*(byte *)(*(long *)(lVar5 + 0x28) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        lVar5 = thunk_FUN_03cf5234();
        (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
        uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*plVar17 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar15 = FUN_0710fcf0(uVar15,0);
        plVar7 = (long *)FUN_08649324(uVar15,0);
        if (plVar7 != (long *)0x0) {
          lVar9 = *plVar7;
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e81e08) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                goto 
                System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>
                ;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar6 != 0);
          }
          puVar11 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e81e08,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>:
          plVar7 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
          puVar3 = PTR_DAT_08e6a290;
          puVar2 = PTR_DAT_08e69878;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          do {
            lVar9 = *plVar7;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar6 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_047a22ec;
                }
                uVar6 = uVar6 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar6 != 0);
            }
            puVar11 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar3,0);
LAB_047a22ec:
            uVar6 = (*(code *)*puVar11)(plVar7,puVar11[1]);
            if ((uVar6 & 1) == 0) {
              if (plVar7 == (long *)0x0) {
                return lVar5;
              }
              lVar9 = *plVar7;
              uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar6 == 0)
              goto 
              System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
              ;
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto 
              System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
              ;
            }
            lVar9 = *plVar7;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar6 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e81e10) {
                  puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                  goto 
                  System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>
                  ;
                }
                uVar6 = uVar6 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar6 != 0);
            }
            puVar11 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e81e10,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
            plVar8 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
            if (plVar8 == (long *)0x0) {
LAB_047a2664:
              thunk_FUN_03ce5214(PTR_DAT_08e71970);
              uVar15 = thunk_FUN_03cf5234();
              FUN_071004d4(uVar15,0);
                    /* WARNING: Subroutine does not return */
              FUN_03c8f9fc(uVar15,unaff_x20);
            }
            lVar9 = *plVar8;
            bVar1 = *(byte *)(*(long *)PTR_DAT_08e81de8 + 0x130);
            if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_08e81de8)) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_08e81e30 + 0x130);
              if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_08e81e30)) goto LAB_047a2664;
              in_stack_00000020 = 0;
              in_stack_00000028 = 0;
              FUN_08644cb0(&stack0x00000020,plVar8,0);
              in_stack_00000018 = in_stack_00000028;
              in_stack_00000010 = in_stack_00000020;
              plVar8 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,&stack0x00000010);
            }
            else {
              in_stack_00000020 = 0;
              in_stack_00000028 = 0;
              FUN_08644ae0(&stack0x00000020,plVar8,0);
              in_stack_00000018 = in_stack_00000028;
              in_stack_00000010 = in_stack_00000020;
              plVar8 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,&stack0x00000010);
            }
            plVar16 = *(long **)(unaff_x19 + 0x10);
            plVar12 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
            uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*plVar17 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            lVar9 = FUN_0710fcf0(uVar15,0);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0)) {
              uVar15 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
              FUN_03c8f9fc(uVar15,0);
            }
            if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            plVar12[4] = lVar9;
            thunk_FUN_03d233cc(plVar12 + 4,lVar9);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar9 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar6 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e81dc0) {
                  puVar11 = (undefined8 *)(lVar9 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto LAB_047a24c8;
                }
                uVar6 = uVar6 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar6 != 0);
            }
            puVar11 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
            lVar9 = (*(code *)*puVar11)(plVar8,puVar11[1]);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0)) {
              uVar15 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
              FUN_03c8f9fc(uVar15,0);
            }
            if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            plVar12[5] = lVar9;
            thunk_FUN_03d233cc(plVar12 + 5,lVar9);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar9 = (**(code **)(*plVar16 + 0x428))
                              (plVar16,plVar12,*(undefined8 *)(*plVar16 + 0x430));
            plVar12 = (long *)FUN_03c8f97c(*(undefined8 *)puVar2,2);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar10 = thunk_FUN_03cf5138(plVar8,*(undefined8 *)(*plVar12 + 0x40));
            if (lVar10 == 0) {
              uVar15 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
              FUN_03c8f9fc(uVar15,0);
            }
            if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            plVar12[4] = (long)plVar8;
            thunk_FUN_03d233cc(plVar12 + 4,plVar8);
            if ((lVar5 != 0) &&
               (lVar10 = thunk_FUN_03cf5138(lVar5,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0)) {
              uVar15 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
              FUN_03c8f9fc(uVar15,0);
            }
            if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            plVar12[5] = lVar5;
            thunk_FUN_03d233cc(plVar12 + 5,lVar5);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_0702dc3c(lVar9);
          } while( true );
        }
        goto LAB_047a2660;
      }
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar7 = (long *)FUN_0710fcf0(uVar15,0);
      if (plVar7 == (long *)0x0) goto LAB_047a2660;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
      uVar15 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e00,0);
      if (plVar7 == (long *)0x0) goto LAB_047a2660;
      uVar6 = (**(code **)(*plVar7 + 0x2c8))(plVar7,uVar15,*(undefined8 *)(*plVar7 + 0x2d0));
      if ((uVar6 & 1) == 0)
      goto 
      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>
      ;
      plVar7 = *(long **)(unaff_x19 + 0x30);
      plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,3);
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*plVar17);
      }
      lVar5 = FUN_0710fcf0(uVar15,0);
      if (plVar8 == (long *)0x0) goto LAB_047a2660;
      if ((lVar5 != 0) &&
         (lVar9 = thunk_FUN_03cf5138(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_047a2720;
      if ((int)plVar8[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
      plVar8[4] = lVar5;
      thunk_FUN_03d233cc(plVar8 + 4,lVar5);
      plVar17 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar17 == (long *)0x0) goto LAB_047a2660;
      uVar15 = (**(code **)(*plVar17 + 0x498))(plVar17,*(undefined8 *)(*plVar17 + 0x4a0));
      lVar5 = FUN_0461aa48(uVar15,*(undefined8 *)PTR_DAT_08e81dd8);
      if ((lVar5 != 0) &&
         (lVar9 = thunk_FUN_03cf5138(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_047a2720;
      if (*(uint *)(plVar8 + 3) < 2)
      goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
      plVar8[5] = lVar5;
      thunk_FUN_03d233cc(plVar8 + 5,lVar5);
      plVar17 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar17 == (long *)0x0) goto LAB_047a2660;
      uVar15 = (**(code **)(*plVar17 + 0x498))(plVar17,*(undefined8 *)(*plVar17 + 0x4a0));
      lVar5 = FUN_04617b80(uVar15,1,*(undefined8 *)PTR_DAT_08e81dd0);
      if ((lVar5 != 0) &&
         (lVar9 = thunk_FUN_03cf5138(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_047a2720;
      if (*(uint *)(plVar8 + 3) < 3)
      goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
      plVar17 = plVar8 + 6;
      *plVar17 = lVar5;
    }
    else {
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar7 = (long *)FUN_0710fcf0(uVar15,0);
      if (plVar7 == (long *)0x0) goto LAB_047a2660;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
      uVar15 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81dc8,0);
      if (plVar7 == (long *)0x0) goto LAB_047a2660;
      uVar6 = (**(code **)(*plVar7 + 0x2c8))(plVar7,uVar15,*(undefined8 *)(*plVar7 + 0x2d0));
      if ((uVar6 & 1) == 0) goto System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<long>;
      plVar7 = *(long **)(unaff_x19 + 0x58);
      plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*plVar17);
      }
      plVar17 = (long *)FUN_0710fcf0(uVar15,0);
      if (plVar17 == (long *)0x0) goto LAB_047a2660;
      uVar15 = (**(code **)(*plVar17 + 0x498))(plVar17,*(undefined8 *)(*plVar17 + 0x4a0));
      lVar5 = FUN_0461aa48(uVar15,*(undefined8 *)PTR_DAT_08e81dd8);
      if (plVar8 == (long *)0x0) goto LAB_047a2660;
      if ((lVar5 != 0) &&
         (lVar9 = thunk_FUN_03cf5138(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_047a2720;
      if ((int)plVar8[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
      plVar8[4] = lVar5;
      thunk_FUN_03d233cc(plVar8 + 4,lVar5);
      plVar17 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar17 == (long *)0x0) goto LAB_047a2660;
      uVar15 = (**(code **)(*plVar17 + 0x498))(plVar17,*(undefined8 *)(*plVar17 + 0x4a0));
      lVar5 = FUN_04617b80(uVar15,1,*(undefined8 *)PTR_DAT_08e81dd0);
joined_r0x047a21c0:
      if ((lVar5 != 0) &&
         (lVar9 = thunk_FUN_03cf5138(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_047a2720;
      if (*(uint *)(plVar8 + 3) < 2)
      goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
      plVar17 = plVar8 + 5;
      *plVar17 = lVar5;
    }
  }
  else {
    iVar4 = (**(code **)(lVar5 + 0x468))(plVar7,*(undefined8 *)(lVar5 + 0x470));
    if (iVar4 != 1) {
      thunk_FUN_03ce5214(PTR_DAT_08e71970);
      uVar13 = thunk_FUN_03cf5234();
      uVar15 = thunk_FUN_03ce5214(PTR_DAT_08e81e48);
      FUN_07100530(uVar13,uVar15,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar13);
    }
    plVar7 = *(long **)(unaff_x19 + 0x40);
    plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,1);
    uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*plVar17 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*plVar17);
    }
    plVar17 = (long *)FUN_0710fcf0(uVar15,0);
    if (plVar17 == (long *)0x0) goto LAB_047a2660;
    lVar5 = (**(code **)(*plVar17 + 0x458))(plVar17,*(undefined8 *)(*plVar17 + 0x460));
joined_r0x047a1980:
    if (plVar8 == (long *)0x0) goto LAB_047a2660;
    if ((lVar5 != 0) &&
       (lVar9 = thunk_FUN_03cf5138(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_047a2720:
      uVar15 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar15,0);
    }
    if ((int)plVar8[3] == 0) {
System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar17 = plVar8 + 4;
    *plVar17 = lVar5;
  }
  thunk_FUN_03d233cc(plVar17,lVar5);
  if (plVar7 != (long *)0x0) {
    lVar5 = (**(code **)(*plVar7 + 0x428))(plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x430));
    FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,0);
    if (lVar5 != 0) {
      lVar5 = FUN_0702dc3c(lVar5);
      lVar9 = *(long *)(*unaff_x27 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03cf1244(lVar9);
      }
      if (lVar5 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = thunk_FUN_03cf5138(lVar5,lVar9);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(lVar5,lVar9);
        }
      }
      return lVar10;
    }
  }
LAB_047a2660:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar14 = piVar14 + 4;
    if (uVar6 == 0) break;

    System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
    :
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar11 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e6a288,0);
FUN_047a2648:
  (*(code *)*puVar11)(plVar7,puVar11[1]);
  return lVar5;
}


