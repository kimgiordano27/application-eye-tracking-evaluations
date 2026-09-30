/*
FUNCTION_NAME: FUN_056544b0
ENTRY_POINT: 056544b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_056544b0(long param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 local_14 [2];
  
  local_14[0] = (undefined2)param_2;
  if (*(int *)(param_1 + 0x4c) == 5) {
                    /* WARNING: Subroutine does not return */
    FUN_05650b10();
  }
  if ((param_2 + 0x2000U >> 0xb & 0x1f) < 0x1f) {
    if (*(long *)(param_1 + 0x40) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar1 = FUN_0504b4c4(local_14,0);
      FUN_05653840(param_1,uVar1);
    }
    if (*(char *)(param_1 + 0x49) == '\0') {
      FUN_05652f4c(param_1,local_14[0]);
      if (0 < *(int *)(param_1 + 0x60)) {
        FUN_056553a4(param_1);
      }
      plVar2 = *(long **)(param_1 + 0x18);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      (**(code **)(*plVar2 + 0x298))(plVar2,local_14[0],*(undefined8 *)(*plVar2 + 0x2a0));
    }
    return;
  }
  uVar1 = thunk_FUN_02f6ef30(
                            Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>__ctor__
                            );
  uVar1 = FUN_056b3cb4(uVar1,0);
  thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
  uVar3 = thunk_FUN_02f45270();
  uVar4 = thunk_FUN_02f6ef30(
                            Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
                            );
  FUN_0504ee88(uVar3,uVar1,uVar4,0);
  uVar1 = FUN_056b3cb8(uVar3,0);
  uVar3 = thunk_FUN_02f6ef30(
                            Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_GetEnumerator__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar1,uVar3);
}


