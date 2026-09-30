/*
FUNCTION_NAME: FUN_0787bb0c
ENTRY_POINT: 0787bb0c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0787bb0c(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  undefined1 local_50 [16];
  int local_34;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_07d95c10;
  if ((DAT_082727de & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwistGesture>_set_raycastMask__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwistGesture>_set_raycastTriggerInteraction__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_Update__
                );
    FUN_0373b518(PTR_DAT_07d95c10);
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_get_xrOrigin__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_remove_onGestureStarted__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_set_arSessionOrigin__
                );
    DAT_082727de = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar1 = PTR_DAT_07d86440;
  param_2 = param_2 + -1;
  local_34 = param_2;
  if (-1 < param_2) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
LAB_0787bd60:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (param_2 < *(int *)(lVar7 + 0x18)) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      local_50 = FUN_04b8476c(lVar7,param_2,
                              *(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwistGesture>_set_raycastTriggerInteraction__
                             );
      if ((local_50._8_8_ & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar4 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&local_34);
        puVar6 = (undefined8 *)
                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_set_arSessionOrigin__
        ;
      }
      else {
        if (0 < local_50._12_4_) {
          local_50._0_8_ = param_3;
          thunk_FUN_037aeb94(local_50,param_3);
          lVar7 = *(long *)(param_1 + 0x10);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          if (lVar7 != 0) {
            FUN_04b847c4(lVar7,param_2,local_50._0_8_,local_50._8_8_,
                         *(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_Update__
                        );
            return;
          }
          goto LAB_0787bd60;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar4 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&local_34);
        puVar6 = (undefined8 *)
                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_remove_onGestureStarted__
        ;
      }
      uVar5 = *puVar6;
      goto LAB_0787bd14;
    }
  }
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_get_xrOrigin__
  ;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar4 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&local_34);
  uVar5 = *(undefined8 *)puVar3;
LAB_0787bd14:
  uVar4 = FUN_060b76a8(uVar5,uVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar1);
  }
  FUN_0755de80(uVar4,0);
  return;
}


