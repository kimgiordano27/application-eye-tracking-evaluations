/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 04a24d34
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_Vector4s>__ToArray(void)

{
  long lVar1;
  undefined8 unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 uVar2;
  long unaff_x23;
  
  lVar1 = FUN_031c09d4();
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar1 = *(long *)(*(long *)(unaff_x23 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (**(char **)(lVar1 + 0xb8) != '\0') {
    lVar1 = *(long *)(unaff_x22 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x40);
    if (*(int *)(DAT_07562970 + 0xe4) == 0) {
      thunk_FUN_031e5338(DAT_07562970);
    }
    uVar2 = FUN_0593e698(uVar2,0);
    FUN_05ed47a4(uVar2,0);
  }
  if (unaff_w20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05ed4b48(1,0);
  }
  *(int *)(unaff_x21 + 2) = unaff_w20;
  *unaff_x21 = 0;
  unaff_x21[1] = unaff_x19;
  return;
}


