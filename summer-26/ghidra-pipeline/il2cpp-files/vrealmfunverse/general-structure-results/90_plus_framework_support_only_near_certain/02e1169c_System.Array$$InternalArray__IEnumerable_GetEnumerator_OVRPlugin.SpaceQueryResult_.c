/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02e1169c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>(int param_1)

{
  char in_NG;
  char in_OV;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar7;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((in_NG == in_OV) || (param_1 != *(int *)(unaff_x19 + 0x30))) {
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x28),0);
    return 0;
  }
  plVar7 = *(long **)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x20) = unaff_w20;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0631cb88) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02e11724;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)PTR_DAT_0631cb88,0);
LAB_02e11724:
    uVar2 = (*(code *)*puVar1)(plVar7,unaff_w20,puVar1[1]);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      uVar3 = FUN_02e10b48(*(long *)(unaff_x19 + 0x10),uVar2);
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      FUN_036184b0(&stack0x00000010,uVar2,uVar3,*(undefined8 *)PTR_DAT_0631cb90);
      uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)PTR_DAT_0631cb58);
      *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x28),uVar2);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


