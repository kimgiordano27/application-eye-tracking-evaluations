/*
FUNCTION_NAME: FUN_018edfac
ENTRY_POINT: 018edfac
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_018edfac(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_06dcbbf0;
  if ((DAT_0722ad74 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dcbbf0);
    thunk_FUN_0159f088(PTR_DAT_06e3cd98);
    thunk_FUN_0159f088(PTR_DAT_06df9b50);
    thunk_FUN_0159f088(PTR_DAT_06e4a328);
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    DAT_0722ad74 = 1;
  }
  lVar3 = FUN_0431b09c(param_1,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_06df9b50;
  if (lVar3 != 0) {
    uVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar3,0);
    local_28 = 0;
    FUN_03f82900(&local_28,uVar2,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_06d9fd78;
    if (((local_28 & 0xff) != 0) && (local_28._4_4_ == 0)) {
      return 0;
    }
    if (((local_28 & 0xff) != 0) && (local_28._4_4_ == 1)) {
      uVar4 = FUN_036e1620(lVar3,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar1);
      }
      uVar5 = FUN_051d94d4(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        return 0;
      }
    }
    lVar3 = FUN_036e1620(lVar3,0);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  lVar3 = FUN_051d85c4(0);
  return lVar3;
}


