/*
FUNCTION_NAME: FUN_0679e4a4
ENTRY_POINT: 0679e4a4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_9;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0679e4a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_28;
  
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastMask__;
                    /* try { // try from 0679e4ac to 0689e4df has its CatchHandler @ 0679e598 */
  if ((DAT_076e09e9 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastMask__
                      );
                    /* try { // try from 0679e4f8 to 0689e4ff has its CatchHandler @ 0679e594 */
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastTriggerInteraction__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_xrOrigin__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_remove_onGestureStarted__
                      );
                    /* try { // try from 0679e518 to 0689e537 has its CatchHandler @ 0679e590 */
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_arSessionOrigin__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_raycastMask__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OvrAvatarComputeSkinnedPrimitive>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_raycastTriggerInteraction__
                      );
    DAT_076e09e9 = 1;
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_28 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<OvrAvatarComputeSkinnedPrimitive>_get_Current__;
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_03b1b80c(&local_90,param_5,
               *(undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_raycastTriggerInteraction__
               ,&local_28,**(undefined8 **)(*(long *)puVar2 + 0xb8),
               *(undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_remove_onGestureStarted__
              );
  lVar6 = local_28;
  lVar3 = *(long *)puVar1;
  uStack_68 = uStack_88;
  local_70 = local_90;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar1;
  }
  uVar4 = FUN_066a6c70(&local_70,*(long *)(lVar3 + 0xb8) + 0x18,0,0);
  lVar3 = local_28;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  *(undefined8 *)(lVar6 + 0x10) = uVar4;
  uVar4 = FUN_066a6e48(&local_70,*(long *)(*(long *)puVar1 + 0xb8) + 0x20,2,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  if (local_28 != 0) {
    *(undefined4 *)(local_28 + 0x20) = param_7;
    *(undefined4 *)(local_28 + 0x24) = param_1;
    *(undefined4 *)(local_28 + 0x28) = param_2;
    *(undefined4 *)(local_28 + 0x2c) = param_3;
    *(undefined4 *)(local_28 + 0x30) = param_4;
    FUN_0669e5fc(&local_70,0,0);
    puVar2 = 
    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_raycastMask__;
    lVar6 = *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_raycastMask__
    ;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar6);
      lVar6 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar3 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar6);
        lVar6 = *(long *)puVar2;
      }
      uVar4 = **(undefined8 **)(lVar6 + 0xb8);
      lVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastTriggerInteraction__
                                );
      FUN_04980210(lVar3,uVar4,
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_arSessionOrigin__
                   ,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar5 = lVar3;
      thunk_FUN_0333a630(plVar5,lVar3);
    }
    FUN_03b1b978(&local_70,lVar3,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_xrOrigin__
                );
    FUN_066a7708(&local_70,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


