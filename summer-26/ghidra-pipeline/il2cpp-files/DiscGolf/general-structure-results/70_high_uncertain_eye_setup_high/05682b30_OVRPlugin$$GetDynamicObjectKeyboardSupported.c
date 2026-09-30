/*
FUNCTION_NAME: OVRPlugin$$GetDynamicObjectKeyboardSupported
ENTRY_POINT: 05682b30
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetDynamicObjectKeyboardSupported(ulong param_1,long param_2)

{
  long lVar1;
  undefined4 unaff_w19;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x1c0);
    if (lVar1 != 0) {
      FUN_04df9a98(lVar1,unaff_w19,
                   *(undefined8 *)System_Collections_Generic_List<VolumeStack>_TypeInfo);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


