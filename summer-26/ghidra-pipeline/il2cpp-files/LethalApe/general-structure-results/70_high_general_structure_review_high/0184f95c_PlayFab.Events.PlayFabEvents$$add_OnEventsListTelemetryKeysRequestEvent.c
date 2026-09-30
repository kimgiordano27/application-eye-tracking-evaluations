/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnEventsListTelemetryKeysRequestEvent
ENTRY_POINT: 0184f95c
PROGRAM: LethalApe-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8 PlayFab_Events_PlayFabEvents__add_OnEventsListTelemetryKeysRequestEvent(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  thunk_FUN_009efa0c(PTR_DAT_02c042e8);
  thunk_FUN_009efa0c(PTR_DAT_02bfa370);
  thunk_FUN_009efa0c(PTR_DAT_02bc82a8);
  thunk_FUN_009efa0c(PTR_DAT_02bbc030);
  *(undefined1 *)(unaff_x20 + 0xc07) = 1;
  puVar1 = PTR_DAT_02bc82a8;
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    uVar2 = System_EmptyArray<KeyValuePair<object,_object>>___cctor
                      (*(long *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_02c042e8);
    uVar3 = FUN_00a19040(*(undefined8 *)puVar1,uVar2);
    if ((*(long *)(unaff_x19 + 0x58) != 0) &&
       (lVar4 = FUN_00d3ab70(*(long *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_02bfa370),
       lVar4 != 0)) {
      FUN_013f8f0c(lVar4,uVar3,0,*(undefined8 *)PTR_DAT_02bbc030);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


