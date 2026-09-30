/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 0470bcf8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9,
               long param_10)

{
  bool bVar1;
  long *plVar2;
  float *pfVar3;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  uStack0000000000000000 = param_5;
  uStack0000000000000004 = param_6;
  uStack0000000000000008 = param_7;
  uStack000000000000000c = param_8;
  plVar2 = (long *)thunk_FUN_032a52d0(**(undefined8 **)(*(long *)(param_10 + 0x20) + 0xc0));
  if (DAT_076cf52d == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_0727a488);
    DAT_076cf52d = '\x01';
  }
  if (((plVar2 == (long *)0x0) || (*plVar2 != *(long *)PTR_DAT_0727a488)) ||
     (pfVar3 = (float *)thunk_FUN_032a57f4(plVar2), param_1 != *pfVar3)) {
    bVar1 = false;
  }
  else {
    bVar1 = param_4 == pfVar3[3] && (param_3 == pfVar3[2] && param_2 == pfVar3[1]);
  }
  return bVar1;
}


