/*
FUNCTION_NAME: Oculus.Interaction.MoveRelativeToTarget$$StopAndSetPose
ENTRY_POINT: 051abeb8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Oculus_Interaction_MoveRelativeToTarget__StopAndSetPose
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *in_x9;
  undefined8 *puVar9;
  long *unaff_x19;
  long *unaff_x20;
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
    plVar5 = (long *)(*in_x9)(param_2,unaff_x25,param_4,*(undefined8 *)(param_1 + 0x6c0));
    if (plVar5 == (long *)0x0) {
LAB_051ac160:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar6 = (**(code **)(*plVar5 + 0x2d8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2e0));
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x21);
    }
    uVar6 = FUN_051ac1fc(uVar6);
    if (unaff_x23 == 0) goto LAB_051ac160;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x24) {
LAB_051ac164:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar8 = *(long *)(PTR_DAT_067c9338 + 0xe0);
    iVar4 = *(int *)(lVar8 + 0xe4);
    uVar10 = *(undefined8 *)System_Func<Event>_TypeInfo;
    *(undefined8 *)(in_stack_00000010 + unaff_x24 * 8) = uVar6;
    if (iVar4 == 0) {
      thunk_FUN_02f6670c(lVar8);
    }
    uVar6 = FUN_050e4454(uVar10,0);
    uVar6 = (**(code **)(*plVar5 + 0x218))(plVar5,uVar6,1,*(undefined8 *)(*plVar5 + 0x220));
    uVar6 = FUN_033880d0(uVar6,*(undefined8 *)System_Func<ExecuteCommandEvent>_TypeInfo);
    lVar8 = *unaff_x19;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar8);
      lVar8 = *unaff_x19;
    }
    puVar9 = *(undefined8 **)(lVar8 + 0xb8);
    lVar11 = puVar9[1];
    param_2 = unaff_x28;
    if (lVar11 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar8);
        puVar9 = *(undefined8 **)(*unaff_x19 + 0xb8);
      }
      uVar10 = *puVar9;
      lVar11 = thunk_FUN_02f45270(*(undefined8 *)System_Func<FocusEvent>_TypeInfo);
      FUN_04e02ad4(lVar11,uVar10,*(undefined8 *)System_Func<FocusExitEventArgs>_TypeInfo,0);
      *(long *)(*(long *)(*unaff_x19 + 0xb8) + 8) = lVar11;
      unaff_x22 = in_stack_00000008;
      param_2 = in_stack_00000000;
    }
    uVar6 = FUN_0339ccdc(uVar6,lVar11,*(undefined8 *)System_Func<ExtraRenderData>_TypeInfo);
    lVar8 = FUN_033a2918(uVar6,*(undefined8 *)System_Func<FocusEnterEventArgs>_TypeInfo);
    if (lVar8 != 0) {
      unaff_x25 = lVar8;
    }
    iVar4 = FUN_0360f410(unaff_x22,unaff_x25,0,unaff_x24 & 0xffffffff,
                         *(undefined8 *)System_Func<Entry>_TypeInfo);
    if (iVar4 != -1) {
      thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
      FUN_02a7d698();
      uVar6 = FUN_050656a0(0);
      FUN_02a7da48(param_2);
      uVar10 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      uVar7 = thunk_FUN_02f6ef30(System_Func<FocusOutEvent>_TypeInfo);
      uVar6 = FUN_051b9490(uVar7,uVar6,unaff_x25,uVar10,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
      uVar10 = thunk_FUN_02f45270();
      FUN_050d5404(uVar10,uVar6,0);
      uVar6 = thunk_FUN_02f6ef30(System_Func<GeometryChangedEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar10,uVar6);
    }
    if (unaff_x20 != (long *)0x0) {
      unaff_x25 = (**(code **)(*unaff_x20 + 0x178))
                            (unaff_x20,unaff_x25,lVar8 != 0,*(undefined8 *)(*unaff_x20 + 0x180));
    }
    if (unaff_x22 == 0) goto LAB_051ac160;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x24) goto LAB_051ac164;
    uVar1 = *(uint *)(unaff_x29 + 0x18);
    lVar8 = unaff_x24 * 8;
    unaff_x24 = unaff_x24 + 1;
    *(long *)(unaff_x22 + lVar8 + 0x20) = unaff_x25;
    if ((long)(int)uVar1 <= (long)unaff_x24) {
      uVar6 = *(undefined8 *)PTR_DAT_067c9ff0;
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar6 = FUN_050e4454(uVar6,0);
      puVar2 = System_Func<Enum>_TypeInfo;
      if (param_2 != (long *)0x0) {
        bVar3 = (**(code **)(*param_2 + 0x1f8))(param_2,uVar6,0,*(undefined8 *)(*param_2 + 0x200));
        lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_05116b38(lVar8,0);
        *(byte *)(lVar8 + 0x10) = bVar3 & 1;
        *(long *)(lVar8 + 0x18) = unaff_x23;
        *(long *)(lVar8 + 0x20) = unaff_x29;
        *(long *)(lVar8 + 0x28) = unaff_x22;
        return lVar8;
      }
      goto LAB_051ac160;
    }
    if (uVar1 <= unaff_x24) goto LAB_051ac164;
    if (param_2 == (long *)0x0) goto LAB_051ac160;
    param_1 = *param_2;
    param_4 = 0x38;
    unaff_x25 = *(long *)(in_stack_00000018 + unaff_x24 * 8);
    in_x9 = *(code **)(param_1 + 0x6b8);
    unaff_x28 = param_2;
  } while( true );
}


