/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_3
ENTRY_POINT: 0637e59c
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


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_3(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 in_stack_00000008;
  undefined8 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 uStack000000000000001c;
  undefined8 uStack0000000000000024;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08412df0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x23 + 0x9dd) = unaff_w24;
  if (unaff_x22 != 0) {
    if (unaff_x20 == 0) {
      return 0xffffffff;
    }
    if (*(long *)(unaff_x22 + 0x18) == 0) {
      return 0xffffffff;
    }
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      lVar1 = FUN_05b961dc(DAT_083dfcb0);
      if ((((lVar1 != 0) && (lVar1 = FUN_0631798c(lVar1,0), lVar1 != 0)) &&
          (*(long *)(lVar1 + 0x18) != 0)) && (*(long *)(unaff_x21 + 0x18) != 0)) {
        auVar3 = FUN_042b8b3c(*(long *)(unaff_x21 + 0x18),*(undefined4 *)(unaff_x22 + 0x18),
                              DAT_083eb550);
        if (*(long *)(unaff_x21 + 0x20) != 0) {
          auVar4 = FUN_0429e128(*(long *)(unaff_x21 + 0x20),*(undefined4 *)(unaff_x20 + 0x18),
                                DAT_083eafe0);
          lVar1 = *(long *)(unaff_x21 + 0x18);
          if (lVar1 != 0) {
            FUN_0405dfcc(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                         auVar3._0_8_ >> 0x20);
            lVar1 = *(long *)(unaff_x21 + 0x20);
            if (lVar1 != 0) {
              FUN_0405d51c(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                           auVar4._0_8_ >> 0x20);
              if (*(long *)(unaff_x21 + 0x28) != 0) {
                _uStack000000000000000c = auVar3;
                _uStack000000000000001c = auVar4;
                uVar2 = FUN_04395144(*(long *)(unaff_x21 + 0x28),&stack0x00000008,DAT_083ebea0);
                return uVar2;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
  }
  return 0xffffffff;
}


