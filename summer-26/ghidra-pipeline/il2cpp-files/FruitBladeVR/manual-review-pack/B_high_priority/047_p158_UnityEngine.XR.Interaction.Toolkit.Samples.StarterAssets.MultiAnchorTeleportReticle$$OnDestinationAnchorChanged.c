/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle$$OnDestinationAnchorChanged
ENTRY_POINT: 0360a078
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_MultiAnchorTeleportReticle__OnDestinationAnchorChanged
               (long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_03ef6923 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef6923 = 1;
  }
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x1f0);
    if (*(int *)(*(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar1 = UnityEngine_Object__op_Inequality(lVar4,0,0);
    lVar2 = *(long *)(param_1 + 0x20);
    if ((uVar1 & 1) == 0) {
      if (lVar2 != 0) {
        UnityEngine_UI_Image__set_fillAmount(0,lVar2,0);
        if (*(long *)(param_1 + 0x28) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x28),0,0);
          return;
        }
      }
    }
    else if (lVar2 != 0) {
      UnityEngine_UI_Image__set_fillAmount(0x3f800000,lVar2,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x30),0,0);
        if (*(long *)(param_1 + 0x28) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x28),1,0);
          if ((*(long *)(param_1 + 0x28) != 0) &&
             (uVar3 = UnityEngine_GameObject__get_transform(*(long *)(param_1 + 0x28),0), lVar4 != 0
             )) {
            UnityEngine_Transform__get_position(lVar4,0);
            UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_MultiAnchorTeleportReticle__PointAtTarget
                      (uVar3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


