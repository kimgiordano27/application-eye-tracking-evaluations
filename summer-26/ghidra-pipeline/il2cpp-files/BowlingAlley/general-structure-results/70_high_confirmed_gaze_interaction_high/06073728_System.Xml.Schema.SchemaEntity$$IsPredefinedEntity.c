/*
FUNCTION_NAME: System.Xml.Schema.SchemaEntity$$IsPredefinedEntity
ENTRY_POINT: 06073728
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

void System_Xml_Schema_SchemaEntity__IsPredefinedEntity(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  
  do {
    plVar6 = (long *)FUN_061a29dc();
    if (plVar6 != (long *)0x0) {
      lVar13 = *plVar6;
      uVar14 = (uint)*(byte *)(lVar13 + 0x130);
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
      if ((bVar1 <= *(byte *)(lVar13 + 0x130)) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x27)) {
        if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_0619bae4(*(long *)(unaff_x20 + 0x50),plVar6,0);
        lVar13 = *plVar6;
        uVar14 = (uint)*(byte *)(lVar13 + 0x130);
      }
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
      if ((bVar1 <= uVar14) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28)) {
        if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_0619bae4(*(long *)(unaff_x20 + 0x58),plVar6,0);
        plVar7 = *(long **)(unaff_x20 + 0x68);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        (**(code **)(*plVar7 + 0x318))(plVar7,plVar6[0x18],plVar6,*(undefined8 *)(*plVar7 + 800));
        lVar13 = *plVar6;
        uVar14 = (uint)*(byte *)(lVar13 + 0x130);
      }
      bVar1 = *(byte *)(*unaff_x29 + 0x130);
      if ((bVar1 <= uVar14) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x29)) {
        plVar7 = *(long **)(unaff_x20 + 0x60);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        (**(code **)(*plVar7 + 0x318))(plVar7,plVar6[0x10],plVar6,*(undefined8 *)(*plVar7 + 800));
        lVar13 = *plVar6;
        uVar14 = (uint)*(byte *)(lVar13 + 0x130);
      }
      bVar1 = *(byte *)(*unaff_x23 + 0x130);
      if ((bVar1 <= uVar14) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x23)) {
        plVar7 = *(long **)(unaff_x20 + 0x70);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        (**(code **)(*plVar7 + 0x318))(plVar7,plVar6[0xd],plVar6,*(undefined8 *)(*plVar7 + 800));
        lVar13 = *plVar6;
        uVar14 = (uint)*(byte *)(lVar13 + 0x130);
      }
      lVar12 = *unaff_x21;
      uVar15 = (ulong)*(byte *)(lVar12 + 0x130);
      if ((*(byte *)(lVar12 + 0x130) <= uVar14) &&
         (*(long *)(*(long *)(lVar13 + 200) + uVar15 * 8 + -8) == lVar12)) {
        bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
        if ((bVar1 <= uVar14) &&
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
          if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0)
              == 0) {
            thunk_FUN_032cd7c0();
            lVar13 = *plVar6;
            lVar12 = *unaff_x21;
            uVar14 = (uint)*(byte *)(lVar13 + 0x130);
            uVar15 = (ulong)*(byte *)(lVar12 + 0x130);
          }
          if ((uVar14 < (uint)uVar15) ||
             (*(long *)(*(long *)(lVar13 + 200) + uVar15 * 8 + -8) != lVar12)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar6);
          }
          FUN_06073f60(plVar6,*(undefined8 *)System_Func<GeometryChangedEvent>_TypeInfo);
          lVar13 = *plVar6;
          lVar12 = *unaff_x21;
          uVar14 = (uint)*(byte *)(lVar13 + 0x130);
          uVar15 = (ulong)*(byte *)(lVar12 + 0x130);
        }
        if ((uVar14 < (uint)uVar15) ||
           (*(long *)(*(long *)(lVar13 + 200) + uVar15 * 8 + -8) != lVar12)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar6);
        }
        plVar7 = *(long **)(unaff_x20 + 0x78);
        uVar8 = FUN_061ac6b8(plVar6,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8(uVar8,uVar8);
        }
        (**(code **)(*plVar7 + 0x318))(plVar7,uVar8,plVar6,*(undefined8 *)(*plVar7 + 800));
        bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
          plVar7 = (long *)*in_stack_00000008;
          if (plVar7 == (long *)0x0) {
            uVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07292770);
            FUN_058fcfe4(uVar8,0);
            *in_stack_00000008 = uVar8;
            thunk_FUN_0333a630(in_stack_00000008,uVar8);
            plVar7 = (long *)*in_stack_00000008;
          }
          plVar9 = (long *)FUN_061ac6b8(plVar6,0);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8(uVar8,uVar8);
          }
          (**(code **)(*plVar7 + 0x318))(plVar7,uVar8,plVar6,*(undefined8 *)(*plVar7 + 800));
          plVar9 = *(long **)(unaff_x20 + 0x98);
          plVar7 = (long *)FUN_061ac6b8(plVar6,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8(uVar8,uVar8);
          }
          plVar7 = (long *)(**(code **)(*plVar9 + 0x308))
                                     (plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x310));
          if (plVar7 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_072a14c0 + 0x130);
            if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_072a14c0)) {
                    /* WARNING: Subroutine does not return */
              FUN_032d618c();
            }
            lVar13 = plVar7[0x1a];
            if (lVar13 != 0) {
              lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                           System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                                         );
              FUN_0606a570(lVar12,plVar6,0);
              lVar13 = FUN_0606ba28(lVar13,lVar12,0);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              if (*(int *)(lVar13 + 0x10) != 0) {
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar8 = FUN_0606b26c(lVar12,0);
                uVar8 = FUN_06012ff8(uVar8,lVar13,0);
                uVar11 = thunk_FUN_032e1da0(System_Func<ValidateCommandEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar8,uVar11);
              }
            }
          }
        }
      }
    }
    uVar15 = FUN_061a293c();
    puVar3 = PTR_DAT_07279f60;
  } while ((uVar15 & 1) != 0);
  plVar6 = (long *)thunk_FUN_032a55a4();
  if (plVar6 != (long *)0x0) {
    lVar13 = *plVar6;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06073b60;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_032937ac(plVar6,*(long *)puVar3,0);
LAB_06073b60:
    (*(code *)*puVar10)(plVar6,puVar10[1]);
  }
  if (*(long *)(in_stack_00000000 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar13 = FUN_061a2630(*(long *)(in_stack_00000000 + 0x58),0);
  puVar5 = System_Func<UIHoverEventArgs>_TypeInfo;
  puVar4 = System_Func<TransitionStartEvent>_TypeInfo;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  while (uVar15 = FUN_061a293c(lVar13,0), (uVar15 & 1) != 0) {
    plVar6 = (long *)FUN_061a29dc(lVar13,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    bVar1 = *(byte *)(*plVar6 + 0x130);
    bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((bVar1 < bVar2) ||
       (lVar12 = *(long *)(*plVar6 + 200),
       *(long *)(lVar12 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c();
    }
    bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
    if (((bVar1 < bVar2) || (*(long *)(lVar12 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) &&
       (plVar6[9] != 0)) {
      FUN_060735ac();
    }
  }
  plVar6 = (long *)thunk_FUN_032a55a4(lVar13,*(undefined8 *)puVar3);
  if (plVar6 != (long *)0x0) {
    lVar13 = *plVar6;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06073c90;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_032937ac(plVar6,*(long *)puVar3,0);
LAB_06073c90:
    (*(code *)*puVar10)(plVar6,puVar10[1]);
  }
  return;
}


