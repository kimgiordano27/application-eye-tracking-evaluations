/*
FUNCTION_NAME: OVRPlugin.ControllerState4$$.ctor
ENTRY_POINT: 07c9b454
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_ControllerState4___ctor
               (ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long *unaff_x21;
  long unaff_x22;
  undefined4 uStack000000000000002c;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4e7b0);
    *(undefined1 *)(unaff_x22 + 0x988) = 1;
  }
  uStack000000000000002c = 0;
  uVar1 = *param_7;
                    /* try { // try from 07c9b490 to 07d9b6f3 has its CatchHandler @ 07c9b490
                       catch() { ... } // from try @ 07c9b490 with catch @ 07c9b490
                       catch() { ... } // from try @ 07c9b804 with catch @ 07c9b490
                       catch() { ... } // from try @ 07c9b948 with catch @ 07c9b490
                       catch() { ... } // from try @ 07c9b950 with catch @ 07c9b490
                       catch() { ... } // from try @ 07c9ba00 with catch @ 07c9b490 */
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = FUN_07c9b154(uVar1);
  lVar3 = *(long *)(param_6 + 0x140);
  if (lVar3 != 0) {
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
      *(undefined4 *)(lVar3 + 0x20) = param_2;
      *(undefined4 *)(lVar3 + 0x24) = param_3;
      *(undefined4 *)(lVar3 + 0x28) = param_4;
      *(undefined4 *)(lVar3 + 0x2c) = param_5;
      lVar3 = *(long *)(param_6 + 0xd0);
      if (lVar3 == 0) goto LAB_07c9b51c;
      if (uVar2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined4 *)(lVar3 + (long)(int)uVar2 * 4 + 0x20) = 0x3f800000;
        uStack000000000000002c = 2;
        FUN_07c9b524(param_6,uVar2,&stack0x0000002c,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
LAB_07c9b51c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


