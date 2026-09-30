/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_SetClientVersion
ENTRY_POINT: 02c482e8
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


undefined8
OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_SetClientVersion
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined4 param_6)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong in_stack_00000008;
  undefined *puVar5;
  
  if ((DAT_03a260c4 & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380c778);
    FUN_017fc350(PTR_DAT_037f45f0);
    DAT_03a260c4 = 1;
  }
  puVar5 = PTR_DAT_0380c778;
  in_stack_00000008 = 0;
  if (param_2 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar3 = thunk_FUN_01861bbc();
    puVar5 = PTR_DAT_037f9f18;
  }
  else {
    if (param_4 != 0) {
      if (*(int *)(*(long *)PTR_DAT_037f45f0 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      FUN_02c47f94(param_6,(long)&stack0x00000008 + 4,&stack0x00000008);
      uVar1 = in_stack_00000008;
      uVar2 = in_stack_00000008._4_4_;
      uVar3 = thunk_FUN_01861bbc(*(undefined8 *)puVar5);
      FUN_02c480b4(uVar3,param_1,param_2,param_3,uVar2,uVar1 & 0xffffffff);
      FUN_02c48170(param_1,uVar3,param_4,param_5,param_6);
      return uVar3;
    }
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar3 = thunk_FUN_01861bbc();
    puVar5 = PTR_DAT_037f87a0;
  }
  uVar4 = thunk_FUN_01851c08(puVar5);
  FUN_02b3cbec(uVar3,uVar4,0);
  uVar4 = thunk_FUN_01851c08(PTR_DAT_0380c7a8);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar3,uVar4);
}


