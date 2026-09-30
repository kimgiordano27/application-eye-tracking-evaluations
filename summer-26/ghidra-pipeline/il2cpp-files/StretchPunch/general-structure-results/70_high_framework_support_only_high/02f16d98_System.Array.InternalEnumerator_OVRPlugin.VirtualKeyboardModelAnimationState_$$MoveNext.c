/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$MoveNext
ENTRY_POINT: 02f16d98
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x20;
  
  do {
    if (in_x11 == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_02f16dd0:
      (*(code *)*puVar3)();
      FUN_02f198ac();
      FUN_02f17d34();
      iVar1 = *(int *)(unaff_x20 + 0x20);
      if (0 < iVar1) {
        if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = *(int *)(*(long *)(unaff_x20 + 0x18) + 0x18) / iVar1;
        }
        if (3 < iVar2) {
          FUN_02f196ac();
          return;
        }
      }
      return;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_01dde8fc();
      goto LAB_02f16dd0;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


