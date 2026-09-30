/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 057b0698
PROGRAM: MRTraveler-libil2cpp.so
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
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               uint param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  int in_w8;
  long lVar2;
  long in_x9;
  long unaff_x23;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  puVar3 = (undefined8 *)(unaff_x23 + (long)(int)param_5 * 0x10 + 0x20);
  lVar4 = (long)in_w8 - (long)(int)param_5;
  while (param_5 < *(uint *)(unaff_x23 + 0x18)) {
    in_stack_00000020 = param_3;
    in_stack_00000028 = param_4;
    thunk_FUN_03cf4e64(**(undefined8 **)(*(long *)(param_7 + 0x20) + 0xc0),&stack0x00000020);
    lVar2 = **(long **)(*(long *)(param_7 + 0x20) + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_03cf1244(lVar2);
    }
    if (*(uint *)(unaff_x23 + 0x18) <= param_5) break;
    uVar5 = *puVar3;
    *(undefined8 *)(in_x9 + 0x18) = puVar3[1];
    *(undefined8 *)(in_x9 + 0x10) = uVar5;
    uVar1 = thunk_FUN_0715d3b4();
    if ((uVar1 & 1) != 0) {
      return param_5;
    }
    param_5 = param_5 + 1;
    lVar4 = lVar4 + -1;
    puVar3 = puVar3 + 2;
    if (lVar4 == 0) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


