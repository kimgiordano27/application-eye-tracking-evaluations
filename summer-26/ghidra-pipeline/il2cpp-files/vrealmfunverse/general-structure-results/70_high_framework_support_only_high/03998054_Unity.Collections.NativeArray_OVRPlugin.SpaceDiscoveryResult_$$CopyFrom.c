/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyFrom
ENTRY_POINT: 03998054
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyFrom(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68);
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x310) + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = FUN_04d8a7b0(uVar3,0);
  uVar1 = thunk_FUN_02ba3594(PTR_DAT_06313048,uVar3,0);
  uVar1 = FUN_02b3c908(uVar1,2);
  FUN_0275e13c();
  FUN_0275a400(uVar1);
  FUN_0275a434(uVar1,0);
  FUN_0275a400(uVar1,uVar3);
  FUN_0275a434(uVar1,1,uVar3);
  uVar3 = thunk_FUN_02ba3594(PTR_DAT_06333c70);
  uVar3 = FUN_04dbf96c(uVar3,uVar1,0);
  thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
  uVar1 = thunk_FUN_02b79644();
  uVar2 = thunk_FUN_02ba3594(PTR_DAT_0631db50);
  FUN_04cee0f4(uVar1,uVar3,uVar2,0);
  uVar3 = thunk_FUN_02ba3594(PTR_DAT_06333c80);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar1,uVar3);
}


