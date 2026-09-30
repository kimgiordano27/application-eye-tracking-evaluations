/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_4
ENTRY_POINT: 076ffd5c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_4(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 *unaff_x22;
  undefined8 *unaff_x27;
  
  if (unaff_x20 != 0) {
    FUN_076fffdc();
    lVar2 = *(long *)(unaff_x19 + 0x40);
    uVar1 = thunk_FUN_0448520c(*unaff_x22);
    FUN_073a1770();
    if (lVar2 != 0) {
      FUN_0770008c(lVar2,uVar1);
      lVar2 = *(long *)(unaff_x19 + 0x48);
      uVar1 = thunk_FUN_0448520c(*unaff_x22);
      FUN_073a1770();
      if (lVar2 != 0) {
        FUN_076ffe7c(lVar2,uVar1);
        lVar2 = *(long *)(unaff_x19 + 0x48);
        uVar1 = thunk_FUN_0448520c(*unaff_x22);
        FUN_073a1770();
        if (lVar2 != 0) {
          FUN_076fff2c(lVar2,uVar1);
          lVar2 = *(long *)(unaff_x19 + 0x48);
          uVar1 = thunk_FUN_0448520c(*unaff_x27);
          FUN_0749acec();
          if (lVar2 != 0) {
            FUN_076fffdc(lVar2,uVar1);
            lVar2 = *(long *)(unaff_x19 + 0x48);
            uVar1 = thunk_FUN_0448520c(*unaff_x22);
            FUN_073a1770();
            if (lVar2 != 0) {
              FUN_0770008c(lVar2,uVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


