/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 076dba28
PROGRAM: m3ar-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__EncodeMrcFrame(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  FUN_0403162c();
  *(undefined1 *)(unaff_x20 + 0x27b) = 1;
  puVar1 = PTR_DAT_08fae1e8;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    return;
  }
  lVar4 = *(long *)(unaff_x19 + 0x28);
  lVar2 = *(long *)PTR_DAT_08fae1e8;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar3[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *puVar3;
    lVar5 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fae1d0);
    FUN_06df66f0(lVar5,uVar6,*(undefined8 *)PTR_DAT_08fae1e0,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar5;
  }
  if (lVar4 != 0) {
    FUN_0469fb18(lVar4,lVar5,*(undefined8 *)PTR_DAT_08fae1d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


