/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03115fdc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>
               (void *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_2d0 [720];
  
  memset(auStack_2d0,0,0x2d0);
  uVar1 = Newtonsoft_Json_Linq_JArray__FromObject(param_2,0);
                    /* try { // try from 03116010 to 03216027 has its CatchHandler @ 0311611c */
  if (param_3 < uVar1) {
                    /* try { // try from 03116030 to 0321603f has its CatchHandler @ 03116124 */
    memcpy(auStack_2d0,
           (void *)((long)param_2 + (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)param_3 + 0x20),
           (ulong)*(uint *)(*param_2 + 0x104));
    memcpy(param_1,auStack_2d0,0x2d0);
    return;
  }
                    /* try { // try from 0311605c to 03216083 has its CatchHandler @ 0311612c */
  thunk_FUN_02f6ef30(&DAT_068ea508);
  uVar2 = thunk_FUN_02f45270();
  uVar3 = thunk_FUN_02f6ef30(&DAT_0695e338);
  FUN_05056bc4(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar2,param_4);
}


