/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 047a6fa8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_036a1978();
  uVar1 = FUN_05e26f18();
  uVar2 = thunk_FUN_036aa1c8(PTR_DAT_079f4558,uVar1,0);
  uVar2 = FUN_03642a4c(uVar2,2);
  FUN_03156bd4();
  FUN_03154b74(uVar2);
  FUN_03154bd8(uVar2,0);
  FUN_03154b74(uVar2,uVar1);
  FUN_03154bd8(uVar2,1,uVar1);
  uVar1 = thunk_FUN_036aa1c8(PTR_DAT_07a15998);
  uVar1 = Newtonsoft_Json_JsonWriter__get_DateFormatHandling(uVar1,uVar2,0);
  thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
  uVar2 = thunk_FUN_0367fe20();
  uVar3 = thunk_FUN_036aa1c8(PTR_DAT_079fdea8);
  FUN_05d7e218(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_036aa1c8(PTR_DAT_07a159a8);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar2,uVar1);
}


