/*
FUNCTION_NAME: OVRPlugin$$AreControllerDrivenHandPosesNatural
ENTRY_POINT: 060d2b10
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__AreControllerDrivenHandPosesNatural(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((*(byte *)(unaff_x23 + 0xa8d) & 1) == 0) {
    FUN_03642964(PTR_DAT_079fe468);
    FUN_03642964(PTR_DAT_07a21b38);
    FUN_03642964(PTR_DAT_079f4e28);
    *(undefined1 *)(unaff_x23 + 0xa8d) = 1;
  }
  puVar2 = PTR_DAT_079f4e28;
  if (unaff_x22 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07a21b38 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x22 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07a21b38)
       ) {
      FUN_071bd1a0();
    }
  }
  FUN_060d3814();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar3 = FUN_071c0684(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_060d366c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_079fe468 + 0xb8) + 8);
  if (lVar4 != 0) {
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),&stack0x00000020,*(undefined8 *)(lVar4 + 0x28));
  }
  return;
}


