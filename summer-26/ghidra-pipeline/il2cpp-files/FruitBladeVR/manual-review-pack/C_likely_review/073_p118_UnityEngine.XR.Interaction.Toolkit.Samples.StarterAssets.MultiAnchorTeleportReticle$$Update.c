/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle$$Update
ENTRY_POINT: 03609cf4
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior
*/


void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_MultiAnchorTeleportReticle__Update
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  
  puVar1 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  if ((DAT_03ef6921 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef6921 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x1f0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar2 = UnityEngine_Object__op_Inequality(lVar4,0,0);
      if ((uVar2 & 1) == 0) {
        if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
          UnityEngine_UI_Image__set_fillAmount
                    (*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x1e8),*(long *)(param_1 + 0x20),0)
          ;
          fVar5 = (float)UnityEngine_Time__get_time(0);
          if (fVar5 - *(float *)(param_1 + 0x48) < *(float *)(param_1 + 0x38)) {
            return;
          }
          UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_MultiAnchorTeleportReticle__UpdatePotentialDestinationIndicator
                    (param_1);
          return;
        }
      }
      else if ((*(long *)(param_1 + 0x28) != 0) &&
              (uVar3 = UnityEngine_GameObject__get_transform(*(long *)(param_1 + 0x28),0),
              lVar4 != 0)) {
        UnityEngine_Transform__get_position(lVar4,0);
        UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_MultiAnchorTeleportReticle__PointAtTarget
                  (uVar3);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  return;
}


