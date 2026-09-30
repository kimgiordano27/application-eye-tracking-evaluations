/*
FUNCTION_NAME: OVRPlugin.OVRP_1_93_0$$.cctor
ENTRY_POINT: 01dbe220
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_93_0___cctor(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bbd8);
    *(undefined1 *)(unaff_x20 + 0xa7a) = 1;
  }
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 != 0) {
    if (DAT_0247da81 == '\0') {
      FUN_00fdc2e4(PTR_DAT_0235a8d0);
      FUN_00fdc2e4(PTR_DAT_0235a7b0);
      FUN_00fdc2e4(PTR_DAT_023535b0);
      DAT_0247da81 = '\x01';
    }
    puVar2 = PTR_DAT_0235a7b0;
    puVar1 = PTR_DAT_0234bbd8;
    lVar5 = **(long **)(*(long *)PTR_DAT_0235a7b0 + 0xb8);
    if (lVar5 == 0) {
      lVar5 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023535b0);
      FUN_01da9ee4(lVar5,0,*(undefined8 *)PTR_DAT_0235a8d0);
      **(long **)(*(long *)puVar2 + 0xb8) = lVar5;
      thunk_FUN_0106e12c(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar5);
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01da9fec(lVar4,lVar5,uVar3);
    return;
  }
  lVar4 = *(long *)(unaff_x19 + 0x18);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01dbe32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


