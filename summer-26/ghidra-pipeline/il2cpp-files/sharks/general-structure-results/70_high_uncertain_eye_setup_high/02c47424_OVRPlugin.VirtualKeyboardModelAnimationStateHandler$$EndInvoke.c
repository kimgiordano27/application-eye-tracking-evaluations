/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$EndInvoke
ENTRY_POINT: 02c47424
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_VirtualKeyboardModelAnimationStateHandler__EndInvoke
          (long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  while( true ) {
    if ((DAT_03a26103 & 1) == 0) {
      FUN_017fc350(PTR_DAT_037f45f0);
      DAT_03a26103 = 1;
    }
    if (param_2 == 0) goto LAB_02c474f0;
    plVar2 = *(long **)(param_2 + 0x28);
    if ((plVar2 == param_1) || (plVar2 == (long *)0x0)) break;
    param_3 = param_3 & 1;
    param_1 = plVar2;
  }
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  if (((*(long *)(param_2 + 0x18) != 0) &&
      (uVar1 = *(uint *)(param_2 + 0x38), thunk_FUN_0181f594(), (uVar1 >> 0x11 & 1) == 0)) &&
     (uVar1 = *(uint *)(param_2 + 0x38), thunk_FUN_0181f594(), (uVar1 & 0x600000) != 0x400000)) {
    if (*(int *)(*(long *)PTR_DAT_037f45f0 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar3 = FUN_02c44068();
    if (lVar3 == 0) {
LAB_02c474f0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    iVar7 = *(int *)(lVar3 + 0x10);
    if (0x13 < iVar7) {
      uVar4 = thunk_FUN_017f8370(0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      iVar7 = *(int *)(lVar3 + 0x10);
    }
    *(int *)(lVar3 + 0x10) = iVar7 + 1;
    uVar4 = (**(code **)(*param_1 + 0x188))
                      (param_1,param_2,param_3 & 1,*(undefined8 *)(*param_1 + 400));
    uVar1 = *(int *)(lVar3 + 0x10) - 1;
    *(uint *)(lVar3 + 0x10) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    if ((uVar4 & 1) != 0) {
      uVar1 = *(uint *)(param_2 + 0x38);
      thunk_FUN_0181f594();
      if (((uVar1 >> 0x11 & 1) == 0) &&
         (uVar1 = *(uint *)(param_2 + 0x38), thunk_FUN_0181f594(), (uVar1 & 0x600000) != 0x400000))
      {
        thunk_FUN_01851c08(PTR_DAT_037f8d50);
        uVar5 = thunk_FUN_01861bbc();
        uVar6 = thunk_FUN_01851c08(PTR_DAT_0380c760);
        FUN_02bcf690(uVar5,uVar6,0);
        uVar6 = thunk_FUN_01851c08(PTR_DAT_0380c768);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar5,uVar6);
      }
      return 1;
    }
  }
  return 0;
}


