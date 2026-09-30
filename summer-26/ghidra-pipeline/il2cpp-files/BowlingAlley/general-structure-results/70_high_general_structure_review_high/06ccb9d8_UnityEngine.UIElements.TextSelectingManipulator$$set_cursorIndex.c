/*
FUNCTION_NAME: UnityEngine.UIElements.TextSelectingManipulator$$set_cursorIndex
ENTRY_POINT: 06ccb9d8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UnityEngine_UIElements_TextSelectingManipulator__set_cursorIndex(void)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  
  thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<object>__);
  thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<Object>__);
  thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<MethodInfo>__);
  thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<OpenXRFeature>__);
  thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<NameAndParameters>__);
  *(undefined1 *)(unaff_x23 + 0x55b) = 1;
  puVar1 = Method_System_Linq_Enumerable_ToArray<Object>__;
  thunk_FUN_032a56a0(*unaff_x22);
  FUN_06ccbb10();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_04a7c984();
  *(undefined1 *)(unaff_x19 + 0x8c) = 1;
  (**(code **)(*unaff_x19 + 0x8b8))();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06db05b0();
  if (unaff_x19[0x81] != 0) {
    FUN_06db05b0(unaff_x19[0x81],*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
    lVar2 = System_Collections_ObjectModel_ReadOnlyCollection<NativeSlice<ConvertMeshJobData>>__System_Collections_ICollection_get_SyncRoot
                      ();
    if (lVar2 != 0) {
      FUN_06db05b0(lVar2,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


