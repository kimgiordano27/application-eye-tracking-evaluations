/*
FUNCTION_NAME: PlayFab.EconomyModels.GetEntityItemReviewRequest$$.ctor
ENTRY_POINT: 052791e0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void PlayFab_EconomyModels_GetEntityItemReviewRequest___ctor
               (long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined1 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  
  puVar2 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_IXRInputValueReader<float>_TypeInfo;
  if ((DAT_06a524a6 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06648128);
    FUN_02d4dc40(PTR_DAT_066462e0);
    FUN_02d4dc40(PTR_DAT_0664b728);
    FUN_02d4dc40(UnityEngine_UIElements_UIR_ImplicitPool<Entry>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066463a0);
    FUN_02d4dc40(PTR_DAT_066462d0);
    FUN_02d4dc40(UnityEngine_UI_Collections_IndexedSet<Graphic>_TypeInfo);
    FUN_02d4dc40(UnityEngine_UI_Collections_IndexedSet<ICanvasElement>_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_IXRInputValueReader<float>_TypeInfo
                );
    FUN_02d4dc40(System_Collections_Generic_HashSet<JToken>_TypeInfo);
    FUN_02d4dc40(UnityEngine_UI_Collections_IndexedSet<IClipper>_TypeInfo);
    FUN_02d4dc40(UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_TypeInfo);
    FUN_02d4dc40(UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_TypeInfo);
    FUN_02d4dc40(UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_TypeInfo);
    DAT_06a524a6 = 1;
  }
  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
  FUN_05044d4c(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = (long)param_1;
    thunk_FUN_02dc1ef0((long *)(lVar5 + 0x10),param_1);
    if (*param_5 == 0xb) {
      lVar6 = thunk_FUN_02d8a638(*(undefined8 *)
                                  UnityEngine_UI_Collections_IndexedSet<Graphic>_TypeInfo);
      FUN_0527546c();
      plVar15 = (long *)(lVar5 + 0x18);
      *plVar15 = lVar6;
      thunk_FUN_02dc1ef0(plVar15,lVar6);
      if (*(int *)(*(long *)PTR_DAT_066462e0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_05e9b7cc(0);
      puVar2 = PTR_DAT_066463a0;
      if (param_1[9] != 0) {
        plVar16 = *(long **)(param_1[9] + 0x18);
        plVar7 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,1);
        if (plVar7 != (long *)0x0) {
          lVar6 = *plVar15;
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_052798c8;
          if ((int)plVar7[3] == 0) goto LAB_052798c4;
          plVar7[4] = lVar6;
          thunk_FUN_02dc1ef0(plVar7 + 4,lVar6);
          puVar4 = PTR_DAT_0664b728;
          if (plVar16 != (long *)0x0) {
            lVar6 = *plVar16;
            uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
            uVar17 = *(undefined8 *)UnityEngine_UI_Collections_IndexedSet<IClipper>_TypeInfo;
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0664b728) {
                  puVar9 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto FUN_052795f4;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_02d87540(plVar16,*(long *)PTR_DAT_0664b728,1);
FUN_052795f4:
            (*(code *)*puVar9)(plVar16,3,uVar17,plVar7,puVar9[1]);
            lVar6 = param_1[0x10];
            if (lVar6 != 0) {
              lVar11 = *(long *)(lVar6 + 0x10);
              lVar8 = *plVar15;
              lVar13 = *(long *)UnityEngine_UIElements_UIR_ImplicitPool<Entry>_TypeInfo;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar7 = lVar8;
                  thunk_FUN_02dc1ef0(plVar7);
                }
                else {
                  FUN_036a5e08(lVar6,lVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
                lVar6 = param_1[0x17];
                if (lVar6 != 0) {
                  (**(code **)(lVar6 + 0x18))
                            (*(undefined8 *)(lVar6 + 0x40),*plVar15,*(undefined8 *)(lVar6 + 0x28));
                }
                lVar6 = *(long *)(lVar5 + 0x18);
                uVar17 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06648128);
                FUN_04f6e538(uVar17,lVar5,
                             *(undefined8 *)
                              UnityEngine_UI_Collections_IndexedSet<ICanvasElement>_TypeInfo,0);
                if (lVar6 != 0) {
                  FUN_05275334(lVar6,uVar17);
                  lVar5 = (**(code **)(*param_1 + 0x1e8))
                                    (param_1,param_3,param_4,*(undefined8 *)(param_5 + 10),
                                     *(undefined8 *)(*param_1 + 0x1f0));
                  if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                    thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
                  }
                  uVar12 = FUN_05ee2f7c(lVar5,0,0);
                  puVar3 = PTR_DAT_066462a0;
                  if ((uVar12 & 1) == 0) {
                    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,param_3);
                    uVar17 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),
                                                &stack0x00000030);
                    uStack000000000000006c = CONCAT31(uStack000000000000006c._1_3_,(char)param_4);
                    uVar10 = thunk_FUN_02d8a270(*(undefined8 *)(puVar3 + 0x18),
                                                (long)&stack0x00000068 + 4);
                    uVar17 = FUN_04e80fdc(*(undefined8 *)
                                           UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_TypeInfo
                                          ,uVar17,uVar10,0);
                    if (lVar5 != 0) {
                      FUN_052798dc(lVar5,uVar17);
                      FUN_05278a5c(param_1,lVar5,*plVar15);
                      return;
                    }
                  }
                  else if (param_1[9] != 0) {
                    plVar16 = *(long **)(param_1[9] + 0x18);
                    plVar7 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar2,1);
                    if (plVar7 != (long *)0x0) {
                      lVar5 = *plVar15;
                      if ((lVar5 != 0) &&
                         (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar7 + 0x40)),
                         lVar6 == 0)) goto LAB_052798c8;
                      if ((int)plVar7[3] == 0) goto LAB_052798c4;
                      plVar7[4] = lVar5;
                      thunk_FUN_02dc1ef0(plVar7 + 4,lVar5);
                      if (plVar16 != (long *)0x0) {
                        lVar5 = *plVar16;
                        uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
                        uVar17 = *(undefined8 *)
                                  UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_TypeInfo
                        ;
                        if (uVar12 != 0) {
                          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                              puVar9 = (undefined8 *)(lVar5 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                              goto LAB_0527988c;
                            }
                            uVar12 = uVar12 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar12 != 0);
                        }
                        puVar9 = (undefined8 *)FUN_02d87540(plVar16,*(long *)puVar4,1);
LAB_0527988c:
                    /* WARNING: Could not recover jumptable at 0x052798bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*(code *)*puVar9)(plVar16,4,uVar17,plVar7,puVar9[1]);
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
    else if (param_1[9] != 0) {
      plVar7 = *(long **)(param_1[9] + 0x18);
      plVar15 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,4);
      puVar2 = PTR_DAT_066462a0;
      uStack000000000000006c = param_3;
      lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),(long)&stack0x00000068 + 4
                                );
      if (plVar15 != (long *)0x0) {
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0)) {
LAB_052798c8:
          uVar17 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar17,0);
        }
        if ((int)plVar15[3] != 0) {
          plVar15[4] = lVar5;
          thunk_FUN_02dc1ef0(plVar15 + 4,lVar5);
          uStack0000000000000068 = (char)param_4;
          lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),&stack0x00000068);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0))
          goto LAB_052798c8;
          if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
            plVar15[5] = lVar5;
            thunk_FUN_02dc1ef0(plVar15 + 5,lVar5);
            in_stack_00000060._4_4_ = param_2;
            lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000060 + 4);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0))
            goto LAB_052798c8;
            if (2 < *(uint *)(plVar15 + 3)) {
              plVar15[6] = lVar5;
              thunk_FUN_02dc1ef0(plVar15 + 6,lVar5);
              in_stack_00000038 = *(undefined8 *)(param_5 + 2);
              in_stack_00000030 = *(undefined8 *)param_5;
              in_stack_00000048 = *(undefined8 *)(param_5 + 6);
              in_stack_00000040 = *(undefined8 *)(param_5 + 4);
              in_stack_00000058 = *(undefined8 *)(param_5 + 10);
              in_stack_00000050 = *(undefined8 *)(param_5 + 8);
              lVar5 = thunk_FUN_02d8a270(*(undefined8 *)
                                          System_Collections_Generic_HashSet<JToken>_TypeInfo,
                                         &stack0x00000030);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0))
              goto LAB_052798c8;
              if ((*(uint *)(plVar15 + 3) & 0xfffffffc) != 0) {
                plVar15[7] = lVar5;
                thunk_FUN_02dc1ef0(plVar15 + 7,lVar5);
                if (plVar7 != (long *)0x0) {
                  lVar5 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  uVar17 = *(undefined8 *)
                            UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_TypeInfo;
                  if (uVar12 != 0) {
                    piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0664b728) {
                        puVar9 = (undefined8 *)(lVar5 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                        goto FUN_05279844;
                      }
                      uVar12 = uVar12 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_02d87540(plVar7,*(long *)PTR_DAT_0664b728,1);
FUN_05279844:
                  (*(code *)*puVar9)(plVar7,3,uVar17,plVar15,puVar9[1]);
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
  }
LAB_052798c0:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


