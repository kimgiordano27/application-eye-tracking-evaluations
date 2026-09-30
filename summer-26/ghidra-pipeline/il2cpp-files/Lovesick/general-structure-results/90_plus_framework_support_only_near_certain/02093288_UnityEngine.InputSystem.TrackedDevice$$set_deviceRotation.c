/*
FUNCTION_NAME: UnityEngine.InputSystem.TrackedDevice$$set_deviceRotation
ENTRY_POINT: 02093288
PROGRAM: Lovesick-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputSystem_TrackedDevice__set_deviceRotation(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(PTR_DAT_033ee270);
  thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<ProBuilderMesh>_TypeInfo);
  thunk_FUN_00d48444(DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass0_0_TypeInfo);
  thunk_FUN_00d48444(OVRPlugin_OVRP_1_75_0_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0xd47) = 1;
  iVar1 = **(int **)(*unaff_x24 + 0xb8) + 1;
  **(int **)(*unaff_x24 + 0xb8) = iVar1;
  *(int *)(unaff_x19 + 0x20) = iVar1;
  FUN_017b46ec();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x20;
  lVar3 = thunk_FUN_00d62348(*unaff_x22);
  puVar2 = DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass0_0_TypeInfo;
  if (lVar3 != 0) {
    FUN_0131ac6c(lVar3,*(undefined8 *)
                        System_Collections_Generic_IEnumerable<ProBuilderMesh>_TypeInfo);
    *(long *)(unaff_x19 + 0x28) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      FUN_0131ac6c(lVar3,*(undefined8 *)PTR_DAT_033ee270);
      *(long *)(unaff_x19 + 0x30) = lVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


