/*
FUNCTION_NAME: Unity.Services.Matchmaker.Backfill.UpdateBackfillTicketRequest$$.ctor
ENTRY_POINT: 05f7e868
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Services_Matchmaker_Backfill_UpdateBackfillTicketRequest___ctor(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x4b8) = in_w8;
  puVar1 = 
  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_063542dc(uVar4,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar3 = FUN_05f76f3c();
    if (lVar3 != 0) {
      FUN_05f77524();
      return;
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar3 = FUN_05f76f3c();
    if (lVar3 != 0) {
      FUN_05f772cc();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


