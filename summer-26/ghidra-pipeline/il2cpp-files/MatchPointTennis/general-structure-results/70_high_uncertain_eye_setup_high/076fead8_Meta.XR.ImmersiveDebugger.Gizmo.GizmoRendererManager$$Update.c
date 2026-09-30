/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Update
ENTRY_POINT: 076fead8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Update(long param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  plVar1 = *(long **)(param_1 + 0x38);
  uVar10 = 0x3f800000;
  uVar9 = 0x3f800000;
  uVar8 = 0x3f800000;
  uVar7 = 0x3f800000;
  *(byte *)(param_1 + 0x7c) = param_2 & 1;
  if ((param_2 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) goto LAB_076febc8;
    uVar7 = *(undefined4 *)(lVar2 + 0x28);
    uVar8 = *(undefined4 *)(lVar2 + 0x2c);
    uVar9 = *(undefined4 *)(lVar2 + 0x30);
    uVar10 = *(undefined4 *)(lVar2 + 0x34);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(uVar7,uVar8,uVar9,uVar10,plVar1,*(undefined8 *)(*plVar1 + 0x2b0))
    ;
    plVar1 = *(long **)(param_1 + 0x30);
    uVar10 = 0x3f800000;
    uVar9 = 0x3f800000;
    uVar8 = 0x3f800000;
    uVar7 = 0x3f800000;
    if ((param_2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) goto LAB_076febc8;
      uVar7 = *(undefined4 *)(lVar2 + 0x28);
      uVar8 = *(undefined4 *)(lVar2 + 0x2c);
      uVar9 = *(undefined4 *)(lVar2 + 0x30);
      uVar10 = *(undefined4 *)(lVar2 + 0x34);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x2a8))
                (uVar7,uVar8,uVar9,uVar10,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
      if (*(long *)(param_1 + 0x50) != 0) {
        FUN_0982674c(*(long *)(param_1 + 0x50),~param_2 & 1,0);
        lVar2 = *(long *)(param_1 + 0x28);
        if (lVar2 != 0) {
          if ((param_2 & 1) == 0) {
            puVar3 = (undefined4 *)(lVar2 + 0x18);
            puVar4 = (undefined4 *)(lVar2 + 0x1c);
            puVar5 = (undefined4 *)(lVar2 + 0x20);
            puVar6 = (undefined4 *)(lVar2 + 0x24);
          }
          else {
            puVar3 = (undefined4 *)(lVar2 + 0x58);
            puVar4 = (undefined4 *)(lVar2 + 0x5c);
            puVar5 = (undefined4 *)(lVar2 + 0x60);
            puVar6 = (undefined4 *)(lVar2 + 100);
          }
          FUN_076febcc(*puVar3,*puVar4,*puVar5,*puVar6,param_1);
          return;
        }
      }
    }
  }
LAB_076febc8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


