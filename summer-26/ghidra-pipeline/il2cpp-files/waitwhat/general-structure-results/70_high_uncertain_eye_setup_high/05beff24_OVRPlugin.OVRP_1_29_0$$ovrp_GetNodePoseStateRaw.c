/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetNodePoseStateRaw
ENTRY_POINT: 05beff24
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_OVRP_1_29_0__ovrp_GetNodePoseStateRaw(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 unaff_w19;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  
  FUN_03188a78(PTR_DAT_07116840);
  FUN_03188a78(PTR_DAT_07112178);
  *(undefined1 *)(unaff_x21 + 0xdd0) = 1;
  if ((((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar1 = FUN_0506e670(*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_07116840),
       lVar1 == 0)) || (*(long *)(lVar1 + 0x88) == 0)) ||
     (plVar5 = *(long **)(*(long *)(lVar1 + 0x88) + 0x20), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar1 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07112178) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_05beffc4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)PTR_DAT_07112178,0);
LAB_05beffc4:
  lVar1 = (*(code *)*puVar2)(plVar5,unaff_w19,puVar2[1]);
  return *(undefined4 *)(lVar1 + 0x20);
}


