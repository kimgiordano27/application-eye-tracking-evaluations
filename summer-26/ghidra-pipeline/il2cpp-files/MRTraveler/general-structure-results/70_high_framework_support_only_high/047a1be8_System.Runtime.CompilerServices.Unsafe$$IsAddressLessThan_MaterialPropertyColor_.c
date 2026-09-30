/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$IsAddressLessThan<MaterialPropertyColor>
ENTRY_POINT: 047a1be8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047a2658) */

long System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MaterialPropertyColor>(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  code *in_x9;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar4 = (*in_x9)();
  if ((uVar4 & 1) == 0) {
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar12 = (long *)FUN_0710fcf0(uVar13,0);
    if (plVar12 == (long *)0x0) goto LAB_047a2660;
    uVar4 = (**(code **)(*plVar12 + 1000))(plVar12,*(undefined8 *)(*plVar12 + 0x3f0));
    if ((uVar4 & 1) != 0) {
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar12 = (long *)FUN_0710fcf0(uVar13,0);
      if (plVar12 == (long *)0x0) goto LAB_047a2660;
      plVar12 = (long *)(**(code **)(*plVar12 + 0x478))(plVar12,*(undefined8 *)(*plVar12 + 0x480));
      uVar13 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e20,0);
      if (plVar12 == (long *)0x0) goto LAB_047a2660;
      uVar4 = (**(code **)(*plVar12 + 0x2c8))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x2d0));
      if ((uVar4 & 1) != 0) {
        plVar12 = *(long **)(unaff_x19 + 0x28);
        goto FUN_047a1cac;
      }
    }
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar12 = (long *)FUN_0710fcf0(uVar13,0);
    if (plVar12 == (long *)0x0) goto LAB_047a2660;
    uVar4 = (**(code **)(*plVar12 + 1000))(plVar12,*(undefined8 *)(*plVar12 + 0x3f0));
    if ((uVar4 & 1) == 0) {

      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>
      :
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar12 = (long *)FUN_0710fcf0(uVar13,0);
      if (plVar12 == (long *)0x0) goto LAB_047a2660;
      uVar4 = (**(code **)(*plVar12 + 1000))(plVar12,*(undefined8 *)(*plVar12 + 0x3f0));
      lVar6 = *unaff_x27;
      if ((uVar4 & 1) != 0) {
        uVar13 = *(undefined8 *)(lVar6 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        plVar12 = (long *)FUN_0710fcf0(uVar13,0);
        if (plVar12 == (long *)0x0) goto LAB_047a2660;
        plVar12 = (long *)(**(code **)(*plVar12 + 0x478))(plVar12,*(undefined8 *)(*plVar12 + 0x480))
        ;
        uVar13 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e28,0);
        if (plVar12 == (long *)0x0) goto LAB_047a2660;
        uVar4 = (**(code **)(*plVar12 + 0x2c8))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x2d0));
        lVar6 = *unaff_x27;
        if ((uVar4 & 1) != 0) {
          uVar13 = *(undefined8 *)(lVar6 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar12 = (long *)FUN_0710fcf0(uVar13,0);
          if (plVar12 == (long *)0x0) goto LAB_047a2660;
          uVar13 = (**(code **)(*plVar12 + 0x498))(plVar12,*(undefined8 *)(*plVar12 + 0x4a0));
          lVar6 = FUN_046337ac(uVar13,*(undefined8 *)PTR_DAT_08e81de0);
          plVar12 = *(long **)(unaff_x19 + 0x38);
          plVar5 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
          if (lVar6 == 0) goto LAB_047a2660;
          if (*(int *)(lVar6 + 0x18) == 0)
          goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          if (plVar5 == (long *)0x0) goto LAB_047a2660;
          lVar7 = *(long *)(lVar6 + 0x20);
          if ((lVar7 != 0) &&
             (lVar9 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
          goto LAB_047a2720;
          if ((int)plVar5[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          plVar5[4] = lVar7;
          thunk_FUN_03d233cc(plVar5 + 4,lVar7);
          if (*(uint *)(lVar6 + 0x18) < 2)
          goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          lVar6 = *(long *)(lVar6 + 0x28);
          goto joined_r0x047a21c0;
        }
      }
      if ((*(byte *)(*(long *)(lVar6 + 0x28) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      lVar6 = thunk_FUN_03cf5234();
      (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar13 = FUN_0710fcf0(uVar13,0);
      plVar12 = (long *)FUN_08649324(uVar13,0);
      if (plVar12 != (long *)0x0) {
        lVar7 = *plVar12;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e81e08) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto 
              System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>
              ;
            }
            uVar4 = uVar4 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar4 != 0);
        }
        puVar10 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08e81e08,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>:
        plVar12 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
        puVar3 = PTR_DAT_08e6a290;
        puVar2 = PTR_DAT_08e69878;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        do {
          lVar7 = *plVar12;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_047a22ec;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar10 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)puVar3,0);
LAB_047a22ec:
          uVar4 = (*(code *)*puVar10)(plVar12,puVar10[1]);
          if ((uVar4 & 1) == 0) {
            if (plVar12 == (long *)0x0) {
              return lVar6;
            }
            lVar7 = *plVar12;
            uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar4 == 0)
            goto 
            System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
            ;
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto 
            System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
            ;
          }
          lVar7 = *plVar12;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e81e10) {
                puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto 
                System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>
                ;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar10 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08e81e10,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
          plVar5 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
          if (plVar5 == (long *)0x0) {
LAB_047a2664:
            thunk_FUN_03ce5214(PTR_DAT_08e71970);
            uVar13 = thunk_FUN_03cf5234();
            FUN_071004d4(uVar13,0);
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar13,unaff_x20);
          }
          lVar7 = *plVar5;
          bVar1 = *(byte *)(*(long *)PTR_DAT_08e81de8 + 0x130);
          if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81de8
             )) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_08e81e30 + 0x130);
            if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_08e81e30)) goto LAB_047a2664;
            in_stack_00000020 = 0;
            in_stack_00000028 = 0;
            FUN_08644cb0(&stack0x00000020,plVar5,0);
            in_stack_00000018 = in_stack_00000028;
            in_stack_00000010 = in_stack_00000020;
            plVar5 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,&stack0x00000010);
          }
          else {
            in_stack_00000020 = 0;
            in_stack_00000028 = 0;
            FUN_08644ae0(&stack0x00000020,plVar5,0);
            in_stack_00000018 = in_stack_00000028;
            in_stack_00000010 = in_stack_00000020;
            plVar5 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,&stack0x00000010);
          }
          plVar14 = *(long **)(unaff_x19 + 0x10);
          plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
          uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar7 = FUN_0710fcf0(uVar13,0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if ((lVar7 != 0) &&
             (lVar9 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
            uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar13,0);
          }
          if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar8[4] = lVar7;
          thunk_FUN_03d233cc(plVar8 + 4,lVar7);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar7 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e81dc0) {
                puVar10 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_047a24c8;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar10 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
          lVar7 = (*(code *)*puVar10)(plVar5,puVar10[1]);
          if ((lVar7 != 0) &&
             (lVar9 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
            uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar13,0);
          }
          if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar8[5] = lVar7;
          thunk_FUN_03d233cc(plVar8 + 5,lVar7);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar7 = (**(code **)(*plVar14 + 0x428))(plVar14,plVar8,*(undefined8 *)(*plVar14 + 0x430));
          plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)puVar2,2);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar9 = thunk_FUN_03cf5138(plVar5,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) {
            uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar13,0);
          }
          if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar8[4] = (long)plVar5;
          thunk_FUN_03d233cc(plVar8 + 4,plVar5);
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_03cf5138(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
            uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar13,0);
          }
          if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar8[5] = lVar6;
          thunk_FUN_03d233cc(plVar8 + 5,lVar6);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_0702dc3c(lVar7);
        } while( true );
      }
      goto LAB_047a2660;
    }
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar12 = (long *)FUN_0710fcf0(uVar13,0);
    if (plVar12 == (long *)0x0) goto LAB_047a2660;
    plVar12 = (long *)(**(code **)(*plVar12 + 0x478))(plVar12,*(undefined8 *)(*plVar12 + 0x480));
    uVar13 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e00,0);
    if (plVar12 == (long *)0x0) goto LAB_047a2660;
    uVar4 = (**(code **)(*plVar12 + 0x2c8))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x2d0));
    if ((uVar4 & 1) == 0)
    goto 
    System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>
    ;
    plVar12 = *(long **)(unaff_x19 + 0x30);
    plVar5 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,3);
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x28);
    }
    lVar6 = FUN_0710fcf0(uVar13,0);
    if (plVar5 == (long *)0x0) goto LAB_047a2660;
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_03cf5138(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_047a2720;
    if ((int)plVar5[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
    plVar5[4] = lVar6;
    thunk_FUN_03d233cc(plVar5 + 4,lVar6);
    plVar8 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
    if (plVar8 == (long *)0x0) goto LAB_047a2660;
    uVar13 = (**(code **)(*plVar8 + 0x498))(plVar8,*(undefined8 *)(*plVar8 + 0x4a0));
    lVar6 = FUN_0461aa48(uVar13,*(undefined8 *)PTR_DAT_08e81dd8);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_03cf5138(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_047a2720;
    if (*(uint *)(plVar5 + 3) < 2) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
    plVar5[5] = lVar6;
    thunk_FUN_03d233cc(plVar5 + 5,lVar6);
    plVar8 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
    if (plVar8 == (long *)0x0) goto LAB_047a2660;
    uVar13 = (**(code **)(*plVar8 + 0x498))(plVar8,*(undefined8 *)(*plVar8 + 0x4a0));
    lVar6 = FUN_04617b80(uVar13,1,*(undefined8 *)PTR_DAT_08e81dd0);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_03cf5138(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_047a2720;
    if (*(uint *)(plVar5 + 3) < 3) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
    plVar8 = plVar5 + 6;
    *plVar8 = lVar6;
  }
  else {
    plVar12 = *(long **)(unaff_x19 + 0x20);
FUN_047a1cac:
    plVar5 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x28);
    }
    lVar6 = FUN_0710fcf0(uVar13,0);
    if (plVar5 == (long *)0x0) goto LAB_047a2660;
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_03cf5138(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_047a2720;
    if ((int)plVar5[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
    plVar5[4] = lVar6;
    thunk_FUN_03d233cc(plVar5 + 4,lVar6);
    plVar8 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
    if (plVar8 == (long *)0x0) goto LAB_047a2660;
    uVar13 = (**(code **)(*plVar8 + 0x498))(plVar8,*(undefined8 *)(*plVar8 + 0x4a0));
    lVar6 = FUN_0461aa48(uVar13,*(undefined8 *)PTR_DAT_08e81dd8);
joined_r0x047a21c0:
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_03cf5138(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_047a2720:
      uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar13,0);
    }
    if (*(uint *)(plVar5 + 3) < 2) {
System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar8 = plVar5 + 5;
    *plVar8 = lVar6;
  }
  thunk_FUN_03d233cc(plVar8,lVar6);
  if (plVar12 != (long *)0x0) {
    lVar6 = (**(code **)(*plVar12 + 0x428))(plVar12,plVar5,*(undefined8 *)(*plVar12 + 0x430));
    FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,0);
    if (lVar6 != 0) {
      lVar6 = FUN_0702dc3c(lVar6);
      lVar7 = *(long *)(*unaff_x27 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244(lVar7);
      }
      if (lVar6 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = thunk_FUN_03cf5138(lVar6,lVar7);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(lVar6,lVar7);
        }
      }
      return lVar9;
    }
  }
LAB_047a2660:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar11 = piVar11 + 4;
    if (uVar4 == 0) break;

    System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
    :
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar10 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08e6a288,0);
FUN_047a2648:
  (*(code *)*puVar10)(plVar12,puVar10[1]);
  return lVar6;
}


