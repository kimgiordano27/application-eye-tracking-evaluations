/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 059ce058
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  __cxa_end_catch();
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68);
  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar3 = FUN_074f3c94(uVar3,0);
  uVar1 = thunk_FUN_04097b88(PTR_DAT_08f65d88,uVar3,0);
  uVar1 = FUN_040316d0(uVar1,2);
  FUN_03a8b7e0();
  FUN_03a8b998(uVar1);
  FUN_03a8bb34(uVar1,0);
  FUN_03a8b998(uVar1,uVar3);
  FUN_03a8bb34(uVar1,1,uVar3);
  uVar3 = thunk_FUN_04097b88(PTR_DAT_08fa3bc8);
  uVar3 = FUN_07529038(uVar3,uVar1,0);
  thunk_FUN_04097b88(PTR_DAT_08f66298);
  uVar1 = thunk_FUN_0406deb8();
  uVar2 = thunk_FUN_04097b88(PTR_DAT_08f66270);
  FUN_07443d68(uVar1,uVar3,uVar2,0);
  uVar3 = thunk_FUN_04097b88(PTR_DAT_08fa3bd8);
                    /* WARNING: Subroutine does not return */
  FUN_04031750(uVar1,uVar3);
}


