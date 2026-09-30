/*
FUNCTION_NAME: Oculus.Interaction.MoveFromTarget$$StopAndSetPose
ENTRY_POINT: 051ac044
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Oculus_Interaction_MoveFromTarget__StopAndSetPose(undefined **param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x28;
  long unaff_x29;
  long *in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  do {
    if (!(bool)in_ZR) {
      unaff_x25 = param_2;
    }
    iVar4 = FUN_0360f410(unaff_x22,unaff_x25,0,unaff_x24 & 0xffffffff,*(undefined8 *)param_1[0x3d]);
    if (iVar4 != -1) {
      thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
      FUN_02a7d698();
      uVar9 = FUN_050656a0(0);
      FUN_02a7da48(unaff_x28);
      uVar10 = (**(code **)(*unaff_x28 + 0x1b8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1c0));
      uVar7 = thunk_FUN_02f6ef30(System_Func<FocusOutEvent>_TypeInfo);
      uVar9 = FUN_051b9490(uVar7,uVar9,unaff_x25,uVar10,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
      uVar10 = thunk_FUN_02f45270();
      FUN_050d5404(uVar10,uVar9,0);
      uVar9 = thunk_FUN_02f6ef30(System_Func<GeometryChangedEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar10,uVar9);
    }
    if (unaff_x20 != (long *)0x0) {
      unaff_x25 = (**(code **)(*unaff_x20 + 0x178))
                            (unaff_x20,unaff_x25,param_2 != 0,*(undefined8 *)(*unaff_x20 + 0x180));
    }
    if (unaff_x22 == 0) {
LAB_051ac160:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x24) {
LAB_051ac164:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar1 = *(uint *)(unaff_x29 + 0x18);
    lVar6 = unaff_x24 * 8;
    unaff_x24 = unaff_x24 + 1;
    *(long *)(unaff_x22 + lVar6 + 0x20) = unaff_x25;
    if ((long)(int)uVar1 <= (long)unaff_x24) {
      uVar9 = *(undefined8 *)PTR_DAT_067c9ff0;
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_050e4454(uVar9,0);
      puVar2 = System_Func<Enum>_TypeInfo;
      if (unaff_x28 != (long *)0x0) {
        bVar3 = (**(code **)(*unaff_x28 + 0x1f8))
                          (unaff_x28,uVar9,0,*(undefined8 *)(*unaff_x28 + 0x200));
        lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_05116b38(lVar6,0);
        *(byte *)(lVar6 + 0x10) = bVar3 & 1;
        *(long *)(lVar6 + 0x18) = unaff_x23;
        *(long *)(lVar6 + 0x20) = unaff_x29;
        *(long *)(lVar6 + 0x28) = unaff_x22;
        return lVar6;
      }
      goto LAB_051ac160;
    }
    if (uVar1 <= unaff_x24) goto LAB_051ac164;
    if (unaff_x28 == (long *)0x0) goto LAB_051ac160;
    unaff_x25 = *(long *)(in_stack_00000018 + unaff_x24 * 8);
    plVar5 = (long *)(**(code **)(*unaff_x28 + 0x6b8))
                               (unaff_x28,unaff_x25,0x38,*(undefined8 *)(*unaff_x28 + 0x6c0));
    if (plVar5 == (long *)0x0) goto LAB_051ac160;
    uVar9 = (**(code **)(*plVar5 + 0x2d8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2e0));
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x21);
    }
    uVar9 = FUN_051ac1fc(uVar9);
    if (unaff_x23 == 0) goto LAB_051ac160;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x24) goto LAB_051ac164;
    lVar6 = *(long *)(PTR_DAT_067c9338 + 0xe0);
    iVar4 = *(int *)(lVar6 + 0xe4);
    uVar10 = *(undefined8 *)System_Func<Event>_TypeInfo;
    *(undefined8 *)(in_stack_00000010 + unaff_x24 * 8) = uVar9;
    if (iVar4 == 0) {
      thunk_FUN_02f6670c(lVar6);
    }
    uVar9 = FUN_050e4454(uVar10,0);
    uVar9 = (**(code **)(*plVar5 + 0x218))(plVar5,uVar9,1,*(undefined8 *)(*plVar5 + 0x220));
    uVar9 = FUN_033880d0(uVar9,*(undefined8 *)System_Func<ExecuteCommandEvent>_TypeInfo);
    lVar6 = *unaff_x19;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar6);
      lVar6 = *unaff_x19;
    }
    puVar8 = *(undefined8 **)(lVar6 + 0xb8);
    lVar11 = puVar8[1];
    if (lVar11 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar6);
        puVar8 = *(undefined8 **)(*unaff_x19 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar11 = thunk_FUN_02f45270(*(undefined8 *)System_Func<FocusEvent>_TypeInfo);
      FUN_04e02ad4(lVar11,uVar10,*(undefined8 *)System_Func<FocusExitEventArgs>_TypeInfo,0);
      *(long *)(*(long *)(*unaff_x19 + 0xb8) + 8) = lVar11;
      unaff_x22 = in_stack_00000008;
      unaff_x28 = in_stack_00000000;
    }
    uVar9 = FUN_0339ccdc(uVar9,lVar11,*(undefined8 *)System_Func<ExtraRenderData>_TypeInfo);
    param_2 = FUN_033a2918(uVar9,*(undefined8 *)System_Func<FocusEnterEventArgs>_TypeInfo);
    param_1 = &System_Xml_Linq_XHashtable_ExtractKeyDelegate<XName>_TypeInfo;
    in_ZR = param_2 == 0;
  } while( true );
}


