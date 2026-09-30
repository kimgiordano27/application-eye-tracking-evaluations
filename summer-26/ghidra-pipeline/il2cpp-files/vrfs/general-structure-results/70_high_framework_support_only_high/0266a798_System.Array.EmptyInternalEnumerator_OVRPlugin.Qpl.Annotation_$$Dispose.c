/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 0266a798
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_0159f088();
  thunk_FUN_0159f088(PTR_DAT_06e214e8);
  thunk_FUN_0159f088(PTR_DAT_06e52cd8);
  thunk_FUN_0159f088(PTR_DAT_06e1ffb0);
  thunk_FUN_0159f088(PTR_DAT_06db78a8);
  *(undefined1 *)(unaff_x21 + 0x50a) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (DAT_07232597 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e214e8);
    DAT_07232597 = '\x01';
  }
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar3 = *unaff_x20;
  }
  puVar2 = PTR_DAT_06e52cd8;
  puVar1 = PTR_DAT_06db78a8;
  pcVar5 = *(char **)(lVar3 + 0xb8);
  if (*pcVar5 == '\0') {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      pcVar5 = *(char **)(*unaff_x20 + 0xb8);
    }
    uVar4 = *(undefined8 *)(pcVar5 + 8);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_0486672c(uVar4,0);
    lVar3 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06dbf2b0 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar4 = FUN_026403b0();
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_027252f0(lVar3,uVar4,*(undefined8 *)PTR_DAT_06e1ffb0);
  }
  return lVar3;
}


