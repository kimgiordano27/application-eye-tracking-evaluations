/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle$$PointAtTarget
ENTRY_POINT: 03609e0c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;repeated_pose_getters;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_MultiAnchorTeleportReticle__PointAtTarget
               (float param_1,float param_2,float param_3,long param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_4 != 0) {
    fVar3 = param_2;
    fVar5 = param_3;
    uVar1 = UnityEngine_Transform__get_forward(param_4,0);
    fVar4 = fVar3;
    fVar6 = fVar5;
    fVar2 = (float)UnityEngine_Transform__get_position(param_4,0);
    UnityEngine_Quaternion__LookRotation
              (uVar1,fVar3,fVar5,param_1 - fVar2,param_2 - fVar4,param_3 - fVar6,0);
    UnityEngine_Transform__set_rotation(param_4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


