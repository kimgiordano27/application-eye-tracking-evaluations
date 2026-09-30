/*
FUNCTION_NAME: FUN_062363a8
ENTRY_POINT: 062363a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_062363a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
  puVar1 = Method_OVRTask_WhenAll<bool>__;
  if ((DAT_06dc7241 & 1) == 0) {
    FUN_02d965b8(Method_OVRTask_WhenAll<bool>__);
    FUN_02d965b8(Method_OVRTask_WhenAll<OVRPlugin_Result>__);
    DAT_06dc7241 = 1;
  }
  uVar9 = _UNK_010fe3c8;
  uVar8 = _DAT_010fe3c0;
  puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  puVar5[1] = _UNK_010fe3c8;
  *puVar5 = uVar8;
  uVar3 = *(undefined8 *)puVar2;
  lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined8 *)(lVar6 + 0x18) = uVar9;
  *(undefined8 *)(lVar6 + 0x10) = uVar8;
  lVar6 = thunk_FUN_02dd3144(uVar3);
  FUN_06236328();
  if (lVar6 != 0) {
    lVar7 = *(long *)puVar1;
    *(undefined1 *)(lVar6 + 0x20) = 0;
    uVar9 = _UNK_010ffd68;
    uVar8 = _DAT_010ffd60;
    *(undefined4 *)(lVar6 + 0x24) = 0;
    puVar5 = *(undefined8 **)(lVar7 + 0xb8);
    *(undefined8 *)(lVar6 + 0x18) = uVar9;
    *(undefined8 *)(lVar6 + 0x10) = uVar8;
    uVar8 = *puVar5;
    *(undefined8 *)(lVar6 + 0x30) = puVar5[1];
    *(undefined8 *)(lVar6 + 0x28) = uVar8;
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
    uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
    *(undefined4 *)(lVar6 + 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x40) = uVar9;
    *(undefined8 *)(lVar6 + 0x38) = uVar8;
    plVar4 = (long *)(*(long *)(lVar7 + 0xb8) + 0x20);
    *plVar4 = lVar6;
    LeanTween__value(plVar4,lVar6);
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_06236328();
    if (lVar6 != 0) {
      lVar7 = *(long *)puVar1;
      *(undefined8 *)(lVar6 + 0x14) = 0;
      *(undefined8 *)(lVar6 + 0x19) = 0;
      *(undefined4 *)(lVar6 + 0x10) = 0x3f800000;
      puVar5 = *(undefined8 **)(lVar7 + 0xb8);
      *(undefined4 *)(lVar6 + 0x24) = 0;
      uVar8 = *puVar5;
      *(undefined8 *)(lVar6 + 0x30) = puVar5[1];
      *(undefined8 *)(lVar6 + 0x28) = uVar8;
      uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
      *(undefined4 *)(lVar6 + 0x48) = 0;
      *(undefined8 *)(lVar6 + 0x40) = uVar9;
      *(undefined8 *)(lVar6 + 0x38) = uVar8;
      plVar4 = (long *)(*(long *)(lVar7 + 0xb8) + 0x28);
      *plVar4 = lVar6;
      LeanTween__value(plVar4,lVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


