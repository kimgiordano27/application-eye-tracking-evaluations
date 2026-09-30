/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$UpdateCursorStyle
ENTRY_POINT: 061430bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void UnityEngine_UIElements_VisualElement__UpdateCursorStyle(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
  if ((lVar3 != 0) && (plVar2 = *(long **)(lVar3 + 0x18), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    lVar3 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
    if (lVar3 != 0) {
      plVar2 = *(long **)(lVar3 + 0x18);
      iVar1 = FUN_060b1ea4(0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_ARFoundation_InternalUtils_SubsystemUtils_TryGetLoadedSubsystem<XRSessionSubsystem>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)
                            Method_UnityEngine_XR_ARFoundation_InternalUtils_SubsystemUtils_TryGetLoadedSubsystem<XRSessionSubsystem>__
                          );
      }
      if (DAT_06bca388 == (code *)0x0) {
        DAT_06bca388 = (code *)FUN_02f0872c("UnityEngine.GUIUtility::get_pixelsPerPoint()");
      }
      fVar4 = (float)(*DAT_06bca388)();
      lVar3 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) && (plVar2 != (long *)0x0)
         ) {
        fVar5 = *(float *)(lVar3 + 0x14);
        fVar6 = (float)iVar1 / fVar4;
        if (fVar5 <= (float)iVar1 / fVar4) {
          fVar6 = fVar5;
        }
        (**(code **)(*plVar2 + 0x1d8))(0,fVar6,plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
        lVar3 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
        if ((lVar3 != 0) && (plVar2 = *(long **)(lVar3 + 0x18), plVar2 != (long *)0x0)) {
          (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
          lVar3 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
          if (lVar3 != 0) {
            plVar2 = *(long **)(lVar3 + 0x18);
            iVar1 = FUN_060b1ecc(0);
            if (DAT_06bca388 == (code *)0x0) {
              DAT_06bca388 = (code *)FUN_02f0872c("UnityEngine.GUIUtility::get_pixelsPerPoint()");
            }
            fVar4 = (float)(*DAT_06bca388)();
            lVar3 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
            if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) &&
               (plVar2 != (long *)0x0)) {
              fVar5 = *(float *)(lVar3 + 0x1c);
              fVar6 = (float)iVar1 / fVar4;
              if (fVar5 <= (float)iVar1 / fVar4) {
                fVar6 = fVar5;
              }
              (**(code **)(*plVar2 + 0x1e8))(0,fVar6,plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
              lVar3 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
              if (lVar3 != 0) {
                FUN_0614438c(*(undefined8 *)(lVar3 + 0x28));
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


