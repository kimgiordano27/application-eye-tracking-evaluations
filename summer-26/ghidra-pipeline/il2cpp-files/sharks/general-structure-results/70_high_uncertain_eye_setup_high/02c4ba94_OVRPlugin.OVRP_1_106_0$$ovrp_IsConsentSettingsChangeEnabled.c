/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_IsConsentSettingsChangeEnabled
ENTRY_POINT: 02c4ba94
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4bb6c) */

void OVRPlugin_OVRP_1_106_0__ovrp_IsConsentSettingsChangeEnabled
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long in_stack_00000008;
  
  puVar1 = PTR_DAT_037f8790;
  if ((DAT_03a26108 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f8790);
    DAT_03a26108 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 != 0) {
    FUN_02c345b0(lVar2,0);
    in_stack_00000008 = lVar2;
    thunk_FUN_0188fd20(&stack0x00000008,lVar2);
    lVar2 = in_stack_00000008;
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),param_1,param_2,*(undefined8 *)(lVar3 + 0x28));
    }
    if (lVar2 != 0) {
      FUN_02c345d4(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


