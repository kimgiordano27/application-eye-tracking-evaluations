/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 0470bedc
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


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1)

{
  long *plVar1;
  float *pfVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  long unaff_x25;
  float *unaff_x26;
  undefined1 unaff_w27;
  
  while (plVar1 = (long *)thunk_FUN_032a52d0(param_1), unaff_w19 < *(uint *)(unaff_x21 + 0x18)) {
    if (*(char *)(unaff_x24 + 0x52d) == '\0') {
      thunk_FUN_032e1da0();
      *(undefined1 *)(unaff_x24 + 0x52d) = unaff_w27;
    }
    if ((((plVar1 != (long *)0x0) && (*plVar1 == *unaff_x22)) &&
        (pfVar2 = (float *)thunk_FUN_032a57f4(plVar1), unaff_x26[-3] == *pfVar2)) &&
       (((unaff_x26[-2] == pfVar2[1] && (unaff_x26[-1] == pfVar2[2])) && (*unaff_x26 == pfVar2[3])))
       ) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x25 = unaff_x25 + -1;
    unaff_x26 = unaff_x26 + 4;
    if (unaff_x25 == 0) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) break;
    param_1 = **(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


