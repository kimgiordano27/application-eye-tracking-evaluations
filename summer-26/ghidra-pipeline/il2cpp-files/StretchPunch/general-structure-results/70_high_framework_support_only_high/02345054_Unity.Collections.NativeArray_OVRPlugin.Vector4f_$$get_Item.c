/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$get_Item
ENTRY_POINT: 02345054
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Item(void)

{
  bool in_ZR;
  bool in_CY;
  long lVar1;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (!in_CY || in_ZR) {
    FUN_033b35a8(0);
  }
  lVar1 = *(long *)(unaff_x21 + 0x10);
  if (lVar1 != 0) {
    if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)unaff_w20 * 0x40;
      uVar4 = *(undefined8 *)(lVar1 + 0x40);
      uVar3 = *(undefined8 *)(lVar1 + 0x58);
      uVar2 = *(undefined8 *)(lVar1 + 0x50);
      uVar8 = *(undefined8 *)(lVar1 + 0x28);
      uVar7 = *(undefined8 *)(lVar1 + 0x20);
      uVar6 = *(undefined8 *)(lVar1 + 0x38);
      uVar5 = *(undefined8 *)(lVar1 + 0x30);
      unaff_x19[5] = *(undefined8 *)(lVar1 + 0x48);
      unaff_x19[4] = uVar4;
      unaff_x19[7] = uVar3;
      unaff_x19[6] = uVar2;
      unaff_x19[1] = uVar8;
      *unaff_x19 = uVar7;
      unaff_x19[3] = uVar6;
      unaff_x19[2] = uVar5;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


