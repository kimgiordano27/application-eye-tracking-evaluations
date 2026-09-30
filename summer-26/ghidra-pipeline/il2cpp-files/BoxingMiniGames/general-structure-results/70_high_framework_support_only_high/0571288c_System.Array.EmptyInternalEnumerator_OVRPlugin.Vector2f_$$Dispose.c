/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 0571288c
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


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  code *pcVar6;
  undefined1 *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  pcVar6 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x70);
  if ((in_x9 & 1) == 0) {
    FUN_0367c9fc(param_1);
  }
  (*pcVar6)();
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x58);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x58);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x20 + 0x20);
  }
  uVar5 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x78);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x78);
  in_stack_00000010 = &stack0x0000002c;
  (**(code **)(lVar3 + 0x10))(uVar5,lVar3,lVar2,&stack0x00000010,unaff_x21);
  return unaff_x21;
}


