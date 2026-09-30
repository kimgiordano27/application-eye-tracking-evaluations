/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector2f>
ENTRY_POINT: 0213355c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 126
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


long System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector2f>(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x980));
  puVar3 = *(undefined8 **)(unaff_x19 + 0x38);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_01dde854();
    puVar3 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  uVar5 = *puVar3;
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar5 = FUN_033a87c8(uVar5,0);
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*(long *)
                        Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                      );
  }
  lVar1 = FUN_03d790b4(uVar5,0,0);
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8(lVar4);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_01de26bc(lVar1,lVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar1,lVar4);
    }
  }
  return lVar2;
}


