/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetTrackingIPDEnabled
ENTRY_POINT: 076e110c
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_SetTrackingIPDEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  undefined8 unaff_d8;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  lVar3 = thunk_FUN_0406deb8();
  *(undefined8 *)(lVar3 + 0x10) = unaff_d8;
  *(undefined1 *)(lVar3 + 0x18) = 1;
  FUN_075273c0(lVar3,0);
  *(undefined4 *)(lVar3 + 0x1c) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x42f00000;
  *(undefined1 *)(lVar3 + 0x18) = 0;
  lVar4 = thunk_FUN_0406ddbc(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
  puVar1 = PTR_DAT_08f70528;
  if (lVar4 == 0) {
    uVar6 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
    FUN_04031750(uVar6,0);
  }
  if (2 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[6] = lVar3;
    puVar2 = PTR_DAT_08fae2a8;
    lVar3 = *(long *)puVar1;
    *(long **)(unaff_x19 + 0x38) = unaff_x20;
    *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_08596c00(&stack0x00000000 + 4,0);
    lVar3 = *(long *)puVar2;
    *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000018;
    *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000000._4_8_;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    lVar4 = puVar5[1];
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar6 = *puVar5;
      lVar4 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fae278);
      FUN_05335310(lVar4,uVar6,*(undefined8 *)PTR_DAT_08fae2a0,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar4;
    }
    *(long *)(unaff_x19 + 0xa8) = lVar4;
    thunk_FUN_085843b0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


