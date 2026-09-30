/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetHandNodePoseStateLatency
ENTRY_POINT: 02c503f0
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_GetHandNodePoseStateLatency(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  long unaff_x20;
  ulong uVar6;
  
  System_IO_BinaryReader___ctor(param_1,in_w8 * 3);
  puVar3 = PTR_DAT_037feac8;
  puVar2 = PTR_DAT_037f4460;
  if (0 < *(int *)(unaff_x20 + 0x18)) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar6 = 0;
    do {
      FUN_02a5ae94(param_1,0x5b,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar4 = FUN_02b954e8(0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      uVar4 = FUN_02b48b4c(unaff_x20 + 0x20 + uVar6,*(undefined8 *)puVar3,uVar4,0);
      FUN_02a5a000(param_1,uVar4,0);
      FUN_02a5ae94(param_1,0x5d,0);
      uVar1 = uVar6 + 1;
    } while ((uVar6 < 0x13) && (uVar6 = uVar1, (long)uVar1 < (long)*(int *)(unaff_x20 + 0x18)));
    if ((int)uVar1 == 0x14) {
      uVar4 = thunk_FUN_01851c08(PTR_DAT_0380cab0);
      FUN_02a5a000(param_1,uVar4,0);
    }
  }
  uVar4 = thunk_FUN_01851c08(PTR_DAT_037f2f90);
  uVar4 = thunk_FUN_018617ec(uVar4,&stack0x0000000c);
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380cab8);
  uVar4 = FUN_02a2f440(uVar5,param_1,uVar4,0);
  thunk_FUN_01851c08(PTR_DAT_0380cac0);
  uVar5 = thunk_FUN_01861bbc();
  FUN_02c5055c(uVar5,uVar4);
  uVar4 = thunk_FUN_01851c08(PTR_DAT_0380cac8);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar5,uVar4);
}


