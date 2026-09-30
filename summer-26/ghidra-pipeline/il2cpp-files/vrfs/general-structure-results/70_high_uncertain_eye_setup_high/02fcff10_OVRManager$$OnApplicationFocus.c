/*
FUNCTION_NAME: OVRManager$$OnApplicationFocus
ENTRY_POINT: 02fcff10
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationFocus(void)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  code *pcVar5;
  
  lVar2 = thunk_FUN_015d056c();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_015c2790(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
    lVar3 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar5 = *(code **)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x18) + 8);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_015c2790(lVar3);
  }
  (*pcVar5)(lVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_015c2790();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x20);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_015c2790();
  }
  **(long **)(lVar3 + 0xb8) = lVar2;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_015c2790();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x20);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_015c2790();
  }
  thunk_FUN_01656ef8(*(undefined8 *)(lVar3 + 0xb8),lVar2);
  return;
}


