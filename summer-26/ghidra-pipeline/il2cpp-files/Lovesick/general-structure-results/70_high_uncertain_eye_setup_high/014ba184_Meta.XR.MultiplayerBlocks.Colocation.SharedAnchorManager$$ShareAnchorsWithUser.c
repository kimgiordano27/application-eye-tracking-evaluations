/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager$$ShareAnchorsWithUser
ENTRY_POINT: 014ba184
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager__ShareAnchorsWithUser(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x3d0));
  thunk_FUN_00d48444(Method_Oculus_Interaction_Input_Visuals_ControllerVisual_HandleUpdated__);
  *(undefined1 *)(unaff_x20 + 0xda8) = 1;
  puVar1 = Method_Oculus_Interaction_Input_Visuals_ControllerVisual_HandleUpdated__;
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_014b9fb4();
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *(long *)puVar1;
  }
  puVar2 = StringLiteral_3234;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d239c(lVar5,uVar6,*(undefined8 *)PTR_DAT_033f53d0,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar5;
  }
  FUN_010dd0f4(uVar3,lVar5,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_SetResult__);
  return;
}


