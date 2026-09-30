/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 02b755fc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  
  do {
                    /* catch() { ... } // from try @ 02b75590 with catch @ 02b755fc */
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_02b7562c:
      (*(code *)*puVar1)();
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01e7f0d0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01d7db68();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_01dde8fc();
      goto LAB_02b7562c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


