/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnEventsSetDataConnectionActiveRequestEvent
ENTRY_POINT: 05258e04
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int PlayFab_Events_PlayFabEvents__add_OnEventsSetDataConnectionActiveRequestEvent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_02d4dc40();
  FUN_02d4dc40(System_Func<Vector3Int,_int>_TypeInfo);
  FUN_02d4dc40(System_Func<Vector4,_float>_TypeInfo);
  FUN_02d4dc40(System_Func<VisualElement,_StyleValues>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x3a5) = 1;
  puVar2 = System_Func<Vector3Int,_int>_TypeInfo;
  puVar1 = System_Func<Vector3,_float>_TypeInfo;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*(long *)(unaff_x19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  FUN_0479a870(&stack0x00000010,*(long *)(unaff_x19 + 0x78),
               *(undefined8 *)System_Func<Vector2Int,_int>_TypeInfo);
  iVar4 = 0;
  while( true ) {
    uVar3 = FUN_04a08dd8(&stack0x00000010,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      FUN_04a08efc(&stack0x00000010,*(undefined8 *)puVar1);
      return iVar4;
    }
    if (in_stack_00000028 == 0) break;
    iVar4 = *(int *)(in_stack_00000028 + 0x14) + iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


