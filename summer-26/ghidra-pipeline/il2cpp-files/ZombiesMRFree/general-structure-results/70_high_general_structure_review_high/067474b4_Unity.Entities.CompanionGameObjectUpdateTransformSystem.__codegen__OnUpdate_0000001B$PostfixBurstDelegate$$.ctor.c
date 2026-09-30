/*
FUNCTION_NAME: Unity.Entities.CompanionGameObjectUpdateTransformSystem.__codegen__OnUpdate_0000001B$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 067474b4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnUpdate_0000001B_PostfixBurstDelegate___ctor
               (void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  
  UnityEngine_Timeline_AnimationTrack__set_infiniteClipOffsetRotation();
  if (unaff_x22 != 0) {
    FUN_067129e8();
    lVar2 = *(long *)(unaff_x19 + 0x58);
    uVar1 = UnityEngine_Timeline_AnimationTrack__set_infiniteClipOffsetRotation();
    if (lVar2 != 0) {
      Unity_XR_Oculus_Input_OculusHMD__set_deviceRotation
                (lVar2,uVar1,*(undefined8 *)(unaff_x20 + 0x2a8),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


