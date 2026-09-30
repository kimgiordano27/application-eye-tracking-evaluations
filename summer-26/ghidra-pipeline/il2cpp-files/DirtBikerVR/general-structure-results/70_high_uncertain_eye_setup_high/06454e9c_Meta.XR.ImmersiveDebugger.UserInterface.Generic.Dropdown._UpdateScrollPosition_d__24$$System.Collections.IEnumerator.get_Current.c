/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06454e9c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_Collections_IEnumerator_get_Current
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  ulong uVar2;
  int in_w8;
  
  if (in_w8 + 1 <= (int)param_5) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_5) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      lVar1 = param_2 + (long)(int)param_5 * 0x10;
      uVar2 = (**(code **)(*param_1 + 0x1b8))
                        (param_1,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),param_3
                         ,param_4,*(undefined8 *)(*param_1 + 0x1c0));
      if ((uVar2 & 1) != 0) {
        return param_5;
      }
      param_5 = param_5 - 1;
    } while (in_w8 + 1 <= (int)param_5);
  }
  return 0xffffffff;
}


