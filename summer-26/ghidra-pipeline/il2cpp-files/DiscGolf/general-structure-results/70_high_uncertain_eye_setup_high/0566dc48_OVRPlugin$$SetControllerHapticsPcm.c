/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsPcm
ENTRY_POINT: 0566dc48
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerHapticsPcm(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long unaff_x20;
  undefined8 *unaff_x25;
  
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if (*(long *)(unaff_x19 + 0xe8) != 0) {
    FUN_04df8778(*(long *)(unaff_x19 + 0xe8),*unaff_x25);
    if (*(long *)(unaff_x19 + 0x100) != 0) {
      FUN_04df51a0(*(long *)(unaff_x19 + 0x100),
                   *(undefined8 *)System_Collections_Generic_List<IDataNode>_TypeInfo);
      if (*(long *)(unaff_x19 + 0xf8) != 0) {
        FUN_04e02de0(*(long *)(unaff_x19 + 0xf8),
                     *(undefined8 *)
                      System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo
                    );
        lVar2 = *(long *)System_Collections_Generic_List<IContext>_TypeInfo;
        lVar1 = *(long *)(lVar2 + 0x38);
        if (lVar1 == 0) {
          FUN_02dcfd74(lVar2);
          lVar1 = *(long *)(lVar2 + 0x38);
        }
        lVar1 = *(long *)(lVar1 + 0x10);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02dcfd18();
        }
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar1 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02dcfd18();
        }
        *(undefined8 *)(unaff_x19 + 0xb8) = **(undefined8 **)(lVar1 + 0xb8);
        LeanTween__value((undefined8 *)(unaff_x19 + 0xb8));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


