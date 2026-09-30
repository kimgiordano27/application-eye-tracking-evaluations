/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$PlayHaptics
ENTRY_POINT: 076e8954
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__PlayHaptics
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  
  FUN_09805588(param_1,param_2,0);
  if (*(long *)(unaff_x19 + 400) != 0) {
    WebSocketSharp_Net_ChunkedRequestStream__onRead(0x3f800000,*(long *)(unaff_x19 + 400),0);
    if (*(long *)(unaff_x19 + 0x198) != 0) {
      FUN_076ea800();
      if (*(long *)(unaff_x19 + 0x1b8) != 0) {
        FUN_076e9ae8(*(long *)(unaff_x19 + 0x1b8),1);
        if (*(char *)(unaff_x19 + 0x1d4) == '\0') {
LAB_076e8a20:
          lVar2 = *(long *)(unaff_x19 + 0x308);
          *(undefined1 *)(unaff_x19 + 0x1c0) = 1;
          if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x076e8a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28))
            ;
            return;
          }
          return;
        }
        plVar3 = *(long **)(unaff_x19 + 0x150);
        uVar1 = FUN_07a3b850(unaff_x19 + 0x1c8,0);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x5f0));
          plVar3 = *(long **)(unaff_x19 + 0x158);
          uVar1 = FUN_07a3b850(unaff_x19 + 0x1cc,0);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x5f0));
            plVar3 = *(long **)(unaff_x19 + 0x160);
            uVar1 = FUN_07a3b850(unaff_x19 + 0x1d0,0);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x5f0));
              *(undefined1 *)(unaff_x19 + 0x1d4) = 0;
              goto LAB_076e8a20;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


