/*
FUNCTION_NAME: PlayFab.EconomyModels.RedeemAppleAppStoreInventoryItemsRequest$$.ctor
ENTRY_POINT: 05279350
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void PlayFab_EconomyModels_RedeemAppleAppStoreInventoryItemsRequest___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 in_stack_00000030;
  
  thunk_FUN_02dc1ef0();
  if (*(int *)(*(long *)PTR_DAT_066462e0 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05e9b7cc(0);
  puVar3 = PTR_DAT_066463a0;
  if (unaff_x21[9] != 0) {
    plVar13 = *(long **)(unaff_x21[9] + 0x18);
    plVar5 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,1);
    if (plVar5 != (long *)0x0) {
      lVar14 = *unaff_x23;
      if ((lVar14 != 0) &&
         (lVar6 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_052798c8:
        uVar15 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar15,0);
      }
      if ((int)plVar5[3] == 0) {
LAB_052798c4:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      plVar5[4] = lVar14;
      thunk_FUN_02dc1ef0(plVar5 + 4,lVar14);
      puVar4 = PTR_DAT_0664b728;
      if (plVar13 != (long *)0x0) {
        lVar14 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
        uVar15 = *(undefined8 *)UnityEngine_UI_Collections_IndexedSet<IClipper>_TypeInfo;
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0664b728) {
              puVar7 = (undefined8 *)(lVar14 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto FUN_052795f4;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d87540(plVar13,*(long *)PTR_DAT_0664b728,1);
FUN_052795f4:
        (*(code *)*puVar7)(plVar13,3,uVar15,plVar5,puVar7[1]);
        lVar14 = unaff_x21[0x10];
        if (lVar14 != 0) {
          lVar9 = *(long *)(lVar14 + 0x10);
          lVar6 = *unaff_x23;
          lVar11 = *(long *)UnityEngine_UIElements_UIR_ImplicitPool<Entry>_TypeInfo;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar14 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar1 + 1;
              plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *plVar5 = lVar6;
              thunk_FUN_02dc1ef0(plVar5);
            }
            else {
              FUN_036a5e08(lVar14,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            lVar14 = unaff_x21[0x17];
            if (lVar14 != 0) {
              (**(code **)(lVar14 + 0x18))
                        (*(undefined8 *)(lVar14 + 0x40),*unaff_x23,*(undefined8 *)(lVar14 + 0x28));
            }
            lVar14 = *(long *)(unaff_x24 + 0x18);
            uVar15 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06648128);
            FUN_04f6e538();
            if (lVar14 != 0) {
              FUN_05275334(lVar14,uVar15);
              lVar14 = (**(code **)(*unaff_x21 + 0x1e8))();
              if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
              }
              uVar10 = FUN_05ee2f7c(lVar14,0,0);
              puVar2 = PTR_DAT_066462a0;
              if ((uVar10 & 1) == 0) {
                in_stack_00000030 = unaff_w22;
                uVar15 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),
                                            &stack0x00000030);
                uVar8 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),&stack0x0000006c);
                uVar15 = FUN_04e80fdc(*(undefined8 *)
                                       UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_TypeInfo
                                      ,uVar15,uVar8,0);
                if (lVar14 != 0) {
                  FUN_052798dc(lVar14,uVar15);
                  FUN_05278a5c();
                  return;
                }
              }
              else if (unaff_x21[9] != 0) {
                plVar13 = *(long **)(unaff_x21[9] + 0x18);
                plVar5 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar3,1);
                if (plVar5 != (long *)0x0) {
                  lVar14 = *unaff_x23;
                  if ((lVar14 != 0) &&
                     (lVar6 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0
                     )) goto LAB_052798c8;
                  if ((int)plVar5[3] == 0) goto LAB_052798c4;
                  plVar5[4] = lVar14;
                  thunk_FUN_02dc1ef0(plVar5 + 4,lVar14);
                  if (plVar13 != (long *)0x0) {
                    lVar14 = *plVar13;
                    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    uVar15 = *(undefined8 *)
                              UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_TypeInfo;
                    if (uVar10 != 0) {
                      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                          goto LAB_0527988c;
                        }
                        uVar10 = uVar10 - 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_02d87540(plVar13,*(long *)puVar4,1);
LAB_0527988c:
                    /* WARNING: Could not recover jumptable at 0x052798bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)*puVar7)(plVar13,4,uVar15,plVar5,puVar7[1]);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


