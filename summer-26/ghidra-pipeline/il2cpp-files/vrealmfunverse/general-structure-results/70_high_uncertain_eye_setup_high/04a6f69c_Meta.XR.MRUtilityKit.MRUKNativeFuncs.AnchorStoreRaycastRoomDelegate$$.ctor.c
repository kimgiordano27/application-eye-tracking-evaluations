/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomDelegate$$.ctor
ENTRY_POINT: 04a6f69c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate___ctor
               (long param_1,long param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  int in_w9;
  ulong in_x10;
  int in_w11;
  long in_x12;
  ulong in_x13;
  
  while (in_x10 < in_x13) {
    if (-1 < *(int *)(in_x12 + param_1 + 0x20)) {
      uVar1 = in_w11 + param_4;
      if (*(uint *)(param_3 + 0x18) <= uVar1) break;
      in_w11 = in_w11 + 1;
      *(undefined8 *)(param_3 + (long)(int)uVar1 * 8 + 0x20) =
           *(undefined8 *)(in_x12 + param_1 + 0x28);
      in_w9 = *(int *)(param_2 + 0x24);
    }
    in_x10 = in_x10 + 1;
    if (((long)in_w9 <= (long)in_x10) || (param_1 = param_1 + 0x10, param_5 <= in_w11)) {
      return;
    }
    in_x12 = *(long *)(param_2 + 0x18);
    if (in_x12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    in_x13 = (ulong)*(uint *)(in_x12 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


