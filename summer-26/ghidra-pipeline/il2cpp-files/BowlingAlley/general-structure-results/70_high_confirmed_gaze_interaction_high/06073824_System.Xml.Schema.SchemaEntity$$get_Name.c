/*
FUNCTION_NAME: System.Xml.Schema.SchemaEntity$$get_Name
ENTRY_POINT: 06073824
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

void System_Xml_Schema_SchemaEntity__get_Name
               (long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  code *in_x9;
  ulong uVar14;
  int *piVar15;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  
  do {
    (*in_x9)(param_1,param_2,param_3,param_4);
    lVar12 = *unaff_x24;
    uVar13 = (uint)*(byte *)(lVar12 + 0x130);
    param_3 = unaff_x24;
    do {
      bVar1 = *(byte *)(*unaff_x23 + 0x130);
      if ((bVar1 <= uVar13) &&
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x23)) {
        plVar6 = *(long **)(unaff_x20 + 0x70);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        (**(code **)(*plVar6 + 0x318))(plVar6,param_3[0xd],param_3,*(undefined8 *)(*plVar6 + 800));
        lVar12 = *param_3;
        uVar13 = (uint)*(byte *)(lVar12 + 0x130);
      }
      lVar11 = *unaff_x21;
      uVar14 = (ulong)*(byte *)(lVar11 + 0x130);
      if ((*(byte *)(lVar11 + 0x130) <= uVar13) &&
         (*(long *)(*(long *)(lVar12 + 200) + uVar14 * 8 + -8) == lVar11)) {
        bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
        if ((bVar1 <= uVar13) &&
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
          if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0)
              == 0) {
            thunk_FUN_032cd7c0();
            lVar12 = *param_3;
            lVar11 = *unaff_x21;
            uVar13 = (uint)*(byte *)(lVar12 + 0x130);
            uVar14 = (ulong)*(byte *)(lVar11 + 0x130);
          }
          if ((uVar13 < (uint)uVar14) ||
             (*(long *)(*(long *)(lVar12 + 200) + uVar14 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(param_3);
          }
          FUN_06073f60(param_3,*(undefined8 *)System_Func<GeometryChangedEvent>_TypeInfo);
          lVar12 = *param_3;
          lVar11 = *unaff_x21;
          uVar13 = (uint)*(byte *)(lVar12 + 0x130);
          uVar14 = (ulong)*(byte *)(lVar11 + 0x130);
        }
        if ((uVar13 < (uint)uVar14) ||
           (*(long *)(*(long *)(lVar12 + 200) + uVar14 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(param_3);
        }
        plVar6 = *(long **)(unaff_x20 + 0x78);
        uVar7 = FUN_061ac6b8(param_3,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8(uVar7,uVar7);
        }
        (**(code **)(*plVar6 + 0x318))(plVar6,uVar7,param_3,*(undefined8 *)(*plVar6 + 800));
        bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
          plVar6 = (long *)*in_stack_00000008;
          if (plVar6 == (long *)0x0) {
            uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07292770);
            FUN_058fcfe4(uVar7,0);
            *in_stack_00000008 = uVar7;
            thunk_FUN_0333a630(in_stack_00000008,uVar7);
            plVar6 = (long *)*in_stack_00000008;
          }
          plVar8 = (long *)FUN_061ac6b8(param_3,0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar7 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8(uVar7,uVar7);
          }
          (**(code **)(*plVar6 + 0x318))(plVar6,uVar7,param_3,*(undefined8 *)(*plVar6 + 800));
          plVar8 = *(long **)(unaff_x20 + 0x98);
          plVar6 = (long *)FUN_061ac6b8(param_3,0);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8(uVar7,uVar7);
          }
          plVar6 = (long *)(**(code **)(*plVar8 + 0x308))
                                     (plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x310));
          if (plVar6 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_072a14c0 + 0x130);
            if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_072a14c0)) {
                    /* WARNING: Subroutine does not return */
              FUN_032d618c();
            }
            lVar12 = plVar6[0x1a];
            if (lVar12 != 0) {
              lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                           System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                                         );
              FUN_0606a570(lVar11,param_3,0);
              lVar12 = FUN_0606ba28(lVar12,lVar11,0);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              if (*(int *)(lVar12 + 0x10) != 0) {
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar7 = FUN_0606b26c(lVar11,0);
                uVar7 = FUN_06012ff8(uVar7,lVar12,0);
                uVar10 = thunk_FUN_032e1da0(System_Func<ValidateCommandEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar7,uVar10);
              }
            }
          }
        }
      }
      do {
        uVar14 = FUN_061a293c();
        puVar3 = PTR_DAT_07279f60;
        if ((uVar14 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_032a55a4();
          if (plVar6 == (long *)0x0) goto LAB_06073b6c;
          lVar12 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 == 0) goto LAB_06073b44;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_06073b2c;
        }
        param_3 = (long *)FUN_061a29dc();
      } while (param_3 == (long *)0x0);
      lVar12 = *param_3;
      uVar13 = (uint)*(byte *)(lVar12 + 0x130);
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
      if ((bVar1 <= *(byte *)(lVar12 + 0x130)) &&
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x27)) {
        if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_0619bae4(*(long *)(unaff_x20 + 0x50),param_3,0);
        lVar12 = *param_3;
        uVar13 = (uint)*(byte *)(lVar12 + 0x130);
      }
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
      if ((bVar1 <= uVar13) &&
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28)) {
        if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_0619bae4(*(long *)(unaff_x20 + 0x58),param_3,0);
        plVar6 = *(long **)(unaff_x20 + 0x68);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        (**(code **)(*plVar6 + 0x318))(plVar6,param_3[0x18],param_3,*(undefined8 *)(*plVar6 + 800));
        lVar12 = *param_3;
        uVar13 = (uint)*(byte *)(lVar12 + 0x130);
      }
      bVar1 = *(byte *)(*unaff_x29 + 0x130);
    } while ((uVar13 < bVar1) ||
            (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29));
    param_1 = *(long **)(unaff_x20 + 0x60);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    param_2 = param_3[0x10];
    in_x9 = *(code **)(*param_1 + 0x318);
    param_4 = *(undefined8 *)(*param_1 + 800);
    unaff_x24 = param_3;
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_06073b2c:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_06073b60;
    }
  }
LAB_06073b44:
  puVar9 = (undefined8 *)FUN_032937ac(plVar6,*(long *)puVar3,0);
LAB_06073b60:
  (*(code *)*puVar9)(plVar6,puVar9[1]);
LAB_06073b6c:
  if (*(long *)(in_stack_00000000 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar12 = FUN_061a2630(*(long *)(in_stack_00000000 + 0x58),0);
  puVar5 = System_Func<UIHoverEventArgs>_TypeInfo;
  puVar4 = System_Func<TransitionStartEvent>_TypeInfo;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  while (uVar14 = FUN_061a293c(lVar12,0), (uVar14 & 1) != 0) {
    plVar6 = (long *)FUN_061a29dc(lVar12,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    bVar1 = *(byte *)(*plVar6 + 0x130);
    bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((bVar1 < bVar2) ||
       (lVar11 = *(long *)(*plVar6 + 200),
       *(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c();
    }
    bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
    if (((bVar1 < bVar2) || (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) &&
       (plVar6[9] != 0)) {
      FUN_060735ac();
    }
  }
  plVar6 = (long *)thunk_FUN_032a55a4(lVar12,*(undefined8 *)puVar3);
  if (plVar6 != (long *)0x0) {
    lVar12 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06073c90;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_032937ac(plVar6,*(long *)puVar3,0);
LAB_06073c90:
    (*(code *)*puVar9)(plVar6,puVar9[1]);
  }
  return;
}


