/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSyncSession_GetSessionId
ENTRY_POINT: 0195ada0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Platform_CAPI__ovr_NetSyncSession_GetSessionId(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  uVar2 = FUN_0267bd34(*unaff_x25,0);
  *(undefined4 *)(unaff_x19 + 0xa8) = uVar2;
  uVar2 = FUN_0267bd34(*unaff_x24,0);
  *(undefined4 *)(unaff_x19 + 0xac) = uVar2;
  uVar2 = FUN_0267bd34(*unaff_x23,0);
  *(undefined4 *)(unaff_x19 + 0xb0) = uVar2;
  uVar2 = FUN_0267bd34(*unaff_x22,0);
  *(undefined4 *)(unaff_x19 + 0xb4) = uVar2;
  lVar3 = FUN_00da4fb8(*unaff_x21,5);
  uVar2 = FUN_0267bd34(*unaff_x20,0);
  puVar1 = Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeViewDataUpdater>__;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined4 *)(lVar3 + 0x20) = uVar2;
    uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
    puVar1 = StringLiteral_879;
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined4 *)(lVar3 + 0x24) = uVar2;
      uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
      puVar1 = 
      Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__;
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined4 *)(lVar3 + 0x28) = uVar2;
        uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
        puVar1 = Method_System_Collections_Generic_Dictionary<Type,_IActiveStateModel>_set_Item__;
        if (3 < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + 0x2c) = uVar2;
          uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
          if (4 < *(uint *)(lVar3 + 0x18)) {
            *(undefined4 *)(lVar3 + 0x30) = uVar2;
            *(long *)(unaff_x19 + 0xb8) = lVar3;
            thunk_FUN_0268a01c();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


