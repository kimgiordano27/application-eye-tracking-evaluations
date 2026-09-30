/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$IsAddressLessThan<ControllerButtonsMapper.ButtonClickAction>
ENTRY_POINT: 047a20bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047a2658) */

long System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<ControllerButtonsMapper_ButtonClickAction>
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  code *in_x9;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  plVar4 = (long *)(*in_x9)(param_2,*(undefined8 *)(param_1 + 0x480));
  uVar5 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e81e28,0);
  if (plVar4 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar4 + 0x2c8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x2d0));
    if ((uVar6 & 1) == 0) {
      if ((*(byte *)(*(long *)(*unaff_x27 + 0x28) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      lVar7 = thunk_FUN_03cf5234();
      (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
      uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar5 = FUN_0710fcf0(uVar5,0);
      plVar4 = (long *)FUN_08649324(uVar5,0);
      if (plVar4 != (long *)0x0) {
        lVar13 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e81e08) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
              goto 
              System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>
              ;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e81e08,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>:
        plVar4 = (long *)(*(code *)*puVar9)(plVar4,puVar9[1]);
        puVar3 = PTR_DAT_08e6a290;
        puVar2 = PTR_DAT_08e69878;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        do {
          lVar13 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_047a22ec;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar3,0);
LAB_047a22ec:
          uVar6 = (*(code *)*puVar9)(plVar4,puVar9[1]);
          if ((uVar6 & 1) == 0) {
            if (plVar4 == (long *)0x0) {
              return lVar7;
            }
            lVar13 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar6 == 0)
            goto 
            System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
            ;
            piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto 
            System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
            ;
          }
          lVar13 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e81e10) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
                goto 
                System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>
                ;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e81e10,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
          plVar12 = (long *)(*(code *)*puVar9)(plVar4,puVar9[1]);
          if (plVar12 == (long *)0x0) {
LAB_047a2664:
            thunk_FUN_03ce5214(PTR_DAT_08e71970);
            uVar5 = thunk_FUN_03cf5234();
            FUN_071004d4(uVar5,0);
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar5,unaff_x20);
          }
          lVar13 = *plVar12;
          bVar1 = *(byte *)(*(long *)PTR_DAT_08e81de8 + 0x130);
          if ((*(byte *)(lVar13 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_08e81de8)) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_08e81e30 + 0x130);
            if ((*(byte *)(lVar13 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_08e81e30)) goto LAB_047a2664;
            in_stack_00000020 = 0;
            in_stack_00000028 = 0;
            FUN_08644cb0(&stack0x00000020,plVar12,0);
            in_stack_00000018 = in_stack_00000028;
            in_stack_00000010 = in_stack_00000020;
            plVar12 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,&stack0x00000010);
          }
          else {
            in_stack_00000020 = 0;
            in_stack_00000028 = 0;
            FUN_08644ae0(&stack0x00000020,plVar12,0);
            in_stack_00000018 = in_stack_00000028;
            in_stack_00000010 = in_stack_00000020;
            plVar12 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,&stack0x00000010);
          }
          plVar14 = *(long **)(unaff_x19 + 0x10);
          plVar10 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
          uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar13 = FUN_0710fcf0(uVar5,0);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if ((lVar13 != 0) &&
             (lVar8 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
            uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar5,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar10[4] = lVar13;
          thunk_FUN_03d233cc(plVar10 + 4,lVar13);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar13 = *plVar12;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e81dc0) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_047a24c8;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
          lVar13 = (*(code *)*puVar9)(plVar12,puVar9[1]);
          if ((lVar13 != 0) &&
             (lVar8 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
            uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar5,0);
          }
          if (*(uint *)(plVar10 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar10[5] = lVar13;
          thunk_FUN_03d233cc(plVar10 + 5,lVar13);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar13 = (**(code **)(*plVar14 + 0x428))
                             (plVar14,plVar10,*(undefined8 *)(*plVar14 + 0x430));
          plVar10 = (long *)FUN_03c8f97c(*(undefined8 *)puVar2,2);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar8 = thunk_FUN_03cf5138(plVar12,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar8 == 0) {
            uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar5,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar10[4] = (long)plVar12;
          thunk_FUN_03d233cc(plVar10 + 4,plVar12);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
            uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar5,0);
          }
          if (*(uint *)(plVar10 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          plVar10[5] = lVar7;
          thunk_FUN_03d233cc(plVar10 + 5,lVar7);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_0702dc3c(lVar13);
        } while( true );
      }
    }
    else {
      uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar4 = (long *)FUN_0710fcf0(uVar5,0);
      if (plVar4 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x498))(plVar4,*(undefined8 *)(*plVar4 + 0x4a0));
        lVar7 = FUN_046337ac(uVar5,*(undefined8 *)PTR_DAT_08e81de0);
        plVar12 = *(long **)(unaff_x19 + 0x38);
        plVar4 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) != 0) {
            if (plVar4 == (long *)0x0) goto LAB_047a2660;
            lVar13 = *(long *)(lVar7 + 0x20);
            if ((lVar13 != 0) &&
               (lVar8 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
LAB_047a2720:
              uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
              FUN_03c8f9fc(uVar5,0);
            }
            if ((int)plVar4[3] != 0) {
              plVar4[4] = lVar13;
              thunk_FUN_03d233cc(plVar4 + 4,lVar13);
              if (1 < *(uint *)(lVar7 + 0x18)) {
                lVar7 = *(long *)(lVar7 + 0x28);
                if ((lVar7 != 0) &&
                   (lVar13 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar13 == 0)
                   ) goto LAB_047a2720;
                if (1 < *(uint *)(plVar4 + 3)) {
                  plVar4[5] = lVar7;
                  thunk_FUN_03d233cc(plVar4 + 5,lVar7);
                  if (plVar12 != (long *)0x0) {
                    lVar7 = (**(code **)(*plVar12 + 0x428))
                                      (plVar12,plVar4,*(undefined8 *)(*plVar12 + 0x430));
                    FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,0);
                    if (lVar7 != 0) {
                      lVar7 = FUN_0702dc3c(lVar7);
                      lVar13 = *(long *)(*unaff_x27 + 0x20);
                      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                        lVar13 = FUN_03cf1244(lVar13);
                      }
                      if (lVar7 != 0) {
                        lVar8 = thunk_FUN_03cf5138(lVar7,lVar13);
                        if (lVar8 != 0) {
                          return lVar8;
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_03c8fecc(lVar7,lVar13);
                      }
                      return 0;
                    }
                  }
                  goto LAB_047a2660;
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
      }
    }
  }
LAB_047a2660:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar11 = piVar11 + 4;
    if (uVar6 == 0) break;

    System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
    :
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar9 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e6a288,0);
FUN_047a2648:
  (*(code *)*puVar9)(plVar4,puVar9[1]);
  return lVar7;
}


