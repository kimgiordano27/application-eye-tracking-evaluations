/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$AddGizmoRenderer
ENTRY_POINT: 01b3eef0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__AddGizmoRenderer
               (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long unaff_x21;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0103c244(param_1);
  }
  plVar2 = (long *)FUN_0133b020(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xe8));
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x198))
                      (plVar2,*param_2,*param_3,*(undefined8 *)(*plVar2 + 0x1a0));
    if (iVar1 != 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    plVar2 = (long *)FUN_01339d90(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x108));
    if (plVar2 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar2 + 0x198))
                        (plVar2,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_3 + 1),
                         *(undefined8 *)(*plVar2 + 0x1a0));
      if (iVar1 != 0) {
        return;
      }
      lVar3 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      plVar2 = (long *)FUN_0133b020(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x128));
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x198))
                          (plVar2,param_2[2],param_3[2],*(undefined8 *)(*plVar2 + 0x1a0));
        if (iVar1 != 0) {
          return;
        }
        lVar3 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0103c244();
        }
        plVar2 = (long *)FUN_01339d90(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x148));
        if (plVar2 != (long *)0x0) {
          iVar1 = (**(code **)(*plVar2 + 0x198))
                            (plVar2,*(undefined4 *)(param_2 + 3),*(undefined4 *)(param_3 + 3),
                             *(undefined8 *)(*plVar2 + 0x1a0));
          if (iVar1 != 0) {
            return;
          }
          lVar3 = *(long *)(unaff_x21 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0103c244();
          }
          plVar2 = (long *)FUN_01335870(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x168));
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01b3f024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x198))
                      (plVar2,*(undefined1 *)((long)param_2 + 0x1c),
                       *(byte *)((long)param_3 + 0x1c) & 1,*(undefined8 *)(*plVar2 + 0x1a0));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


