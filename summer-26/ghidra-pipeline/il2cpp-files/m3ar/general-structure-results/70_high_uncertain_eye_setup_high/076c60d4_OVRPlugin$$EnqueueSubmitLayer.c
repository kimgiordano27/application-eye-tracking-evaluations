/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 076c60d4
PROGRAM: m3ar-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnqueueSubmitLayer(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x23;
  
  lVar2 = FUN_040316d0();
  uVar3 = FUN_040316d0(*unaff_x21,4);
  FUN_0740c2a4(uVar3,*unaff_x20,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    puVar1 = PTR_DAT_08fad9f0;
    uVar3 = FUN_040316d0(*unaff_x21,4);
    FUN_0740c2a4(uVar3,*(undefined8 *)puVar1,0);
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      puVar1 = PTR_DAT_08fad998;
      uVar3 = FUN_040316d0(*unaff_x21,4);
      FUN_0740c2a4(uVar3,*(undefined8 *)puVar1,0);
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = uVar3;
        puVar1 = PTR_DAT_08fad9a8;
        uVar3 = FUN_040316d0(*unaff_x21,4);
        FUN_0740c2a4(uVar3,*(undefined8 *)puVar1,0);
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar2 + 0x38) = uVar3;
          puVar1 = PTR_DAT_08fad9c0;
          uVar3 = FUN_040316d0(*unaff_x21,4);
          FUN_0740c2a4(uVar3,*(undefined8 *)puVar1,0);
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = uVar3;
            puVar1 = PTR_DAT_08fad9f8;
            uVar3 = *unaff_x21;
            *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = lVar2;
            uVar3 = FUN_040316d0(uVar3,5);
            FUN_0740c2a4(uVar3,*(undefined8 *)puVar1,0);
            *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28) = uVar3;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


