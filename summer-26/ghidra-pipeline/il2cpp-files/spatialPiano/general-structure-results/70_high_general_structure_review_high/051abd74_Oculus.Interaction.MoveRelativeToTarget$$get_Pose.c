/*
FUNCTION_NAME: Oculus.Interaction.MoveRelativeToTarget$$get_Pose
ENTRY_POINT: 051abd74
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_9;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Oculus_Interaction_MoveRelativeToTarget__get_Pose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *unaff_x28;
  
  FUN_02f08768(System_Func<Event>_TypeInfo);
  FUN_02f08768(PTR_DAT_067c9fe0);
  FUN_02f08768(System_Func<ExecuteCommandEvent>_TypeInfo);
  FUN_02f08768(System_Func<ExtraRenderData>_TypeInfo);
  FUN_02f08768(System_Func<FocusEnterEventArgs>_TypeInfo);
  FUN_02f08768(PTR_DAT_067c9ff0);
  FUN_02f08768(System_Func<FocusEvent>_TypeInfo);
  FUN_02f08768(PTR_DAT_067c9070);
  FUN_02f08768(System_Func<FocusExitEventArgs>_TypeInfo);
  FUN_02f08768(System_Func<FocusInEvent>_TypeInfo);
  FUN_02f08768(PTR_DAT_067d6cc0);
  *(undefined1 *)(unaff_x21 + 0x427) = 1;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0x98) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar6 = FUN_05109450();
  puVar2 = PTR_DAT_067d6cc0;
  if (lVar6 != 0) {
    lVar7 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9070,*(undefined4 *)(lVar6 + 0x18));
    lVar8 = FUN_02f0880c(*(undefined8 *)puVar2,*(undefined4 *)(lVar6 + 0x18));
    puVar3 = System_Func<FocusInEvent>_TypeInfo;
    puVar2 = PTR_DAT_067c9fe0;
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar15 = 0;
      uVar12 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar15) {
LAB_051ac164:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (unaff_x28 == (long *)0x0) goto LAB_051ac160;
        lVar16 = *(long *)(lVar6 + 0x20 + uVar15 * 8);
        plVar9 = (long *)(**(code **)(*unaff_x28 + 0x6b8))
                                   (unaff_x28,lVar16,0x38,*(undefined8 *)(*unaff_x28 + 0x6c0));
        if (plVar9 == (long *)0x0) goto LAB_051ac160;
        uVar10 = (**(code **)(*plVar9 + 0x2d8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2e0));
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar2);
        }
        uVar10 = FUN_051ac1fc(uVar10);
        if (lVar8 == 0) goto LAB_051ac160;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_051ac164;
        lVar13 = *(long *)(PTR_DAT_067c9338 + 0xe0);
        iVar5 = *(int *)(lVar13 + 0xe4);
        uVar17 = *(undefined8 *)System_Func<Event>_TypeInfo;
        *(undefined8 *)(lVar8 + 0x20 + uVar15 * 8) = uVar10;
        if (iVar5 == 0) {
          thunk_FUN_02f6670c(lVar13);
        }
        uVar10 = FUN_050e4454(uVar17,0);
        uVar10 = (**(code **)(*plVar9 + 0x218))(plVar9,uVar10,1,*(undefined8 *)(*plVar9 + 0x220));
        uVar10 = FUN_033880d0(uVar10,*(undefined8 *)System_Func<ExecuteCommandEvent>_TypeInfo);
        lVar13 = *(long *)puVar3;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar13);
          lVar13 = *(long *)puVar3;
        }
        puVar14 = *(undefined8 **)(lVar13 + 0xb8);
        lVar18 = puVar14[1];
        if (lVar18 == 0) {
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02f6670c(lVar13);
            puVar14 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar17 = *puVar14;
          lVar18 = thunk_FUN_02f45270(*(undefined8 *)System_Func<FocusEvent>_TypeInfo);
          FUN_04e02ad4(lVar18,uVar17,*(undefined8 *)System_Func<FocusExitEventArgs>_TypeInfo,0);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar18;
        }
        uVar10 = FUN_0339ccdc(uVar10,lVar18,*(undefined8 *)System_Func<ExtraRenderData>_TypeInfo);
        lVar13 = FUN_033a2918(uVar10,*(undefined8 *)System_Func<FocusEnterEventArgs>_TypeInfo);
        if (lVar13 != 0) {
          lVar16 = lVar13;
        }
        iVar5 = FUN_0360f410(lVar7,lVar16,0,uVar15 & 0xffffffff,
                             *(undefined8 *)System_Func<Entry>_TypeInfo);
        if (iVar5 != -1) {
          thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
          FUN_02a7d698();
          uVar10 = FUN_050656a0(0);
          FUN_02a7da48(unaff_x28);
          uVar17 = (**(code **)(*unaff_x28 + 0x1b8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1c0));
          uVar11 = thunk_FUN_02f6ef30(System_Func<FocusOutEvent>_TypeInfo);
          uVar10 = FUN_051b9490(uVar11,uVar10,lVar16,uVar17,0);
          thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
          uVar17 = thunk_FUN_02f45270();
          FUN_050d5404(uVar17,uVar10,0);
          uVar10 = thunk_FUN_02f6ef30(System_Func<GeometryChangedEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar17,uVar10);
        }
        if (unaff_x20 != (long *)0x0) {
          lVar16 = (**(code **)(*unaff_x20 + 0x178))
                             (unaff_x20,lVar16,lVar13 != 0,*(undefined8 *)(*unaff_x20 + 0x180));
        }
        if (lVar7 == 0) goto LAB_051ac160;
        if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_051ac164;
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar12 = (ulong)uVar1;
        lVar13 = uVar15 * 8;
        uVar15 = uVar15 + 1;
        *(long *)(lVar7 + lVar13 + 0x20) = lVar16;
      } while ((long)uVar15 < (long)(int)uVar1);
    }
    uVar10 = *(undefined8 *)PTR_DAT_067c9ff0;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050e4454(uVar10,0);
    puVar2 = System_Func<Enum>_TypeInfo;
    if (unaff_x28 != (long *)0x0) {
      bVar4 = (**(code **)(*unaff_x28 + 0x1f8))
                        (unaff_x28,uVar10,0,*(undefined8 *)(*unaff_x28 + 0x200));
      lVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_05116b38(lVar16,0);
      *(byte *)(lVar16 + 0x10) = bVar4 & 1;
      *(long *)(lVar16 + 0x18) = lVar8;
      *(long *)(lVar16 + 0x20) = lVar6;
      *(long *)(lVar16 + 0x28) = lVar7;
      return lVar16;
    }
  }
LAB_051ac160:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


