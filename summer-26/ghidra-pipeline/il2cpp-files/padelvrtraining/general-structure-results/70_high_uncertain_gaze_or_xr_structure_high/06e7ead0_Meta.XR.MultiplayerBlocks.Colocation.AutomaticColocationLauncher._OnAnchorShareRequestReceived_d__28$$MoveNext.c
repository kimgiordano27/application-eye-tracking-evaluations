/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$MoveNext
ENTRY_POINT: 06e7ead0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__MoveNext
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x23;
  
  puVar1 = PTR_DAT_09200618;
  if ((*(byte *)(unaff_x23 + 0xd62) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091fb460);
    FUN_03d2d2b0(PTR_DAT_09200618);
    *(undefined1 *)(unaff_x23 + 0xd62) = 1;
  }
  plVar2 = (long *)FUN_05826a90(param_1,*(undefined8 *)puVar1);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091fb460) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
        goto LAB_06e7eb7c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03d8f370(plVar2,*(long *)PTR_DAT_091fb460,6);
LAB_06e7eb7c:
                    /* WARNING: Could not recover jumptable at 0x06e7eba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar2,param_2,param_3,param_4,puVar3[1]);
  return;
}


