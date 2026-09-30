/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 0470be70
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator
               (undefined8 param_1,long param_2,uint param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long *plVar2;
  float *pfVar3;
  int in_w8;
  long lVar4;
  float *pfVar5;
  
  puVar1 = PTR_DAT_0727a488;
  if ((int)param_3 < in_w8) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar4 = (long)in_w8 - (long)(int)param_3;
    pfVar5 = (float *)(param_2 + (long)(int)param_3 * 0x10 + 0x2c);
    do {
      if ((*(uint *)(param_2 + 0x18) <= param_3) ||
         (plVar2 = (long *)thunk_FUN_032a52d0(**(undefined8 **)(*(long *)(param_5 + 0x20) + 0xc0)),
         *(uint *)(param_2 + 0x18) <= param_3)) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      if (DAT_076cf52d == '\0') {
        thunk_FUN_032e1da0(puVar1);
        DAT_076cf52d = '\x01';
      }
      if ((((plVar2 != (long *)0x0) && (*plVar2 == *(long *)puVar1)) &&
          (pfVar3 = (float *)thunk_FUN_032a57f4(plVar2), pfVar5[-3] == *pfVar3)) &&
         (((pfVar5[-2] == pfVar3[1] && (pfVar5[-1] == pfVar3[2])) && (*pfVar5 == pfVar3[3])))) {
        return param_3;
      }
      param_3 = param_3 + 1;
      lVar4 = lVar4 + -1;
      pfVar5 = pfVar5 + 4;
    } while (lVar4 != 0);
  }
  return 0xffffffff;
}


