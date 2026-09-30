/*
FUNCTION_NAME: OVRPlugin$$SetKeyboardOverlayUV
ENTRY_POINT: 01f88d60
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetKeyboardOverlayUV(ulong param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027bbca0);
    thunk_FUN_01279b34(PTR_DAT_027b1f68);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    thunk_FUN_01279b34(PTR_DAT_027c17b0);
    thunk_FUN_01279b34(PTR_DAT_027c17b8);
    thunk_FUN_01279b34(PTR_DAT_027c17c0);
    *(undefined1 *)(unaff_x23 + 0xebc) = 1;
  }
  FUN_01f6a658(param_2,param_3,param_4);
  puVar4 = PTR_DAT_027c17c0;
  puVar3 = PTR_DAT_027c17b8;
  puVar2 = PTR_DAT_027bbca0;
  puVar1 = PTR_DAT_027b32e0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar5 = FUN_01ebed78(param_3,*(undefined8 *)PTR_DAT_027c17b0,0);
  *(undefined8 *)(param_2 + 0x90) = uVar5;
  thunk_FUN_01286abc();
  uVar5 = FUN_01ebed78(param_3,*(undefined8 *)puVar4,0);
  *(undefined8 *)(param_2 + 0x98) = uVar5;
  thunk_FUN_01286abc();
  uVar5 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar5 = FUN_01f7d8a0(uVar5);
  lVar6 = FUN_01ebc848(param_3,*(undefined8 *)puVar3,uVar5,0);
  puVar1 = PTR_DAT_027b1f68;
  if (lVar6 == 0) {
    lVar7 = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
LAB_01f88ebc:
    thunk_FUN_01286abc(param_2 + 0xa0,lVar7);
    return;
  }
  uVar5 = *(undefined8 *)PTR_DAT_027b1f68;
  lVar7 = thunk_FUN_0124baac(lVar6,uVar5);
  if (lVar7 != 0) {
    *(long *)(param_2 + 0xa0) = lVar7;
    uVar5 = *(undefined8 *)puVar1;
    lVar7 = thunk_FUN_0124baac(lVar6,uVar5);
    if (lVar7 != 0) goto LAB_01f88ebc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230f60(lVar6,uVar5);
}


