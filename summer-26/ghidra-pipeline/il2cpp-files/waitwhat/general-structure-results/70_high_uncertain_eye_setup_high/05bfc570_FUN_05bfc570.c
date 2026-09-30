/*
FUNCTION_NAME: FUN_05bfc570
ENTRY_POINT: 05bfc570
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05bfc570(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar3 = PTR_DAT_07117068;
  puVar2 = PTR_DAT_070c1b68;
  if ((DAT_0754ee51 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07117070);
    FUN_03188a78(PTR_DAT_070c22b0);
    FUN_03188a78(PTR_DAT_07117078);
    FUN_03188a78(PTR_DAT_07117068);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(PTR_DAT_07117080);
    DAT_0754ee51 = 1;
  }
  uVar8 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar5 = FUN_069d8404(uVar8,0,0);
  puVar4 = PTR_DAT_07117078;
  puVar1 = PTR_DAT_070c1958;
  if ((uVar5 & 1) == 0) goto LAB_05bfc798;
  uVar8 = *(undefined8 *)PTR_DAT_07117078;
  if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar8 = FUN_0593e698(uVar8,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)puVar2);
  }
  plVar6 = (long *)FUN_069dd5c8(uVar8,0);
  lVar7 = *(long *)puVar3;
  if (plVar6 == (long *)0x0) {
OVRPlugin_<>c__<_cctor>b__810_76:
    plVar6 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar7 + 0x130))
    goto OVRPlugin_<>c__<_cctor>b__810_76;
    if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7) {
      plVar6 = (long *)0x0;
    }
  }
  **(long **)(lVar7 + 0xb8) = (long)plVar6;
  uVar5 = FUN_069d8404(**(undefined8 **)(*(long *)puVar3 + 0xb8),0,0);
  if ((uVar5 & 1) == 0) goto LAB_05bfc798;
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_070c22b0);
  FUN_069d78d4(lVar7,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_03ac2e98(lVar7,*(undefined8 *)PTR_DAT_07117070);
  UnityEngine_UIElements_AtlasBase__OnUpdateDynamicTextures(lVar7,*(undefined8 *)PTR_DAT_07117080,0)
  ;
  uVar8 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar8 = FUN_0593e698(uVar8,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)puVar2);
  }
  plVar6 = (long *)FUN_069dd5c8(uVar8,0);
  lVar7 = *(long *)puVar3;
  if (plVar6 == (long *)0x0) {
LAB_05bfc774:
    plVar6 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar7 + 0x130)) goto LAB_05bfc774;
    if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7) {
      plVar6 = (long *)0x0;
    }
  }
  **(long **)(lVar7 + 0xb8) = (long)plVar6;
LAB_05bfc798:
  return **(undefined8 **)(*(long *)puVar3 + 0xb8);
}


