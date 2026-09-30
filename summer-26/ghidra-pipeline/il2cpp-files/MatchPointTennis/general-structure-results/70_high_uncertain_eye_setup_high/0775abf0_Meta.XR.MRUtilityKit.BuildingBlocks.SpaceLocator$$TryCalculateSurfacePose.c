/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$TryCalculateSurfacePose
ENTRY_POINT: 0775abf0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__TryCalculateSurfacePose(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x538));
  *(undefined1 *)(unaff_x20 + 0x2b1) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_0952c404();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if (unaff_x19 != 0) {
    lVar2 = FUN_04d7a1ac();
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*unaff_x21);
    }
    uVar1 = FUN_09531730(lVar2,0,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_04d7a1ac();
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*unaff_x21);
      }
      uVar1 = FUN_09531730(lVar2,0,0);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if (lVar2 != 0) {
        uVar3 = FUN_094ede70(lVar2,0);
        return uVar3;
      }
    }
    else if (lVar2 != 0) {
      uVar3 = FUN_094ed330(lVar2,0);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


