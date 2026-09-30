/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$AsReadOnly
ENTRY_POINT: 036d8654
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


undefined8
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__AsReadOnly
          (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long in_x9;
  long *unaff_x20;
  long *plVar3;
  long unaff_x22;
  long unaff_x23;
  
  if (*(long *)(param_1 + in_x9 * 8 + -8) != param_3) {
code_r0x036d89b0:
                    /* WARNING: Subroutine does not return */
    FUN_0160f170();
  }
  lVar1 = thunk_FUN_0159f088(PTR_DAT_06d91a68);
  if ((*(byte *)(*unaff_x20 + 300) < *(byte *)(lVar1 + 300)) ||
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) != lVar1))
  goto code_r0x036d89b0;
  FUN_036eff74();
  plVar3 = *(long **)(unaff_x22 + 0x98);
  if (unaff_x23 == 0) {
    lVar1 = thunk_FUN_0159f088(PTR_DAT_06d91a68);
    if (plVar3 == (long *)0x0) goto LAB_036d83f8;
    if ((*(byte *)(*plVar3 + 300) < *(byte *)(lVar1 + 300)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) != lVar1))
    goto code_r0x036d89b8;
    lVar1 = thunk_FUN_0159f088(PTR_DAT_06d91a68);
    if ((*(byte *)(*plVar3 + 300) < *(byte *)(lVar1 + 300)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) != lVar1))
    goto code_r0x036d89b8;
    FUN_036eff74(plVar3,0);
    plVar3 = *(long **)(unaff_x22 + 0x98);
    thunk_FUN_0159f088(PTR_DAT_06e2a4d8);
    puVar2 = PTR_DAT_06d91a68;
  }
  else {
    lVar1 = thunk_FUN_0159f088(PTR_DAT_06e69590);
    if (plVar3 == (long *)0x0) {
LAB_036d83f8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if ((*(byte *)(*plVar3 + 300) < *(byte *)(lVar1 + 300)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) != lVar1))
    goto code_r0x036d89b8;
    lVar1 = thunk_FUN_0159f088(PTR_DAT_06e69590);
    if ((*(byte *)(*plVar3 + 300) < *(byte *)(lVar1 + 300)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) != lVar1))
    goto code_r0x036d89b8;
    plVar3 = (long *)plVar3[0x18];
    if (plVar3 == (long *)0x0) goto LAB_036d83f8;
    (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    plVar3 = *(long **)(unaff_x22 + 0x98);
    thunk_FUN_0159f088(PTR_DAT_06e408d0);
    puVar2 = PTR_DAT_06e69590;
  }
  lVar1 = thunk_FUN_0159f088(puVar2);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 300) < *(byte *)(lVar1 + 300)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) != lVar1)) {
code_r0x036d89b8:
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(plVar3);
    }
  }
  FUN_01fbb10c();
  lVar1 = thunk_FUN_0159f088(PTR_DAT_06dd0a58);
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  puVar2 = PTR_DAT_06dd0a58;
  if ((DAT_07239c2d & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dd0a58);
    DAT_07239c2d = 1;
  }
  lVar1 = *(long *)puVar2;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar1 = *(long *)puVar2;
  }
  if ((**(long **)(lVar1 + 0xb8) != 0) &&
     (lVar1 = FUN_03fc53ec(**(long **)(lVar1 + 0xb8),0), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x80);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


