/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$Invoke
ENTRY_POINT: 0583664c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__Invoke(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x22;
  
  if ((*(ushort *)(*(long *)(param_1 + 0x10) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  if (unaff_x22 != 0) {
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090(*(long *)(unaff_x19 + 0x20));
    }
    System_Collections_Generic_Dictionary<object,_DateTime>__GetEnumerator();
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x78);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090();
    }
    if (lVar1 != 0) {
      FUN_049da1a4(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18),
                   *(undefined8 *)PTR_DAT_08494040);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


