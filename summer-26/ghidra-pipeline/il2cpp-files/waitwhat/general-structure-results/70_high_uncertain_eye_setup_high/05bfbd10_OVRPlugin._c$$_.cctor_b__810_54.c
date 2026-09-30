/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_54
ENTRY_POINT: 05bfbd10
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_54(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 *puVar4;
  long unaff_x21;
  long *plVar5;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(unaff_x23 + 8);
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  plVar5 = *(long **)(unaff_x21 + 0x18);
  if ((*(byte *)(unaff_x22 + 0xe4e) & 1) == 0) {
    FUN_03188a78(PTR_DAT_07117020);
    FUN_03188a78(PTR_DAT_07117010);
    FUN_03188a78(PTR_DAT_07117008);
    FUN_03188a78(PTR_DAT_07117018);
    *(undefined1 *)(unaff_x22 + 0xe4e) = 1;
  }
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar6);
  FUN_046ed260(uVar2,param_1,*puVar4,0);
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_05bfbe00(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar1 = PTR_DAT_07117020;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_05bfbdfc:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (*(long *)(lVar3 + 0x20) != 0) {
      FUN_03a67820(*(long *)(lVar3 + 0x20),0,*(undefined8 *)PTR_DAT_07117020);
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 != 0) {
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto LAB_05bfbdfc;
        if (*(long *)(lVar3 + 0x28) != 0) {
          FUN_03a67820(*(long *)(lVar3 + 0x28),0,*(undefined8 *)puVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


