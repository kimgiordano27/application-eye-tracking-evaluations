/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 06f614b0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor
               (long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar2;
  
  FUN_05216464(param_2,0xf,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x200));
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    FUN_040b1acc(lVar2);
  }
  if ((unaff_x19 != 0) && (lVar2 = thunk_FUN_040b4e00(), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc(lVar2);
  }
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0();
  }
  puVar1 = (undefined4 *)thunk_FUN_040b5044();
  FUN_06f5fccc(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  return;
}


