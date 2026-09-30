/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_7
ENTRY_POINT: 0637e9f4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_7(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long unaff_x21;
  undefined1 auVar3 [16];
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) && (*(long *)(unaff_x21 + 0x10) != 0)) {
    lVar1 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
    if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) && (*(long *)(unaff_x21 + 0x10) != 0)) {
      lVar1 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
      if (lVar1 != 0) {
        if (*(long *)(lVar1 + 0x30) != 0) {
          if (*(long *)(unaff_x21 + 0x10) != 0) {
            lVar1 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
            if (lVar1 != 0) {
              if ((DAT_086de93e & 1) == 0) {
                FUN_0335b6c8(&DAT_083eb4b0,1);
                DataMemoryBarrier(2,3);
                DAT_086de93e = 1;
              }
              if (*(long *)(lVar1 + 0x18) == 0) {
                uVar2 = 0;
              }
              else {
                uVar2 = *(undefined4 *)(*(long *)(lVar1 + 0x18) + 0x30);
              }
              auVar3 = FUN_04004a60(&stack0x00000050,uVar2,0x40);
              return auVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0637eb38 to 0647ec4b has its CatchHandler @ 0637eb38
                       catch() { ... } // from try @ 0637eb38 with catch @ 0637eb38
                       catch() { ... } // from try @ 0637eca8 with catch @ 0637eb38
                       catch() { ... } // from try @ 0637ecd8 with catch @ 0637eb38 */
  FUN_033d1d3c();
}


