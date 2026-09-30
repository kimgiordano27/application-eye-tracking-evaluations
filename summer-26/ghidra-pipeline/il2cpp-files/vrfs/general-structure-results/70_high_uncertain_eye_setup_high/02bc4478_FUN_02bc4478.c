/*
FUNCTION_NAME: FUN_02bc4478
ENTRY_POINT: 02bc4478
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


undefined8 FUN_02bc4478(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam00000000072358e5 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e440a8);
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    bRam00000000072358e5 = 1;
  }
  lVar3 = FUN_051e516c(param_1,0);
  puVar1 = PTR_DAT_06d9fd78;
  if (lVar3 != 0) {
    lVar3 = FUN_01a257e8(lVar3,*(undefined8 *)PTR_DAT_06e440a8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar1);
    }
    uVar4 = FUN_051e0350(lVar3,0);
    if ((uVar4 & 1) != 0) {
      if (lVar3 == 0) goto LAB_02bc4540;
      uVar4 = FUN_036e0e70(lVar3,0);
      if (((uVar4 & 1) != 0) &&
         (iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar3,0),
         iVar2 != 2)) {
        return 0;
      }
    }
    return 1;
  }
LAB_02bc4540:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


