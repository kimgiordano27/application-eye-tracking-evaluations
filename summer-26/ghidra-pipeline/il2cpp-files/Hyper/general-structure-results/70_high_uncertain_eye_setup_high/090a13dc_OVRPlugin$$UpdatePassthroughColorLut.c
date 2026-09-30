/*
FUNCTION_NAME: OVRPlugin$$UpdatePassthroughColorLut
ENTRY_POINT: 090a13dc
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdatePassthroughColorLut(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x19 + 0x278) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac78e88);
    FUN_04947ee4(PTR_DAT_0ac78c88);
    *(undefined1 *)(unaff_x19 + 0x278) = 1;
  }
  plVar1 = (long *)FUN_05b00274();
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac78c88) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_090a1480;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar1,*(long *)PTR_DAT_0ac78c88,0);
LAB_090a1480:
    uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x20 + 0x30));
  return;
}


