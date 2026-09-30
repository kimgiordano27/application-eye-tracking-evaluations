/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$As<Quaternion,-byte>
ENTRY_POINT: 047a1558
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047a2658) */

long System_Runtime_CompilerServices_Unsafe__As<Quaternion,_byte>(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *puVar13;
  
  plVar18 = (long *)(param_2 + 0x38);
  lVar14 = *plVar18;
  if (lVar14 == 0) {
    FUN_03c8f898(PTR_DAT_08e81dc8);
    FUN_03c8f898(PTR_DAT_08e81dd0);
    FUN_03c8f898(PTR_DAT_08e81dd8);
    FUN_03c8f898(PTR_DAT_08e81de0);
    FUN_03c8f898(PTR_DAT_08e81de8);
    FUN_03c8f898(PTR_DAT_08e81df0);
    FUN_03c8f898(PTR_DAT_08e81df8);
    FUN_03c8f898(PTR_DAT_08e81e00);
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08e81e08);
    FUN_03c8f898(PTR_DAT_08e81e10);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(PTR_DAT_08e81e18);
    FUN_03c8f898(PTR_DAT_08e81dc0);
    FUN_03c8f898(PTR_DAT_08e81e20);
    FUN_03c8f898(PTR_DAT_08e81e28);
    FUN_03c8f898(PTR_DAT_08e80b50);
    FUN_03c8f898(PTR_DAT_08e69878);
    FUN_03c8f898(PTR_DAT_08e81e30);
    FUN_03c8f898(PTR_DAT_08e81e38);
    FUN_03c8f898(PTR_DAT_08e79c00);
    FUN_03c8f898(PTR_DAT_08e695f0);
    lVar14 = *plVar18;
    if (lVar14 == 0) {
      FUN_03cf12a0(param_2);
      lVar14 = *(long *)(param_2 + 0x38);
    }
  }
  lVar14 = *(long *)(lVar14 + 8);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_03cf1244();
  }
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar5 = (*(code *)**(undefined8 **)*plVar18)();
  if ((uVar5 & 1) != 0) {
    lVar14 = *(long *)(*plVar18 + 8);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03cf1244();
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar5 = (*(code *)**(undefined8 **)(*plVar18 + 0x10))();
    puVar13 = PTR_DAT_08e695f0;
    if ((uVar5 & 1) == 0) {
      uVar16 = *(undefined8 *)(*plVar18 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar14 = FUN_0710fcf0(uVar16,0);
      if (lVar14 == 0) goto LAB_047a2660;
      uVar5 = FUN_0711b200(lVar14,0);
      uVar16 = *(undefined8 *)(*plVar18 + 0x18);
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar13);
      }
      plVar6 = (long *)FUN_0710fcf0(uVar16,0);
      if (plVar6 == (long *)0x0) goto LAB_047a2660;
      lVar14 = *plVar6;
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(lVar14 + 1000))(plVar6,*(undefined8 *)(lVar14 + 0x3f0));
        if ((uVar5 & 1) != 0) {
          uVar16 = *(undefined8 *)(*plVar18 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar6 = (long *)FUN_0710fcf0(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_047a2660;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
          uVar16 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e80b50,0);
          if (plVar6 == (long *)0x0) goto LAB_047a2660;
          uVar5 = (**(code **)(*plVar6 + 0x2c8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2d0));
          if ((uVar5 & 1) == 0) goto LAB_047a1868;
          plVar6 = *(long **)(param_1 + 0x48);
FUN_047a191c:
          plVar7 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,1);
          uVar16 = *(undefined8 *)(*plVar18 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)puVar13);
          }
          plVar8 = (long *)FUN_0710fcf0(uVar16,0);
          if (plVar8 == (long *)0x0) goto LAB_047a2660;
          uVar16 = (**(code **)(*plVar8 + 0x498))(plVar8,*(undefined8 *)(*plVar8 + 0x4a0));
          lVar14 = FUN_0461aa48(uVar16,*(undefined8 *)PTR_DAT_08e81dd8);
          goto joined_r0x047a1980;
        }
LAB_047a1868:
        uVar16 = *(undefined8 *)(*plVar18 + 0x18);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        plVar6 = (long *)FUN_0710fcf0(uVar16,0);
        if (plVar6 == (long *)0x0) goto LAB_047a2660;
        uVar5 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
        if ((uVar5 & 1) != 0) {
          uVar16 = *(undefined8 *)(*plVar18 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar6 = (long *)FUN_0710fcf0(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_047a2660;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
          uVar16 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81df8,0);
          if (plVar6 == (long *)0x0) goto LAB_047a2660;
          uVar5 = (**(code **)(*plVar6 + 0x2c8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2d0));
          if ((uVar5 & 1) != 0) {
            plVar6 = *(long **)(param_1 + 0x50);
            goto FUN_047a191c;
          }
        }
        uVar16 = *(undefined8 *)(*plVar18 + 0x18);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        plVar6 = (long *)FUN_0710fcf0(uVar16,0);
        if (plVar6 == (long *)0x0) goto LAB_047a2660;
        uVar5 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
        if ((uVar5 & 1) == 0) {
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<long>:
          uVar16 = *(undefined8 *)(*plVar18 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar6 = (long *)FUN_0710fcf0(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_047a2660;
          uVar5 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
          if ((uVar5 & 1) != 0) {
            uVar16 = *(undefined8 *)(*plVar18 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            plVar6 = (long *)FUN_0710fcf0(uVar16,0);
            if (plVar6 == (long *)0x0) goto LAB_047a2660;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480))
            ;
            uVar16 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e18,0);
            if (plVar6 == (long *)0x0) goto LAB_047a2660;
            uVar5 = (**(code **)(*plVar6 + 0x2c8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2d0));
            if ((uVar5 & 1) == 0) goto LAB_047a1bf8;
            plVar6 = *(long **)(param_1 + 0x20);
FUN_047a1cac:
            plVar7 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
            uVar16 = *(undefined8 *)(*plVar18 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)puVar13);
            }
            lVar14 = FUN_0710fcf0(uVar16,0);
            if (plVar7 == (long *)0x0) goto LAB_047a2660;
            if ((lVar14 != 0) &&
               (lVar9 = thunk_FUN_03cf5138(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
            goto LAB_047a2720;
            if ((int)plVar7[3] == 0)
            goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
            plVar7[4] = lVar14;
            thunk_FUN_03d233cc(plVar7 + 4,lVar14);
            plVar8 = (long *)FUN_0710fcf0(*(undefined8 *)(*plVar18 + 0x18),0);
            if (plVar8 == (long *)0x0) goto LAB_047a2660;
            uVar16 = (**(code **)(*plVar8 + 0x498))(plVar8,*(undefined8 *)(*plVar8 + 0x4a0));
            lVar14 = FUN_0461aa48(uVar16,*(undefined8 *)PTR_DAT_08e81dd8);
            goto joined_r0x047a21c0;
          }
LAB_047a1bf8:
          uVar16 = *(undefined8 *)(*plVar18 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar6 = (long *)FUN_0710fcf0(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_047a2660;
          uVar5 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
          if ((uVar5 & 1) != 0) {
            uVar16 = *(undefined8 *)(*plVar18 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            plVar6 = (long *)FUN_0710fcf0(uVar16,0);
            if (plVar6 == (long *)0x0) goto LAB_047a2660;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480))
            ;
            uVar16 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e20,0);
            if (plVar6 == (long *)0x0) goto LAB_047a2660;
            uVar5 = (**(code **)(*plVar6 + 0x2c8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2d0));
            if ((uVar5 & 1) != 0) {
              plVar6 = *(long **)(param_1 + 0x28);
              goto FUN_047a1cac;
            }
          }
          uVar16 = *(undefined8 *)(*plVar18 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar6 = (long *)FUN_0710fcf0(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_047a2660;
          uVar5 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
          if ((uVar5 & 1) == 0) {

            System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>
            :
            uVar16 = *(undefined8 *)(*plVar18 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            plVar6 = (long *)FUN_0710fcf0(uVar16,0);
            if (plVar6 == (long *)0x0) goto LAB_047a2660;
            uVar5 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
            lVar14 = *plVar18;
            if ((uVar5 & 1) != 0) {
              uVar16 = *(undefined8 *)(lVar14 + 0x18);
              if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              plVar6 = (long *)FUN_0710fcf0(uVar16,0);
              if (plVar6 == (long *)0x0) goto LAB_047a2660;
              plVar6 = (long *)(**(code **)(*plVar6 + 0x478))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x480));
              uVar16 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e28,0);
              if (plVar6 == (long *)0x0) goto LAB_047a2660;
              uVar5 = (**(code **)(*plVar6 + 0x2c8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2d0))
              ;
              lVar14 = *plVar18;
              if ((uVar5 & 1) != 0) {
                uVar16 = *(undefined8 *)(lVar14 + 0x18);
                if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                plVar6 = (long *)FUN_0710fcf0(uVar16,0);
                if (plVar6 == (long *)0x0) goto LAB_047a2660;
                uVar16 = (**(code **)(*plVar6 + 0x498))(plVar6,*(undefined8 *)(*plVar6 + 0x4a0));
                lVar14 = FUN_046337ac(uVar16,*(undefined8 *)PTR_DAT_08e81de0);
                plVar6 = *(long **)(param_1 + 0x38);
                plVar7 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
                if (lVar14 == 0) goto LAB_047a2660;
                if (*(int *)(lVar14 + 0x18) == 0)
                goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
                if (plVar7 == (long *)0x0) goto LAB_047a2660;
                lVar9 = *(long *)(lVar14 + 0x20);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)
                   ) goto LAB_047a2720;
                if ((int)plVar7[3] == 0)
                goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
                plVar7[4] = lVar9;
                thunk_FUN_03d233cc(plVar7 + 4,lVar9);
                if (*(uint *)(lVar14 + 0x18) < 2)
                goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
                lVar14 = *(long *)(lVar14 + 0x28);
                goto joined_r0x047a21c0;
              }
            }
            if ((*(byte *)(*(long *)(lVar14 + 0x28) + 0x135) & 1) == 0) {
              FUN_03cf1244();
            }
            lVar14 = thunk_FUN_03cf5234();
            (*(code *)**(undefined8 **)(*plVar18 + 0x30))();
            uVar16 = *(undefined8 *)(*plVar18 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar16 = FUN_0710fcf0(uVar16,0);
            plVar6 = (long *)FUN_08649324(uVar16,0);
            if (plVar6 != (long *)0x0) {
              lVar9 = *plVar6;
              uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar5 != 0) {
                piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e81e08) {
                    puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                    goto 
                    System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>
                    ;
                  }
                  uVar5 = uVar5 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar5 != 0);
              }
              puVar11 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e81e08,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>:
              plVar6 = (long *)(*(code *)*puVar11)(plVar6,puVar11[1]);
              puVar3 = PTR_DAT_08e6a290;
              puVar2 = PTR_DAT_08e69878;
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              do {
                lVar9 = *plVar6;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_047a22ec;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar11 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar3,0);
LAB_047a22ec:
                uVar5 = (*(code *)*puVar11)(plVar6,puVar11[1]);
                if ((uVar5 & 1) == 0) {
                  if (plVar6 == (long *)0x0) {
                    return lVar14;
                  }
                  lVar9 = *plVar6;
                  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar5 == 0)
                  goto 
                  System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
                  ;
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  goto 
                  System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
                  ;
                }
                lVar9 = *plVar6;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e81e10) {
                      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                      goto 
                      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>
                      ;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar11 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e81e10,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
                plVar7 = (long *)(*(code *)*puVar11)(plVar6,puVar11[1]);
                if (plVar7 == (long *)0x0) {
LAB_047a2664:
                  thunk_FUN_03ce5214(PTR_DAT_08e71970);
                  uVar16 = thunk_FUN_03cf5234();
                  FUN_071004d4(uVar16,0);
                    /* WARNING: Subroutine does not return */
                  FUN_03c8f9fc(uVar16,param_2);
                }
                lVar9 = *plVar7;
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
                  FUN_08644cb0(&stack0x00000020,plVar7,0);
                  in_stack_00000018 = in_stack_00000028;
                  in_stack_00000010 = in_stack_00000020;
                  plVar7 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,
                                                      &stack0x00000010);
                }
                else {
                  in_stack_00000020 = 0;
                  in_stack_00000028 = 0;
                  FUN_08644ae0(&stack0x00000020,plVar7,0);
                  in_stack_00000018 = in_stack_00000028;
                  in_stack_00000010 = in_stack_00000020;
                  plVar7 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,
                                                      &stack0x00000010);
                }
                plVar17 = *(long **)(param_1 + 0x10);
                plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
                uVar16 = *(undefined8 *)(*plVar18 + 0x18);
                if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                lVar9 = FUN_0710fcf0(uVar16,0);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) {
                  uVar16 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
                  FUN_03c8f9fc(uVar16,0);
                }
                if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb38();
                }
                plVar8[4] = lVar9;
                thunk_FUN_03d233cc(plVar8 + 4,lVar9);
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                lVar9 = *plVar7;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e81dc0) {
                      puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                      goto LAB_047a24c8;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar11 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
                lVar9 = (*(code *)*puVar11)(plVar7,puVar11[1]);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) {
                  uVar16 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
                  FUN_03c8f9fc(uVar16,0);
                }
                if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb38();
                }
                plVar8[5] = lVar9;
                thunk_FUN_03d233cc(plVar8 + 5,lVar9);
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                lVar9 = (**(code **)(*plVar17 + 0x428))
                                  (plVar17,plVar8,*(undefined8 *)(*plVar17 + 0x430));
                plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)puVar2,2);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                lVar10 = thunk_FUN_03cf5138(plVar7,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar10 == 0) {
                  uVar16 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
                  FUN_03c8f9fc(uVar16,0);
                }
                if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb38();
                }
                plVar8[4] = (long)plVar7;
                thunk_FUN_03d233cc(plVar8 + 4,plVar7);
                if ((lVar14 != 0) &&
                   (lVar10 = thunk_FUN_03cf5138(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0
                   )) {
                  uVar16 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
                  FUN_03c8f9fc(uVar16,0);
                }
                if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb38();
                }
                plVar8[5] = lVar14;
                thunk_FUN_03d233cc(plVar8 + 5,lVar14);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                FUN_0702dc3c(lVar9,param_1,plVar8,0);
              } while( true );
            }
            goto LAB_047a2660;
          }
          uVar16 = *(undefined8 *)(*plVar18 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar6 = (long *)FUN_0710fcf0(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_047a2660;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
          uVar16 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e00,0);
          if (plVar6 == (long *)0x0) goto LAB_047a2660;
          uVar5 = (**(code **)(*plVar6 + 0x2c8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2d0));
          if ((uVar5 & 1) == 0)
          goto 
          System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>
          ;
          plVar6 = *(long **)(param_1 + 0x30);
          plVar7 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,3);
          uVar16 = *(undefined8 *)(*plVar18 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)puVar13);
          }
          lVar14 = FUN_0710fcf0(uVar16,0);
          if (plVar7 == (long *)0x0) goto LAB_047a2660;
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_03cf5138(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_047a2720;
          if ((int)plVar7[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          plVar7[4] = lVar14;
          thunk_FUN_03d233cc(plVar7 + 4,lVar14);
          plVar8 = (long *)FUN_0710fcf0(*(undefined8 *)(*plVar18 + 0x18),0);
          if (plVar8 == (long *)0x0) goto LAB_047a2660;
          uVar16 = (**(code **)(*plVar8 + 0x498))(plVar8,*(undefined8 *)(*plVar8 + 0x4a0));
          lVar14 = FUN_0461aa48(uVar16,*(undefined8 *)PTR_DAT_08e81dd8);
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_03cf5138(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_047a2720;
          if (*(uint *)(plVar7 + 3) < 2)
          goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          plVar7[5] = lVar14;
          thunk_FUN_03d233cc(plVar7 + 5,lVar14);
          plVar8 = (long *)FUN_0710fcf0(*(undefined8 *)(*plVar18 + 0x18),0);
          if (plVar8 == (long *)0x0) goto LAB_047a2660;
          uVar16 = (**(code **)(*plVar8 + 0x498))(plVar8,*(undefined8 *)(*plVar8 + 0x4a0));
          lVar14 = FUN_04617b80(uVar16,1,*(undefined8 *)PTR_DAT_08e81dd0);
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_03cf5138(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_047a2720;
          if (*(uint *)(plVar7 + 3) < 3)
          goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          plVar8 = plVar7 + 6;
          *plVar8 = lVar14;
        }
        else {
          uVar16 = *(undefined8 *)(*plVar18 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar6 = (long *)FUN_0710fcf0(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_047a2660;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
          uVar16 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81dc8,0);
          if (plVar6 == (long *)0x0) goto LAB_047a2660;
          uVar5 = (**(code **)(*plVar6 + 0x2c8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2d0));
          if ((uVar5 & 1) == 0)
          goto System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<long>;
          plVar6 = *(long **)(param_1 + 0x58);
          plVar7 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
          uVar16 = *(undefined8 *)(*plVar18 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)puVar13);
          }
          plVar8 = (long *)FUN_0710fcf0(uVar16,0);
          if (plVar8 == (long *)0x0) goto LAB_047a2660;
          uVar16 = (**(code **)(*plVar8 + 0x498))(plVar8,*(undefined8 *)(*plVar8 + 0x4a0));
          lVar14 = FUN_0461aa48(uVar16,*(undefined8 *)PTR_DAT_08e81dd8);
          if (plVar7 == (long *)0x0) goto LAB_047a2660;
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_03cf5138(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_047a2720;
          if ((int)plVar7[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          plVar7[4] = lVar14;
          thunk_FUN_03d233cc(plVar7 + 4,lVar14);
          plVar8 = (long *)FUN_0710fcf0(*(undefined8 *)(*plVar18 + 0x18),0);
          if (plVar8 == (long *)0x0) goto LAB_047a2660;
          uVar16 = (**(code **)(*plVar8 + 0x498))(plVar8,*(undefined8 *)(*plVar8 + 0x4a0));
          lVar14 = FUN_04617b80(uVar16,1,*(undefined8 *)PTR_DAT_08e81dd0);
joined_r0x047a21c0:
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_03cf5138(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_047a2720;
          if (*(uint *)(plVar7 + 3) < 2)
          goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          plVar8 = plVar7 + 5;
          *plVar8 = lVar14;
        }
      }
      else {
        iVar4 = (**(code **)(lVar14 + 0x468))(plVar6,*(undefined8 *)(lVar14 + 0x470));
        if (iVar4 != 1) {
          thunk_FUN_03ce5214(PTR_DAT_08e71970);
          uVar16 = thunk_FUN_03cf5234();
          puVar13 = PTR_DAT_08e81e48;
          goto LAB_047a26d8;
        }
        plVar6 = *(long **)(param_1 + 0x40);
        plVar7 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,1);
        uVar16 = *(undefined8 *)(*plVar18 + 0x18);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)puVar13);
        }
        plVar8 = (long *)FUN_0710fcf0(uVar16,0);
        if (plVar8 == (long *)0x0) goto LAB_047a2660;
        lVar14 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
joined_r0x047a1980:
        if (plVar7 == (long *)0x0) goto LAB_047a2660;
        if ((lVar14 != 0) &&
           (lVar9 = thunk_FUN_03cf5138(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_047a2720:
          uVar16 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar16,0);
        }
        if ((int)plVar7[3] == 0) {
System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        plVar8 = plVar7 + 4;
        *plVar8 = lVar14;
      }
      thunk_FUN_03d233cc(plVar8,lVar14);
      if (plVar6 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar6 + 0x428))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x430));
        uVar16 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,0);
        if (lVar14 != 0) {
          lVar14 = FUN_0702dc3c(lVar14,param_1,uVar16,0);
          lVar9 = *(long *)(*plVar18 + 0x20);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_03cf1244(lVar9);
          }
          if (lVar14 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = thunk_FUN_03cf5138(lVar14,lVar9);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fecc(lVar14,lVar9);
            }
          }
          return lVar10;
        }
      }
LAB_047a2660:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
  thunk_FUN_03ce5214(PTR_DAT_08e71970);
  uVar16 = thunk_FUN_03cf5234();
  puVar13 = PTR_DAT_08e81e40;
LAB_047a26d8:
  uVar12 = thunk_FUN_03ce5214(puVar13);
  FUN_07100530(uVar16,uVar12,0);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar16,param_2);
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar15 = piVar15 + 4;
    if (uVar5 == 0) break;

    System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
    :
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar11 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e6a288,0);
FUN_047a2648:
  (*(code *)*puVar11)(plVar6,puVar11[1]);
  return lVar14;
}


