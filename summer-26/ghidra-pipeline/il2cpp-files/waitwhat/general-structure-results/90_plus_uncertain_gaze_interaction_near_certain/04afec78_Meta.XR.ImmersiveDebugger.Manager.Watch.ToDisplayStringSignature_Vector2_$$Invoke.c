/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$Invoke
ENTRY_POINT: 04afec78
PROGRAM: waitwhat-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__Invoke
               (long param_1,undefined8 param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong __n;
  long lVar4;
  long in_x9;
  code *pcVar5;
  undefined8 unaff_x20;
  byte unaff_w21;
  byte unaff_w22;
  undefined8 *__dest;
  long unaff_x24;
  long *plVar6;
  long unaff_x29;
  
  *(void **)(unaff_x29 + -0x38) = param_3;
  plVar6 = *(long **)(param_1 + 0xc0);
  lVar4 = *plVar6;
  __n = (ulong)*(uint *)(lVar4 + 0xfc);
  __dest = (undefined8 *)(in_x9 - (__n + 0xf & 0x1fffffff0));
  iVar1 = *(int *)(lVar4 + 0x28);
  if (-1 < iVar1) {
    param_3 = (void *)(unaff_x29 + -0x38);
  }
  memcpy(__dest,param_3,__n);
  puVar3 = (undefined8 *)plVar6[2];
  uVar2 = *puVar3;
  if (-1 < iVar1) {
    __dest = (undefined8 *)*__dest;
  }
  *(byte *)(unaff_x29 + -0xc) = unaff_w22 & 1;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x20;
  *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
  *(byte *)(unaff_x29 + -0x10) = unaff_w21 & 1;
  pcVar5 = (code *)puVar3[2];
  *(undefined8 **)(unaff_x29 + -0x30) = __dest;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xc;
  (*pcVar5)(uVar2);
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


