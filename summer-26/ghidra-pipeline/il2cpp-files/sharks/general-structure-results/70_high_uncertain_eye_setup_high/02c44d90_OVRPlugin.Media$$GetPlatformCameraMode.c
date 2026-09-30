/*
FUNCTION_NAME: OVRPlugin.Media$$GetPlatformCameraMode
ENTRY_POINT: 02c44d90
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__GetPlatformCameraMode(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_03a260af & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380c6b8);
    FUN_017fc350(PTR_DAT_0380c6c0);
    FUN_017fc350(PTR_DAT_0380c6c8);
    DAT_03a260af = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  thunk_FUN_0181f594();
  if (((uVar1 >> 0x15 & 1) != 0) && (uVar4 = FUN_02c44738(param_1), (uVar4 & 1) != 0)) {
    lVar6 = *(long *)(param_1 + 0x48);
    thunk_FUN_0181f594();
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x20);
      thunk_FUN_0181f594();
      if (lVar6 != 0) {
        uVar5 = FUN_02c44ea8(lVar6);
        return uVar5;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar7 = *(long *)PTR_DAT_0380c6b8;
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_0185db00(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  puVar3 = PTR_DAT_0380c6c8;
  puVar2 = PTR_DAT_0380c6c0;
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4();
  }
  uVar8 = **(undefined8 **)(lVar6 + 0xb8);
  uVar5 = thunk_FUN_01861bbc(*(undefined8 *)puVar3);
  FUN_01d3cc1c(uVar5,uVar8,*(undefined8 *)puVar2);
  return uVar5;
}


