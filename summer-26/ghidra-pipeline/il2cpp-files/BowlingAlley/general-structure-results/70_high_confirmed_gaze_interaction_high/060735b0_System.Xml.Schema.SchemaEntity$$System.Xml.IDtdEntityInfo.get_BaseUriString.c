/*
FUNCTION_NAME: System.Xml.Schema.SchemaEntity$$System.Xml.IDtdEntityInfo.get_BaseUriString
ENTRY_POINT: 060735b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_7;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06073b7c) */
/* WARNING: Removing unreachable block (ram,0x06073d18) */
/* WARNING: Removing unreachable block (ram,0x06073cf8) */

void System_Xml_Schema_SchemaEntity__System_Xml_IDtdEntityInfo_get_BaseUriString
               (long param_1,long param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  int *piVar20;
  
  if ((DAT_076dd3e1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072a14c0);
    thunk_FUN_032e1da0(PTR_DAT_07292770);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<Transform>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionCancelEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionEndEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionRunEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionStartEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UIHoverEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UnitPreservation>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<GeometryChangedEvent>_TypeInfo);
    DAT_076dd3e1 = 1;
  }
  if (param_3 != (long *)0x0) {
    uVar9 = (**(code **)(*param_3 + 0x348))(param_3,param_2,*(undefined8 *)(*param_3 + 0x350));
    if ((uVar9 & 1) != 0) {
      return;
    }
    (**(code **)(*param_3 + 0x308))(param_3,param_2,*(undefined8 *)(*param_3 + 0x310));
    if ((param_2 != 0) && (*(long *)(param_2 + 0x60) != 0)) {
      lVar10 = FUN_061a2630(*(long *)(param_2 + 0x60),0);
      puVar8 = System_Func<UnitPreservation>_TypeInfo;
      puVar7 = System_Func<TransitionRunEvent>_TypeInfo;
      puVar6 = System_Func<TransitionEndEvent>_TypeInfo;
      puVar5 = System_Func<TransitionCancelEvent>_TypeInfo;
      puVar4 = System_Func<Transform>_TypeInfo;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      puVar15 = (undefined8 *)(param_1 + 0x90);
      while (uVar9 = FUN_061a293c(lVar10,0), puVar3 = PTR_DAT_07279f60, (uVar9 & 1) != 0) {
        plVar11 = (long *)FUN_061a29dc(lVar10,0);
        if (plVar11 != (long *)0x0) {
          lVar18 = *plVar11;
          uVar19 = (uint)*(byte *)(lVar18 + 0x130);
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((bVar1 <= *(byte *)(lVar18 + 0x130)) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
            if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            FUN_0619bae4(*(long *)(param_1 + 0x50),plVar11,0);
            lVar18 = *plVar11;
            uVar19 = (uint)*(byte *)(lVar18 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((bVar1 <= uVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar7)) {
            if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            FUN_0619bae4(*(long *)(param_1 + 0x58),plVar11,0);
            plVar12 = *(long **)(param_1 + 0x68);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            (**(code **)(*plVar12 + 0x318))
                      (plVar12,plVar11[0x18],plVar11,*(undefined8 *)(*plVar12 + 800));
            lVar18 = *plVar11;
            uVar19 = (uint)*(byte *)(lVar18 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((bVar1 <= uVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar6)) {
            plVar12 = *(long **)(param_1 + 0x60);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            (**(code **)(*plVar12 + 0x318))
                      (plVar12,plVar11[0x10],plVar11,*(undefined8 *)(*plVar12 + 800));
            lVar18 = *plVar11;
            uVar19 = (uint)*(byte *)(lVar18 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((bVar1 <= uVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
            plVar12 = *(long **)(param_1 + 0x70);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            (**(code **)(*plVar12 + 0x318))
                      (plVar12,plVar11[0xd],plVar11,*(undefined8 *)(*plVar12 + 800));
            lVar18 = *plVar11;
            uVar19 = (uint)*(byte *)(lVar18 + 0x130);
          }
          lVar17 = *(long *)puVar8;
          uVar9 = (ulong)*(byte *)(lVar17 + 0x130);
          if ((*(byte *)(lVar17 + 0x130) <= uVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + uVar9 * 8 + -8) == lVar17)) {
            bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
            if ((bVar1 <= uVar19) &&
               (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
              if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar18 = *plVar11;
                lVar17 = *(long *)puVar8;
                uVar19 = (uint)*(byte *)(lVar18 + 0x130);
                uVar9 = (ulong)*(byte *)(lVar17 + 0x130);
              }
              if ((uVar19 < (uint)uVar9) ||
                 (*(long *)(*(long *)(lVar18 + 200) + uVar9 * 8 + -8) != lVar17)) {
                    /* WARNING: Subroutine does not return */
                FUN_032d618c(plVar11);
              }
              FUN_06073f60(plVar11,*(undefined8 *)System_Func<GeometryChangedEvent>_TypeInfo);
              lVar18 = *plVar11;
              lVar17 = *(long *)puVar8;
              uVar19 = (uint)*(byte *)(lVar18 + 0x130);
              uVar9 = (ulong)*(byte *)(lVar17 + 0x130);
            }
            if ((uVar19 < (uint)uVar9) ||
               (*(long *)(*(long *)(lVar18 + 200) + uVar9 * 8 + -8) != lVar17)) {
                    /* WARNING: Subroutine does not return */
              FUN_032d618c(plVar11);
            }
            plVar12 = *(long **)(param_1 + 0x78);
            uVar13 = FUN_061ac6b8(plVar11,0);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8(uVar13,uVar13);
            }
            (**(code **)(*plVar12 + 0x318))(plVar12,uVar13,plVar11,*(undefined8 *)(*plVar12 + 800));
            bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
            if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
              plVar12 = (long *)*puVar15;
              if (plVar12 == (long *)0x0) {
                uVar13 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07292770);
                FUN_058fcfe4(uVar13,0);
                *puVar15 = uVar13;
                thunk_FUN_0333a630(puVar15,uVar13);
                plVar12 = (long *)*puVar15;
              }
              plVar14 = (long *)FUN_061ac6b8(plVar11,0);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar13 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8(uVar13,uVar13);
              }
              (**(code **)(*plVar12 + 0x318))
                        (plVar12,uVar13,plVar11,*(undefined8 *)(*plVar12 + 800));
              plVar14 = *(long **)(param_1 + 0x98);
              plVar12 = (long *)FUN_061ac6b8(plVar11,0);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar13 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8(uVar13,uVar13);
              }
              plVar12 = (long *)(**(code **)(*plVar14 + 0x308))
                                          (plVar14,uVar13,*(undefined8 *)(*plVar14 + 0x310));
              if (plVar12 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_072a14c0 + 0x130);
                if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_072a14c0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d618c();
                }
                lVar18 = plVar12[0x1a];
                if (lVar18 != 0) {
                  lVar17 = thunk_FUN_032a56a0(*(undefined8 *)
                                               System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                                             );
                  FUN_0606a570(lVar17,plVar11,0);
                  lVar18 = FUN_0606ba28(lVar18,lVar17,0);
                  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  if (*(int *)(lVar18 + 0x10) != 0) {
                    if (lVar17 != 0) {
                      uVar13 = FUN_0606b26c(lVar17,0);
                      uVar13 = FUN_06012ff8(uVar13,lVar18,0);
                      uVar16 = thunk_FUN_032e1da0(System_Func<ValidateCommandEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
                      FUN_032d5dbc(uVar13,uVar16);
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                }
              }
            }
          }
        }
      }
      plVar11 = (long *)thunk_FUN_032a55a4(lVar10,*(undefined8 *)PTR_DAT_07279f60);
      if (plVar11 != (long *)0x0) {
        lVar10 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
              puVar15 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_06073b60;
            }
            uVar9 = uVar9 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar9 != 0);
        }
        puVar15 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar3,0);
LAB_06073b60:
        (*(code *)*puVar15)(plVar11,puVar15[1]);
      }
      if (*(long *)(param_2 + 0x58) != 0) {
        lVar10 = FUN_061a2630(*(long *)(param_2 + 0x58),0);
        puVar5 = System_Func<UIHoverEventArgs>_TypeInfo;
        puVar4 = System_Func<TransitionStartEvent>_TypeInfo;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        while (uVar9 = FUN_061a293c(lVar10,0), (uVar9 & 1) != 0) {
          plVar11 = (long *)FUN_061a29dc(lVar10,0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          bVar1 = *(byte *)(*plVar11 + 0x130);
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((bVar1 < bVar2) ||
             (lVar18 = *(long *)(*plVar11 + 200),
             *(long *)(lVar18 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c();
          }
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if (((bVar1 < bVar2) || (*(long *)(lVar18 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) &&
             (plVar11[9] != 0)) {
            FUN_060735ac(param_1,plVar11[9],param_3);
          }
        }
        plVar11 = (long *)thunk_FUN_032a55a4(lVar10,*(undefined8 *)puVar3);
        if (plVar11 == (long *)0x0) {
          return;
        }
        lVar10 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
              puVar15 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_06073c90;
            }
            uVar9 = uVar9 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar9 != 0);
        }
        puVar15 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar3,0);
LAB_06073c90:
        (*(code *)*puVar15)(plVar11,puVar15[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


