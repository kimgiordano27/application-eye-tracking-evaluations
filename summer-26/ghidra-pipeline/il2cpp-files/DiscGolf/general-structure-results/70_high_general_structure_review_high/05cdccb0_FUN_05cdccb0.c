/*
FUNCTION_NAME: FUN_05cdccb0
ENTRY_POINT: 05cdccb0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05cdccb0(long param_1,long param_2,long *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long local_38;
  
  if ((DAT_06dc2d41 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ffab0);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_TryCreateOneFingerGestureOnTouchBegan__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_TryCreateOneFingerGestureOnTouchBegan__
                );
    FUN_02d965b8(PTR_DAT_069ff488);
    FUN_02d965b8(PTR_DAT_06a0a498);
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_Update__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_add_onGestureStarted__
                );
    FUN_02d965b8(PTR_DAT_06a10f68);
    FUN_02d965b8(PTR_DAT_069fc220);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_get_arSessionOrigin__
                );
    DAT_06dc2d41 = 1;
  }
  local_38 = 0;
  if ((param_3 == (long *)0x0) ||
     (lVar4 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0)),
     param_2 == 0)) goto LAB_05cdcfa8;
  iVar2 = FUN_053728f8(param_2,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_get_arSessionOrigin__
                       ,0);
  if (iVar2 != -1) {
    iVar2 = iVar2 + 4;
    iVar3 = FUN_05372c7c(param_2,0x28,0);
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_2 + 0x10);
    }
    if (iVar3 - iVar2 != 0 && iVar2 <= iVar3) {
      lVar5 = FUN_0536f444(param_2,iVar2,iVar3 - iVar2,0);
      uVar6 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069ffab0,4);
      FUN_05411dc0(uVar6,*(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_TryCreateOneFingerGestureOnTouchBegan__
                   ,0);
      if ((((lVar5 != 0) && (lVar5 = FUN_053722a8(lVar5,uVar6,0), lVar5 != 0)) &&
          (lVar7 = FUN_0536f9ec(lVar5,*(undefined8 *)PTR_DAT_06a10f68,
                                *(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_add_onGestureStarted__
                                ,0), lVar7 != 0)) &&
         ((uVar6 = FUN_0536f9ec(lVar7,*(undefined8 *)PTR_DAT_06a0a498,
                                *(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_Update__
                                ,0), lVar4 != 0 && (lVar7 = FUN_05c0a8f0(lVar4,0), lVar7 != 0)))) {
        if ((0 < *(int *)(lVar7 + 0x10)) &&
           (sVar1 = FUN_053674f8(lVar7,*(int *)(lVar7 + 0x10) + -1,0), sVar1 != 0x2f)) {
          lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_TryCreateOneFingerGestureOnTouchBegan__
                                    );
          FUN_05c53704(lVar8,lVar4,0);
          uVar9 = FUN_05362cb4(lVar7,*(undefined8 *)PTR_DAT_069fc220,0);
          if (lVar8 == 0) goto LAB_05cdcfa8;
          FUN_05c53c74(lVar8,uVar9,0);
          lVar4 = FUN_05c53d34(lVar8,0);
        }
        if (*(int *)(*(long *)PTR_DAT_069ff488 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar10 = FUN_05c135d8(lVar4,uVar6,&local_38,0);
        if ((uVar10 & 1) != 0) {
          if (lVar4 == 0) goto LAB_05cdcfa8;
          uVar10 = FUN_05c142ec(lVar4,local_38,0);
          if ((uVar10 & 1) != 0) {
            lVar4 = FUN_05c0b63c(lVar4,0);
            if (((lVar4 == 0) || (local_38 == 0)) || (lVar7 = FUN_05c0b63c(local_38,0), lVar7 == 0))
            goto LAB_05cdcfa8;
            if (*(int *)(lVar7 + 0x18) + -1 == *(int *)(lVar4 + 0x18)) {
              *(long *)(param_1 + 0xf8) = local_38;
              LeanTween__value((long *)(param_1 + 0xf8));
              return;
            }
          }
        }
        uVar6 = thunk_FUN_02dfd288(
                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_get_raycastMask__
                                  );
        uVar6 = FUN_0534e494(uVar6,lVar5,0);
        thunk_FUN_02dfd288(PTR_DAT_06a176a8);
        uVar9 = thunk_FUN_02dd3144();
        FUN_054d078c(uVar9,uVar6,0);
        uVar6 = thunk_FUN_02dfd288(
                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_get_raycastTriggerInteraction__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,uVar6);
      }
LAB_05cdcfa8:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  return;
}


