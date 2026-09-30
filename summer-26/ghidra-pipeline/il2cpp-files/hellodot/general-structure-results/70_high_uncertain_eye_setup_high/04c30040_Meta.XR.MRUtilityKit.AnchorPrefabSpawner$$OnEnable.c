/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$OnEnable
ENTRY_POINT: 04c30040
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__OnEnable(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1bd8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1be0);
                    /* try { // try from 04c30058 to 04d3005b has its CatchHandler @ 04c3014c */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1be8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e62c8);
                    /* try { // try from 04c30070 to 04d300f3 has its CatchHandler @ 04c30158 */
  *(undefined1 *)(unaff_x20 + 0x70b) = 1;
  puVar2 = PTR_DAT_065c84d8;
  if (*unaff_x19 == 0) {
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(long *)(lVar7 + 0x38) == 0) {
      uVar1 = *(undefined4 *)(lVar7 + 0x58);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e62c8);
      FUN_04c2e624(uVar3,lVar7,uVar1);
      *(undefined8 *)(lVar7 + 0x38) = uVar3;
    }
    else {
      *(undefined4 *)(*(long *)(lVar7 + 0x38) + 0x1c) = 0;
    }
    plVar4 = *(long **)(unaff_x19 + 10);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04c301f4 to 04d30213 has its CatchHandler @ 04c30314 */
      FUN_02ce7c7c();
    }
    lVar5 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
    if (lVar5 != *(long *)(lVar7 + 0x48)) {
      plVar4 = *(long **)(unaff_x19 + 10);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
                    /* try { // try from 04c30118 to 04d3012b has its CatchHandler @ 04c302a8 */
      (**(code **)(*plVar4 + 0x218))
                (plVar4,*(long *)(lVar7 + 0x48),*(undefined8 *)(*plVar4 + 0x220));
    }
    if (*(long *)(lVar7 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar7 = FUN_04c2e6b0(*(long *)(lVar7 + 0x38),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
                    /* try { // try from 04c30144 to 04d30147 has its CatchHandler @ 04c30150 */
    auVar8 = FUN_04046650(lVar7,0,*(undefined8 *)PTR_DAT_065e1be8);
                    /* try { // try from 04c30148 to 04d3016b has its CatchHandler @ 04c2fdc0 */
                    /* catch() { ... } // from try @ 04c30058 with catch @ 04c3014c */
                    /* catch() { ... } // from try @ 04c30144 with catch @ 04c30150 */
                    /* catch() { ... } // from try @ 04c30030 with catch @ 04c30154 */
                    /* catch() { ... } // from try @ 04c30070 with catch @ 04c30158 */
    uVar6 = FUN_044a8b38();
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = auVar8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0335f440(unaff_x19 + 2);
      return;
    }
  }
                    /* try { // try from 04c3016c to 04d3016f has its CatchHandler @ 04c3022c */
                    /* try { // try from 04c30170 to 04d301f3 has its CatchHandler @ 04c2fdc0 */
  FUN_044a8b84();
  *unaff_x19 = -2;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04e5a1e4(unaff_x19 + 2,0);
  return;
}


