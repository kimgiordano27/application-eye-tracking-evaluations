/*
FUNCTION_NAME: Oculus.Interaction.MoveFromTarget$$get_Pose
ENTRY_POINT: 051abfd0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Oculus_Interaction_MoveFromTarget__get_Pose(undefined **param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar11;
  undefined8 unaff_x28;
  long unaff_x29;
  long *in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  do {
    lVar6 = thunk_FUN_02f45270(*(undefined8 *)param_1[0x43]);
    FUN_04e02ad4(lVar6,unaff_x28,*(undefined8 *)System_Func<FocusExitEventArgs>_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x19 + 0xb8) + 8) = lVar6;
    do {
      uVar7 = FUN_0339ccdc(unaff_x26,lVar6,*(undefined8 *)System_Func<ExtraRenderData>_TypeInfo);
      lVar6 = FUN_033a2918(uVar7,*(undefined8 *)System_Func<FocusEnterEventArgs>_TypeInfo);
      if (lVar6 != 0) {
        unaff_x25 = lVar6;
      }
      iVar4 = FUN_0360f410(in_stack_00000008,unaff_x25,0,unaff_x24 & 0xffffffff,
                           *(undefined8 *)System_Func<Entry>_TypeInfo);
      if (iVar4 != -1) {
        thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
        FUN_02a7d698();
        uVar7 = FUN_050656a0(0);
        FUN_02a7da48(in_stack_00000000);
        uVar11 = (**(code **)(*in_stack_00000000 + 0x1b8))
                           (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 0x1c0));
        uVar8 = thunk_FUN_02f6ef30(System_Func<FocusOutEvent>_TypeInfo);
        uVar7 = FUN_051b9490(uVar8,uVar7,unaff_x25,uVar11,0);
        thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
        uVar11 = thunk_FUN_02f45270();
        FUN_050d5404(uVar11,uVar7,0);
        uVar7 = thunk_FUN_02f6ef30(System_Func<GeometryChangedEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar11,uVar7);
      }
      if (unaff_x23 != (long *)0x0) {
        unaff_x25 = (**(code **)(*unaff_x23 + 0x178))
                              (unaff_x23,unaff_x25,lVar6 != 0,*(undefined8 *)(*unaff_x23 + 0x180));
      }
      if (in_stack_00000008 == 0) goto LAB_051ac160;
      if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x24) {
LAB_051ac164:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar1 = *(uint *)(unaff_x29 + 0x18);
      lVar6 = unaff_x24 * 8;
      unaff_x24 = unaff_x24 + 1;
      *(long *)(in_stack_00000008 + lVar6 + 0x20) = unaff_x25;
      if ((long)(int)uVar1 <= (long)unaff_x24) {
        uVar7 = *(undefined8 *)PTR_DAT_067c9ff0;
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_050e4454(uVar7,0);
        puVar2 = System_Func<Enum>_TypeInfo;
        if (in_stack_00000000 != (long *)0x0) {
          bVar3 = (**(code **)(*in_stack_00000000 + 0x1f8))
                            (in_stack_00000000,uVar7,0,*(undefined8 *)(*in_stack_00000000 + 0x200));
          lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_05116b38(lVar6,0);
          *(byte *)(lVar6 + 0x10) = bVar3 & 1;
          *(long *)(lVar6 + 0x18) = unaff_x22;
          *(long *)(lVar6 + 0x20) = unaff_x29;
          *(long *)(lVar6 + 0x28) = in_stack_00000008;
          return lVar6;
        }
        goto LAB_051ac160;
      }
      if (uVar1 <= unaff_x24) goto LAB_051ac164;
      if (in_stack_00000000 == (long *)0x0) {
LAB_051ac160:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      unaff_x25 = *(long *)(in_stack_00000018 + unaff_x24 * 8);
      plVar5 = (long *)(**(code **)(*in_stack_00000000 + 0x6b8))
                                 (in_stack_00000000,unaff_x25,0x38,
                                  *(undefined8 *)(*in_stack_00000000 + 0x6c0));
      if (plVar5 == (long *)0x0) goto LAB_051ac160;
      uVar7 = (**(code **)(*plVar5 + 0x2d8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2e0));
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*unaff_x20);
      }
      uVar7 = FUN_051ac1fc(uVar7);
      if (unaff_x22 == 0) goto LAB_051ac160;
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x24) goto LAB_051ac164;
      lVar6 = *(long *)(PTR_DAT_067c9338 + 0xe0);
      iVar4 = *(int *)(lVar6 + 0xe4);
      uVar11 = *(undefined8 *)System_Func<Event>_TypeInfo;
      *(undefined8 *)(in_stack_00000010 + unaff_x24 * 8) = uVar7;
      if (iVar4 == 0) {
        thunk_FUN_02f6670c(lVar6);
      }
      uVar7 = FUN_050e4454(uVar11,0);
      uVar7 = (**(code **)(*plVar5 + 0x218))(plVar5,uVar7,1,*(undefined8 *)(*plVar5 + 0x220));
      unaff_x26 = FUN_033880d0(uVar7,*(undefined8 *)System_Func<ExecuteCommandEvent>_TypeInfo);
      lVar9 = *unaff_x19;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar9);
        lVar9 = *unaff_x19;
      }
      puVar10 = *(undefined8 **)(lVar9 + 0xb8);
      lVar6 = puVar10[1];
    } while (lVar6 != 0);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar9);
      puVar10 = *(undefined8 **)(*unaff_x19 + 0xb8);
    }
    param_1 = &System_Xml_Linq_XHashtable_ExtractKeyDelegate<XName>_TypeInfo;
    unaff_x28 = *puVar10;
  } while( true );
}


