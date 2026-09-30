/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClampRayOriginToCamFrustumPlanes
ENTRY_POINT: 04c2f090
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_EnvironmentDepthRaycaster__ClampRayOriginToCamFrustumPlanes(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  int iStack000000000000001c;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce848);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce810);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4bc8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4bd0);
                    /* try { // try from 04c2f0c8 to 04d2f0ef has its CatchHandler @ 04c2f32c */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4bd8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4be0);
  *(undefined1 *)(unaff_x20 + 0x703) = 1;
  puVar2 = PTR_DAT_065ce810;
  iStack000000000000001c = 0;
  lVar9 = *(long *)(unaff_x19 + 8);
  if (*unaff_x19 == 0) {
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
    goto LAB_04c2f1e8;
  }
                    /* try { // try from 04c2f108 to 04d2f167 has its CatchHandler @ 04c2f330 */
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  iVar1 = *(int *)(lVar9 + 0x1c);
  iVar5 = *(int *)(lVar9 + 0x18) - iVar1;
  do {
    unaff_x19[0xe] = iVar5;
    if (iVar5 < 1) {
      uVar4 = 0;
LAB_04c2f230:
      *unaff_x19 = -2;
      puVar3 = PTR_DAT_065ce848;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0411bcac(unaff_x19 + 2,uVar4,*(undefined8 *)puVar3);
      return;
    }
    lVar6 = FUN_04c2e7c0(lVar9,iVar1,&stack0x0000001c);
    iVar1 = iStack000000000000001c;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar4 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
                    /* try { // try from 04c2f178 to 04d2f187 has its CatchHandler @ 04c2f328 */
    uVar4 = FUN_04f321b8(*(int *)(lVar6 + 0x18) - iVar1,uVar4,0);
    plVar7 = *(long **)(unaff_x19 + 10);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
                    /* try { // try from 04c2f194 to 04d2f1a3 has its CatchHandler @ 04c2f324 */
    lVar6 = (**(code **)(*plVar7 + 0x2e8))
                      (plVar7,lVar6,iVar1,uVar4,*(undefined8 *)(unaff_x19 + 0xc),
                       *(undefined8 *)(*plVar7 + 0x2f0));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
                    /* try { // try from 04c2f1b4 to 04d2f1c3 has its CatchHandler @ 04c2f318 */
    auVar10 = FUN_04048c10(lVar6,0,*(undefined8 *)PTR_DAT_065e4be0);
                    /* try { // try from 04c2f1cc to 04d2f1db has its CatchHandler @ 04c2f314 */
                    /* try { // try from 04c2f1dc to 04d2f2e7 has its CatchHandler @ 04c2ee5c */
    uVar8 = FUN_044a8d28();
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar10;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0309dd6c(unaff_x19 + 2);
      return;
    }
LAB_04c2f1e8:
    iVar5 = FUN_044a8d74();
    if (iVar5 == 0) {
      uVar4 = 1;
      goto LAB_04c2f230;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    iVar1 = *(int *)(lVar9 + 0x1c) + iVar5;
    *(int *)(lVar9 + 0x1c) = iVar1;
    iVar5 = unaff_x19[0xe] - iVar5;
  } while( true );
}


