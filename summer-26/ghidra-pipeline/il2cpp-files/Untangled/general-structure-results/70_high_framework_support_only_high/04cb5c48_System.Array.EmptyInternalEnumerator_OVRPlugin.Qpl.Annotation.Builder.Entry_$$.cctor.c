/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$.cctor
ENTRY_POINT: 04cb5c48
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>___cctor
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x110));
  FUN_02f07e70(PTR_DAT_06d3b5c8);
  FUN_02f07e70(PTR_DAT_06d39118);
  *(undefined1 *)(unaff_x22 + 0x1db) = 1;
  puVar3 = PTR_DAT_06d01eb0;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_056138a8(4,0);
  }
  FUN_05500f1c();
  if (*(long *)(unaff_x21 + 0x30) == 0) {
    FUN_03c166f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  }
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_056109c0(uVar5,0);
  FUN_054ff7fc();
  FUN_05500f1c();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar1 = *(int *)(unaff_x21 + 0x28);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
    }
    FUN_02f07f14(lVar4,iVar2 - iVar1);
    FUN_04cb5a7c();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_056109c0(uVar5,0);
    FUN_054ff7fc();
    return;
  }
  return;
}


