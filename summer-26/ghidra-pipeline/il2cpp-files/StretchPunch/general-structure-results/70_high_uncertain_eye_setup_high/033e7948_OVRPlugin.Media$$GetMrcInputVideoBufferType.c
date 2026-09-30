/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcInputVideoBufferType
ENTRY_POINT: 033e7948
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetMrcInputVideoBufferType(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_01d7d918();
  *(undefined1 *)(unaff_x19 + 0xad8) = 1;
  lVar4 = FUN_01d7d9bc(*unaff_x20,4);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)StringLiteral_9264;
    thunk_FUN_01e10808((undefined8 *)(lVar4 + 0x20));
    if (1 < *(uint *)(lVar4 + 0x18)) {
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)StringLiteral_9265;
      thunk_FUN_01e10808((undefined8 *)(lVar4 + 0x28));
      if (2 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)StringLiteral_9266;
        thunk_FUN_01e10808((undefined8 *)(lVar4 + 0x30));
        puVar3 = StringLiteral_9263;
        puVar2 = StringLiteral_6882;
        puVar1 = StringLiteral_151;
        if (3 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)StringLiteral_9267;
          thunk_FUN_01e10808();
          plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *plVar5 = lVar4;
          thunk_FUN_01e10808(plVar5,lVar4);
          uVar6 = FUN_01d7d9bc(*(undefined8 *)puVar1,0x10);
          FUN_032ff394(uVar6,*(undefined8 *)puVar3,0);
          puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
          *puVar7 = uVar6;
          thunk_FUN_01e10808(puVar7,uVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


