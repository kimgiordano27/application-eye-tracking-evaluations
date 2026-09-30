/*
FUNCTION_NAME: OVRPlugin$$InitializeInsightPassthrough
ENTRY_POINT: 03154d54
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__InitializeInsightPassthrough(void)

{
  bool bVar1;
  bool in_ZR;
  bool in_CY;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long unaff_x19;
  byte unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 in_stack_00000028;
  
  if (in_CY && !in_ZR) {
    *(undefined8 *)(unaff_x23 + 0x28) = in_stack_00000028;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x23 + 0x28));
    if (2 < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined8 *)(unaff_x23 + 0x30) = *(undefined8 *)StringLiteral_3874;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x23 + 0x30));
      if (3 < *(uint *)(unaff_x23 + 0x18)) {
        *(undefined8 *)(unaff_x23 + 0x38) = unaff_x24;
        thunk_FUN_01b4f09c((undefined8 *)(unaff_x23 + 0x38));
        if (4 < *(uint *)(unaff_x23 + 0x18)) {
          *(undefined8 *)(unaff_x23 + 0x40) = *(undefined8 *)StringLiteral_2457;
          thunk_FUN_01b4f09c();
          FUN_02ee6e18();
          if (unaff_x22 != (long *)0x0) {
            (**(code **)(*unaff_x22 + 0x558))();
            if (*(byte *)(unaff_x19 + 0x60) != (unaff_w21 & 1)) {
              bVar1 = (unaff_w21 & 1) == 0;
              if (bVar1) {
                puVar2 = (undefined4 *)(unaff_x19 + 0x28);
                puVar3 = (undefined4 *)(unaff_x19 + 0x2c);
                puVar4 = (undefined4 *)(unaff_x19 + 0x30);
                puVar5 = (undefined4 *)(unaff_x19 + 0x34);
              }
              else {
                puVar2 = (undefined4 *)(unaff_x19 + 0x38);
                puVar3 = (undefined4 *)(unaff_x19 + 0x3c);
                puVar4 = (undefined4 *)(unaff_x19 + 0x40);
                puVar5 = (undefined4 *)(unaff_x19 + 0x44);
              }
              if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_03154e84;
              FUN_038ff380(*puVar2,*puVar3,*puVar4,*puVar5,*(long *)(unaff_x19 + 0x58),0);
              *(byte *)(unaff_x19 + 0x60) = !bVar1;
            }
            return;
          }
LAB_03154e84:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


