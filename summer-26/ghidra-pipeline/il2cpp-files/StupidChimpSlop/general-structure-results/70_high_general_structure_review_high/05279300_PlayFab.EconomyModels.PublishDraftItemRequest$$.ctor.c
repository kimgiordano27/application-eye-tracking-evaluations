/*
FUNCTION_NAME: PlayFab.EconomyModels.PublishDraftItemRequest$$.ctor
ENTRY_POINT: 05279300
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void PlayFab_EconomyModels_PublishDraftItemRequest___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int in_w8;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  undefined8 *unaff_x19;
  undefined1 unaff_w20;
  long *unaff_x21;
  undefined4 unaff_w22;
  long *plVar14;
  long unaff_x24;
  long *plVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  
  if (in_w8 == 0xb) {
    lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                UnityEngine_UI_Collections_IndexedSet<Graphic>_TypeInfo);
    FUN_0527546c();
    plVar14 = (long *)(unaff_x24 + 0x18);
    *plVar14 = lVar5;
    thunk_FUN_02dc1ef0(plVar14,lVar5);
    if (*(int *)(*(long *)PTR_DAT_066462e0 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05e9b7cc(0);
    puVar2 = PTR_DAT_066463a0;
    if (unaff_x21[9] != 0) {
      plVar15 = *(long **)(unaff_x21[9] + 0x18);
      plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,1);
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar14;
        if ((lVar5 != 0) &&
           (lVar7 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_052798c8;
        if ((int)plVar6[3] == 0) goto LAB_052798c4;
        plVar6[4] = lVar5;
        thunk_FUN_02dc1ef0(plVar6 + 4,lVar5);
        puVar4 = PTR_DAT_0664b728;
        if (plVar15 != (long *)0x0) {
          lVar5 = *plVar15;
          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
          uVar16 = *(undefined8 *)UnityEngine_UI_Collections_IndexedSet<IClipper>_TypeInfo;
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0664b728) {
                puVar8 = (undefined8 *)(lVar5 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto FUN_052795f4;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_02d87540(plVar15,*(long *)PTR_DAT_0664b728,1);
FUN_052795f4:
          (*(code *)*puVar8)(plVar15,3,uVar16,plVar6,puVar8[1]);
          lVar5 = unaff_x21[0x10];
          if (lVar5 != 0) {
            lVar10 = *(long *)(lVar5 + 0x10);
            lVar7 = *plVar14;
            lVar12 = *(long *)UnityEngine_UIElements_UIR_ImplicitPool<Entry>_TypeInfo;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                *plVar6 = lVar7;
                thunk_FUN_02dc1ef0(plVar6);
              }
              else {
                FUN_036a5e08(lVar5,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              lVar5 = unaff_x21[0x17];
              if (lVar5 != 0) {
                (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),*plVar14,*(undefined8 *)(lVar5 + 0x28));
              }
              lVar5 = *(long *)(unaff_x24 + 0x18);
              uVar16 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06648128);
              FUN_04f6e538();
              if (lVar5 != 0) {
                FUN_05275334(lVar5,uVar16);
                lVar5 = (**(code **)(*unaff_x21 + 0x1e8))();
                if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                  thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
                }
                uVar11 = FUN_05ee2f7c(lVar5,0,0);
                puVar3 = PTR_DAT_066462a0;
                if ((uVar11 & 1) == 0) {
                  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,unaff_w22);
                  uVar16 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),
                                              &stack0x00000030);
                  uStack000000000000006c = CONCAT31(uStack000000000000006c._1_3_,unaff_w20);
                  uVar9 = thunk_FUN_02d8a270(*(undefined8 *)(puVar3 + 0x18),
                                             (long)&stack0x00000068 + 4);
                  uVar16 = FUN_04e80fdc(*(undefined8 *)
                                         UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_TypeInfo
                                        ,uVar16,uVar9,0);
                  if (lVar5 != 0) {
                    FUN_052798dc(lVar5,uVar16);
                    FUN_05278a5c();
                    return;
                  }
                }
                else if (unaff_x21[9] != 0) {
                  plVar15 = *(long **)(unaff_x21[9] + 0x18);
                  plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar2,1);
                  if (plVar6 != (long *)0x0) {
                    lVar5 = *plVar14;
                    if ((lVar5 != 0) &&
                       (lVar7 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar7 == 0)) goto LAB_052798c8;
                    if ((int)plVar6[3] == 0) goto LAB_052798c4;
                    plVar6[4] = lVar5;
                    thunk_FUN_02dc1ef0(plVar6 + 4,lVar5);
                    if (plVar15 != (long *)0x0) {
                      lVar5 = *plVar15;
                      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      uVar16 = *(undefined8 *)
                                UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_TypeInfo;
                      if (uVar11 != 0) {
                        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                            goto LAB_0527988c;
                          }
                          uVar11 = uVar11 - 1;
                          piVar13 = piVar13 + 4;
                        } while (uVar11 != 0);
                      }
                      puVar8 = (undefined8 *)FUN_02d87540(plVar15,*(long *)puVar4,1);
LAB_0527988c:
                    /* WARNING: Could not recover jumptable at 0x052798bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)*puVar8)(plVar15,4,uVar16,plVar6,puVar8[1]);
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
  }
  else if (unaff_x21[9] != 0) {
    plVar6 = *(long **)(unaff_x21[9] + 0x18);
    plVar14 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,4);
    puVar2 = PTR_DAT_066462a0;
    uStack000000000000006c = unaff_w22;
    lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),(long)&stack0x00000068 + 4);
    if (plVar14 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0)) {
LAB_052798c8:
        uVar16 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar16,0);
      }
      if ((int)plVar14[3] != 0) {
        plVar14[4] = lVar5;
        thunk_FUN_02dc1ef0(plVar14 + 4,lVar5);
        uStack0000000000000068 = unaff_w20;
        lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),&stack0x00000068);
        if ((lVar5 != 0) &&
           (lVar7 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
        goto LAB_052798c8;
        if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
          plVar14[5] = lVar5;
          thunk_FUN_02dc1ef0(plVar14 + 5,lVar5);
          lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000064);
          if ((lVar5 != 0) &&
             (lVar7 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
          goto LAB_052798c8;
          if (2 < *(uint *)(plVar14 + 3)) {
            plVar14[6] = lVar5;
            thunk_FUN_02dc1ef0(plVar14 + 6,lVar5);
            in_stack_00000038 = unaff_x19[1];
            in_stack_00000030 = *unaff_x19;
            in_stack_00000048 = unaff_x19[3];
            in_stack_00000040 = unaff_x19[2];
            in_stack_00000058 = unaff_x19[5];
            in_stack_00000050 = unaff_x19[4];
            lVar5 = thunk_FUN_02d8a270(*(undefined8 *)
                                        System_Collections_Generic_HashSet<JToken>_TypeInfo,
                                       &stack0x00000030);
            if ((lVar5 != 0) &&
               (lVar7 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
            goto LAB_052798c8;
            if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
              plVar14[7] = lVar5;
              thunk_FUN_02dc1ef0(plVar14 + 7,lVar5);
              if (plVar6 != (long *)0x0) {
                lVar5 = *plVar6;
                uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                uVar16 = *(undefined8 *)
                          UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_TypeInfo;
                if (uVar11 != 0) {
                  piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0664b728) {
                      puVar8 = (undefined8 *)(lVar5 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto FUN_05279844;
                    }
                    uVar11 = uVar11 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar11 != 0);
                }
                puVar8 = (undefined8 *)FUN_02d87540(plVar6,*(long *)PTR_DAT_0664b728,1);
FUN_05279844:
                (*(code *)*puVar8)(plVar6,3,uVar16,plVar14,puVar8[1]);
                return;
              }
              goto LAB_052798c0;
            }
          }
        }
      }
LAB_052798c4:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
  }
LAB_052798c0:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


