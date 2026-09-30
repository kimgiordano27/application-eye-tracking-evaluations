/*
FUNCTION_NAME: OVRPlugin$$LocateSpace
ENTRY_POINT: 051c8aec
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__LocateSpace(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065da038);
  *(undefined1 *)(unaff_x21 + 0x3ea) = 1;
  puVar4 = *(undefined8 **)(*unaff_x19 + 0xb8);
  *puVar4 = DAT_0137f5d8;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0xc) = DAT_0137ee40;
  lVar3 = FUN_02ce7ad4(*unaff_x20,5);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  if (uVar1 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = DAT_0137e8c0;
    uVar2 = DAT_0137e118;
    if (uVar1 != 1) {
      *(undefined8 *)(lVar3 + 0x28) = DAT_0137e118;
      if (((2 < uVar1) && (*(undefined8 *)(lVar3 + 0x30) = uVar2, uVar1 != 3)) &&
         (*(undefined8 *)(lVar3 + 0x38) = uVar2, 4 < uVar1)) {
        *(undefined8 *)(lVar3 + 0x40) = DAT_0137e3e0;
        *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x18) = lVar3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


