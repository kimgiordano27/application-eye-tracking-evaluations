/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$set_GameObject
ENTRY_POINT: 052de3f0
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__set_GameObject
               (ulong param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x21 + 0xe20);
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d01e20);
    *(undefined1 *)(unaff_x20 + 0x115) = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  if (*(int *)(*plVar6 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar5,0);
  if ((uVar1 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*plVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar5,0);
    if ((uVar1 & 1) != 0) {
      plVar2 = *(long **)(param_2 + 0x20);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x6a8))
                  (plVar2,*(undefined8 *)(param_2 + 0x28),1,0,*(undefined8 *)(*plVar2 + 0x6b0));
        if (*(long *)(param_2 + 0x20) != 0) {
          uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x98);
          if (*(int *)(*plVar6 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar1 = FUN_066cd30c(uVar5,0);
          if ((uVar1 & 1) != 0) {
            return;
          }
          if (*(long *)(param_2 + 0x28) != 0) {
            lVar3 = FUN_0528df34(*(long *)(param_2 + 0x28),0);
            if (((*(long *)(param_2 + 0x20) != 0) &&
                (lVar4 = FUN_066c67b0(*(long *)(param_2 + 0x20),0), lVar4 != 0)) &&
               (FUN_066d48c0(lVar4,0), lVar3 != 0)) {
              FUN_066d4960(lVar3,0);
              plVar6 = *(long **)(param_2 + 0x20);
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x3a8))
                          (plVar6,*(undefined8 *)(param_2 + 0x28),1,*(undefined8 *)(*plVar6 + 0x3b0)
                          );
                if (*(long *)(param_2 + 0x20) != 0) {
                  *(undefined1 *)(*(long *)(param_2 + 0x20) + 0x1e9) = 1;
                  return;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
  return;
}


