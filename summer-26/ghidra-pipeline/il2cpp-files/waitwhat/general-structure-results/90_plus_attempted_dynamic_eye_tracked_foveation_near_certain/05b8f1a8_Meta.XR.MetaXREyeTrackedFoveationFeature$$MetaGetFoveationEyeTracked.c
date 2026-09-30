/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetFoveationEyeTracked
ENTRY_POINT: 05b8f1a8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 138
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_0754e915 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2c58);
    FUN_03188a78(PTR_DAT_071122b8);
    FUN_03188a78(PTR_DAT_07115a38);
    DAT_0754e915 = 1;
  }
  puVar1 = PTR_DAT_07115a38;
  if (*(char *)(param_1 + 0x70) == '\0') {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x28);
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_070c2c58);
  FUN_058a163c(uVar2,param_1,*(undefined8 *)puVar1,0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_071122b8) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x15) * 0x10 + 0x138);
        goto LAB_05b8f284;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)PTR_DAT_071122b8,0x15);
LAB_05b8f284:
                    /* WARNING: Could not recover jumptable at 0x05b8f298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
  return;
}


