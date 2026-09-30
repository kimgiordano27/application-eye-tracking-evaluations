/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 019713b0
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Qpl_Annotation>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long in_x9;
  long lVar2;
  undefined4 in_w10;
  long lVar3;
  long in_x11;
  long *unaff_x19;
  long lVar4;
  long unaff_x20;
  long *unaff_x21;
  undefined1 auVar5 [16];
  
  lVar4 = in_x9 + in_x11 * 0x10;
  *(undefined4 *)(unaff_x20 + 0x18) = in_w10;
  *(undefined8 *)(lVar4 + 0x20) = param_1;
  *(undefined8 *)(lVar4 + 0x28) = param_4;
  lVar4 = *unaff_x19;
  auVar5 = FUN_036138d0(5,0);
  if (lVar4 != 0) {
    lVar2 = *(long *)(lVar4 + 0x10);
    lVar3 = *unaff_x21;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined1 (*) [16])(lVar2 + (long)(int)uVar1 * 0x10 + 0x20) = auVar5;
        return;
      }
      FUN_026d21e8(lVar4,auVar5._0_8_,auVar5._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


