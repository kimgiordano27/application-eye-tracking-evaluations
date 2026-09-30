/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxDestroy
ENTRY_POINT: 01db8d50
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_65_0__ovrp_KtxDestroy(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  FUN_00fdc2e4(PTR_DAT_0235a728);
  FUN_00fdc2e4(PTR_DAT_0235a730);
  *(undefined1 *)(unaff_x20 + 0xa3e) = 1;
  uVar1 = *(uint *)(unaff_x19 + 0x38);
  thunk_FUN_00ffe618();
  if (((uVar1 >> 0x15 & 1) != 0) && (uVar4 = FUN_01db899c(), (uVar4 & 1) != 0)) {
    lVar6 = *(long *)(unaff_x19 + 0x48);
    thunk_FUN_00ffe618();
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x20);
      thunk_FUN_00ffe618();
      if (lVar6 != 0) {
        uVar5 = FUN_01dbf260(lVar6,0);
        return uVar5;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar7 = *(long *)PTR_DAT_0235a720;
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_0103c2a0(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0103c244();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  puVar3 = PTR_DAT_0235a730;
  puVar2 = PTR_DAT_0235a728;
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0103c244();
  }
  uVar8 = **(undefined8 **)(lVar6 + 0xb8);
  uVar5 = thunk_FUN_010400dc(*(undefined8 *)puVar3);
  FUN_019e5ba8(uVar5,uVar8,*(undefined8 *)puVar2);
  return uVar5;
}


