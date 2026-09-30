/*
FUNCTION_NAME: UnityEngine.UIElements.TextSelectingManipulator$$get_cursorIndex
ENTRY_POINT: 06ccb9c0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_18;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UnityEngine_UIElements_TextSelectingManipulator__get_cursorIndex
               (ulong param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 unaff_w20;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<OVRGLTFAnimatinonNode>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<object>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<Object>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<MethodInfo>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<OpenXRFeature>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToArray<NameAndParameters>__);
    *(undefined1 *)(unaff_x23 + 0x55b) = 1;
  }
  puVar1 = Method_System_Linq_Enumerable_ToArray<OpenXRFeature>__;
  puVar2 = Method_System_Linq_Enumerable_ToArray<Object>__;
  uVar3 = thunk_FUN_032a56a0(*unaff_x22);
  FUN_06ccbb10();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_04a7c984(param_2,param_3,unaff_w20,0,uVar3,*(undefined8 *)puVar1);
  *(undefined1 *)(param_2 + 0x8c) = 1;
  (**(code **)(*param_2 + 0x8b8))(param_2,0,0,*(undefined8 *)(*param_2 + 0x8c0));
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar4 = *(long *)puVar2;
  }
  FUN_06db05b0(param_2,**(undefined8 **)(lVar4 + 0xb8),0);
  puVar1 = Method_System_Linq_Enumerable_ToArray<object>__;
  if (param_2[0x81] != 0) {
    FUN_06db05b0(param_2[0x81],*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),0);
    lVar4 = System_Collections_ObjectModel_ReadOnlyCollection<NativeSlice<ConvertMeshJobData>>__System_Collections_ICollection_get_SyncRoot
                      (param_2,*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      FUN_06db05b0(lVar4,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


