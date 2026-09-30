/*
FUNCTION_NAME: Meta.XR.InputActions.UserInputActionSet$$.ctor
ENTRY_POINT: 07c4553c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_InputActions_UserInputActionSet___ctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* try { // try from 07c45544 to 07d4557b has its CatchHandler @ 07c455d0 */
  if ((DAT_0a5265b0 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4fe00);
    FUN_04447ba8(PTR_DAT_09f4fe08);
    FUN_04447ba8(PTR_DAT_09f4fe10);
    FUN_04447ba8(PTR_DAT_09f4fe18);
    DAT_0a5265b0 = 1;
  }
  puVar1 = PTR_DAT_09f4fe18;
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 07c45594 to 07d45597 has its CatchHandler @ 07c455c4 */
                    /* try { // try from 07c45598 to 07d4559b has its CatchHandler @ 07c455d0 */
                    /* try { // try from 07c4559c to 07d4559f has its CatchHandler @ 07c455b4 */
                    /* try { // try from 07c455a0 to 07d455a3 has its CatchHandler @ 07c455ac */
    return;
  }
                    /* try { // try from 07c455a4 to 07d455a7 has its CatchHandler @ 07c455cc */
                    /* catch() { ... } // from try @ 07c4541c with catch @ 07c455a8
                       try { // try from 07c455a8 to 07d455e7 has its CatchHandler @ 07c452e4 */
                    /* catch() { ... } // from try @ 07c455a0 with catch @ 07c455ac */
  lVar4 = *(long *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 07c4540c with catch @ 07c455b0 */
  lVar2 = *(long *)PTR_DAT_09f4fe18;
                    /* catch() { ... } // from try @ 07c4559c with catch @ 07c455b4 */
                    /* catch() { ... } // from try @ 07c45438 with catch @ 07c455b8 */
  if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 07c453e8 with catch @ 07c455bc */
    thunk_FUN_044a54b4();
                    /* catch() { ... } // from try @ 07c454fc with catch @ 07c455c0 */
    lVar2 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar2 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f4fe00);
    FUN_071828e0(lVar5,uVar6,*(undefined8 *)PTR_DAT_09f4fe10,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar5;
    thunk_FUN_044bb4b4(plVar3,lVar5);
  }
  if (lVar4 != 0) {
    FUN_04e4053c(lVar4,lVar5,*(undefined8 *)PTR_DAT_09f4fe08);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


