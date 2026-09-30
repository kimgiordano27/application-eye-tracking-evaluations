/*
FUNCTION_NAME: System.Xml.Schema.SchemaEntity$$get_DeclaredInExternal
ENTRY_POINT: 0607387c
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
/* WARNING: Removing unreachable block (ram,0x06073cf8) */
/* WARNING: Removing unreachable block (ram,0x06073d18) */

void System_Xml_Schema_SchemaEntity__get_DeclaredInExternal(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  uint in_w9;
  ulong uVar12;
  int *piVar13;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *plVar14;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  
  do {
    lVar11 = *unaff_x21;
    uVar12 = (ulong)*(byte *)(lVar11 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) <= in_w9) &&
       (*(long *)(*(long *)(param_1 + 200) + uVar12 * 8 + -8) == lVar11)) {
      bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
      if ((bVar1 <= in_w9) &&
         (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
        if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0)
            == 0) {
          thunk_FUN_032cd7c0();
          param_1 = *unaff_x24;
          lVar11 = *unaff_x21;
          in_w9 = (uint)*(byte *)(param_1 + 0x130);
          uVar12 = (ulong)*(byte *)(lVar11 + 0x130);
        }
        if ((in_w9 < (uint)uVar12) ||
           (*(long *)(*(long *)(param_1 + 200) + uVar12 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(unaff_x24);
        }
        FUN_06073f60(unaff_x24,*(undefined8 *)System_Func<GeometryChangedEvent>_TypeInfo);
        param_1 = *unaff_x24;
        lVar11 = *unaff_x21;
        in_w9 = (uint)*(byte *)(param_1 + 0x130);
        uVar12 = (ulong)*(byte *)(lVar11 + 0x130);
      }
      if ((in_w9 < (uint)uVar12) ||
         (*(long *)(*(long *)(param_1 + 200) + uVar12 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(unaff_x24);
      }
      plVar14 = *(long **)(unaff_x20 + 0x78);
      uVar6 = FUN_061ac6b8(unaff_x24,0);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8(uVar6,uVar6);
      }
      (**(code **)(*plVar14 + 0x318))(plVar14,uVar6,unaff_x24,*(undefined8 *)(*plVar14 + 800));
      bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
      if ((bVar1 <= *(byte *)(*unaff_x24 + 0x130)) &&
         (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
        plVar14 = (long *)*in_stack_00000008;
        if (plVar14 == (long *)0x0) {
          uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07292770);
          FUN_058fcfe4(uVar6,0);
          *in_stack_00000008 = uVar6;
          thunk_FUN_0333a630(in_stack_00000008,uVar6);
          plVar14 = (long *)*in_stack_00000008;
        }
        plVar7 = (long *)FUN_061ac6b8(unaff_x24,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8(uVar6,uVar6);
        }
        (**(code **)(*plVar14 + 0x318))(plVar14,uVar6,unaff_x24,*(undefined8 *)(*plVar14 + 800));
        plVar7 = *(long **)(unaff_x20 + 0x98);
        plVar14 = (long *)FUN_061ac6b8(unaff_x24,0);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar6 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8(uVar6,uVar6);
        }
        plVar14 = (long *)(**(code **)(*plVar7 + 0x308))
                                    (plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x310));
        if (plVar14 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_072a14c0 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_072a14c0)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c();
          }
          lVar11 = plVar14[0x1a];
          if (lVar11 != 0) {
            lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                        System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                                      );
            FUN_0606a570(lVar8,unaff_x24,0);
            lVar11 = FUN_0606ba28(lVar11,lVar8,0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(int *)(lVar11 + 0x10) != 0) {
              if (lVar8 != 0) {
                uVar6 = FUN_0606b26c(lVar8,0);
                uVar6 = FUN_06012ff8(uVar6,lVar11,0);
                uVar10 = thunk_FUN_032e1da0(System_Func<ValidateCommandEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar6,uVar10);
              }
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
          }
        }
      }
    }
    do {
      uVar12 = FUN_061a293c();
      puVar3 = PTR_DAT_07279f60;
      if ((uVar12 & 1) == 0) {
        plVar14 = (long *)thunk_FUN_032a55a4();
        if (plVar14 == (long *)0x0) goto LAB_06073b6c;
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_06073b44;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_06073b2c;
      }
      unaff_x24 = (long *)FUN_061a29dc();
    } while (unaff_x24 == (long *)0x0);
    param_1 = *unaff_x24;
    in_w9 = (uint)*(byte *)(param_1 + 0x130);
    bVar1 = *(byte *)(*unaff_x27 + 0x130);
    if ((bVar1 <= *(byte *)(param_1 + 0x130)) &&
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x27)) {
      if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_0619bae4(*(long *)(unaff_x20 + 0x50),unaff_x24,0);
      param_1 = *unaff_x24;
      in_w9 = (uint)*(byte *)(param_1 + 0x130);
    }
    bVar1 = *(byte *)(*unaff_x28 + 0x130);
    if ((bVar1 <= in_w9) &&
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28)) {
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_0619bae4(*(long *)(unaff_x20 + 0x58),unaff_x24,0);
      plVar14 = *(long **)(unaff_x20 + 0x68);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      (**(code **)(*plVar14 + 0x318))
                (plVar14,unaff_x24[0x18],unaff_x24,*(undefined8 *)(*plVar14 + 800));
      param_1 = *unaff_x24;
      in_w9 = (uint)*(byte *)(param_1 + 0x130);
    }
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if ((bVar1 <= in_w9) &&
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x29)) {
      plVar14 = *(long **)(unaff_x20 + 0x60);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      (**(code **)(*plVar14 + 0x318))
                (plVar14,unaff_x24[0x10],unaff_x24,*(undefined8 *)(*plVar14 + 800));
      param_1 = *unaff_x24;
      in_w9 = (uint)*(byte *)(param_1 + 0x130);
    }
    bVar1 = *(byte *)(*unaff_x23 + 0x130);
    if ((bVar1 <= in_w9) &&
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x23)) {
      plVar14 = *(long **)(unaff_x20 + 0x70);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      (**(code **)(*plVar14 + 0x318))
                (plVar14,unaff_x24[0xd],unaff_x24,*(undefined8 *)(*plVar14 + 800));
      param_1 = *unaff_x24;
      in_w9 = (uint)*(byte *)(param_1 + 0x130);
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_06073b2c:
    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_06073b60;
    }
  }
LAB_06073b44:
  puVar9 = (undefined8 *)FUN_032937ac(plVar14,*(long *)puVar3,0);
LAB_06073b60:
  (*(code *)*puVar9)(plVar14,puVar9[1]);
LAB_06073b6c:
  if (*(long *)(in_stack_00000000 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar11 = FUN_061a2630(*(long *)(in_stack_00000000 + 0x58),0);
  puVar5 = System_Func<UIHoverEventArgs>_TypeInfo;
  puVar4 = System_Func<TransitionStartEvent>_TypeInfo;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  while (uVar12 = FUN_061a293c(lVar11,0), (uVar12 & 1) != 0) {
    plVar14 = (long *)FUN_061a29dc(lVar11,0);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    bVar1 = *(byte *)(*plVar14 + 0x130);
    bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((bVar1 < bVar2) ||
       (lVar8 = *(long *)(*plVar14 + 200),
       *(long *)(lVar8 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c();
    }
    bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
    if (((bVar1 < bVar2) || (*(long *)(lVar8 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) &&
       (plVar14[9] != 0)) {
      FUN_060735ac();
    }
  }
  plVar14 = (long *)thunk_FUN_032a55a4(lVar11,*(undefined8 *)puVar3);
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06073c90;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_032937ac(plVar14,*(long *)puVar3,0);
LAB_06073c90:
    (*(code *)*puVar9)(plVar14,puVar9[1]);
  }
  return;
}


