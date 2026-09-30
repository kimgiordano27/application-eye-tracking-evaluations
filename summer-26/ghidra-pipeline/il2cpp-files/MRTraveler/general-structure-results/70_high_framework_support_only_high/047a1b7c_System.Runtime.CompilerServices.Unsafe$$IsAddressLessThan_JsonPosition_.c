/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$IsAddressLessThan<JsonPosition>
ENTRY_POINT: 047a1b7c
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

long System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<JsonPosition>(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  plVar4 = (long *)FUN_0710fcf0(uVar13,0);
  if (plVar4 == (long *)0x0) goto LAB_047a2660;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
  uVar13 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e18,0);
  if (plVar4 == (long *)0x0) goto LAB_047a2660;
  uVar5 = (**(code **)(*plVar4 + 0x2c8))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x2d0));
  if ((uVar5 & 1) == 0) {
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar4 = (long *)FUN_0710fcf0(uVar13,0);
    if (plVar4 == (long *)0x0) goto LAB_047a2660;
    uVar5 = (**(code **)(*plVar4 + 1000))(plVar4,*(undefined8 *)(*plVar4 + 0x3f0));
    if ((uVar5 & 1) != 0) {
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar4 = (long *)FUN_0710fcf0(uVar13,0);
      if (plVar4 == (long *)0x0) goto LAB_047a2660;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
      uVar13 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e20,0);
      if (plVar4 == (long *)0x0) goto LAB_047a2660;
      uVar5 = (**(code **)(*plVar4 + 0x2c8))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x2d0));
      if ((uVar5 & 1) != 0) {
        plVar4 = *(long **)(unaff_x19 + 0x28);
        goto FUN_047a1cac;
      }
    }
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar4 = (long *)FUN_0710fcf0(uVar13,0);
    if (plVar4 == (long *)0x0) goto LAB_047a2660;
    uVar5 = (**(code **)(*plVar4 + 1000))(plVar4,*(undefined8 *)(*plVar4 + 0x3f0));
    if ((uVar5 & 1) == 0) {

      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>
      :
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar4 = (long *)FUN_0710fcf0(uVar13,0);
      if (plVar4 == (long *)0x0) goto LAB_047a2660;
      uVar5 = (**(code **)(*plVar4 + 1000))(plVar4,*(undefined8 *)(*plVar4 + 0x3f0));
      lVar7 = *unaff_x27;
      if ((uVar5 & 1) != 0) {
        uVar13 = *(undefined8 *)(lVar7 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        plVar4 = (long *)FUN_0710fcf0(uVar13,0);
        if (plVar4 == (long *)0x0) goto LAB_047a2660;
        plVar4 = (long *)(**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
        uVar13 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e28,0);
        if (plVar4 == (long *)0x0) goto LAB_047a2660;
        uVar5 = (**(code **)(*plVar4 + 0x2c8))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x2d0));
        lVar7 = *unaff_x27;
        if ((uVar5 & 1) != 0) {
          uVar13 = *(undefined8 *)(lVar7 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar4 = (long *)FUN_0710fcf0(uVar13,0);
          if (plVar4 == (long *)0x0) goto LAB_047a2660;
          uVar13 = (**(code **)(*plVar4 + 0x498))(plVar4,*(undefined8 *)(*plVar4 + 0x4a0));
          lVar7 = FUN_046337ac(uVar13,*(undefined8 *)PTR_DAT_08e81de0);
          plVar4 = *(long **)(unaff_x19 + 0x38);
          plVar6 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
          if (lVar7 == 0) goto LAB_047a2660;
          if (*(int *)(lVar7 + 0x18) == 0)
          goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          if (plVar6 == (long *)0x0) goto LAB_047a2660;
          lVar8 = *(long *)(lVar7 + 0x20);
          if ((lVar8 != 0) &&
             (lVar10 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
          goto LAB_047a2720;
          if ((int)plVar6[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          plVar6[4] = lVar8;
          thunk_FUN_03d233cc(plVar6 + 4,lVar8);
          if (*(uint *)(lVar7 + 0x18) < 2)
          goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          lVar7 = *(long *)(lVar7 + 0x28);
          goto joined_r0x047a21c0;
        }
      }
      if ((*(byte *)(*(long *)(lVar7 + 0x28) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      lVar7 = thunk_FUN_03cf5234();
      (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar13 = FUN_0710fcf0(uVar13,0);
      plVar4 = (long *)FUN_08649324(uVar13,0);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e81e08) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto 
              System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>
              ;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar11 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e81e08,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>:
        plVar4 = (long *)(*(code *)*puVar11)(plVar4,puVar11[1]);
        puVar3 = PTR_DAT_08e6a290;
        puVar2 = PTR_DAT_08e69878;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        do {
          lVar8 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar11 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_047a22ec;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar3,0);
LAB_047a22ec:
          uVar5 = (*(code *)*puVar11)(plVar4,puVar11[1]);
          if ((uVar5 & 1) == 0) {
            if (plVar4 == (long *)0x0) {
              return lVar7;
            }
            lVar8 = *plVar4;
            uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar5 == 0)
            goto 
            System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
            ;
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto 
            System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
            ;
          }
          lVar8 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e81e10) {
                puVar11 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto 
                System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>
                ;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e81e10,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
          plVar6 = (long *)(*(code *)*puVar11)(plVar4,puVar11[1]);
          if (plVar6 == (long *)0x0) {
LAB_047a2664:
            thunk_FUN_03ce5214(PTR_DAT_08e71970);
            uVar13 = thunk_FUN_03cf5234();
            FUN_071004d4(uVar13,0);
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar13,unaff_x20);
          }
          lVar8 = *plVar6;
          bVar1 = *(byte *)(*(long *)PTR_DAT_08e81de8 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81de8
             )) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_08e81e30 + 0x130);
            if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_08e81e30)) goto LAB_047a2664;
            in_stack_00000020 = 0;
            in_stack_00000028 = 0;
            FUN_08644cb0(&stack0x00000020,plVar6,0);
            in_stack_00000018 = in_stack_00000028;
            in_stack_00000010 = in_stack_00000020;
            plVar6 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,&stack0x00000010);
          }
          else {
            in_stack_00000020 = 0;
            in_stack_00000028 = 0;
            FUN_08644ae0(&stack0x00000020,plVar6,0);
            in_stack_00000018 = in_stack_00000028;
            in_stack_00000010 = in_stack_00000020;
            plVar6 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,&stack0x00000010);
          }
          plVar14 = *(long **)(unaff_x19 + 0x10);
          plVar9 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
          uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar8 = FUN_0710fcf0(uVar13,0);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if ((lVar8 != 0) &&
             (lVar10 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
            uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar13,0);
          }
          if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar9[4] = lVar8;
          thunk_FUN_03d233cc(plVar9 + 4,lVar8);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar8 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e81dc0) {
                puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_047a24c8;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
          lVar8 = (*(code *)*puVar11)(plVar6,puVar11[1]);
          if ((lVar8 != 0) &&
             (lVar10 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
            uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar13,0);
          }
          if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar9[5] = lVar8;
          thunk_FUN_03d233cc(plVar9 + 5,lVar8);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar8 = (**(code **)(*plVar14 + 0x428))(plVar14,plVar9,*(undefined8 *)(*plVar14 + 0x430));
          plVar9 = (long *)FUN_03c8f97c(*(undefined8 *)puVar2,2);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar10 = thunk_FUN_03cf5138(plVar6,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar10 == 0) {
            uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar13,0);
          }
          if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar9[4] = (long)plVar6;
          thunk_FUN_03d233cc(plVar9 + 4,plVar6);
          if ((lVar7 != 0) &&
             (lVar10 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
            uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar13,0);
          }
          if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar9[5] = lVar7;
          thunk_FUN_03d233cc(plVar9 + 5,lVar7);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_0702dc3c(lVar8);
        } while( true );
      }
      goto LAB_047a2660;
    }
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar4 = (long *)FUN_0710fcf0(uVar13,0);
    if (plVar4 == (long *)0x0) goto LAB_047a2660;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
    uVar13 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e00,0);
    if (plVar4 == (long *)0x0) goto LAB_047a2660;
    uVar5 = (**(code **)(*plVar4 + 0x2c8))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x2d0));
    if ((uVar5 & 1) == 0)
    goto 
    System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>
    ;
    plVar4 = *(long **)(unaff_x19 + 0x30);
    plVar6 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,3);
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x28);
    }
    lVar7 = FUN_0710fcf0(uVar13,0);
    if (plVar6 == (long *)0x0) goto LAB_047a2660;
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_047a2720;
    if ((int)plVar6[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
    plVar6[4] = lVar7;
    thunk_FUN_03d233cc(plVar6 + 4,lVar7);
    plVar9 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
    if (plVar9 == (long *)0x0) goto LAB_047a2660;
    uVar13 = (**(code **)(*plVar9 + 0x498))(plVar9,*(undefined8 *)(*plVar9 + 0x4a0));
    lVar7 = FUN_0461aa48(uVar13,*(undefined8 *)PTR_DAT_08e81dd8);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_047a2720;
    if (*(uint *)(plVar6 + 3) < 2) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
    plVar6[5] = lVar7;
    thunk_FUN_03d233cc(plVar6 + 5,lVar7);
    plVar9 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
    if (plVar9 == (long *)0x0) goto LAB_047a2660;
    uVar13 = (**(code **)(*plVar9 + 0x498))(plVar9,*(undefined8 *)(*plVar9 + 0x4a0));
    lVar7 = FUN_04617b80(uVar13,1,*(undefined8 *)PTR_DAT_08e81dd0);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_047a2720;
    if (*(uint *)(plVar6 + 3) < 3) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
    plVar9 = plVar6 + 6;
    *plVar9 = lVar7;
  }
  else {
    plVar4 = *(long **)(unaff_x19 + 0x20);
FUN_047a1cac:
    plVar6 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x28);
    }
    lVar7 = FUN_0710fcf0(uVar13,0);
    if (plVar6 == (long *)0x0) goto LAB_047a2660;
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_047a2720;
    if ((int)plVar6[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
    plVar6[4] = lVar7;
    thunk_FUN_03d233cc(plVar6 + 4,lVar7);
    plVar9 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
    if (plVar9 == (long *)0x0) goto LAB_047a2660;
    uVar13 = (**(code **)(*plVar9 + 0x498))(plVar9,*(undefined8 *)(*plVar9 + 0x4a0));
    lVar7 = FUN_0461aa48(uVar13,*(undefined8 *)PTR_DAT_08e81dd8);
joined_r0x047a21c0:
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_047a2720:
      uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar13,0);
    }
    if (*(uint *)(plVar6 + 3) < 2) {
System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar9 = plVar6 + 5;
    *plVar9 = lVar7;
  }
  thunk_FUN_03d233cc(plVar9,lVar7);
  if (plVar4 != (long *)0x0) {
    lVar7 = (**(code **)(*plVar4 + 0x428))(plVar4,plVar6,*(undefined8 *)(*plVar4 + 0x430));
    FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,0);
    if (lVar7 != 0) {
      lVar7 = FUN_0702dc3c(lVar7);
      lVar8 = *(long *)(*unaff_x27 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03cf1244(lVar8);
      }
      if (lVar7 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = thunk_FUN_03cf5138(lVar7,lVar8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(lVar7,lVar8);
        }
      }
      return lVar10;
    }
  }
LAB_047a2660:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 4;
    if (uVar5 == 0) break;

    System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
    :
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar11 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e6a288,0);
FUN_047a2648:
  (*(code *)*puVar11)(plVar4,puVar11[1]);
  return lVar7;
}


