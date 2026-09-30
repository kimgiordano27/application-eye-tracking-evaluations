/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugBar$$RegisterControl
ENTRY_POINT: 04c13498
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_UserInterface_DebugBar__RegisterControl(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0x1f0));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e54d8);
  *(undefined1 *)(unaff_x20 + 0x5e2) = 1;
  if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x48) == 0)) {
LAB_04c1356c:
    puVar1 = PTR_DAT_065dd1f0;
    if (*(long *)(unaff_x19 + 0x50) != 0) {
                    /* try { // try from 04c13580 to 04d13593 has its CatchHandler @ 04c136e8 */
      if (*(int *)(*(long *)PTR_DAT_065dd1f0 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a6975a == '\0') {
                    /* try { // try from 04c1359c to 04d135a7 has its CatchHandler @ 04c136e4 */
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd1f0);
                    /* try { // try from 04c135a8 to 04d136c7 has its CatchHandler @ 04c132e0 */
        DAT_06a6975a = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar4 = *(long *)puVar1;
      }
      uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
      lVar4 = **(long **)(lVar4 + 0xb8);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e54d0);
      FUN_04255070(uVar3,uVar7,*(undefined8 *)PTR_DAT_065e54c8);
      if (lVar4 == 0) {
LAB_04c136c0:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar3 = FUN_04c1ace0(lVar4,uVar3,0);
      lVar4 = 0;
      goto LAB_04c1361c;
    }
    lVar4 = 0;
  }
  else {
    plVar2 = (long *)FUN_04dd5cec(0);
                    /* try { // try from 04c134cc to 04d134f3 has its CatchHandler @ 04c136ec */
    uVar3 = FUN_04db9398(*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_065db1f0,
                         *(undefined8 *)(unaff_x19 + 0x48),0);
    if (plVar2 == (long *)0x0) goto LAB_04c136c0;
    uVar3 = (**(code **)(*plVar2 + 0x248))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x250));
                    /* try { // try from 04c1350c to 04d1356b has its CatchHandler @ 04c136f0 */
    if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)PTR_DAT_065cd840);
    }
    uVar3 = FUN_04eaf7a8(uVar3,0);
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e2a58);
    FUN_054e1dfc(lVar4,*(undefined8 *)PTR_DAT_065e54d8,uVar3,0);
    if (lVar4 == 0) goto LAB_04c1356c;
  }
  uVar3 = 0;
LAB_04c1361c:
  puVar1 = PTR_DAT_065e54c0;
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (uVar5 = FUN_033c0958(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_065e1cd8),
     (uVar5 & 1) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_04dba1c8(*(undefined8 *)PTR_DAT_065ca570,*(undefined8 *)(unaff_x19 + 0x20),0);
  }
  uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
  lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04f7383c(lVar6,0);
  *(undefined8 *)(lVar6 + 0x20) = uVar7;
  *(undefined8 *)(lVar6 + 0x38) = uVar8;
  *(undefined8 *)(lVar6 + 0x40) = uVar3;
  *(long *)(lVar6 + 0x48) = lVar4;
  *(undefined8 *)(lVar6 + 0x18) = uVar12;
  *(undefined8 *)(lVar6 + 0x10) = uVar11;
  *(undefined8 *)(lVar6 + 0x30) = uVar10;
  *(undefined8 *)(lVar6 + 0x28) = uVar9;
  return lVar6;
}


