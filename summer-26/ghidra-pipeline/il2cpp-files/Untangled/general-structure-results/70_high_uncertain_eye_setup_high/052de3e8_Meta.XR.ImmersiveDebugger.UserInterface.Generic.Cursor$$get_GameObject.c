/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$get_GameObject
ENTRY_POINT: 052de3e8
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__get_GameObject(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_06d01e20;
  if ((*(byte *)(unaff_x20 + 0x115) & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d01e20);
    *(undefined1 *)(unaff_x20 + 0x115) = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar6,0);
  if ((uVar2 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_066cd30c(uVar6,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(param_1 + 0x20);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x6a8))
                  (plVar3,*(undefined8 *)(param_1 + 0x28),1,0,*(undefined8 *)(*plVar3 + 0x6b0));
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar2 = FUN_066cd30c(uVar6,0);
          if ((uVar2 & 1) != 0) {
            return;
          }
          if (*(long *)(param_1 + 0x28) != 0) {
            lVar4 = FUN_0528df34(*(long *)(param_1 + 0x28),0);
            if (((*(long *)(param_1 + 0x20) != 0) &&
                (lVar5 = FUN_066c67b0(*(long *)(param_1 + 0x20),0), lVar5 != 0)) &&
               (FUN_066d48c0(lVar5,0), lVar4 != 0)) {
              FUN_066d4960(lVar4,0);
              plVar3 = *(long **)(param_1 + 0x20);
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x3a8))
                          (plVar3,*(undefined8 *)(param_1 + 0x28),1,*(undefined8 *)(*plVar3 + 0x3b0)
                          );
                if (*(long *)(param_1 + 0x20) != 0) {
                  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x1e9) = 1;
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


