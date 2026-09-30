/*
FUNCTION_NAME: FUN_0366f578
ENTRY_POINT: 0366f578
PROGRAM: vrfs-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0366f578(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_DAT_06d9fd78;
  if ((bRam000000000723972a & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    bRam000000000723972a = 1;
  }
  System_Array__InternalArray__get_Item<TMP_TextProcessingStack<int>>(param_1,0);
  uVar2 = FUN_0366303c(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar1);
  }
  uVar3 = FUN_051d94d4(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_0366303c(param_1);
    if (lVar4 == 0) {
LAB_0366f67c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    fVar5 = (float)Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_Length(lVar4,0);
    if (fVar5 != *(float *)((long)param_1 + 0x104)) {
      lVar4 = FUN_0366303c(param_1);
      if (lVar4 == 0) goto LAB_0366f67c;
      uVar6 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_Length(lVar4,0);
      *(undefined4 *)((long)param_1 + 0x104) = uVar6;
      if ((int)param_1[0x1c] - 1U < 2) {
        (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
                    /* WARNING: Could not recover jumptable at 0x0366f66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
        return;
      }
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x104) = 0x42c80000;
  }
  return;
}


