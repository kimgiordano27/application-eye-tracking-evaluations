/*
FUNCTION_NAME: onEditPostProcessVoiceDataEvent_type$$EndInvoke
ENTRY_POINT: 03832c80
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8 onEditPostProcessVoiceDataEvent_type__EndInvoke(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 in_w8;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  *(undefined1 *)(unaff_x20 + 0x89d) = in_w8;
  puVar2 = PTR_DAT_07d86398;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
    uVar6 = 0;
    uVar3 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
    do {
      if (0 < (int)uVar3) {
        uVar7 = 0;
        puVar1 = (undefined8 *)(unaff_x19 + uVar6 * 8 + 0x20);
        do {
          if (uVar6 != uVar7) {
            if ((uVar3 <= uVar6) || (uVar3 <= uVar7)) {
onEditMixedPlaybackVoiceDataEvent_type__BeginInvoke:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            uVar4 = *puVar1;
            uVar5 = *(undefined8 *)(unaff_x19 + 0x20 + uVar7 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar3 = FUN_075ac5e0(uVar4,uVar5,0);
            if ((uVar3 & 1) != 0) {
              if ((uint)uVar6 < *(uint *)(unaff_x19 + 0x18)) {
                return *puVar1;
              }
              goto onEditMixedPlaybackVoiceDataEvent_type__BeginInvoke;
            }
            uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
          }
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)uVar3);
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)uVar3);
  }
  return 0;
}


