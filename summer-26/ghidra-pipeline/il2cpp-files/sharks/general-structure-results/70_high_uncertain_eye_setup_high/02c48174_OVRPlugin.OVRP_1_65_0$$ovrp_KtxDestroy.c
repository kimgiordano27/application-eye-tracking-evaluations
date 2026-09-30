/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxDestroy
ENTRY_POINT: 02c48174
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxDestroy
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack0000000000000008;
  
  puVar2 = PTR_DAT_0380c720;
  puVar1 = PTR_DAT_037f9758;
  uStack0000000000000008 = param_4;
  if ((DAT_03a260c5 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f9758);
    FUN_017fc350(PTR_DAT_0380c720);
    DAT_03a260c5 = 1;
  }
  plVar3 = (long *)thunk_FUN_01861bbc(*(undefined8 *)puVar2);
  OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_HookGetInstanceProcAddr(plVar3,param_2,param_5,param_3);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar4 = FUN_02c30424(&stack0x00000008,0);
  if ((uVar4 & 1) == 0) {
    if (param_2 == 0) goto LAB_02c482c8;
  }
  else {
    uVar4 = FUN_02c40bec(param_1);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar4 = FUN_02c303dc(&stack0x00000008,0);
      if ((uVar4 & 1) != 0) goto LAB_02c4823c;
      uVar5 = param_1;
      plVar6 = plVar3;
      if (param_2 == 0) goto LAB_02c482c8;
    }
    else {
LAB_02c4823c:
      if (param_2 == 0) goto LAB_02c482c8;
      uVar5 = 0;
      plVar6 = (long *)0x0;
    }
    FUN_02c42ca8(param_2,uStack0000000000000008,uVar5,plVar6);
  }
  uVar4 = FUN_02c40bec(param_2);
  if (((uVar4 & 1) == 0) && (uVar4 = FUN_02c46aec(param_1,plVar3,0), (uVar4 & 1) == 0)) {
    if (plVar3 == (long *)0x0) {
LAB_02c482c8:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    (**(code **)(*plVar3 + 0x178))(plVar3,param_1,1,*(undefined8 *)(*plVar3 + 0x180));
  }
  return;
}


