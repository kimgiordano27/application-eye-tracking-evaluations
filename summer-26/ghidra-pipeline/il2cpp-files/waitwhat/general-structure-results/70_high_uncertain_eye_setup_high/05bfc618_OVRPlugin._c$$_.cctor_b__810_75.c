/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_75
ENTRY_POINT: 05bfc618
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_<>c__<_cctor>b__810_75(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long *unaff_x21;
  
  puVar2 = PTR_DAT_07117078;
  puVar1 = PTR_DAT_070c1958;
  uVar6 = *(undefined8 *)PTR_DAT_07117078;
  if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar6 = FUN_0593e698(uVar6,0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x21);
  }
  plVar3 = (long *)FUN_069dd5c8(uVar6,0);
  lVar5 = *unaff_x20;
  if (plVar3 == (long *)0x0) {
OVRPlugin_<>c__<_cctor>b__810_76:
    plVar3 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar5 + 0x130))
    goto OVRPlugin_<>c__<_cctor>b__810_76;
    if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5) {
      plVar3 = (long *)0x0;
    }
  }
  **(long **)(lVar5 + 0xb8) = (long)plVar3;
  uVar4 = FUN_069d8404(**(undefined8 **)(*unaff_x20 + 0xb8),0,0);
  if ((uVar4 & 1) == 0) goto LAB_05bfc798;
  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_070c22b0);
  FUN_069d78d4(lVar5,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_03ac2e98(lVar5,*(undefined8 *)PTR_DAT_07117070);
  UnityEngine_UIElements_AtlasBase__OnUpdateDynamicTextures(lVar5,*(undefined8 *)PTR_DAT_07117080,0)
  ;
  uVar6 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar6 = FUN_0593e698(uVar6,0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x21);
  }
  plVar3 = (long *)FUN_069dd5c8(uVar6,0);
  lVar5 = *unaff_x20;
  if (plVar3 == (long *)0x0) {
LAB_05bfc774:
    plVar3 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar5 + 0x130)) goto LAB_05bfc774;
    if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5) {
      plVar3 = (long *)0x0;
    }
  }
  **(long **)(lVar5 + 0xb8) = (long)plVar3;
LAB_05bfc798:
  return **(undefined8 **)(*unaff_x20 + 0xb8);
}


