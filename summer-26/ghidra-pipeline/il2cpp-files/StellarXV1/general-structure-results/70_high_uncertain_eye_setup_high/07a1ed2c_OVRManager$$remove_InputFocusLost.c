/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 07a1ed2c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusLost(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_092efe40;
  if ((*(byte *)(unaff_x20 + 0x167) & 1) == 0) {
    FUN_04077588(PTR_DAT_09294de0);
    FUN_04077588(PTR_DAT_092efe48);
    FUN_04077588(PTR_DAT_092efe40);
    *(undefined1 *)(unaff_x20 + 0x167) = 1;
  }
  lVar3 = *(long *)puVar2;
  iVar1 = *(int *)(lVar3 + 0xe4);
  *(undefined4 *)(param_1 + 0x40) = 0x3f4ccccd;
  if (iVar1 == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *(long *)puVar2;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09294de0);
                    /* catch() { ... } // from try @ 07a1edf0 with catch @ 07a1edd4
                       catch() { ... } // from try @ 07a1ee28 with catch @ 07a1edd4
                       catch() { ... } // from try @ 07a1ee50 with catch @ 07a1edd4 */
    FUN_056720ac(lVar6,uVar7,*(undefined8 *)PTR_DAT_092efe48,0);
                    /* try { // try from 07a1ede8 to 07b1edef has its CatchHandler @ 07a1ee08 */
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar6;
    thunk_FUN_040ec700(plVar4,lVar6);
  }
                    /* try { // try from 07a1edf0 to 07b1ee23 has its CatchHandler @ 07a1edd4 */
  *(long *)(param_1 + 0x48) = lVar6;
  thunk_FUN_040ec700((long *)(param_1 + 0x48),lVar6);
  thunk_FUN_089c6ea4(param_1,0);
  return;
}


