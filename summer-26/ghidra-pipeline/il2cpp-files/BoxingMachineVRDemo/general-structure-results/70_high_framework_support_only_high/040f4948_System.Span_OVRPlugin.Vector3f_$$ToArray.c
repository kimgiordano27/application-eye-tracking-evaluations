/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector3f>$$ToArray
ENTRY_POINT: 040f4948
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_Vector3f>__ToArray(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [12];
  
  lVar2 = *(long *)(param_1 + 0x40);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0(lVar2);
  }
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x40);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0(lVar2);
    }
    lVar3 = *unaff_x21;
    if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
      auVar6 = (**(code **)(lVar3 + 0x178))();
      lVar2 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(uint *)(unaff_x20 + 0xc);
      uVar5 = (ulong)*(uint *)(unaff_x20 + 8) & 0x7fffffff;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x58);
      uVar4 = (uint)uVar5;
      if ((auVar6._8_4_ < uVar4) || (auVar6._8_4_ - uVar4 < uVar1)) {
        FUN_05027268(0);
      }
      if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_02d9a2e0();
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      FUN_041b5e40(auVar6._0_8_ + uVar5 * 8,uVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x68));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60e88();
}


