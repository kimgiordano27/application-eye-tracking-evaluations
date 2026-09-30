/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSyncSession_GetUserId
ENTRY_POINT: 0195ae1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Platform_CAPI__ovr_NetSyncSession_GetUserId(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  uVar2 = FUN_0267bd34(*param_1);
  puVar1 = StringLiteral_879;
  if (1 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x24) = uVar2;
    uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
    puVar1 = Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__
    ;
    if (2 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x28) = uVar2;
      uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
      puVar1 = Method_System_Collections_Generic_Dictionary<Type,_IActiveStateModel>_set_Item__;
      if (3 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x2c) = uVar2;
        uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
        if (4 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x30) = uVar2;
          *(long *)(unaff_x19 + 0xb8) = unaff_x20;
          thunk_FUN_0268a01c();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


