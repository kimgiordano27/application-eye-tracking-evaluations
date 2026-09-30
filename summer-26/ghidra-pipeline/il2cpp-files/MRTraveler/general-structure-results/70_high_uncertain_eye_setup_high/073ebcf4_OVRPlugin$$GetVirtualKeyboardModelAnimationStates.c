/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 073ebcf4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardModelAnimationStates(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_08eb5f10;
  puVar3 = PTR_DAT_08e71730;
  if ((DAT_0941e7d6 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb5f10);
    FUN_03c8f898(PTR_DAT_08e71730);
    DAT_0941e7d6 = 1;
  }
  puVar6 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
  *puVar6 = DAT_018afae0;
  *(undefined4 *)(puVar6 + 1) = 0;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc) = DAT_018af3b0;
  lVar5 = FUN_03c8f97c(*(undefined8 *)puVar3,5);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 != 0) {
      *(undefined8 *)(lVar5 + 0x20) = DAT_018aee80;
      uVar2 = DAT_018ae6d0;
      if (uVar1 != 1) {
        *(undefined8 *)(lVar5 + 0x28) = DAT_018ae6d0;
        if (((2 < uVar1) && (*(undefined8 *)(lVar5 + 0x30) = uVar2, uVar1 != 3)) &&
           (*(undefined8 *)(lVar5 + 0x38) = uVar2, 4 < uVar1)) {
          *(undefined8 *)(lVar5 + 0x40) = DAT_018ae998;
          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = lVar5;
          thunk_FUN_03d233cc();
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


