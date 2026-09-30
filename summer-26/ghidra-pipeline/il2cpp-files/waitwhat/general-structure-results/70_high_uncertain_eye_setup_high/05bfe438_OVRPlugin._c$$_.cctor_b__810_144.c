/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_144
ENTRY_POINT: 05bfe438
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined4
OVRPlugin_<>c__<_cctor>b__810_144(ulong param_1,undefined4 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong unaff_x22;
  int iVar4;
  long unaff_x23;
  long *unaff_x25;
  undefined8 in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 05bfe44c to 05cfe44f has its CatchHandler @ 05bfe468 */
                    /* try { // try from 05bfe450 to 05cfe46b has its CatchHandler @ 05bfe130 */
    FUN_03188a78(PTR_DAT_071170a8);
    *(undefined1 *)(unaff_x23 + 0xeb3) = 1;
  }
  in_stack_00000028 = 0;
                    /* catch() { ... } // from try @ 05bfe44c with catch @ 05bfe468 */
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                    /* try { // try from 05bfe46c to 05cfe473 has its CatchHandler @ 05bfe47c */
    thunk_FUN_031e5338();
  }
                    /* try { // try from 05bfe474 to 05cfe47f has its CatchHandler @ 05bfe130 */
  if (DAT_0754eed6 == '\0') {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bfe424 with catch @ 05bfe47c
                       catch(type#2 @ 00000000) { ... } // from try @ 05bfe46c with catch @ 05bfe47c
                        */
    FUN_03188a78(PTR_DAT_071170a8);
    DAT_0754eed6 = '\x01';
  }
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *unaff_x25;
  }
  if (*(int *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
    uVar1 = 2;
    if ((unaff_x22 & 1) != 0) {
      uVar1 = 3;
    }
    if ((unaff_x22 & 1) == 0) {
      if (param_3 == 0) goto OVRPlugin_<>c__<_cctor>b__810_147;
      iVar4 = *(int *)(param_3 + 0x18);
    }
    else {
      if (param_3 == 0) goto OVRPlugin_<>c__<_cctor>b__810_147;
      iVar4 = *(int *)(param_3 + 0x18);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
    }
    in_stack_00000028 = FUN_05856458(param_3,3,0);
    uVar3 = FUN_05856388(&stack0x00000028,0);
    if ((param_4 == 0) || (lVar2 = *(long *)(param_4 + 0x18), lVar2 == 0)) {
OVRPlugin_<>c__<_cctor>b__810_147:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar1 = FUN_05bfd828(param_2,uVar3,iVar4,uVar1,param_4 + 0x10,param_4 + 0x14,lVar2,
                         *(undefined4 *)(lVar2 + 0x18));
    FUN_0585646c(&stack0x00000028,0);
  }
  else {
    uVar1 = 0xfffff768;
  }
  return uVar1;
}


