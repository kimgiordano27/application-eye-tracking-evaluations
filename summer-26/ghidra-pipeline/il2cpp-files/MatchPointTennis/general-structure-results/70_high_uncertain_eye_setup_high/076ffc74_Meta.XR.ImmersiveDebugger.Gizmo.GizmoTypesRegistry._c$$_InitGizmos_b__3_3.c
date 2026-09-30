/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_3
ENTRY_POINT: 076ffc74
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_3(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 *unaff_x22;
  
  FUN_04447ba8(PTR_DAT_09f1ea40);
  FUN_04447ba8(PTR_DAT_09f2ff18);
  FUN_04447ba8(PTR_DAT_09f2ff10);
  FUN_04447ba8(PTR_DAT_09f2ff20);
  FUN_04447ba8(PTR_DAT_09f2ff28);
  FUN_04447ba8(PTR_DAT_09f2ff30);
  *(undefined1 *)(unaff_x20 + 0xfcf) = 1;
  lVar3 = *(long *)(unaff_x19 + 0x40);
  uVar2 = thunk_FUN_0448520c(*unaff_x22);
  FUN_073a1770();
  if (lVar3 != 0) {
    FUN_076ffe7c(lVar3,uVar2);
    lVar3 = *(long *)(unaff_x19 + 0x40);
    uVar2 = thunk_FUN_0448520c(*unaff_x22);
    FUN_073a1770();
    puVar1 = PTR_DAT_09f2ff18;
    if (lVar3 != 0) {
      FUN_076fff2c(lVar3,uVar2);
      lVar3 = *(long *)(unaff_x19 + 0x40);
      uVar2 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
      FUN_0749acec();
      if (lVar3 != 0) {
        FUN_076fffdc(lVar3,uVar2);
        lVar3 = *(long *)(unaff_x19 + 0x40);
        uVar2 = thunk_FUN_0448520c(*unaff_x22);
        FUN_073a1770();
        if (lVar3 != 0) {
          FUN_0770008c(lVar3,uVar2);
          lVar3 = *(long *)(unaff_x19 + 0x48);
          uVar2 = thunk_FUN_0448520c(*unaff_x22);
          FUN_073a1770();
          if (lVar3 != 0) {
            FUN_076ffe7c(lVar3,uVar2);
            lVar3 = *(long *)(unaff_x19 + 0x48);
            uVar2 = thunk_FUN_0448520c(*unaff_x22);
            FUN_073a1770();
            if (lVar3 != 0) {
              FUN_076fff2c(lVar3,uVar2);
              lVar3 = *(long *)(unaff_x19 + 0x48);
              uVar2 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
              FUN_0749acec();
              if (lVar3 != 0) {
                FUN_076fffdc(lVar3,uVar2);
                lVar3 = *(long *)(unaff_x19 + 0x48);
                uVar2 = thunk_FUN_0448520c(*unaff_x22);
                FUN_073a1770();
                if (lVar3 != 0) {
                  FUN_0770008c(lVar3,uVar2);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


