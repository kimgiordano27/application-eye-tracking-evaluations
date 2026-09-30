/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager.<>c__DisplayClass4_1$$.ctor
ENTRY_POINT: 052e33cc
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_1___ctor(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02f07e70(PTR_DAT_06d3d868);
  FUN_02f07e70(PTR_DAT_06d3d9a0);
  *(undefined1 *)(unaff_x21 + 0x14f) = 1;
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    uVar2 = FUN_05241d74();
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x20 + 0x58);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *puVar5 = unaff_x19;
          thunk_FUN_02f411dc(puVar5);
        }
        else {
          FUN_03fd0c9c();
        }
        if (*(long *)(unaff_x20 + 0x50) != 0) {
          FUN_05242864();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


