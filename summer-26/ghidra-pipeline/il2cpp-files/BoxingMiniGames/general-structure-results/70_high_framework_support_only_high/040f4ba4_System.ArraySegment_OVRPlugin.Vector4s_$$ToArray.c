/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 040f4ba4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ArraySegment<OVRPlugin_Vector4s>__ToArray(void)

{
  int iVar1;
  long lVar2;
  undefined2 *unaff_x19;
  long unaff_x20;
  ushort *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  uint uStack000000000000000c;
  
  do {
    iVar1 = FUN_0716c990(unaff_x22,unaff_x23,1,0);
    if (iVar1 != 0) {
      return;
    }
    unaff_x24 = unaff_x24 + -1;
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 1;
  } while (unaff_x24 != 0);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uStack000000000000000c = (uint)*unaff_x21;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x148) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_0367c9fc();
  }
  FUN_05e14e9c(&stack0x0000000c,*unaff_x19,0);
  return;
}


