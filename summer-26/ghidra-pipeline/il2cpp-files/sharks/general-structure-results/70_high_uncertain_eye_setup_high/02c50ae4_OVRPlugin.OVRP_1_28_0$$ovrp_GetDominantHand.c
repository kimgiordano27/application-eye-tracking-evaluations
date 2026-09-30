/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_GetDominantHand
ENTRY_POINT: 02c50ae4
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_GetDominantHand(void)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02b954e8(0);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x25) break;
    in_stack_00000008._4_1_ = *(undefined1 *)(unaff_x22 + unaff_x25);
    thunk_FUN_018617ec(*unaff_x24,(long)&stack0x00000008 + 4);
    FUN_02a5bfa4();
    uVar1 = unaff_x25 + 1;
    if ((0x12 < unaff_x25) || ((long)*(int *)(unaff_x19 + 0x18) <= (long)uVar1)) {
      if ((int)uVar1 == 0x14) {
        thunk_FUN_01851c08(PTR_DAT_0380cab0);
        FUN_02a5a000();
      }
      FUN_015d6ff8();
      uVar3 = (**(code **)(*unaff_x20 + 0x168))();
      uVar4 = thunk_FUN_01851c08(PTR_DAT_0380cae8);
      uVar3 = FUN_02a2e6b0(uVar4,uVar3,0);
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar4 = thunk_FUN_01861bbc();
      uVar5 = thunk_FUN_01851c08(PTR_DAT_0380caf0);
      FUN_02b3cc64(uVar4,uVar3,uVar5,0);
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380caf8);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4,uVar3);
    }
    iVar2 = System_IO_BinaryReader__ReadDecimal();
    if (0 < iVar2) {
      FUN_02a5ae94();
    }
    in_w8 = *(int *)(*unaff_x23 + 0xe0);
    unaff_x25 = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


