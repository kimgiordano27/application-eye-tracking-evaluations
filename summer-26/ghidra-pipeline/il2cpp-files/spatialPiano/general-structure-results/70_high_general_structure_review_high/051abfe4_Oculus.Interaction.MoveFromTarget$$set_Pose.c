/*
FUNCTION_NAME: Oculus.Interaction.MoveFromTarget$$set_Pose
ENTRY_POINT: 051abfe4
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


long Oculus_Interaction_MoveFromTarget__set_Pose
               (undefined **param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar10;
  long unaff_x29;
  long *in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  do {
    FUN_04e02ad4(param_2,param_3,*(undefined8 *)param_1[0x44],0);
    *(long *)(*(long *)(*unaff_x19 + 0xb8) + 8) = param_2;
    do {
      uVar6 = FUN_0339ccdc(unaff_x26,param_2,*(undefined8 *)System_Func<ExtraRenderData>_TypeInfo);
      lVar7 = FUN_033a2918(uVar6,*(undefined8 *)System_Func<FocusEnterEventArgs>_TypeInfo);
      if (lVar7 != 0) {
        unaff_x25 = lVar7;
      }
      iVar4 = FUN_0360f410(in_stack_00000008,unaff_x25,0,unaff_x24 & 0xffffffff,
                           *(undefined8 *)System_Func<Entry>_TypeInfo);
      if (iVar4 != -1) {
        thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
        FUN_02a7d698();
        uVar6 = FUN_050656a0(0);
        FUN_02a7da48(in_stack_00000000);
        uVar10 = (**(code **)(*in_stack_00000000 + 0x1b8))
                           (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 0x1c0));
        uVar8 = thunk_FUN_02f6ef30(System_Func<FocusOutEvent>_TypeInfo);
        uVar6 = FUN_051b9490(uVar8,uVar6,unaff_x25,uVar10,0);
        thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
        uVar10 = thunk_FUN_02f45270();
        FUN_050d5404(uVar10,uVar6,0);
        uVar6 = thunk_FUN_02f6ef30(System_Func<GeometryChangedEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar10,uVar6);
      }
      if (unaff_x23 != (long *)0x0) {
        unaff_x25 = (**(code **)(*unaff_x23 + 0x178))
                              (unaff_x23,unaff_x25,lVar7 != 0,*(undefined8 *)(*unaff_x23 + 0x180));
      }
      if (in_stack_00000008 == 0) goto LAB_051ac160;
      if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x24) {
LAB_051ac164:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar1 = *(uint *)(unaff_x29 + 0x18);
      lVar7 = unaff_x24 * 8;
      unaff_x24 = unaff_x24 + 1;
      *(long *)(in_stack_00000008 + lVar7 + 0x20) = unaff_x25;
      if ((long)(int)uVar1 <= (long)unaff_x24) {
        uVar6 = *(undefined8 *)PTR_DAT_067c9ff0;
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar6 = FUN_050e4454(uVar6,0);
        puVar2 = System_Func<Enum>_TypeInfo;
        if (in_stack_00000000 != (long *)0x0) {
          bVar3 = (**(code **)(*in_stack_00000000 + 0x1f8))
                            (in_stack_00000000,uVar6,0,*(undefined8 *)(*in_stack_00000000 + 0x200));
          lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_05116b38(lVar7,0);
          *(byte *)(lVar7 + 0x10) = bVar3 & 1;
          *(long *)(lVar7 + 0x18) = unaff_x22;
          *(long *)(lVar7 + 0x20) = unaff_x29;
          *(long *)(lVar7 + 0x28) = in_stack_00000008;
          return lVar7;
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
      uVar6 = (**(code **)(*plVar5 + 0x2d8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2e0));
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*unaff_x20);
      }
      uVar6 = FUN_051ac1fc(uVar6);
      if (unaff_x22 == 0) goto LAB_051ac160;
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x24) goto LAB_051ac164;
      lVar7 = *(long *)(PTR_DAT_067c9338 + 0xe0);
      iVar4 = *(int *)(lVar7 + 0xe4);
      uVar10 = *(undefined8 *)System_Func<Event>_TypeInfo;
      *(undefined8 *)(in_stack_00000010 + unaff_x24 * 8) = uVar6;
      if (iVar4 == 0) {
        thunk_FUN_02f6670c(lVar7);
      }
      uVar6 = FUN_050e4454(uVar10,0);
      uVar6 = (**(code **)(*plVar5 + 0x218))(plVar5,uVar6,1,*(undefined8 *)(*plVar5 + 0x220));
      unaff_x26 = FUN_033880d0(uVar6,*(undefined8 *)System_Func<ExecuteCommandEvent>_TypeInfo);
      lVar7 = *unaff_x19;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar7);
        lVar7 = *unaff_x19;
      }
      puVar9 = *(undefined8 **)(lVar7 + 0xb8);
      param_2 = puVar9[1];
    } while (param_2 != 0);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar7);
      puVar9 = *(undefined8 **)(*unaff_x19 + 0xb8);
    }
    param_3 = *puVar9;
    param_2 = thunk_FUN_02f45270(*(undefined8 *)System_Func<FocusEvent>_TypeInfo);
    param_1 = &System_Xml_Linq_XHashtable_ExtractKeyDelegate<XName>_TypeInfo;
  } while( true );
}


