/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0540d478
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long in_x9;
  int *in_x10;
  
  do {
    if ((bool)in_ZR) {
      lVar1 = param_1 + (long)(*in_x10 + param_4) * 0x10 + 0x138;
LAB_0540d4a4:
      lVar1 = thunk_FUN_03aa9644(*(undefined8 *)(lVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0540d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 8))();
      return;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      lVar1 = FUN_03ac43c4();
      goto LAB_0540d4a4;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


