/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$UpdateAnchoredPosition
ENTRY_POINT: 05acaca4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__UpdateAnchoredPosition
               (long *param_1,long param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  int unaff_w24;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  while( true ) {
    if (*(uint *)(unaff_x22 + 0x18) <= param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar2 = unaff_x22 + (long)(int)param_5 * 0xe;
    uVar1 = (**(code **)(*param_1 + 0x1b8))
                      (param_1,*(undefined8 *)(lVar2 + 0x20),(ulong)*(uint6 *)(lVar2 + 0x28),param_3
                       ,param_4 & 0xffffffffffff,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar1 & 1) != 0) break;
    param_5 = param_5 - 1;
    if ((int)param_5 < unaff_w24) {
      return 0xffffffff;
    }
  }
  return param_5;
}


