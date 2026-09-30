/*
FUNCTION_NAME: FUN_0606a748
ENTRY_POINT: 0606a748
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_16;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;negative_generic_ui_only_without_eye_source_or_collection
*/


/* WARNING: Removing unreachable block (ram,0x0606af5c) */
/* WARNING: Removing unreachable block (ram,0x0606afb4) */

void FUN_0606a748(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  int *piVar17;
  long *plVar18;
  
  if ((DAT_076dd3b1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727f070);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<DependencyStatus>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<DetachFromPanelEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<DropEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<DropdownItem>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<Encoding>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<Enum>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<ExecuteCommandEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<ExtensionMethodCache>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<Flow>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusEnterEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusExitEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusInEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0727c6b0);
    thunk_FUN_032e1da0(System_Func<GeometryChangedEvent>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07285078);
    thunk_FUN_032e1da0(System_Func<GrabInteractable>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07285080);
    DAT_076dd3b1 = 1;
  }
  puVar3 = System_Func<FocusOutEvent>_TypeInfo;
  if (param_2 == 0) goto LAB_0606af88;
  plVar18 = *(long **)(param_2 + 0x98);
  if (plVar18 == (long *)0x0) goto LAB_0606a92c;
  lVar14 = *plVar18;
  bVar16 = *(byte *)(lVar14 + 0x130);
  bVar1 = *(byte *)(*(long *)System_Func<FocusEvent>_TypeInfo + 0x130);
  if ((bVar1 <= bVar16) &&
     (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)System_Func<FocusEvent>_TypeInfo)) {
LAB_0606af8c:
    uVar11 = FUN_06012520(0);
    uVar13 = thunk_FUN_032e1da0(System_Func<GradientRemap>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar11,uVar13);
  }
  bVar1 = *(byte *)(*(long *)System_Func<FocusInEvent>_TypeInfo + 0x130);
  if ((bVar1 <= bVar16) &&
     (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)System_Func<FocusInEvent>_TypeInfo)) goto LAB_0606af8c;
  bVar1 = *(byte *)(*(long *)System_Func<FocusExitEventArgs>_TypeInfo + 0x130);
  if ((bVar16 < bVar1) ||
     (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)System_Func<FocusExitEventArgs>_TypeInfo)) goto LAB_0606a92c;
  plVar9 = *(long **)(param_2 + 0x60);
  if (plVar9 != (long *)0x0) {
    bVar16 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
    if ((bVar16 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar16 * 8 + -8) ==
        *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
      lVar14 = FUN_061ac6b8(plVar9,0);
      if (lVar14 == 0) goto LAB_0606af88;
      uVar10 = FUN_057aa92c(*(undefined8 *)(lVar14 + 0x18),*(undefined8 *)PTR_DAT_07285080,0);
      if ((uVar10 & 1) == 0) goto LAB_0606aa58;
      plVar9 = *(long **)(param_2 + 0x60);
      uVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                   System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                                 );
      if (plVar9 == (long *)0x0) {
LAB_0606aa24:
        plVar9 = (long *)0x0;
      }
      else {
        bVar16 = *(byte *)(*(long *)puVar3 + 0x130);
        if (*(byte *)(*plVar9 + 0x130) < bVar16) goto LAB_0606aa24;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar16 * 8 + -8) != *(long *)puVar3) {
          plVar9 = (long *)0x0;
        }
      }
      FUN_0606a570(uVar11,plVar9);
      *(undefined8 *)(param_1 + 0x18) = uVar11;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x18),uVar11);
    }
  }
LAB_0606aa58:
  if (plVar18[10] != 0) {
    uVar10 = thunk_FUN_057aa644(*(undefined8 *)(plVar18[10] + 0x18),*(undefined8 *)PTR_DAT_07285080,
                                0);
    plVar9 = (long *)plVar18[10];
    if (plVar9 != (long *)0x0) {
      if ((uVar10 & 1) == 0) {
        lVar14 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      }
      else {
        lVar14 = plVar9[2];
      }
      *(long *)(param_1 + 0x10) = lVar14;
      thunk_FUN_0333a630();
      lVar14 = *(long *)(param_1 + 0x18);
      if (((lVar14 == 0) || (*(long *)(lVar14 + 0x28) == 0)) ||
         (*(int *)(*(long *)(lVar14 + 0x28) + 0x10) < 1)) {
        lVar14 = plVar18[10];
      }
      else {
        lVar14 = *(long *)(lVar14 + 0x20);
      }
      *(long *)(param_1 + 0x20) = lVar14;
      thunk_FUN_0333a630();
      plVar9 = (long *)(param_1 + 0x10);
      lVar14 = *plVar9;
      if ((lVar14 == 0) || (*(int *)(lVar14 + 0x10) == 0)) {
        if (plVar18[0xb] == 0) goto LAB_0606af88;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(plVar18[0xb] + 0x50);
        thunk_FUN_0333a630(plVar9);
        *(undefined8 *)(param_1 + 0x20) = 0;
        thunk_FUN_0333a630((undefined8 *)(param_1 + 0x20),0);
        lVar14 = *(long *)(param_1 + 0x10);
      }
      uVar10 = thunk_FUN_057aa644(lVar14,*(undefined8 *)System_Func<GrabInteractable>_TypeInfo,0);
      if ((uVar10 & 1) != 0) {
        *plVar9 = *(long *)PTR_DAT_07285078;
        thunk_FUN_0333a630(plVar9);
      }
      if (plVar18[0xc] != 0) {
        lVar14 = FUN_061a2630(plVar18[0xc],0);
        puVar7 = System_Func<ExtensionMethodCache>_TypeInfo;
        puVar6 = System_Func<ExecuteCommandEvent>_TypeInfo;
        puVar5 = System_Func<Encoding>_TypeInfo;
        puVar4 = System_Func<DropdownItem>_TypeInfo;
        puVar3 = System_Func<DependencyStatus>_TypeInfo;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar18 = (long *)(param_1 + 0x70);
        while (uVar10 = FUN_061a293c(lVar14,0), puVar2 = PTR_DAT_07279f60, (uVar10 & 1) != 0) {
          plVar9 = (long *)FUN_061a29dc(lVar14,0);
          if (plVar9 != (long *)0x0) {
            lVar15 = *plVar9;
            bVar16 = *(byte *)(lVar15 + 0x130);
            bVar1 = *(byte *)(*(long *)System_Func<DetachFromPanelEvent>_TypeInfo + 0x130);
            if ((bVar16 < bVar1) ||
               (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)System_Func<DetachFromPanelEvent>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_032d618c(plVar9);
            }
            bVar1 = *(byte *)(*(long *)System_Func<DropEventArgs>_TypeInfo + 0x130);
            if ((bVar1 <= bVar16) &&
               (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)System_Func<DropEventArgs>_TypeInfo)) {
              lVar15 = plVar9[10];
              if (*(int *)(*(long *)PTR_DAT_0727f070 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar8 = FUN_058aa934(lVar15,0,0);
              *(undefined4 *)(param_1 + 0x30) = uVar8;
              lVar15 = *plVar9;
              bVar16 = *(byte *)(lVar15 + 0x130);
            }
            bVar1 = *(byte *)(*(long *)System_Func<Flow>_TypeInfo + 0x130);
            if ((bVar1 <= bVar16) &&
               (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)System_Func<Flow>_TypeInfo)) {
              lVar15 = plVar9[10];
              if (*(int *)(*(long *)PTR_DAT_0727f070 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar8 = FUN_058aa934(lVar15,0,0);
              *(undefined4 *)(param_1 + 0x34) = uVar8;
              lVar15 = *plVar9;
              bVar16 = *(byte *)(lVar15 + 0x130);
            }
            bVar1 = *(byte *)(*(long *)System_Func<Enum>_TypeInfo + 0x130);
            if ((bVar1 <= bVar16) &&
               (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)System_Func<Enum>_TypeInfo)) {
              lVar15 = plVar9[10];
              if (*(int *)(*(long *)PTR_DAT_0727f070 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar8 = FUN_058aa934(lVar15,0,0);
              *(undefined4 *)(param_1 + 0x38) = uVar8;
              lVar15 = *plVar9;
              bVar16 = *(byte *)(lVar15 + 0x130);
            }
            bVar1 = *(byte *)(*(long *)System_Func<FocusEnterEventArgs>_TypeInfo + 0x130);
            if ((bVar1 <= bVar16) &&
               (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)System_Func<FocusEnterEventArgs>_TypeInfo)) {
              *(long *)(param_1 + 0x40) = plVar9[10];
              thunk_FUN_0333a630();
              lVar15 = *plVar9;
              bVar16 = *(byte *)(lVar15 + 0x130);
            }
            bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
            if ((bVar1 <= bVar16) &&
               (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
              uVar10 = FUN_057ab1f0(*plVar18,0);
              if ((uVar10 & 1) == 0) {
                lVar15 = FUN_057aaeec(*plVar18,*(undefined8 *)PTR_DAT_0727c6b0,plVar9[10],0);
              }
              else {
                lVar15 = plVar9[10];
              }
              *plVar18 = lVar15;
              thunk_FUN_0333a630(plVar18);
              lVar15 = *plVar9;
              bVar16 = *(byte *)(lVar15 + 0x130);
            }
            bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
            if ((bVar1 <= bVar16) &&
               (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar6)) {
              *(long *)(param_1 + 0x60) = plVar9[10];
              thunk_FUN_0333a630();
              lVar15 = *plVar9;
              bVar16 = *(byte *)(lVar15 + 0x130);
            }
            bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
            if ((bVar1 <= bVar16) &&
               (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar7)) {
              *(long *)(param_1 + 0x68) = plVar9[10];
              thunk_FUN_0333a630();
              lVar15 = *plVar9;
              bVar16 = *(byte *)(lVar15 + 0x130);
            }
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((bVar1 <= bVar16) &&
               (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
              *(long *)(param_1 + 0x50) = plVar9[10];
              thunk_FUN_0333a630();
              lVar15 = *plVar9;
              bVar16 = *(byte *)(lVar15 + 0x130);
            }
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((bVar1 <= bVar16) &&
               (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
              *(long *)(param_1 + 0x58) = plVar9[10];
              thunk_FUN_0333a630();
            }
          }
        }
        plVar18 = (long *)thunk_FUN_032a55a4(lVar14,*(undefined8 *)PTR_DAT_07279f60);
        if (plVar18 != (long *)0x0) {
          lVar14 = *plVar18;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar10 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0606af44;
              }
              uVar10 = uVar10 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_032937ac(plVar18,*(long *)puVar2,0);
LAB_0606af44:
          (*(code *)*puVar12)(plVar18,puVar12[1]);
        }
LAB_0606a92c:
        puVar3 = System_Func<GeometryChangedEvent>_TypeInfo;
        if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0)
            == 0) {
          thunk_FUN_032cd7c0();
        }
        lVar14 = FUN_06073f60(param_2,*(undefined8 *)puVar3,0);
        if (lVar14 != 0) {
          *(long *)(param_1 + 0x48) = lVar14;
          thunk_FUN_0333a630((long *)(param_1 + 0x48),lVar14);
          return;
        }
        return;
      }
    }
  }
LAB_0606af88:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


