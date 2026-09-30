/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 02bbc254
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4s>__Dispose(ulong param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong in_x9;
  long in_x10;
  long in_x11;
  int in_w12;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  
  while( true ) {
    lVar2 = param_1 * in_x10;
    param_1 = param_1 + 1;
    *(int *)(unaff_x23 + lVar2 + 0x24) = in_w12 + -1;
    *(int *)(in_x11 + 0x20) = (int)param_1;
    while( true ) {
      if (param_1 == unaff_x24) {
        *(long *)(unaff_x19 + 0x10) = unaff_x21;
        thunk_FUN_01f51358((long *)(unaff_x19 + 0x10));
        *(long *)(unaff_x19 + 0x18) = unaff_x23;
        thunk_FUN_01f51358();
        return;
      }
      if (in_x9 <= param_1) goto LAB_02bbc2ac;
      iVar1 = *(int *)(unaff_x23 + param_1 * in_x10 + 0x20);
      if (-1 < iVar1) break;
      param_1 = param_1 + 1;
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar4 = 0;
    if (unaff_w20 != 0) {
      iVar4 = iVar1 / unaff_w20;
    }
    uVar3 = iVar1 - iVar4 * unaff_w20;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
    in_x11 = unaff_x21 + (ulong)uVar3 * 4;
    in_w12 = *(int *)(in_x11 + 0x20);
  }
LAB_02bbc2ac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


