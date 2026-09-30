/*
FUNCTION_NAME: RootMotion.FinalIK.RagdollUtility$$LateUpdate
ENTRY_POINT: 029c9c48
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029c9da8) */
/* WARNING: Removing unreachable block (ram,0x029c9ddc) */

void RootMotion_FinalIK_RagdollUtility__LateUpdate(void)

{
  undefined *puVar1;
  long lVar2;
  int in_w8;
  short unaff_w19;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  long *unaff_x22;
  undefined4 uStack0000000000000018;
  char cStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uStack0000000000000018 = 0;
  if (in_w8 == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdeb8);
    *(undefined1 *)(unaff_x21 + 0x169) = 1;
  }
  puVar1 = PTR_DAT_03d08998;
  lVar2 = *unaff_x22;
  in_stack_00000028 = (*(undefined8 **)(lVar2 + 0xb8))[1];
  in_stack_00000020 = **(undefined8 **)(lVar2 + 0xb8);
  if (unaff_w19 == 0x10) {
    lVar2 = *(long *)PTR_DAT_03d08998;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *(long *)puVar1;
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
    cStack000000000000001c = '\0';
    FUN_027e0bd8(uVar3,(long)&stack0x00000018 + 4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_029bb83c();
    uStack0000000000000018 = 0;
    uVar4 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_03cca318 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_029a2978((ulong)&stack0x00000020 | 0xc,uVar4,&stack0x00000018,0);
    FUN_029a2978(&stack0x00000020,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),
                 &stack0x00000018,0);
    FUN_029a2978((ulong)&stack0x00000020 | 4,
                 *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),&stack0x00000018,0);
    FUN_029a2978((ulong)&stack0x00000020 | 8,
                 *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),&stack0x00000018,0);
    if (cStack000000000000001c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
    lVar2 = *unaff_x22;
  }
  thunk_FUN_01a89a98(lVar2);
  return;
}


