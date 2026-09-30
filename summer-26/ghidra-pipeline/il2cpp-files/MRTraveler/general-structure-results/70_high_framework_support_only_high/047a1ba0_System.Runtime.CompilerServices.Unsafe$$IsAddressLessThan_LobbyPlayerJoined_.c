/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$IsAddressLessThan<LobbyPlayerJoined>
ENTRY_POINT: 047a1ba0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047a2658) */

long System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<LobbyPlayerJoined>(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar14;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (param_1 == (long *)0x0) goto LAB_047a2660;
  plVar4 = (long *)(**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
  uVar5 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e18,0);
  if (plVar4 == (long *)0x0) goto LAB_047a2660;
  uVar6 = (**(code **)(*plVar4 + 0x2c8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x2d0));
  if ((uVar6 & 1) == 0) {
    uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar4 = (long *)FUN_0710fcf0(uVar5,0);
    if (plVar4 == (long *)0x0) goto LAB_047a2660;
    uVar6 = (**(code **)(*plVar4 + 1000))(plVar4,*(undefined8 *)(*plVar4 + 0x3f0));
    if ((uVar6 & 1) != 0) {
      uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar4 = (long *)FUN_0710fcf0(uVar5,0);
      if (plVar4 == (long *)0x0) goto LAB_047a2660;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
      uVar5 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e20,0);
      if (plVar4 == (long *)0x0) goto LAB_047a2660;
      uVar6 = (**(code **)(*plVar4 + 0x2c8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x2d0));
      if ((uVar6 & 1) != 0) {
        plVar4 = *(long **)(unaff_x19 + 0x28);
        goto FUN_047a1cac;
      }
    }
    uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar4 = (long *)FUN_0710fcf0(uVar5,0);
    if (plVar4 == (long *)0x0) goto LAB_047a2660;
    uVar6 = (**(code **)(*plVar4 + 1000))(plVar4,*(undefined8 *)(*plVar4 + 0x3f0));
    if ((uVar6 & 1) == 0) {

      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>
      :
      uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar4 = (long *)FUN_0710fcf0(uVar5,0);
      if (plVar4 == (long *)0x0) goto LAB_047a2660;
      uVar6 = (**(code **)(*plVar4 + 1000))(plVar4,*(undefined8 *)(*plVar4 + 0x3f0));
      lVar8 = *unaff_x27;
      if ((uVar6 & 1) != 0) {
        uVar5 = *(undefined8 *)(lVar8 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        plVar4 = (long *)FUN_0710fcf0(uVar5,0);
        if (plVar4 == (long *)0x0) goto LAB_047a2660;
        plVar4 = (long *)(**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
        uVar5 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e28,0);
        if (plVar4 == (long *)0x0) goto LAB_047a2660;
        uVar6 = (**(code **)(*plVar4 + 0x2c8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x2d0));
        lVar8 = *unaff_x27;
        if ((uVar6 & 1) != 0) {
          uVar5 = *(undefined8 *)(lVar8 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar4 = (long *)FUN_0710fcf0(uVar5,0);
          if (plVar4 == (long *)0x0) goto LAB_047a2660;
          uVar5 = (**(code **)(*plVar4 + 0x498))(plVar4,*(undefined8 *)(*plVar4 + 0x4a0));
          lVar8 = FUN_046337ac(uVar5,*(undefined8 *)PTR_DAT_08e81de0);
          plVar4 = *(long **)(unaff_x19 + 0x38);
          plVar7 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
          if (lVar8 == 0) goto LAB_047a2660;
          if (*(int *)(lVar8 + 0x18) == 0)
          goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          if (plVar7 == (long *)0x0) goto LAB_047a2660;
          lVar9 = *(long *)(lVar8 + 0x20);
          if ((lVar9 != 0) &&
             (lVar11 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
          goto LAB_047a2720;
          if ((int)plVar7[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          plVar7[4] = lVar9;
          thunk_FUN_03d233cc(plVar7 + 4,lVar9);
          if (*(uint *)(lVar8 + 0x18) < 2)
          goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
          lVar8 = *(long *)(lVar8 + 0x28);
          goto joined_r0x047a21c0;
        }
      }
      if ((*(byte *)(*(long *)(lVar8 + 0x28) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      lVar8 = thunk_FUN_03cf5234();
      (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
      uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar5 = FUN_0710fcf0(uVar5,0);
      plVar4 = (long *)FUN_08649324(uVar5,0);
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e81e08) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto 
              System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>
              ;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar12 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e81e08,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>:
        plVar4 = (long *)(*(code *)*puVar12)(plVar4,puVar12[1]);
        puVar3 = PTR_DAT_08e6a290;
        puVar2 = PTR_DAT_08e69878;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        do {
          lVar9 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_047a22ec;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar12 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar3,0);
LAB_047a22ec:
          uVar6 = (*(code *)*puVar12)(plVar4,puVar12[1]);
          if ((uVar6 & 1) == 0) {
            if (plVar4 == (long *)0x0) {
              return lVar8;
            }
            lVar9 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar6 == 0)
            goto 
            System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
            ;
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto 
            System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
            ;
          }
          lVar9 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e81e10) {
                puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto 
                System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>
                ;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar12 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e81e10,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
          plVar7 = (long *)(*(code *)*puVar12)(plVar4,puVar12[1]);
          if (plVar7 == (long *)0x0) {
LAB_047a2664:
            thunk_FUN_03ce5214(PTR_DAT_08e71970);
            uVar5 = thunk_FUN_03cf5234();
            FUN_071004d4(uVar5,0);
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar5,unaff_x20);
          }
          lVar9 = *plVar7;
          bVar1 = *(byte *)(*(long *)PTR_DAT_08e81de8 + 0x130);
          if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81de8
             )) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_08e81e30 + 0x130);
            if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_08e81e30)) goto LAB_047a2664;
            in_stack_00000020 = 0;
            in_stack_00000028 = 0;
            FUN_08644cb0(&stack0x00000020,plVar7,0);
            in_stack_00000018 = in_stack_00000028;
            in_stack_00000010 = in_stack_00000020;
            plVar7 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,&stack0x00000010);
          }
          else {
            in_stack_00000020 = 0;
            in_stack_00000028 = 0;
            FUN_08644ae0(&stack0x00000020,plVar7,0);
            in_stack_00000018 = in_stack_00000028;
            in_stack_00000010 = in_stack_00000020;
            plVar7 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,&stack0x00000010);
          }
          plVar14 = *(long **)(unaff_x19 + 0x10);
          plVar10 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
          uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar9 = FUN_0710fcf0(uVar5,0);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if ((lVar9 != 0) &&
             (lVar11 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
            uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar5,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar10[4] = lVar9;
          thunk_FUN_03d233cc(plVar10 + 4,lVar9);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar9 = *plVar7;
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e81dc0) {
                puVar12 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_047a24c8;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar12 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
          lVar9 = (*(code *)*puVar12)(plVar7,puVar12[1]);
          if ((lVar9 != 0) &&
             (lVar11 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
            uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar5,0);
          }
          if (*(uint *)(plVar10 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar10[5] = lVar9;
          thunk_FUN_03d233cc(plVar10 + 5,lVar9);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar9 = (**(code **)(*plVar14 + 0x428))(plVar14,plVar10,*(undefined8 *)(*plVar14 + 0x430))
          ;
          plVar10 = (long *)FUN_03c8f97c(*(undefined8 *)puVar2,2);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar11 = thunk_FUN_03cf5138(plVar7,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar11 == 0) {
            uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar5,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar10[4] = (long)plVar7;
          thunk_FUN_03d233cc(plVar10 + 4,plVar7);
          if ((lVar8 != 0) &&
             (lVar11 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
            uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar5,0);
          }
          if (*(uint *)(plVar10 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar10[5] = lVar8;
          thunk_FUN_03d233cc(plVar10 + 5,lVar8);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_0702dc3c(lVar9);
        } while( true );
      }
      goto LAB_047a2660;
    }
    uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar4 = (long *)FUN_0710fcf0(uVar5,0);
    if (plVar4 == (long *)0x0) goto LAB_047a2660;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
    uVar5 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e00,0);
    if (plVar4 == (long *)0x0) goto LAB_047a2660;
    uVar6 = (**(code **)(*plVar4 + 0x2c8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x2d0));
    if ((uVar6 & 1) == 0)
    goto 
    System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>
    ;
    plVar4 = *(long **)(unaff_x19 + 0x30);
    plVar7 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,3);
    uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x28);
    }
    lVar8 = FUN_0710fcf0(uVar5,0);
    if (plVar7 == (long *)0x0) goto LAB_047a2660;
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_047a2720;
    if ((int)plVar7[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
    plVar7[4] = lVar8;
    thunk_FUN_03d233cc(plVar7 + 4,lVar8);
    plVar10 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
    if (plVar10 == (long *)0x0) goto LAB_047a2660;
    uVar5 = (**(code **)(*plVar10 + 0x498))(plVar10,*(undefined8 *)(*plVar10 + 0x4a0));
    lVar8 = FUN_0461aa48(uVar5,*(undefined8 *)PTR_DAT_08e81dd8);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_047a2720;
    if (*(uint *)(plVar7 + 3) < 2) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
    plVar7[5] = lVar8;
    thunk_FUN_03d233cc(plVar7 + 5,lVar8);
    plVar10 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
    if (plVar10 == (long *)0x0) goto LAB_047a2660;
    uVar5 = (**(code **)(*plVar10 + 0x498))(plVar10,*(undefined8 *)(*plVar10 + 0x4a0));
    lVar8 = FUN_04617b80(uVar5,1,*(undefined8 *)PTR_DAT_08e81dd0);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_047a2720;
    if (*(uint *)(plVar7 + 3) < 3) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
    plVar10 = plVar7 + 6;
    *plVar10 = lVar8;
  }
  else {
    plVar4 = *(long **)(unaff_x19 + 0x20);
FUN_047a1cac:
    plVar7 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
    uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x28);
    }
    lVar8 = FUN_0710fcf0(uVar5,0);
    if (plVar7 == (long *)0x0) goto LAB_047a2660;
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_047a2720;
    if ((int)plVar7[3] == 0) goto System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>;
    plVar7[4] = lVar8;
    thunk_FUN_03d233cc(plVar7 + 4,lVar8);
    plVar10 = (long *)FUN_0710fcf0(*(undefined8 *)(*unaff_x27 + 0x18),0);
    if (plVar10 == (long *)0x0) goto LAB_047a2660;
    uVar5 = (**(code **)(*plVar10 + 0x498))(plVar10,*(undefined8 *)(*plVar10 + 0x4a0));
    lVar8 = FUN_0461aa48(uVar5,*(undefined8 *)PTR_DAT_08e81dd8);
joined_r0x047a21c0:
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_047a2720:
      uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar5,0);
    }
    if (*(uint *)(plVar7 + 3) < 2) {
System_Runtime_CompilerServices_Unsafe__ReadUnaligned<uint>:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar10 = plVar7 + 5;
    *plVar10 = lVar8;
  }
  thunk_FUN_03d233cc(plVar10,lVar8);
  if (plVar4 != (long *)0x0) {
    lVar8 = (**(code **)(*plVar4 + 0x428))(plVar4,plVar7,*(undefined8 *)(*plVar4 + 0x430));
    FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,0);
    if (lVar8 != 0) {
      lVar8 = FUN_0702dc3c(lVar8);
      lVar9 = *(long *)(*unaff_x27 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03cf1244(lVar9);
      }
      if (lVar8 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = thunk_FUN_03cf5138(lVar8,lVar9);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(lVar8,lVar9);
        }
      }
      return lVar11;
    }
  }
LAB_047a2660:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;

    System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
    :
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar12 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e6a288,0);
FUN_047a2648:
  (*(code *)*puVar12)(plVar4,puVar12[1]);
  return lVar8;
}


