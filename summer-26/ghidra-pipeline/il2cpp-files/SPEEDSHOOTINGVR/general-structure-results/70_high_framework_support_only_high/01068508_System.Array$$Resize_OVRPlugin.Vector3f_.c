/*
FUNCTION_NAME: System.Array$$Resize<OVRPlugin.Vector3f>
ENTRY_POINT: 01068508
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void System_Array__Resize<OVRPlugin_Vector3f>(uint param_1,code *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  pcVar1 = FUN_010684cc;
  if (param_2 != (code *)0x0) {
    pcVar1 = param_2;
  }
  FUN_01068660();
  if (DAT_02698110 != 0) {
    do {
      cVar5 = DAT_02698118;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x2698118,0x10);
      if (bVar3) {
        _DAT_02698118 = CONCAT71(DAT_02698118_1,1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (cVar5 != '\0') {
      FUN_01068be8();
    }
  }
  if (DAT_026980f8 == 0) {
    DAT_026980f8 = 1;
    pcVar6 = getenv("GC_IGNORE_GCJ_INFO");
    if ((pcVar6 != (char *)0x0) && (DAT_02485c10 != 0)) {
      FUN_01068160("Gcj-style type information is disabled!\n");
    }
    uVar4 = DAT_0247acb8;
    *(code **)(&DAT_02485cc8 + (long)(int)param_1 * 8) = pcVar1;
    if (uVar4 <= param_1) {
      (*(code *)PTR_FUN_0247aca0)("GC_init_gcj_malloc: bad index");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    DAT_02698108 = FUN_01068d18();
    if (pcVar6 == (char *)0x0) {
      DAT_026980fc = FUN_01068d60(DAT_02698108,0xffffffffffffffeb,0,1);
      uVar7 = FUN_01068d18();
      DAT_02698100 = FUN_01068d60(uVar7,(long)(int)(param_1 << 2 | 0x102),0,1);
    }
    else {
      DAT_02698100 = FUN_01068d60(DAT_02698108,0,1,1);
      DAT_026980fc = DAT_02698100;
    }
  }
  if (DAT_02698110 != 0) {
    _DAT_02698118 = 0;
  }
  return;
}


