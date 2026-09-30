/*
FUNCTION_NAME: FUN_05bb13dc
ENTRY_POINT: 05bb13dc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_05bb13dc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((DAT_06b81e68 & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_TryCreateOneFingerGestureOnTouchBegan__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastMask__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_arSessionOrigin__
                );
    DAT_06b81e68 = 1;
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
LAB_05bb151c:
    FUN_05bae134();
    return;
  }
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    uVar6 = *(undefined8 *)
             Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_arSessionOrigin__
    ;
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastMask__
           ) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
          goto LAB_05bb1494;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_02d9a5d4(plVar5,*(long *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastMask__
                          ,4);
LAB_05bb1494:
    (*(code *)*puVar1)(plVar5,uVar6,3,puVar1[1]);
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) ==
              *(long *)
               Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_TryCreateOneFingerGestureOnTouchBegan__
             ) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xb) * 0x10 + 0x138);
            goto LAB_05bb1508;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_02d9a5d4(plVar5,*(long *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_TryCreateOneFingerGestureOnTouchBegan__
                            ,0xb);
LAB_05bb1508:
      (*(code *)*puVar1)(plVar5,puVar1[1]);
      FUN_05bb0b2c(param_1);
      goto LAB_05bb151c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


