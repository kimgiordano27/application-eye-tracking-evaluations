/*
FUNCTION_NAME: FUN_05bb06cc
ENTRY_POINT: 05bb06cc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05bb06cc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_06b81e5e & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_TryCreateOneFingerGestureOnTouchBegan__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_TryCreateOneFingerGestureOnTouchBegan__
                );
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_arSessionOrigin__
                );
    DAT_06b81e5e = 1;
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x78) = 1;
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
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_05bb0798;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_02d9a5d4(plVar5,*(long *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_TryCreateOneFingerGestureOnTouchBegan__
                          ,1);
LAB_05bb0798:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
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
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xd) * 0x10 + 0x138);
            goto LAB_05bb0804;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_02d9a5d4(plVar5,*(long *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_TryCreateOneFingerGestureOnTouchBegan__
                            ,0xd);
LAB_05bb0804:
      (*(code *)*puVar1)(plVar5,puVar1[1]);
      plVar5 = *(long **)(param_1 + 0x20);
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) ==
                *(long *)
                 Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
               ) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
              goto LAB_05bb0870;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_02d9a5d4(plVar5,*(long *)
                                      Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_get_Item__
                              ,7);
LAB_05bb0870:
        (*(code *)*puVar1)(plVar5,puVar1[1]);
        FUN_05bb08a4(param_1,*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_arSessionOrigin__
                    );
        FUN_05bb0b2c(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


