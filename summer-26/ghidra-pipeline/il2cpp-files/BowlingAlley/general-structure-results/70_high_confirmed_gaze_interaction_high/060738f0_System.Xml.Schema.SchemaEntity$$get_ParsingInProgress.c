/*
FUNCTION_NAME: System.Xml.Schema.SchemaEntity$$get_ParsingInProgress
ENTRY_POINT: 060738f0
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

void System_Xml_Schema_SchemaEntity__get_ParsingInProgress
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint in_w9;
  ulong in_x10;
  int *piVar12;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *plVar13;
  long lVar14;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  
  do {
    if ((in_w9 < (uint)in_x10) ||
       (*(long *)(*(long *)(param_1 + 200) + (in_x10 & 0xffffffff) * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(unaff_x24);
    }
    FUN_06073f60(unaff_x24,*(undefined8 *)System_Func<GeometryChangedEvent>_TypeInfo);
    param_1 = *unaff_x24;
    param_3 = *unaff_x21;
    in_w9 = (uint)*(byte *)(param_1 + 0x130);
    in_x10 = (ulong)*(byte *)(param_3 + 0x130);
    do {
      if ((in_w9 < (uint)in_x10) ||
         (*(long *)(*(long *)(param_1 + 200) + in_x10 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(unaff_x24);
      }
      plVar13 = *(long **)(unaff_x20 + 0x78);
      uVar7 = FUN_061ac6b8(unaff_x24,0);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8(uVar7,uVar7);
      }
      (**(code **)(*plVar13 + 0x318))(plVar13,uVar7,unaff_x24,*(undefined8 *)(*plVar13 + 800));
      bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
      if ((bVar1 <= *(byte *)(*unaff_x24 + 0x130)) &&
         (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
        plVar13 = (long *)*in_stack_00000008;
        if (plVar13 == (long *)0x0) {
          uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07292770);
          FUN_058fcfe4(uVar7,0);
          *in_stack_00000008 = uVar7;
          thunk_FUN_0333a630(in_stack_00000008,uVar7);
          plVar13 = (long *)*in_stack_00000008;
        }
        plVar8 = (long *)FUN_061ac6b8(unaff_x24,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar7 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8(uVar7,uVar7);
        }
        (**(code **)(*plVar13 + 0x318))(plVar13,uVar7,unaff_x24,*(undefined8 *)(*plVar13 + 800));
        plVar8 = *(long **)(unaff_x20 + 0x98);
        plVar13 = (long *)FUN_061ac6b8(unaff_x24,0);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar7 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8(uVar7,uVar7);
        }
        plVar13 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar13 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_072a14c0 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_072a14c0)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c();
          }
          lVar14 = plVar13[0x1a];
          if (lVar14 != 0) {
            lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                        System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                                      );
            FUN_0606a570(lVar9,unaff_x24,0);
            lVar14 = FUN_0606ba28(lVar14,lVar9,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(int *)(lVar14 + 0x10) != 0) {
              if (lVar9 != 0) {
                uVar7 = FUN_0606b26c(lVar9,0);
                uVar7 = FUN_06012ff8(uVar7,lVar14,0);
                uVar11 = thunk_FUN_032e1da0(System_Func<ValidateCommandEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar7,uVar11);
              }
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
          }
        }
      }
      do {
        do {
          uVar6 = FUN_061a293c();
          puVar3 = PTR_DAT_07279f60;
          if ((uVar6 & 1) == 0) {
            plVar13 = (long *)thunk_FUN_032a55a4();
            if (plVar13 == (long *)0x0) goto LAB_06073b6c;
            lVar14 = *plVar13;
            uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar6 == 0) goto LAB_06073b44;
            piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
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
          plVar13 = *(long **)(unaff_x20 + 0x68);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          (**(code **)(*plVar13 + 0x318))
                    (plVar13,unaff_x24[0x18],unaff_x24,*(undefined8 *)(*plVar13 + 800));
          param_1 = *unaff_x24;
          in_w9 = (uint)*(byte *)(param_1 + 0x130);
        }
        bVar1 = *(byte *)(*unaff_x29 + 0x130);
        if ((bVar1 <= in_w9) &&
           (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x29)) {
          plVar13 = *(long **)(unaff_x20 + 0x60);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          (**(code **)(*plVar13 + 0x318))
                    (plVar13,unaff_x24[0x10],unaff_x24,*(undefined8 *)(*plVar13 + 800));
          param_1 = *unaff_x24;
          in_w9 = (uint)*(byte *)(param_1 + 0x130);
        }
        bVar1 = *(byte *)(*unaff_x23 + 0x130);
        if ((bVar1 <= in_w9) &&
           (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x23)) {
          plVar13 = *(long **)(unaff_x20 + 0x70);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          (**(code **)(*plVar13 + 0x318))
                    (plVar13,unaff_x24[0xd],unaff_x24,*(undefined8 *)(*plVar13 + 800));
          param_1 = *unaff_x24;
          in_w9 = (uint)*(byte *)(param_1 + 0x130);
        }
        param_3 = *unaff_x21;
        in_x10 = (ulong)*(byte *)(param_3 + 0x130);
      } while ((in_w9 < *(byte *)(param_3 + 0x130)) ||
              (*(long *)(*(long *)(param_1 + 200) + in_x10 * 8 + -8) != param_3));
      bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
    } while ((in_w9 < bVar1) ||
            (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)System_Func<FocusOutEvent>_TypeInfo));
    if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0) == 0)
    {
      thunk_FUN_032cd7c0();
      param_1 = *unaff_x24;
      param_3 = *unaff_x21;
      in_w9 = (uint)*(byte *)(param_1 + 0x130);
      in_x10 = (ulong)*(byte *)(param_3 + 0x130);
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 4;
    if (uVar6 == 0) break;
LAB_06073b2c:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06073b60;
    }
  }
LAB_06073b44:
  puVar10 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar3,0);
LAB_06073b60:
  (*(code *)*puVar10)(plVar13,puVar10[1]);
LAB_06073b6c:
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
    plVar13 = (long *)FUN_061a29dc(lVar14,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    bVar1 = *(byte *)(*plVar13 + 0x130);
    bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((bVar1 < bVar2) ||
       (lVar9 = *(long *)(*plVar13 + 200),
       *(long *)(lVar9 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c();
    }
    bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
    if (((bVar1 < bVar2) || (*(long *)(lVar9 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) &&
       (plVar13[9] != 0)) {
      FUN_060735ac();
    }
  }
  plVar13 = (long *)thunk_FUN_032a55a4(lVar14,*(undefined8 *)puVar3);
  if (plVar13 != (long *)0x0) {
    lVar14 = *plVar13;
    uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06073c90;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar3,0);
LAB_06073c90:
    (*(code *)*puVar10)(plVar13,puVar10[1]);
  }
  return;
}


