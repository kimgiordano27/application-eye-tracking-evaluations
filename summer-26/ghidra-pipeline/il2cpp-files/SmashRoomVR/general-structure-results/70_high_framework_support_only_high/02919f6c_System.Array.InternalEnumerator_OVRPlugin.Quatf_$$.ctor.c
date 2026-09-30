/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$.ctor
ENTRY_POINT: 02919f6c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Quatf>___ctor
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long param_5)

{
  bool in_ZR;
  bool in_CY;
  int iVar1;
  uint in_w8;
  long unaff_x20;
  uint unaff_w21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (in_CY && !in_ZR) {
    puVar4 = (undefined8 *)(unaff_x20 + (long)(int)unaff_w21 * 8 + 0x20);
    uVar2 = *puVar4;
    if (param_4 < in_w8) {
      puVar5 = (undefined8 *)(unaff_x20 + (long)(int)param_4 * 8 + 0x20);
      uVar3 = *puVar5;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      iVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),uVar2,uVar3,*(undefined8 *)(param_2 + 0x28)
                        );
      if (iVar1 < 1) {
        return;
      }
      if ((unaff_w21 < *(uint *)(unaff_x20 + 0x18)) && (param_4 < *(uint *)(unaff_x20 + 0x18))) {
        uVar2 = *puVar4;
        *puVar4 = *puVar5;
        if (param_4 < *(uint *)(unaff_x20 + 0x18)) {
          *puVar5 = uVar2;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


