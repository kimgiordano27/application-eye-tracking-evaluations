/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$.ctor
ENTRY_POINT: 02c47440
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


undefined8 OVRPlugin_OpenXREventDelegateType___ctor(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long unaff_x19;
  long *unaff_x21;
  
  uVar1 = *(uint *)(unaff_x19 + 0x38);
  thunk_FUN_0181f594();
  if ((uVar1 & 0x600000) != 0x400000) {
    if (*(int *)(*(long *)PTR_DAT_037f45f0 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar2 = FUN_02c44068();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    iVar6 = *(int *)(lVar2 + 0x10);
    if (0x13 < iVar6) {
      uVar3 = thunk_FUN_017f8370(0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      iVar6 = *(int *)(lVar2 + 0x10);
    }
    *(int *)(lVar2 + 0x10) = iVar6 + 1;
    uVar3 = (**(code **)(*unaff_x21 + 0x188))();
    uVar1 = *(int *)(lVar2 + 0x10) - 1;
    *(uint *)(lVar2 + 0x10) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    if ((uVar3 & 1) != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x38);
      thunk_FUN_0181f594();
      if (((uVar1 >> 0x11 & 1) == 0) &&
         (uVar1 = *(uint *)(unaff_x19 + 0x38), thunk_FUN_0181f594(), (uVar1 & 0x600000) != 0x400000)
         ) {
        thunk_FUN_01851c08(PTR_DAT_037f8d50);
        uVar4 = thunk_FUN_01861bbc();
        uVar5 = thunk_FUN_01851c08(PTR_DAT_0380c760);
        FUN_02bcf690(uVar4,uVar5,0);
        uVar5 = thunk_FUN_01851c08(PTR_DAT_0380c768);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar4,uVar5);
      }
      return 1;
    }
  }
  return 0;
}


