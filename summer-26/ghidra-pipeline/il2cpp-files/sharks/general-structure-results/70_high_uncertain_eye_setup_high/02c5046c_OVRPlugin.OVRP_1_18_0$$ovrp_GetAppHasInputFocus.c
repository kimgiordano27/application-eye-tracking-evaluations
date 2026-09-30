/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetAppHasInputFocus
ENTRY_POINT: 02c5046c
PROGRAM: sharks-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  
  while( true ) {
    FUN_02b48b4c(param_1,param_2,param_3,param_4);
    FUN_02a5a000();
    FUN_02a5ae94();
    uVar1 = unaff_x25 + 1;
    if ((0x12 < unaff_x25) || ((long)*(int *)(unaff_x20 + 0x18) <= (long)uVar1)) {
      if ((int)uVar1 == 0x14) {
        thunk_FUN_01851c08(PTR_DAT_0380cab0);
        FUN_02a5a000();
      }
      uVar2 = thunk_FUN_01851c08(PTR_DAT_037f2f90);
      thunk_FUN_018617ec(uVar2,&stack0x0000000c);
      thunk_FUN_01851c08(PTR_DAT_0380cab8);
      uVar2 = FUN_02a2f440();
      thunk_FUN_01851c08(PTR_DAT_0380cac0);
      uVar3 = thunk_FUN_01861bbc();
      FUN_02c5055c(uVar3,uVar2);
      uVar2 = thunk_FUN_01851c08(PTR_DAT_0380cac8);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar3,uVar2);
    }
    FUN_02a5ae94();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    param_3 = FUN_02b954e8(0);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar1) break;
    param_2 = *unaff_x24;
    param_1 = unaff_x22 + uVar1;
    param_4 = 0;
    unaff_x25 = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


