/*
FUNCTION_NAME: FUN_0787b858
ENTRY_POINT: 0787b858
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


int FUN_0787b858(long param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_082727df & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_TryCreateTwoFingerGestureOnTouchBegan__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_TryCreateTwoFingerGestureOnTouchBegan__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwistGesture>_set_raycastMask__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_Update__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_add_onGestureStarted__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_get_arSessionOrigin__
                );
    FUN_0373b518(PTR_DAT_07d95c10);
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_get_raycastMask__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_get_raycastTriggerInteraction__
                );
    DAT_082727df = 1;
  }
  local_48 = 0;
  local_50 = param_2;
  thunk_FUN_037aeb94(&local_50,param_2);
  uVar3 = local_50;
  puVar2 = PTR_DAT_07d95c10;
  uVar6 = CONCAT71(local_48._1_7_,param_3);
  local_48 = CONCAT44(1,(uint)uVar6 & 0xffffff01);
  uVar6 = local_48;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) goto LAB_0787bb08;
  if (*(int *)(lVar5 + 0x18) < 1) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) goto LAB_0787bb08;
    iVar4 = *(int *)(lVar5 + 0x18);
    if (iVar4 == 0x800) {
      local_54 = 0x800;
      uVar6 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&local_54);
      uVar6 = FUN_060c1fd4(*(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_get_raycastMask__
                           ,*(undefined8 *)
                             Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_get_raycastTriggerInteraction__
                           ,uVar6,0);
      if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d86440);
      }
      FUN_0755de80(uVar6,0);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar2;
      }
      return **(int **)(lVar5 + 0xb8);
    }
    if (*(int *)(*(long *)PTR_DAT_07d95c10 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d95c10);
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_0787bb08;
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_TryCreateTwoFingerGestureOnTouchBegan__
    ;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_0787bb08;
    uVar1 = *(uint *)(lVar5 + 0x18);
    iVar4 = iVar4 + 1;
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      puVar8 = (undefined8 *)(lVar7 + 0x20);
      *puVar8 = uVar3;
      *(undefined8 *)(lVar7 + 0x28) = uVar6;
      thunk_FUN_037aeb94(puVar8,0);
    }
    else {
      FUN_04b84a88(lVar5,uVar3,uVar6,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  else {
    iVar4 = FUN_053b743c(lVar5,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_add_onGestureStarted__
                        );
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar2);
    }
    if (lVar5 == 0) goto LAB_0787bb08;
    FUN_04b847c4(lVar5,iVar4 + -1,uVar3,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_Update__
                );
  }
  if ((param_3 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_0787bb08:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_05b2f3b0(*(long *)(param_1 + 0x18),param_2,iVar4,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_TryCreateTwoFingerGestureOnTouchBegan__
                );
  }
  return iVar4;
}


