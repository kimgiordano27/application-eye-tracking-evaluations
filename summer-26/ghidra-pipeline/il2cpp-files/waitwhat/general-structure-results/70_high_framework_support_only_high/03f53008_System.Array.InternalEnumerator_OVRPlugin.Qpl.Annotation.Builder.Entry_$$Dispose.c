/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Dispose
ENTRY_POINT: 03f53008
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


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__Dispose(long param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  long lVar3;
  void *__src;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  void *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 uVar7;
  size_t unaff_x24;
  code *pcVar8;
  void *unaff_x25;
  long unaff_x27;
  undefined4 unaff_w28;
  long unaff_x29;
  
  FUN_03188a98(*(undefined8 *)(param_1 + 0x80));
  puVar2 = (undefined4 *)thunk_FUN_031e5890();
  lVar3 = *(long *)(unaff_x20 + 0x20);
  *puVar2 = unaff_w28;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  __src = (void *)thunk_FUN_031e5890();
  memcpy(unaff_x25,__src,unaff_x24);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_03188aa0();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  plVar4 = (long *)thunk_FUN_031e5890();
  if (*plVar4 == 0) {
    uVar7 = 0;
  }
  else {
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar5 = (undefined8 *)thunk_FUN_031e5890();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar7 = *puVar5;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_031c09d4(lVar3);
    }
    uVar7 = (*pcVar8)(uVar7,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48));
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4();
  }
  FUN_03188a98(*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x40,8);
  puVar5 = (undefined8 *)thunk_FUN_031e5890();
  *puVar5 = uVar7;
  memcpy(unaff_x19,unaff_x22,unaff_x21);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


