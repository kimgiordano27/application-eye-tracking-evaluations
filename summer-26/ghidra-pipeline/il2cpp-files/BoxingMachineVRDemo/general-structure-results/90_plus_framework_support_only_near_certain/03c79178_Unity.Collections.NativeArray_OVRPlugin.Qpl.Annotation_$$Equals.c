/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Equals
ENTRY_POINT: 03c79178
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Equals(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  long *plVar5;
  long unaff_x23;
  undefined8 uVar6;
  
  FUN_0508773c(0);
  puVar2 = PTR_DAT_06764930;
  plVar5 = *(long **)(unaff_x23 + 0x18);
  if (plVar5 == (long *)0x0) {
    if (*(long *)(unaff_x23 + 0x10) != 0) {
      FUN_0357cd2c();
      return;
    }
                    /* try { // try from 03c79234 to 03d79243 has its CatchHandler @ 03c79244 */
                    /* catch() { ... } // from try @ 03c791b4 with catch @ 03c79244
                       catch() { ... } // from try @ 03c79234 with catch @ 03c79244 */
                    /* try { // try from 03c79248 to 03d7924b has its CatchHandler @ 03c79254 */
                    /* try { // try from 03c7924c to 03d79257 has its CatchHandler @ 03c790e4 */
    FUN_0357d02c();
    return;
  }
  lVar3 = *plVar5;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c79130 with catch @ 03c7919c
                       try { // try from 03c7919c to 03d791b3 has its CatchHandler @ 03c790e4 */
  bVar1 = *(byte *)(*(long *)PTR_DAT_06769c48 + 0x130);
                    /* try { // try from 03c791b4 to 03d791cb has its CatchHandler @ 03c79244 */
  if ((bVar1 <= *(byte *)(lVar3 + 0x130)) &&
     (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06769c48)) {
    lVar3 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar3 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
      lVar3 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar3 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      uVar6 = **(undefined8 **)(lVar3 + 0xb8);
      lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06767228);
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0(lVar4);
      }
      FUN_05069454(lVar3,uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38),0);
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0();
      }
      *(long *)(*(long *)(lVar4 + 0xb8) + 8) = lVar3;
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0();
      }
      thunk_FUN_02dd37b4(*(long *)(lVar4 + 0xb8) + 8,lVar3);
    }
    uVar6 = FUN_035829e8();
                    /* WARNING: Could not recover jumptable at 0x03c793fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x188))(plVar5,lVar3,uVar6,*(undefined8 *)(*plVar5 + 400));
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_06767888 + 0x130);
                    /* try { // try from 03c791cc to 03d79233 has its CatchHandler @ 03c790e4 */
  if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06767888)) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_06764930 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (DAT_06b7350e == '\0') {
    FUN_02d6084c(PTR_DAT_06764930);
    DAT_06b7350e = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (*(int *)(*(long *)PTR_DAT_06767a30 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06767a30);
  }
  FUN_05069828(0);
  if (lVar3 != 0) {
    FUN_05086820(lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


