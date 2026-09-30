/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_GetSystemHmd3DofModeEnabled
ENTRY_POINT: 05bf1688
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_45_0__ovrp_GetSystemHmd3DofModeEnabled(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 unaff_w19;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xdc9) & 1) == 0) {
    FUN_03188a78(PTR_DAT_071122b8);
    *(undefined1 *)(unaff_x21 + 0xdc9) = 1;
  }
  plVar5 = *(long **)(unaff_x20 + 0x28);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_071122b8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xf) * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_45_0___cctor;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)PTR_DAT_071122b8,0xf);
OVRPlugin_OVRP_1_45_0___cctor:
                    /* WARNING: Could not recover jumptable at 0x05bf1718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,unaff_w19,puVar1[1]);
  return;
}


