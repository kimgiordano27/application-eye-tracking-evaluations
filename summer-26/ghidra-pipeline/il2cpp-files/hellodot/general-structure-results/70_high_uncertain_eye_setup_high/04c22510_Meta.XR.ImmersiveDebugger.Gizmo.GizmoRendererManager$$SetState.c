/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$SetState
ENTRY_POINT: 04c22510
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__SetState(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int *unaff_x19;
  long lVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR_DAT_065ce810;
  if (*unaff_x19 == 0) {
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
LAB_04c22604:
    uVar3 = FUN_044a8b84();
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = *(long *)(lVar6 + 0x20);
    if (lVar5 != 0) {
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar4 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),
                         *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x18),
                         *(undefined8 *)(lVar5 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(unaff_x19 + 10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar6 = FUN_04c21640(lVar6,0 < *(int *)(lVar5 + 0x20) - *(int *)(lVar5 + 0x24),
                             *(int *)(lVar5 + 0x24),*(undefined8 *)(lVar5 + 0x28));
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar7 = FUN_04046650(lVar6,0,*(undefined8 *)PTR_DAT_065e1be8);
        uVar4 = FUN_044a8b38();
        if ((uVar4 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar7;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_0309afb4(unaff_x19 + 2);
          return;
        }
        goto LAB_04c22604;
      }
    }
    uVar3 = 0;
  }
  *unaff_x19 = -2;
  puVar2 = PTR_DAT_065ce848;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_0411bcac(unaff_x19 + 2,uVar3 & 1,*(undefined8 *)puVar2);
  return;
}


