/*
FUNCTION_NAME: System.Xml.Schema.SchemaEntity$$System.Xml.IDtdEntityInfo.get_Text
ENTRY_POINT: 06073710
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06073b7c) */
/* WARNING: Removing unreachable block (ram,0x06073d18) */
/* WARNING: Removing unreachable block (ram,0x06073cf8) */

void System_Xml_Schema_SchemaEntity__System_Xml_IDtdEntityInfo_get_Text(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int *piVar16;
  long unaff_x20;
  long unaff_x21;
  long *plVar17;
  long unaff_x23;
  long *plVar18;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  
  plVar18 = *(long **)(unaff_x23 + 0x5e8);
  plVar17 = *(long **)(unaff_x21 + 0x610);
  while (uVar6 = FUN_061a293c(), puVar3 = PTR_DAT_07279f60, (uVar6 & 1) != 0) {
    plVar7 = (long *)FUN_061a29dc();
    if (plVar7 != (long *)0x0) {
      lVar14 = *plVar7;
      uVar15 = (uint)*(byte *)(lVar14 + 0x130);
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
      if ((bVar1 <= *(byte *)(lVar14 + 0x130)) &&
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x27)) {
        if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_0619bae4(*(long *)(unaff_x20 + 0x50),plVar7,0);
        lVar14 = *plVar7;
        uVar15 = (uint)*(byte *)(lVar14 + 0x130);
      }
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
      if ((bVar1 <= uVar15) &&
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28)) {
        if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_0619bae4(*(long *)(unaff_x20 + 0x58),plVar7,0);
        plVar8 = *(long **)(unaff_x20 + 0x68);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        (**(code **)(*plVar8 + 0x318))(plVar8,plVar7[0x18],plVar7,*(undefined8 *)(*plVar8 + 800));
        lVar14 = *plVar7;
        uVar15 = (uint)*(byte *)(lVar14 + 0x130);
      }
      bVar1 = *(byte *)(*unaff_x29 + 0x130);
      if ((bVar1 <= uVar15) &&
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x29)) {
        plVar8 = *(long **)(unaff_x20 + 0x60);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        (**(code **)(*plVar8 + 0x318))(plVar8,plVar7[0x10],plVar7,*(undefined8 *)(*plVar8 + 800));
        lVar14 = *plVar7;
        uVar15 = (uint)*(byte *)(lVar14 + 0x130);
      }
      bVar1 = *(byte *)(*plVar18 + 0x130);
      if ((bVar1 <= uVar15) &&
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) == *plVar18)) {
        plVar8 = *(long **)(unaff_x20 + 0x70);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        (**(code **)(*plVar8 + 0x318))(plVar8,plVar7[0xd],plVar7,*(undefined8 *)(*plVar8 + 800));
        lVar14 = *plVar7;
        uVar15 = (uint)*(byte *)(lVar14 + 0x130);
      }
      lVar13 = *plVar17;
      uVar6 = (ulong)*(byte *)(lVar13 + 0x130);
      if ((*(byte *)(lVar13 + 0x130) <= uVar15) &&
         (*(long *)(*(long *)(lVar14 + 200) + uVar6 * 8 + -8) == lVar13)) {
        bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
        if ((bVar1 <= uVar15) &&
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
          if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0)
              == 0) {
            thunk_FUN_032cd7c0();
            lVar14 = *plVar7;
            lVar13 = *plVar17;
            uVar15 = (uint)*(byte *)(lVar14 + 0x130);
            uVar6 = (ulong)*(byte *)(lVar13 + 0x130);
          }
          if ((uVar15 < (uint)uVar6) ||
             (*(long *)(*(long *)(lVar14 + 200) + uVar6 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar7);
          }
          FUN_06073f60(plVar7,*(undefined8 *)System_Func<GeometryChangedEvent>_TypeInfo);
          lVar14 = *plVar7;
          lVar13 = *plVar17;
          uVar15 = (uint)*(byte *)(lVar14 + 0x130);
          uVar6 = (ulong)*(byte *)(lVar13 + 0x130);
        }
        if ((uVar15 < (uint)uVar6) ||
           (*(long *)(*(long *)(lVar14 + 200) + uVar6 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar7);
        }
        plVar8 = *(long **)(unaff_x20 + 0x78);
        uVar9 = FUN_061ac6b8(plVar7,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8(uVar9,uVar9);
        }
        (**(code **)(*plVar8 + 0x318))(plVar8,uVar9,plVar7,*(undefined8 *)(*plVar8 + 800));
        bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
          plVar8 = (long *)*in_stack_00000008;
          if (plVar8 == (long *)0x0) {
            uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07292770);
            FUN_058fcfe4(uVar9,0);
            *in_stack_00000008 = uVar9;
            thunk_FUN_0333a630(in_stack_00000008,uVar9);
            plVar8 = (long *)*in_stack_00000008;
          }
          plVar10 = (long *)FUN_061ac6b8(plVar7,0);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar9 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8(uVar9,uVar9);
          }
          (**(code **)(*plVar8 + 0x318))(plVar8,uVar9,plVar7,*(undefined8 *)(*plVar8 + 800));
          plVar10 = *(long **)(unaff_x20 + 0x98);
          plVar8 = (long *)FUN_061ac6b8(plVar7,0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8(uVar9,uVar9);
          }
          plVar8 = (long *)(**(code **)(*plVar10 + 0x308))
                                     (plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x310));
          if (plVar8 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_072a14c0 + 0x130);
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_072a14c0)) {
                    /* WARNING: Subroutine does not return */
              FUN_032d618c();
            }
            lVar14 = plVar8[0x1a];
            if (lVar14 != 0) {
              lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                           System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                                         );
              FUN_0606a570(lVar13,plVar7,0);
              lVar14 = FUN_0606ba28(lVar14,lVar13,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              if (*(int *)(lVar14 + 0x10) != 0) {
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar9 = FUN_0606b26c(lVar13,0);
                uVar9 = FUN_06012ff8(uVar9,lVar14,0);
                uVar12 = thunk_FUN_032e1da0(System_Func<ValidateCommandEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar9,uVar12);
              }
            }
          }
        }
      }
    }
  }
  plVar17 = (long *)thunk_FUN_032a55a4();
  if (plVar17 != (long *)0x0) {
    lVar14 = *plVar17;
    uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar6 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06073b60;
        }
        uVar6 = uVar6 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar6 != 0);
    }
    puVar11 = (undefined8 *)FUN_032937ac(plVar17,*(long *)puVar3,0);
LAB_06073b60:
    (*(code *)*puVar11)(plVar17,puVar11[1]);
  }
  if (*(long *)(in_stack_00000000 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar14 = FUN_061a2630(*(long *)(in_stack_00000000 + 0x58),0);
  puVar5 = System_Func<UIHoverEventArgs>_TypeInfo;
  puVar4 = System_Func<TransitionStartEvent>_TypeInfo;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  while (uVar6 = FUN_061a293c(lVar14,0), (uVar6 & 1) != 0) {
    plVar17 = (long *)FUN_061a29dc(lVar14,0);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    bVar1 = *(byte *)(*plVar17 + 0x130);
    bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((bVar1 < bVar2) ||
       (lVar13 = *(long *)(*plVar17 + 200),
       *(long *)(lVar13 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c();
    }
    bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
    if (((bVar1 < bVar2) || (*(long *)(lVar13 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) &&
       (plVar17[9] != 0)) {
      FUN_060735ac();
    }
  }
  plVar17 = (long *)thunk_FUN_032a55a4(lVar14,*(undefined8 *)puVar3);
  if (plVar17 != (long *)0x0) {
    lVar14 = *plVar17;
    uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar6 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06073c90;
        }
        uVar6 = uVar6 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar6 != 0);
    }
    puVar11 = (undefined8 *)FUN_032937ac(plVar17,*(long *)puVar3,0);
LAB_06073c90:
    (*(code *)*puVar11)(plVar17,puVar11[1]);
  }
  return;
}


